import Foundation
import MyvuCore

/// Drives turn-by-turn navigation on the lens.
///
/// Lifecycle: route → open the HUD (or a lens card) with the first frame →
/// stream updates from live position → stop.
///
/// THREADING: routing is network work and runs in its own Task, never on the
/// connection queue (which would stall the relay). Location fixes arrive on the
/// main queue and are hopped onto the connection queue, where all protocol and
/// tracking state lives.
public final class NavSession {
    /// Where guidance is drawn.
    public enum Surface {
        /// Native nav HUD via `open_app`. Needs a live classic-BT audio link
        /// (HFP/A2DP); unreachable on iOS for non-MFi XGA010C.
        case hud
        /// Notification cards over BLE — the iPhone-usable path.
        case lensCard
    }

    /// Re-routing is rate-limited: without this, a GPS wobble at the edge of the
    /// off-route threshold fires a routing request on every single fix.
    private static let rerouteCooldown: TimeInterval = 15
    /// Close enough to call it arrived.
    private static let arrivalM = 20.0
    /// CoreLocation suppresses stationary updates; re-push the last cue so the
    /// lens does not go stale at a light.
    private static let heartbeatInterval: TimeInterval = 4
    /// Lens cards: skip re-SHOW unless distance moved enough (or heartbeat).
    private static let cardDistanceDeltaM = 25.0

    /// Sends an action with explicit routing packages.
    public typealias Sender = (_ actionJson: String, _ targetPkg: String,
                               _ sourcePkg: String) -> Void

    private let scheduler: Scheduler
    private let send: Sender
    private let locationSource: LocationSourceProviding
    private let routeProvider: RouteProvider
    private let surface: Surface

    private var route: Route?
    private var tracker: RouteTracker?
    private var active = false

    private var destination = ""
    /// Previous fix, for the odometer. Optional rather than a 0,0 sentinel: a
    /// track that genuinely passes through the origin would lose a leg.
    private var lastFix: (lat: Double, lon: Double)?
    private var lastRerouteAt = Date.distantPast
    private var rideDistanceM = 0.0
    private var routing: Task<Void, Never>?

    private var lastCardRemainingM: Double?
    private var lastHeartbeatBody: String?
    private var lastTrackerState: RouteTracker.State?
    private var lastSpeedMps: Double = -1
    private var heartbeatPending = false

    /// Drives navigation over a `MyvuClient`, routing with `OsrmRouteProvider`.
    public convenience init(client: MyvuClient, source: LocationSourceProviding,
                            routeProvider: RouteProvider = OsrmRouteProvider(),
                            surface: Surface = .hud) {
        self.init(scheduler: client.scheduler,
                  send: { [weak client] json, target, sourcePkg in
                      client?.sendAction(json, targetPkg: target, sourcePkg: sourcePkg)
                  },
                  source: source, routeProvider: routeProvider, surface: surface)
    }

    /// Low-level form, for tests and for hosts that do not use `MyvuClient`.
    public init(scheduler: Scheduler, send: @escaping Sender,
                source: LocationSourceProviding, routeProvider: RouteProvider,
                surface: Surface = .hud) {
        self.scheduler = scheduler
        self.send = send
        self.locationSource = source
        self.routeProvider = routeProvider
        self.surface = surface
    }

    public var isActive: Bool { scheduler.sync { active } }

    /// Routes from the current position to `destination` (a place name or
    /// `"lat,lon"`) and starts guidance. Returns immediately; progress is logged.
    public func start(_ destination: String) {
        scheduler.run { [weak self] in
            guard let self else { return }
            guard !self.active else {
                SdkLog.warn("navigation already running -- stop it first")
                return
            }
            self.active = true
            self.rideDistanceM = 0
            self.destination = destination
            self.lastCardRemainingM = nil
            self.lastHeartbeatBody = nil
            self.lastTrackerState = nil

            // A route needs a starting point, so location comes first and
            // routing is kicked off from the first fix.
            var routed = false
            self.locationSource.start(onFix: { [weak self] fix in
                guard let self else { return }
                self.scheduler.run {
                    guard self.active else { return }
                    if !routed {
                        routed = true
                        self.beginRouting(from: fix, to: destination)
                    }
                    self.onPosition(fix)
                }
            }, onUnavailable: { [weak self] reason in
                SdkLog.warn("navigation cannot start: \(reason)")
                self?.stop()
            })
            self.armHeartbeat()
        }
    }

    public func stop() {
        scheduler.run { [weak self] in
            guard let self, self.active else { return }
            self.active = false
            self.heartbeatPending = false
            self.routing?.cancel()
            self.routing = nil
            self.locationSource.stop()
            switch self.surface {
            case .hud:
                self.send(NavCommands.buildStop(), NavCommands.frameTargetPkg,
                          NavCommands.sourcePkg)
            case .lensCard:
                self.send(LensCards.buildDismiss(numericId: LensCards.guideNumericId),
                          AppLayer.pkgLauncher, AppLayer.pkgLauncher)
            }
            self.route = nil
            self.tracker = nil
            self.lastFix = nil
            self.lastHeartbeatBody = nil
            self.lastTrackerState = nil
            SdkLog.log("navigation stopped")
        }
    }

    // MARK: - Routing

    private func beginRouting(from fix: LocationFix, to destination: String) {
        SdkLog.log("routing to \"\(destination)\"...")
        routing = Task { [weak self] in
            guard let self else { return }
            do {
                let r = try await self.routeProvider.route(fromLat: fix.latitude,
                                                           fromLon: fix.longitude,
                                                           destination: destination)
                guard !Task.isCancelled else { return }
                self.scheduler.run { self.adopt(r, openGuidance: true) }
            } catch {
                guard !Task.isCancelled else { return }
                SdkLog.error("routing failed", error)
                self.stop()
            }
        }
    }

    private func adopt(_ r: Route, openGuidance: Bool) {
        guard active else { return }
        route = r
        tracker = RouteTracker(route: r)
        guard openGuidance else {
            SdkLog.log("re-routed: \(r.totalDistanceM)m remaining")
            return
        }

        let first = r.steps.first
        var frame = NavCommands.Frame()
        frame.ic = first?.ic ?? IcMap.defaultIc
        frame.pathDistanceM = r.totalDistanceM
        frame.remainingM = r.totalDistanceM
        frame.remainingS = Int(r.totalDurationS)
        frame.nextRoadName = first?.road ?? ""
        frame.nextRoadDistanceM = Int(first?.atM ?? 0)
        frame.gpsStatus = 1

        switch surface {
        case .hud:
            // An open_app request goes to the LAUNCHER — it is the launcher that
            // opens apps. Addressing it to the nav app means nothing acts on it
            // and navigation silently never starts.
            send(NavCommands.buildStart(frame), NavCommands.launchTargetPkg,
                 NavCommands.sourcePkg)
        case .lensCard:
            pushLensCard(cue: IcMap.cue(type: first?.type, modifier: first?.modifier,
                                        ic: frame.ic),
                         road: frame.nextRoadName,
                         distM: frame.nextRoadDistanceM,
                         remainingM: frame.remainingM,
                         force: true)
        }
        SdkLog.log("navigation started (\(surface)): \(r.totalDistanceM)m, "
            + "\(Int((r.totalDurationS / 60).rounded())) min, \(r.steps.count) steps")
    }

    private func maybeReroute(from fix: LocationFix, deviation: Double) {
        guard Date().timeIntervalSince(lastRerouteAt) >= NavSession.rerouteCooldown else {
            return
        }
        lastRerouteAt = Date()

        SdkLog.log(String(format: "off route by %.0fm -- recalculating", deviation))
        routing?.cancel()
        routing = Task { [weak self] in
            guard let self else { return }
            do {
                let r = try await self.routeProvider.route(fromLat: fix.latitude,
                                                           fromLon: fix.longitude,
                                                           destination: self.destination)
                guard !Task.isCancelled else { return }
                self.scheduler.run { self.adopt(r, openGuidance: false) }
            } catch {
                guard !Task.isCancelled else { return }
                SdkLog.error("re-routing failed", error)
            }
        }
    }

    // MARK: - Frames

    /// Runs on the connection queue, where all tracking state lives.
    private func onPosition(_ fix: LocationFix) {
        guard active else { return }

        // The odometer runs ahead of the tracker guard below: routing takes a
        // second or two, and distance covered while waiting for it is still
        // distance ridden.
        if let previous = lastFix {
            rideDistanceM += Geo.haversine(previous.lat, previous.lon,
                                           fix.latitude, fix.longitude)
        }
        lastFix = (fix.latitude, fix.longitude)

        // No route yet — the first fix is what triggered the request.
        guard let tracker else { return }

        let s = tracker.update(lat: fix.latitude, lon: fix.longitude)
        if s.offRoute {
            maybeReroute(from: fix, deviation: s.deviationM)
            return
        }
        lastTrackerState = s
        lastSpeedMps = fix.speedMps
        pushFrame(s, speedMps: fix.speedMps, force: false)
    }

    private func pushFrame(_ s: RouteTracker.State, speedMps: Double, force: Bool) {
        guard let route else { return }

        // Remaining time is scaled from the original estimate by progress; the
        // glasses only display it, so a proportional estimate is adequate.
        let fraction = route.totalDistanceM > 0 ? s.remainingM / Double(route.totalDistanceM) : 0

        var frame = NavCommands.Frame()
        frame.ic = s.nextStep?.ic ?? IcMap.defaultIc
        frame.pathDistanceM = route.totalDistanceM
        frame.remainingM = Int(s.remainingM)
        frame.remainingS = Int(route.totalDurationS * fraction)
        frame.nextRoadName = s.nextStep?.road ?? ""
        frame.nextRoadDistanceM = Int(s.distToNextM)
        frame.speed = speedMps >= 0 ? String(Int((speedMps * 3.6).rounded())) : "0"
        frame.rideDistanceM = Int(rideDistanceM)
        frame.gpsStatus = 1

        switch surface {
        case .hud:
            send(NavCommands.buildNaviInfo(frame), NavCommands.frameTargetPkg,
                 NavCommands.sourcePkg)
        case .lensCard:
            pushLensCard(cue: IcMap.cue(type: s.nextStep?.type,
                                        modifier: s.nextStep?.modifier,
                                        ic: frame.ic),
                         road: frame.nextRoadName,
                         distM: frame.nextRoadDistanceM,
                         remainingM: frame.remainingM,
                         force: force)
        }

        if s.remainingM < NavSession.arrivalM {
            SdkLog.log("destination reached")
            stop()
        }
    }

    private func pushLensCard(cue: String, road: String, distM: Int,
                              remainingM: Int, force: Bool) {
        if !force, let last = lastCardRemainingM,
           abs(Double(remainingM) - last) < NavSession.cardDistanceDeltaM {
            // Still refresh the cached body for the heartbeat.
            lastHeartbeatBody = Self.cardBody(cue: cue, road: road, distM: distM,
                                              remainingM: remainingM)
            return
        }
        lastCardRemainingM = Double(remainingM)
        let title = distM > 0 ? "\(Self.formatDistance(distM)) · \(cue)" : cue
        let body = Self.cardBody(cue: cue, road: road, distM: distM,
                                 remainingM: remainingM)
        lastHeartbeatBody = body
        send(LensCards.buildShow(title: title, body: body,
                                 numericId: LensCards.guideNumericId),
             AppLayer.pkgLauncher, AppLayer.pkgLauncher)
    }

    private static func cardBody(cue: String, road: String, distM: Int,
                                 remainingM: Int) -> String {
        let roadPart = road.isEmpty ? cue : "\(cue) onto \(road)"
        return "\(roadPart). \(formatDistance(remainingM)) total left."
    }

    private static func formatDistance(_ meters: Int) -> String {
        if meters >= 1000 {
            let km = Double(meters) / 1000.0
            return String(format: "%.1f km", km)
        }
        return "\(meters) m"
    }

    // MARK: - Heartbeat

    private func armHeartbeat() {
        guard !heartbeatPending else { return }
        heartbeatPending = true
        scheduler.postDelayed(NavSession.heartbeatInterval) { [weak self] in
            guard let self else { return }
            self.heartbeatPending = false
            guard self.active else { return }
            if let body = self.lastHeartbeatBody, self.surface == .lensCard {
                // Re-SHOW so a stationary rider keeps the card alive.
                self.send(LensCards.buildShow(title: "Navigate", body: body,
                                              numericId: LensCards.guideNumericId),
                          AppLayer.pkgLauncher, AppLayer.pkgLauncher)
            } else if self.surface == .hud, let s = self.lastTrackerState, !s.offRoute {
                self.pushFrame(s, speedMps: self.lastSpeedMps, force: true)
            }
            self.armHeartbeat()
        }
    }

    /// Sends a single `navi_info` frame with an arbitrary icon value, for
    /// calibrating the provisional `IcMap` against what the lens actually draws.
    public func sendCalibrationFrame(ic: Int, roadName: String) {
        var frame = NavCommands.Frame()
        frame.ic = ic
        frame.pathDistanceM = 1000
        frame.remainingM = 1000
        frame.remainingS = 120
        frame.nextRoadName = roadName
        frame.nextRoadDistanceM = 300

        send(NavCommands.buildNaviInfo(frame), NavCommands.frameTargetPkg,
             NavCommands.sourcePkg)
        SdkLog.log("calibration frame sent with ic=\(ic)")
    }
}
