import Foundation
import MyvuCore

/// Decides when the wearer is driving, from GPS speed plus CoreMotion.
///
/// Knows nothing about glasses or cards — it only answers "driving or not",
/// which is what lets it keep running while the glasses are disconnected.
///
/// THREADING: location and motion callbacks arrive on arbitrary queues and are
/// hopped onto the scheduler, where all state lives.
public final class DriveDetector {
    /// One evaluation of the current state. Emitted on every fix and on every
    /// tick, so a consumer can refresh a display without its own timer.
    public struct Update: Sendable {
        public let fix: LocationFix
        public let isDriving: Bool
        /// True on the update where driving first became true — the start of a
        /// stint, so trip distance can be reset.
        public let stintStarted: Bool
    }

    /// ~12 mph. Fast enough to rule out walking and most cycling.
    public static let defaultStartSpeedMps = 5.4
    /// ~5 mph. Below this you are stopped, crawling, or parked.
    public static let defaultStopSpeedMps = 2.2
    public static let defaultStartHold: TimeInterval = 8
    /// Long enough that a red light, a level crossing, or heavy traffic does
    /// not tear the HUD down.
    public static let defaultStopHold: TimeInterval = 45
    /// A positive walking/running/cycling reading is trusted much sooner than a
    /// slow GPS speed, because it cannot be a car.
    public static let defaultSelfPoweredHold: TimeInterval = 10
    private static let tickInterval: TimeInterval = 4

    private let scheduler: Scheduler
    private let location: LocationSourceProviding
    private let motion: MotionSourceProviding
    private let now: () -> Date

    private let startSpeedMps: Double
    private let stopSpeedMps: Double
    private let startHold: TimeInterval
    private let stopHold: TimeInterval
    private let selfPoweredHold: TimeInterval

    private var running = false
    private var tickPending = false
    private var driving = false
    private var activity: MotionActivity = .unavailable

    /// Start of the current continuous run above the start threshold.
    private var fastSince: Date?
    /// Start of the current continuous run below the stop threshold.
    private var slowSince: Date?
    /// Start of the current continuous run of walking/running/cycling.
    private var selfPoweredSince: Date?

    private var lastFix: LocationFix?
    private var lastFixAt: Date?

    private var onUpdate: ((Update) -> Void)?
    private var onUnavailable: ((String) -> Void)?

    /// - Parameter now: injectable clock. Tests advance it and feed a fix rather
    ///   than sleeping through a 45-second hold.
    public init(scheduler: Scheduler,
                location: LocationSourceProviding,
                motion: MotionSourceProviding,
                startSpeedMps: Double = DriveDetector.defaultStartSpeedMps,
                stopSpeedMps: Double = DriveDetector.defaultStopSpeedMps,
                startHold: TimeInterval = DriveDetector.defaultStartHold,
                stopHold: TimeInterval = DriveDetector.defaultStopHold,
                selfPoweredHold: TimeInterval = DriveDetector.defaultSelfPoweredHold,
                now: @escaping () -> Date = Date.init) {
        self.scheduler = scheduler
        self.location = location
        self.motion = motion
        self.startSpeedMps = startSpeedMps
        self.stopSpeedMps = stopSpeedMps
        self.startHold = startHold
        self.stopHold = stopHold
        self.selfPoweredHold = selfPoweredHold
        self.now = now
    }

    public var isDriving: Bool { scheduler.sync { driving } }
    public var isRunning: Bool { scheduler.sync { running } }

    public func start(onUpdate: @escaping (Update) -> Void,
                      onUnavailable: @escaping (String) -> Void) {
        scheduler.run { [weak self] in
            guard let self, !self.running else { return }
            self.running = true
            self.onUpdate = onUpdate
            self.onUnavailable = onUnavailable
            self.resetHolds()

            self.motion.start(onActivity: { [weak self] activity in
                self?.scheduler.run {
                    guard let self, self.running else { return }
                    self.activity = activity
                }
            })
            self.location.start(onFix: { [weak self] fix in
                self?.scheduler.run {
                    guard let self, self.running else { return }
                    self.ingest(fix)
                }
            }, onUnavailable: { [weak self] reason in
                self?.scheduler.run {
                    guard let self, self.running else { return }
                    self.leaveDriving()
                    self.onUnavailable?(reason)
                }
            })
            self.armTick()
        }
    }

    public func stop() {
        scheduler.run { [weak self] in
            guard let self, self.running else { return }
            self.running = false
            self.tickPending = false
            self.driving = false
            self.location.stop()
            self.motion.stop()
            self.resetHolds()
            self.lastFix = nil
            self.lastFixAt = nil
            self.onUpdate = nil
            self.onUnavailable = nil
        }
    }

    // MARK: - Evaluation

    private func ingest(_ fix: LocationFix) {
        let at = now()
        lastFix = fix
        lastFixAt = at
        let started = evaluate(speedMps: fix.speedMps, at: at)
        onUpdate?(Update(fix: fix, isDriving: driving, stintStarted: started))
    }

    /// - Returns: true when this evaluation started a new driving stint.
    @discardableResult
    private func evaluate(speedMps: Double, at: Date) -> Bool {
        if driving {
            // A negative speed means CoreLocation has no speed for this fix,
            // which is treated as stopped rather than as "unchanged" — a parked
            // phone often reports exactly that.
            if speedMps < stopSpeedMps {
                if slowSince == nil { slowSince = at }
                if at.timeIntervalSince(slowSince!) >= stopHold {
                    leaveDriving()
                    return false
                }
            } else {
                slowSince = nil
            }

            if activity.isSelfPowered {
                if selfPoweredSince == nil { selfPoweredSince = at }
                if at.timeIntervalSince(selfPoweredSince!) >= selfPoweredHold {
                    leaveDriving()
                    return false
                }
            } else {
                selfPoweredSince = nil
            }
            return false
        }

        guard speedMps >= startSpeedMps, activity.allowsDriving else {
            fastSince = nil
            return false
        }
        if fastSince == nil { fastSince = at }
        guard at.timeIntervalSince(fastSince!) >= startHold else { return false }

        driving = true
        slowSince = nil
        selfPoweredSince = nil
        SdkLog.log("driving detected -- cruise HUD on")
        return true
    }

    private func leaveDriving() {
        guard driving else { return }
        driving = false
        resetHolds()
        SdkLog.log("no longer driving -- cruise HUD off")
    }

    private func resetHolds() {
        fastSince = nil
        slowSince = nil
        selfPoweredSince = nil
    }

    // MARK: - Tick

    /// CoreLocation stops delivering fixes once the phone is stationary, so the
    /// parked timeout would never elapse on fixes alone. The tick re-evaluates
    /// from the last known fix and treats a long silence as stopped.
    private func armTick() {
        guard !tickPending else { return }
        tickPending = true
        scheduler.postDelayed(DriveDetector.tickInterval) { [weak self] in
            guard let self else { return }
            self.tickPending = false
            guard self.running else { return }
            self.tick()
            self.armTick()
        }
    }

    private func tick() {
        guard let fix = lastFix, let fixAt = lastFixAt else { return }
        let at = now()
        // No fix for a while means no movement worth reporting, whatever the
        // last fix's speed field happened to say.
        let stale = at.timeIntervalSince(fixAt) >= DriveDetector.tickInterval * 1.5
        let speed = stale ? 0 : fix.speedMps
        let started = evaluate(speedMps: speed, at: at)
        onUpdate?(Update(fix: fix, isDriving: driving, stintStarted: started))
    }
}
