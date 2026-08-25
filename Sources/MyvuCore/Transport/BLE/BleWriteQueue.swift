import CoreBluetooth
import Foundation

/// Paces write-without-response traffic to one peripheral.
///
/// Every protocol write is a write WITHOUT response, matching the reference
/// client. CoreBluetooth does not queue those: it drops anything submitted while
/// `canSendWriteWithoutResponse` is false. Since a multi-frame message is a
/// FAST_CTR/MIX_CTR packet followed by fragments 1..N whose order and presence
/// both matter, dropped or reordered writes corrupt the message with no error
/// reported anywhere.
///
/// So writes are buffered here and drained as the peripheral reports capacity.
final class BleWriteQueue {
    /// CoreBluetooth is expected to call `peripheralIsReadyToSendWriteWithoutResponse`,
    /// but it is documented as a hint and has been observed not to fire. This
    /// re-drain keeps the queue moving regardless.
    private static let retryDelay: TimeInterval = 0.03

    private weak var peripheral: CBPeripheral?
    private let scheduler: Scheduler
    private var pending: [(characteristic: CBCharacteristic, value: Data)] = []
    private let retry = TimerSlot()

    init(peripheral: CBPeripheral, scheduler: Scheduler) {
        self.peripheral = peripheral
        self.scheduler = scheduler
    }

    func enqueue(_ value: Data, to characteristic: CBCharacteristic) {
        pending.append((characteristic, value))
        drain()
    }

    func drain() {
        guard let peripheral else { return }
        retry.cancel()

        // The first write of a cycle goes out unconditionally:
        // canSendWriteWithoutResponse reads false until at least one write has
        // been submitted, so gating on it alone never starts.
        var isFirst = true
        while !pending.isEmpty, isFirst || peripheral.canSendWriteWithoutResponse {
            let op = pending.removeFirst()
            // Every outbound byte, at the last point before CoreBluetooth takes
            // it: this is the wire log a capture is reconstructed from.
            SdkLog.trace("-> \(Uuids.label(op.characteristic.uuid)) \(op.value.count)B \(Hex.encode(op.value))")
            peripheral.writeValue(op.value, for: op.characteristic, type: .withoutResponse)
            isFirst = false
        }

        if !pending.isEmpty {
            retry.schedule(on: scheduler, after: BleWriteQueue.retryDelay) { [weak self] in
                self?.drain()
            }
        }
    }

    func clear() {
        retry.cancel()
        pending.removeAll()
    }

    var depth: Int { pending.count }
}
