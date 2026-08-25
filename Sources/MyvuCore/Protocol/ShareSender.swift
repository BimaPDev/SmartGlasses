import Foundation

/// Pushes one file over ShareAbility (phone as sender).
///
/// Sequence from `BleTransferSendDelegate`:
/// SYN → wait RECEIVER_ACK (honor advertised `chunkSize`) → DATA slices,
/// waiting RECEIVER_DATA_ACK (`chunkEnd` is the next offset) → FINISH → wait
/// RECEIVER_FINISH or RECEIVE_OTA_FINISH. Fail on RECEIVER_FAIL / CANCEL.
///
/// All state lives on the protocol scheduler, same as `MyvuClient`.
final class ShareSender {
    static let synTimeout: TimeInterval = 20
    static let dataAckTimeout: TimeInterval = 12
    static let finishTimeout: TimeInterval = 30
    static let maxDataRetries = 3

    private let file: OtaFile
    private let sendShare: (Data) -> Void
    private let scheduler: Scheduler
    private let onProgress: (Int, Int) -> Void
    private let onDone: (Result<Void, Error>) -> Void

    let taskId: String
    var fileName: String { file.fileName }
    private var chunkSize = ShareAbility.preferredChunkSize
    private var offset: UInt64 = 0
    private var lastChunkStart: UInt64 = 0
    private var dataRetries = 0
    private var finished = false
    private let ackTimer = TimerSlot()

    init(file: OtaFile, scheduler: Scheduler,
         sendShare: @escaping (Data) -> Void,
         onProgress: @escaping (Int, Int) -> Void,
         onDone: @escaping (Result<Void, Error>) -> Void,
         taskId: String = UUID().uuidString) {
        self.file = file
        self.scheduler = scheduler
        self.sendShare = sendShare
        self.onProgress = onProgress
        self.onDone = onDone
        self.taskId = taskId
    }

    func start() {
        SdkLog.log("-> share SYN file=\(file.fileName) size=\(file.fileSize) "
            + "md5=\(file.md5) taskId=\(taskId)")
        sendShare(ShareAbility.senderSyn(
            taskId: taskId, fileName: file.fileName,
            totalSize: UInt64(file.fileSize), md5: file.md5))
        arm(Self.synTimeout) { [weak self] in
            self?.fail("no RECEIVER_ACK for \(self?.file.fileName ?? "file")")
        }
    }

    /// Consumes a ShareAbility frame meant for this send. Returns true when the
    /// type is a sender-side reply (even if the taskId does not match).
    @discardableResult
    func handle(_ msg: ShareAbility.Message) -> Bool {
        guard ShareAbility.isSenderReply(msg.type) else { return false }
        if !msg.taskId.isEmpty, msg.taskId != taskId { return true }
        switch msg.type {
        case ShareAbility.receiverAck:
            ackTimer.cancel()
            let advertised = msg.chunkSize == 0 ? ShareAbility.preferredChunkSize : msg.chunkSize
            chunkSize = min(max(1, advertised), ShareAbility.maxChunkSize)
            offset = msg.beginStart
            dataRetries = 0
            SdkLog.log("<- share RECEIVER_ACK chunkSize=\(chunkSize) begin=\(offset)")
            sendNext()
        case ShareAbility.receiverDataAck:
            ackTimer.cancel()
            dataRetries = 0
            offset = msg.chunkEnd
            onProgress(min(file.fileSize, Int(offset)), file.fileSize)
            if offset >= UInt64(file.fileSize) {
                sendFinish()
            } else {
                sendNext()
            }
        case ShareAbility.receiverFinish, ShareAbility.receiveOtaFinish:
            succeed()
        case ShareAbility.receiverFail:
            fail("glasses RECEIVER_FAIL for \(file.fileName)")
        case ShareAbility.receiverCancel:
            fail("glasses cancelled \(file.fileName)")
        default:
            break
        }
        return true
    }

    func cancel(_ reason: String) {
        guard !finished else { return }
        finished = true
        ackTimer.cancel()
        sendShare(ShareAbility.senderCancel(taskId: taskId))
        SdkLog.warn("share send cancelled: \(reason)")
    }

    private func sendNext() {
        guard !finished else { return }
        let start = Int(offset)
        guard start < file.fileSize else {
            sendFinish()
            return
        }
        let size = min(Int(chunkSize), file.fileSize - start)
        let slice = file.data.subdata(in: start ..< (start + size))
        lastChunkStart = offset
        let order = chunkSize == 0 ? 0 : Int(offset / chunkSize)
        SdkLog.trace("-> share DATA \(file.fileName) \(start)..\(start + size) "
            + "(\(size)B) order=\(order)")
        sendShare(ShareAbility.senderData(taskId: taskId, chunk: slice,
                                          chunkStart: offset, order: order))
        arm(Self.dataAckTimeout) { [weak self] in
            self?.onDataAckTimeout()
        }
    }

    private func onDataAckTimeout() {
        guard !finished else { return }
        dataRetries += 1
        if dataRetries > Self.maxDataRetries {
            fail("no DATA_ACK for \(file.fileName) at offset \(offset)")
            return
        }
        SdkLog.warn("share DATA_ACK timeout at \(offset) — retry \(dataRetries)/"
            + "\(Self.maxDataRetries)")
        offset = lastChunkStart
        sendNext()
    }

    private func sendFinish() {
        guard !finished else { return }
        onProgress(file.fileSize, file.fileSize)
        SdkLog.log("-> share FINISH file=\(file.fileName)")
        sendShare(ShareAbility.senderFinish(taskId: taskId))
        arm(Self.finishTimeout) { [weak self] in
            self?.fail("no RECEIVER_FINISH for \(self?.file.fileName ?? "file")")
        }
    }

    private func arm(_ delay: TimeInterval, _ body: @escaping () -> Void) {
        ackTimer.schedule(on: scheduler, after: delay, body)
    }

    private func succeed() {
        guard !finished else { return }
        finished = true
        ackTimer.cancel()
        SdkLog.log("share send complete file=\(file.fileName)")
        onDone(.success(()))
    }

    private func fail(_ reason: String) {
        guard !finished else { return }
        finished = true
        ackTimer.cancel()
        SdkLog.warn("share send failed: \(reason)")
        onDone(.failure(MyvuError.timedOut(reason)))
    }
}
