import Foundation
import MyvuCore

#if os(iOS)
    import CoreMotion
#endif

/// What the phone thinks the wearer is doing.
///
/// `unknown` and `unavailable` are deliberately distinct from `stationary`:
/// both mean "motion cannot rule driving out", whereas `stationary` is a
/// positive reading that the phone is not moving.
public enum MotionActivity: Sendable, Equatable {
    case automotive
    case cycling
    case walking
    case running
    case stationary
    case unknown
    /// No motion hardware, or the user denied Motion & Fitness.
    case unavailable

    /// True when this reading is compatible with being in a car. GPS speed is
    /// the other half of the decision; this only vetoes.
    var allowsDriving: Bool {
        switch self {
        case .walking, .running, .cycling: return false
        default: return true
        }
    }

    /// A positive reading that the wearer is under their own power, which
    /// overrides a stale GPS speed.
    var isSelfPowered: Bool {
        switch self {
        case .walking, .running, .cycling: return true
        default: return false
        }
    }
}

/// A stream of activity readings.
///
/// Abstracted like `LocationSourceProviding` so the drive detector can be
/// tested without CoreMotion, and so hosts without the entitlement can pass a
/// source that only ever reports `.unavailable`.
public protocol MotionSourceProviding: AnyObject {
    func start(onActivity: @escaping (MotionActivity) -> Void)
    func stop()
}

/// Reports `.unavailable` once and nothing more, so the detector falls back to
/// GPS speed alone. Used on platforms with no `CMMotionActivityManager` and as
/// an opt-out.
public final class NoMotionSource: MotionSourceProviding {
    public init() {}

    public func start(onActivity: @escaping (MotionActivity) -> Void) {
        onActivity(.unavailable)
    }

    public func stop() {}
}

#if os(iOS)
    /// Live activity classification from CoreMotion.
    ///
    /// Requires `NSMotionUsageDescription`. A denial is not an error here — it
    /// reports `.unavailable` and the detector carries on with GPS speed only.
    public final class CoreMotionSource: MotionSourceProviding {
        private let manager = CMMotionActivityManager()
        private var running = false

        public init() {}

        public func start(onActivity: @escaping (MotionActivity) -> Void) {
            guard !running else { return }
            guard CMMotionActivityManager.isActivityAvailable() else {
                onActivity(.unavailable)
                return
            }
            running = true
            manager.startActivityUpdates(to: .main) { activity in
                guard let activity else { return }
                onActivity(Self.classify(activity))
            }
        }

        public func stop() {
            guard running else { return }
            running = false
            manager.stopActivityUpdates()
        }

        /// CoreMotion sets these as independent flags and can raise several at
        /// once (a phone on a passenger seat reads automotive + stationary), so
        /// the order here is the priority order, not a switch.
        static func classify(_ a: CMMotionActivity) -> MotionActivity {
            if a.automotive { return .automotive }
            if a.cycling { return .cycling }
            if a.running { return .running }
            if a.walking { return .walking }
            if a.stationary { return .stationary }
            return .unknown
        }
    }
#endif
