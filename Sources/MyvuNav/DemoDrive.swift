import Foundation
import MyvuCore

/// A fake drive, so the cruise HUD can be seen (and the two surfaces compared)
/// from a parked car or an armchair.
///
/// It seeds from a REAL fix where one is available and then walks a synthetic
/// track from there, so the street name and posted limit on the lens are the
/// genuine ones for where you are standing — only the motion is invented.
public final class SimulatedLocationSource: LocationSourceProviding {
    /// ~35 mph, comfortably over the drive-detection threshold.
    public static let defaultSpeedMps = 15.6

    private let origin: LocationSourceProviding?
    private let fallback: (lat: Double, lon: Double)
    private let speedMps: Double
    private let bearing: Double
    private let interval: TimeInterval
    private let queue = DispatchQueue(label: "myvu.nav.demo")

    private var timer: DispatchSourceTimer?
    private var position: (lat: Double, lon: Double)?
    private var onFix: ((LocationFix) -> Void)?
    private var seeded = false

    /// - Parameters:
    ///   - origin: consulted for ONE real fix to start from. Its failure is not
    ///     fatal — the demo falls back rather than refusing to run, because
    ///     "show me what it looks like" should work indoors with no GPS.
    ///   - fallback: used when `origin` is nil or cannot produce a fix.
    public init(origin: LocationSourceProviding? = nil,
                fallback: (lat: Double, lon: Double) = (37.3349, -122.0090),
                speedMps: Double = SimulatedLocationSource.defaultSpeedMps,
                bearing: Double = 45,
                interval: TimeInterval = 1) {
        self.origin = origin
        self.fallback = fallback
        self.speedMps = speedMps
        self.bearing = bearing
        self.interval = interval
    }

    public func start(onFix: @escaping (LocationFix) -> Void,
                      onUnavailable: @escaping (String) -> Void) {
        queue.async { [weak self] in
            guard let self, self.timer == nil else { return }
            self.onFix = onFix
            self.seeded = false

            if let origin {
                origin.start(onFix: { [weak self] fix in
                    self?.seed(lat: fix.latitude, lon: fix.longitude)
                }, onUnavailable: { [weak self] _ in
                    // No GPS indoors is expected; the demo still has to run.
                    self?.seedFromFallback()
                })
                // Do not wait indefinitely for a first fix — a cold start under
                // a roof can take far longer than anyone will hold the button.
                self.queue.asyncAfter(deadline: .now() + 3) { [weak self] in
                    self?.seedFromFallback()
                }
            } else {
                self.seedFromFallback()
            }
            self.startTicking()
        }
    }

    public func stop() {
        queue.async { [weak self] in
            guard let self else { return }
            self.timer?.cancel()
            self.timer = nil
            self.onFix = nil
            self.position = nil
            self.origin?.stop()
        }
    }

    private func seed(lat: Double, lon: Double) {
        queue.async { [weak self] in
            guard let self, !self.seeded else { return }
            self.seeded = true
            self.position = (lat, lon)
            // The real source has served its purpose; keeping it running would
            // burn GPS for a track we are inventing anyway.
            self.origin?.stop()
        }
    }

    private func seedFromFallback() {
        queue.async { [weak self] in
            guard let self, !self.seeded else { return }
            self.seeded = true
            self.position = self.fallback
            self.origin?.stop()
        }
    }

    private func startTicking() {
        let t = DispatchSource.makeTimerSource(queue: queue)
        t.schedule(deadline: .now() + interval, repeating: interval)
        t.setEventHandler { [weak self] in self?.tick() }
        timer = t
        t.resume()
    }

    private func tick() {
        // Still waiting on the seed fix; nothing to report yet.
        guard var current = position else { return }
        current = Geo.offset(lat: current.lat, lon: current.lon,
                             distanceM: speedMps * interval, bearing: bearing)
        position = current
        onFix?(LocationFix(latitude: current.lat, longitude: current.lon,
                           speedMps: speedMps, bearing: bearing))
    }
}

/// Always reports being in a car, so a demo is not vetoed by the phone sitting
/// still on a desk.
public final class SimulatedMotionSource: MotionSourceProviding {
    public init() {}

    public func start(onActivity: @escaping (MotionActivity) -> Void) {
        onActivity(.automotive)
    }

    public func stop() {}
}
