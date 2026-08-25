import Foundation

/// The connection queue, and the delayed-work primitives the port needs.
///
/// The Android SDK keeps all protocol state on one `Handler` thread so nothing
/// in the protocol or app layers needs locking. That property is worth
/// preserving exactly, so this wraps a serial `DispatchQueue` and provides the
/// `postDelayed` / `removeCallbacks` pair the state machines are written
/// against. `CBCentralManager` is created with this same queue, so CoreBluetooth
/// callbacks also land here and the single-threaded invariant holds end to end.
public final class Scheduler {
    public let queue: DispatchQueue

    private static let identityKey = DispatchSpecificKey<ObjectIdentifier>()

    public init(label: String) {
        self.queue = DispatchQueue(label: label, qos: .userInitiated)
        queue.setSpecific(key: Scheduler.identityKey, value: ObjectIdentifier(self))
    }

    /// True when the caller is already executing on this scheduler's queue.
    public var isCurrent: Bool {
        DispatchQueue.getSpecific(key: Scheduler.identityKey) == ObjectIdentifier(self)
    }

    /// Runs now if already on the queue, otherwise hops onto it. Re-entrant
    /// dispatch matters because feature code calls in from both sides.
    public func run(_ block: @escaping () -> Void) {
        if isCurrent {
            block()
        } else {
            queue.async(execute: block)
        }
    }

    /// Reads queue-confined state from another thread.
    ///
    /// Re-entrant like `run`: a plain `queue.sync` from the queue itself would
    /// deadlock, and feature code calls in from both sides.
    public func sync<T>(_ block: () throws -> T) rethrows -> T {
        isCurrent ? try block() : try queue.sync(execute: block)
    }

    public func post(_ block: @escaping () -> Void) {
        queue.async(execute: block)
    }

    public func postDelayed(_ delay: TimeInterval, _ block: @escaping () -> Void) {
        queue.asyncAfter(deadline: .now() + delay, execute: block)
    }
}

/// One cancellable pending task — the Swift stand-in for a `Runnable` field that
/// Android code posts with `postDelayed` and drops with `removeCallbacks`.
public final class TimerSlot {
    private var item: DispatchWorkItem?

    public init() {}

    public func schedule(on scheduler: Scheduler, after delay: TimeInterval,
                         _ block: @escaping () -> Void) {
        cancel()
        let item = DispatchWorkItem(block: block)
        self.item = item
        scheduler.queue.asyncAfter(deadline: .now() + delay, execute: item)
    }

    /// Re-arms itself on the same interval until cancelled — the repeating
    /// `postDelayed(this, ...)` idiom (heartbeat, relay supervisor poll).
    public func scheduleRepeating(on scheduler: Scheduler, every interval: TimeInterval,
                                  _ block: @escaping () -> Void) {
        schedule(on: scheduler, after: interval) { [weak self] in
            block()
            guard let self, self.item != nil else { return }
            self.scheduleRepeating(on: scheduler, every: interval, block)
        }
    }

    public func cancel() {
        item?.cancel()
        item = nil
    }

    public var isPending: Bool { item != nil }
}
