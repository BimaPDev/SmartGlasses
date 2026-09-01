import Foundation
import MyvuCore

/// The cruise HUD: current street, speed, heading, city, trip and speed limit
/// on a lens card while you are driving.
///
/// This is NOT turn-by-turn. There is no destination and no route — it opens no
/// glasses app and needs no classic-BT audio link, because a lens card is a
/// notification on the already-running launcher.
///
/// `DriveDetector` decides when to show it; this decides what it says. Sending
/// is gated by `canSend` so the detector can keep running across a disconnect
/// (or while turn-by-turn owns the lens) without queueing up stale cards.
///
/// THREADING: all state lives on the scheduler. Geocode and speed-limit lookups
/// run as detached tasks and hop their results back.
public final class CruiseSession {
    /// Carries the explicit routing the nav page needs; lens cards ignore the
    /// package arguments and go to the launcher like any other notification.
    public typealias Sender = (_ actionJson: String, _ targetPkg: String,
                               _ sourcePkg: String) -> Void

    /// Where the cruise HUD is drawn.
    public enum Surface: String, CaseIterable, Sendable {
        /// A notification card. Works over BLE alone and is the only surface
        /// that can show mph, miles, heading and town.
        case lensCard
        /// The real navigation page via `open_app`. Much better looking, but it
        /// has one free-text slot and no room for heading, town or trip, so only
        /// the road and speed survive. Needs the classic-BT audio link.
        case hud
    }

    /// What the host shows next to the toggle.
    public enum Status: Equatable, Sendable {
        case off
        /// Toggle on, not driving yet.
        case watching
        case driving(mph: Int?)
    }

    /// Re-show the card at least this often so it does not age out of the lens
    /// while stopped in traffic.
    private static let refreshInterval: TimeInterval = 4
    /// The nav page expects a steady stream rather than change-driven updates,
    /// so HUD frames are rate-limited by time instead of deduplicated by text.
    private static let hudFrameInterval: TimeInterval = 1
    /// Reverse geocoding is rate-limited by Apple, so ask only after real
    /// movement or a decent pause.
    private static let geocodeDistanceM = 80.0
    private static let geocodeInterval: TimeInterval = 15

    private let scheduler: Scheduler
    private let send: Sender
    private let detector: DriveDetector
    private let placeNames: PlaceNameProviding
    private let speedLimits: SpeedLimitProviding
    private let surface: Surface
    private let now: () -> Date

    private var running = false
    private var canSendFlag = false
    private var showing = false
    /// Whether the nav page has been opened for this stint. The first frame has
    /// to be an `open_app`; the rest are plain `navi_info`.
    private var hudOpen = false
    /// Speed in km/h, kept alongside the mph the card shows, because the nav
    /// page's speed label is hardcoded to km/h.
    private var speedKmh = 0
    /// Last value pushed to the speed bubble, so it is only re-sent on change.
    private var lastCameraLimit: Int?

    private var fields = CruiseCard.Fields()
    private var lastSentTitle: String?
    private var lastSentBody: String?
    private var lastSentAt: Date?

    /// Trip odometer for the current stint.
    private var tripMetres = 0.0
    private var lastFix: (lat: Double, lon: Double)?

    private var geocodeAt: Date?
    private var geocodeFrom: (lat: Double, lon: Double)?
    private var geocoding: Task<Void, Never>?

    private var limitKey: String?
    private var limiting: Task<Void, Never>?

    public var onStatus: ((Status) -> Void)?

    /// Drives the cruise HUD over a `MyvuClient`.
    public convenience init(client: MyvuClient,
                            detector: DriveDetector,
                            surface: Surface = .lensCard,
                            placeNames: PlaceNameProviding = CoreLocationPlaceNames(),
                            speedLimits: SpeedLimitProviding = OsmSpeedLimitProvider()) {
        self.init(scheduler: client.scheduler,
                  send: { [weak client] json, target, source in
                      client?.sendAction(json, targetPkg: target, sourcePkg: source)
                  },
                  detector: detector, placeNames: placeNames, speedLimits: speedLimits,
                  surface: surface)
    }

    /// Low-level form, for tests and hosts that do not use `MyvuClient`.
    public init(scheduler: Scheduler,
                send: @escaping Sender,
                detector: DriveDetector,
                placeNames: PlaceNameProviding,
                speedLimits: SpeedLimitProviding,
                surface: Surface = .lensCard,
                now: @escaping () -> Date = Date.init) {
        self.scheduler = scheduler
        self.send = send
        self.detector = detector
        self.placeNames = placeNames
        self.speedLimits = speedLimits
        self.surface = surface
        self.now = now
    }

    public var isRunning: Bool { scheduler.sync { running } }
    public var isDriving: Bool { detector.isDriving }

    /// Whether the glasses can be written to right now. False while
    /// disconnected, and false while turn-by-turn owns the lens.
    ///
    /// Turning it true while already driving pushes the card immediately, so a
    /// reconnect mid-drive does not wait for the next fix.
    public func setCanSend(_ value: Bool) {
        scheduler.run { [weak self] in
            guard let self, self.canSendFlag != value else { return }
            self.canSendFlag = value
            guard self.running else { return }
            if value {
                if self.detector.isDriving { self.render(force: true) }
            } else {
                // Turn-by-turn taking the lens is the case that matters: the
                // card is still on screen and must come down.
                self.hide()
            }
        }
    }

    public func start() {
        scheduler.run { [weak self] in
            guard let self, !self.running else { return }
            self.running = true
            self.resetStint()
            self.emitStatus()
            self.detector.start(onUpdate: { [weak self] update in
                // Already on the scheduler — the detector hops before emitting.
                self?.handle(update)
            }, onUnavailable: { [weak self] reason in
                SdkLog.warn("cruise HUD cannot track position: \(reason)")
                self?.hide()
            })
        }
    }

    public func stop() {
        scheduler.run { [weak self] in
            guard let self, self.running else { return }
            self.running = false
            self.detector.stop()
            self.geocoding?.cancel()
            self.limiting?.cancel()
            self.geocoding = nil
            self.limiting = nil
            self.hide()
            self.resetStint()
            self.onStatus?(.off)
        }
    }

    // MARK: - Updates

    private func handle(_ update: DriveDetector.Update) {
        guard running else { return }
        guard update.isDriving else {
            hide()
            resetStint()
            emitStatus()
            return
        }

        if update.stintStarted { resetStint() }

        let fix = update.fix
        if let previous = lastFix {
            tripMetres += Geo.haversine(previous.lat, previous.lon,
                                        fix.latitude, fix.longitude)
        }
        lastFix = (fix.latitude, fix.longitude)

        // A fix with no speed keeps the last reading rather than blanking the
        // number that the wearer is actually looking at.
        if let mph = CruiseCard.mph(fromMps: fix.speedMps) {
            fields.speedMph = mph
            speedKmh = Int((fix.speedMps * 3.6).rounded())
        }
        fields.heading = CruiseCard.heading(fromBearing: fix.bearing) ?? fields.heading
        fields.tripMiles = CruiseCard.miles(fromMetres: tripMetres)

        refreshPlaceName(fix)
        refreshSpeedLimit(fix)
        render(force: false)
        emitStatus()
    }

    private func refreshPlaceName(_ fix: LocationFix) {
        guard geocoding == nil else { return }
        let at = now()
        if let last = geocodeAt, let from = geocodeFrom {
            let moved = Geo.haversine(from.lat, from.lon, fix.latitude, fix.longitude)
            guard moved >= CruiseSession.geocodeDistanceM
                || at.timeIntervalSince(last) >= CruiseSession.geocodeInterval
            else { return }
        }
        geocodeAt = at
        geocodeFrom = (fix.latitude, fix.longitude)

        geocoding = Task { [weak self] in
            guard let self else { return }
            let place = try? await self.placeNames.placeName(lat: fix.latitude,
                                                             lon: fix.longitude)
            guard !Task.isCancelled else { return }
            self.scheduler.run {
                self.geocoding = nil
                guard self.running, let place else { return }
                // A failed lookup leaves the previous street in place rather
                // than blanking the card at the far edge of a geocode outage.
                if let street = place.street { self.fields.street = street }
                if let city = place.city { self.fields.city = city }
                self.render(force: false)
            }
        }
    }

    /// Only worth asking Overpass when the road might have changed.
    private func refreshSpeedLimit(_ fix: LocationFix) {
        guard limiting == nil else { return }
        let key = [fields.street ?? "",
                   OsmSpeedLimitProvider.cacheKey(lat: fix.latitude, lon: fix.longitude)]
            .joined(separator: "@")
        guard key != limitKey else { return }
        limitKey = key

        limiting = Task { [weak self] in
            guard let self else { return }
            let mph = try? await self.speedLimits.speedLimitMph(lat: fix.latitude,
                                                                lon: fix.longitude)
            guard !Task.isCancelled else { return }
            self.scheduler.run {
                self.limiting = nil
                guard self.running else { return }
                // An unmapped road clears the previous road's limit — showing a
                // stale one would be worse than showing none.
                self.fields.speedLimitMph = mph
                self.render(force: false)
            }
        }
    }

    // MARK: - Card

    private func render(force: Bool) {
        guard running, canSendFlag, detector.isDriving else { return }
        switch surface {
        case .lensCard: renderCard(force: force)
        case .hud: renderHud(force: force)
        }
    }

    private func renderCard(force: Bool) {
        let title = CruiseCard.title(fields)
        guard !title.isEmpty else { return }
        let body = CruiseCard.body(fields)

        let changed = title != lastSentTitle || body != lastSentBody
        let stale = lastSentAt.map { now().timeIntervalSince($0) >= CruiseSession.refreshInterval }
            ?? true
        guard force || changed || stale else { return }

        lastSentTitle = title
        lastSentBody = body
        lastSentAt = now()
        showing = true
        send(LensCards.buildShow(title: title, body: body,
                                 numericId: LensCards.cruiseNumericId),
             AppLayer.pkgLauncher, AppLayer.pkgLauncher)
    }

    /// Streams the nav page like turn-by-turn does, but with the route fields
    /// zeroed — see `NavCommands.cruiseFrame`.
    private func renderHud(force: Bool) {
        let street = fields.street ?? ""
        // Opening the page with nothing to say would just show empty chrome, so
        // wait for either the first geocode or a real speed.
        guard !street.isEmpty || speedKmh > 0 else { return }
        if !force, let last = lastSentAt,
           now().timeIntervalSince(last) < CruiseSession.hudFrameInterval {
            return
        }
        lastSentAt = now()

        let frame = NavCommands.cruiseFrame(roadName: Self.hudRoadText(fields),
                                            speedKmh: speedKmh,
                                            speedMph: fields.speedMph ?? 0,
                                            tripDistanceM: Int(tripMetres), hasFix: true)
        if hudOpen {
            send(NavCommands.buildNaviInfo(frame, nowMs: NavCommands.twelveHourAck()),
                 NavCommands.frameTargetPkg, NavCommands.sourcePkg)
        } else {
            // open_app goes to the LAUNCHER; addressing the nav app directly is
            // a silent no-op. See NavCommands.
            hudOpen = true
            showing = true
            send(NavCommands.buildStart(frame, nowMs: NavCommands.twelveHourAck()),
                 NavCommands.launchTargetPkg, NavCommands.sourcePkg)
        }
        pushCameraSpeedIfChanged()
    }

    /// The road-name slot carries the street and nothing else — the speed goes
    /// in `nrd` above it, where the page draws it large (see `cruiseFrame`).
    static func hudRoadText(_ f: CruiseCard.Fields) -> String {
        f.street ?? ""
    }

    /// Drives the round speed bubble. Sent only on change — it is a state
    /// message about a zone, not a per-frame value.
    private func pushCameraSpeedIfChanged() {
        guard fields.speedLimitMph != lastCameraLimit else { return }
        lastCameraLimit = fields.speedLimitMph
        if let limit = fields.speedLimitMph {
            send(NavCommands.buildCameraSpeed(limit), NavCommands.frameTargetPkg,
                 NavCommands.sourcePkg)
        } else {
            // Leaving a road whose limit we knew for one we do not: clear the
            // bubble rather than leaving the old number floating.
            send(NavCommands.buildCameraSpeed(0, entering: false),
                 NavCommands.frameTargetPkg, NavCommands.sourcePkg)
        }
    }

    private func hide() {
        guard showing else { return }
        showing = false
        lastSentTitle = nil
        lastSentBody = nil
        lastSentAt = nil
        switch surface {
        case .lensCard:
            send(LensCards.buildDismiss(numericId: LensCards.cruiseNumericId),
                 AppLayer.pkgLauncher, AppLayer.pkgLauncher)
        case .hud:
            hudOpen = false
            lastCameraLimit = nil
            send(NavCommands.buildStop(), NavCommands.frameTargetPkg,
                 NavCommands.sourcePkg)
        }
    }

    private func resetStint() {
        tripMetres = 0
        lastFix = nil
        speedKmh = 0
        lastCameraLimit = nil
        fields = CruiseCard.Fields()
        geocodeAt = nil
        geocodeFrom = nil
        limitKey = nil
    }

    private func emitStatus() {
        guard let onStatus else { return }
        let status: Status = !running ? .off
            : (detector.isDriving ? .driving(mph: fields.speedMph) : .watching)
        onStatus(status)
    }
}
