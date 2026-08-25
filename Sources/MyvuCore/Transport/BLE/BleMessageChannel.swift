import Foundation

/// Reliable message channel over one GATT characteristic.
///
/// Observed on the wire:
///  - INTERNAL/pairing channel: SinglePacket (type 2), pkgType 16, ACKed with a
///    SingleACK.
///  - EXTERNAL/app channel: SINGLE_NO_ACK (type 9) for one-frame messages,
///    MIX_CTR (type 8) + data frames for larger ones, pkgType 0.
///
/// The ACK waits are explicit continuations armed before a write and resolved
/// (or timed out) by `feed`. Everything runs on the connection scheduler, so
/// none of this state needs locking.
public final class BleMessageChannel {
    public typealias Writer = (Data) -> Void
    public typealias Receiver = (_ pkgType: Int, _ payload: Data) -> Void
    /// Resolved with an ACK status code (see `BlePackets.ack*`).
    public typealias AckCallback = (_ status: Int) -> Void

    public static let defaultAckTimeout: TimeInterval = 6
    /// DMTU floor, matching the fallback for the 23-byte default ATT MTU.
    public static let minDmtu = 18

    private let label: String
    private let write: Writer
    private let scheduler: Scheduler
    private let receiver: Receiver?
    private let ackTimeout: TimeInterval
    private let rx = BleReassembler()

    private var currentDmtu = BleMessageChannel.minDmtu
    /// A DMTU change is only applied between messages, never mid-fragmentation.
    private var pendingDmtu = -1

    private var singleAckWaiter: AckCallback?
    private var ctrAckWaiter: AckCallback?
    private let singleAckTimer = TimerSlot()
    private let ctrAckTimer = TimerSlot()

    public init(label: String, scheduler: Scheduler, write: @escaping Writer,
                receiver: Receiver?,
                ackTimeout: TimeInterval = BleMessageChannel.defaultAckTimeout) {
        self.label = label
        self.scheduler = scheduler
        self.write = write
        self.receiver = receiver
        self.ackTimeout = ackTimeout
    }

    /// Requests a new fragmentation size. Deferred while a multi-frame message
    /// is in flight: switching chunk size mid-message would corrupt it.
    public func setDmtu(_ newDmtu: Int) {
        let v = max(BleMessageChannel.minDmtu, newDmtu)
        if rx.isActive {
            pendingDmtu = v
        } else {
            currentDmtu = v
        }
    }

    public var dmtu: Int { currentDmtu }

    private func applyPendingDmtu() {
        if pendingDmtu > 0, !rx.isActive {
            currentDmtu = pendingDmtu
            pendingDmtu = -1
        }
    }

    // MARK: - Send

    /// Pairing-channel send that expects a SingleACK. Falls back to the
    /// multi-frame CTR path when the payload does not fit one frame.
    public func sendSingleAcked(_ payload: Data, pkgType: Int, _ cb: @escaping AckCallback) {
        if payload.count > currentDmtu {
            sendCtrAcked(payload, pkgType: pkgType, cb)
            return
        }
        armSingleAck(cb)
        write(BlePackets.singlePacket(pkgType: pkgType, payload: payload))
    }

    /// CTR (type 0) multi-frame send: CTR → await ACK(READY) → data frames →
    /// await ACK(SUCCESS).
    public func sendCtrAcked(_ payload: Data, pkgType: Int, _ cb: @escaping AckCallback) {
        let frameCount = frameCountFor(payload.count)
        armCtrAck { [weak self] status in
            guard let self else { return }
            guard status == BlePackets.ackReady else {
                cb(status)
                return
            }
            // Peer is ready: stream the fragments, then await SUCCESS.
            self.armCtrAck(cb)
            self.writeFragments(payload, frameCount: frameCount)
        }
        write(BlePackets.ctrPacket(frameCount: frameCount, pkgType: pkgType))
    }

    /// SINGLE_NO_ACK (type 9): fire and forget, one frame.
    public func sendSingleNoAck(_ payload: Data, pkgType: Int) {
        write(BlePackets.singleNoAckPacket(pkgType: pkgType, payload: payload))
    }

    /// FAST_CTR (type 6) + data frames back to back with no waiting. This is the
    /// exact form the app uses for the first version-negotiation message
    /// (pkgType 17 / STARRY_DATA_INIT).
    public func sendFast(_ payload: Data, pkgType: Int) {
        let frameCount = frameCountFor(payload.count)
        write(BlePackets.fastCtrPacket(frameCount: frameCount, pkgType: pkgType))
        writeFragments(payload, frameCount: frameCount)
    }

    /// MIX_CTR (type 8): first chunk inline in the control packet, rest as
    /// fragments.
    public func sendMix(_ payload: Data, pkgType: Int) {
        let firstLen = min(payload.count, max(0, currentDmtu - 4))
        let first = payload.prefix(firstLen)
        let rest = Data(payload.dropFirst(firstLen))
        let frameCount = rest.isEmpty ? 0 : frameCountFor(rest.count)

        write(BlePackets.mixCtrPacket(frameCount: frameCount, pkgType: pkgType,
                                      firstChunk: Data(first)))
        writeFragments(rest, frameCount: frameCount)
    }

    /// Picks the smallest wire form that fits.
    public func send(_ payload: Data, pkgType: Int) {
        if payload.count <= currentDmtu {
            sendSingleNoAck(payload, pkgType: pkgType)
        } else {
            sendMix(payload, pkgType: pkgType)
        }
    }

    private func writeFragments(_ data: Data, frameCount: Int) {
        guard frameCount > 0 else { return }
        for idx in 0 ..< frameCount {
            let from = idx * currentDmtu
            let to = min(data.count, from + currentDmtu)
            if from >= to { break }
            let chunk = data.subdata(in: (data.startIndex + from) ..< (data.startIndex + to))
            write(BlePackets.dataPacket(seq: idx + 1, payload: chunk))
        }
    }

    private func frameCountFor(_ length: Int) -> Int {
        max(1, (length + currentDmtu - 1) / currentDmtu)
    }

    // MARK: - Receive

    /// Handles one inbound GATT notification for this characteristic.
    public func feed(_ raw: Data) {
        let p = BlePackets.parse(raw)

        if p.isData {
            if let full = rx.add(seq: p.sn, payload: p.value) {
                let pkgType = rx.pkgType
                applyPendingDmtu()
                receiver?(pkgType, full)
            }
            return
        }

        switch p.type {
        case BlePackets.typeSingleCmd:
            // Whole message in one packet; the peer expects an ACK back.
            write(BlePackets.singleAckPacket(status: BlePackets.ackSuccess))
            receiver?(p.pkgType, p.value)

        case BlePackets.typeSingleCmdNoAck:
            receiver?(p.pkgType, p.value)

        case BlePackets.typeSingleAck:
            resolveSingleAck(p.ackStatus)

        case BlePackets.typeCmd:
            // Inbound CTR: prepare to reassemble and tell the peer we are ready.
            rx.start(frameCount: p.frameCount, pkgType: p.pkgType)
            write(BlePackets.ackPacket(status: BlePackets.ackReady))

        case BlePackets.typeFastCtr:
            rx.start(frameCount: p.frameCount, pkgType: p.pkgType)

        case BlePackets.typeMixCtr:
            rx.start(frameCount: p.frameCount, pkgType: p.pkgType, header: p.value)
            if p.frameCount == 0 {
                // Everything fit in the control packet.
                rx.isActive = false
                applyPendingDmtu()
                receiver?(p.pkgType, p.value)
            }

        case BlePackets.typeAck:
            resolveCtrAck(p.ackStatus)

        default:
            SdkLog.trace("\(label) <- unhandled packet type \(p.type)")
        }
    }

    // MARK: - ACK waits

    private func armSingleAck(_ cb: @escaping AckCallback) {
        cancelSingleAck()
        singleAckWaiter = cb
        singleAckTimer.schedule(on: scheduler, after: ackTimeout) { [weak self] in
            guard let self, let waiter = self.singleAckWaiter else { return }
            self.singleAckWaiter = nil
            SdkLog.warn("\(self.label): single ACK timed out")
            waiter(BlePackets.ackTimeout)
        }
    }

    private func resolveSingleAck(_ status: Int) {
        let cb = singleAckWaiter
        cancelSingleAck()
        cb?(status)
    }

    private func cancelSingleAck() {
        singleAckTimer.cancel()
        singleAckWaiter = nil
    }

    private func armCtrAck(_ cb: @escaping AckCallback) {
        cancelCtrAck()
        ctrAckWaiter = cb
        ctrAckTimer.schedule(on: scheduler, after: ackTimeout) { [weak self] in
            guard let self, let waiter = self.ctrAckWaiter else { return }
            self.ctrAckWaiter = nil
            SdkLog.warn("\(self.label): CTR ACK timed out")
            waiter(BlePackets.ackTimeout)
        }
    }

    private func resolveCtrAck(_ status: Int) {
        let cb = ctrAckWaiter
        cancelCtrAck()
        cb?(status)
    }

    private func cancelCtrAck() {
        ctrAckTimer.cancel()
        ctrAckWaiter = nil
    }

    public func shutdown() {
        cancelSingleAck()
        cancelCtrAck()
        rx.reset()
    }
}
