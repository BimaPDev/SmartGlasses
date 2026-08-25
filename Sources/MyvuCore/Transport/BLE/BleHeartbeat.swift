import CoreBluetooth
import Foundation

/// Keep-alive for the BLE link.
///
/// Bytes and interval are taken verbatim from the app's
/// `BleRequestDispatcher.HEART_BEAT_DATA` / `HEART_BEAT_INTERVAL`. Without this
/// the glasses' watchdog drops the link after a few seconds of quiet, which
/// presents as a mysterious "disconnected by peer" partway through the
/// handshake.
///
/// The writes go through `BleWriteQueue` like any other operation, so they
/// interleave safely with data rather than racing it.
final class BleHeartbeat {
    /// A SINGLE_NO_ACK packet (type 9) on pkgType 16 with a single zero byte.
    private static let data = Data([0, 0, 9, 16, 0])
    private static let interval: TimeInterval = 3

    private let queue: BleWriteQueue
    private let characteristic: CBCharacteristic
    private let scheduler: Scheduler
    private let timer = TimerSlot()

    private var running = false
    private var count = 0

    init(queue: BleWriteQueue, characteristic: CBCharacteristic, scheduler: Scheduler) {
        self.queue = queue
        self.characteristic = characteristic
        self.scheduler = scheduler
    }

    func start() {
        guard !running else { return }
        running = true
        timer.scheduleRepeating(on: scheduler, every: BleHeartbeat.interval) { [weak self] in
            guard let self, self.running else { return }
            self.queue.enqueue(BleHeartbeat.data, to: self.characteristic)
            self.count += 1
            if self.count == 1 {
                SdkLog.log("BLE heartbeat active (every \(Int(BleHeartbeat.interval))s)")
            }
        }
    }

    func stop() {
        running = false
        timer.cancel()
    }
}
