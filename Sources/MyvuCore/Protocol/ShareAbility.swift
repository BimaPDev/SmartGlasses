import Foundation

/// StarryNet `abilityShare` (appUniteCode 5) — file transfer for screenshot,
/// glass log, and OTA.
///
/// `ShareApi.Message` from `share_api.proto`. Share frames on BLE are **not**
/// SuperMessage-wrapped: the outer TLV is category 5 and the payload tag is the
/// protobuf itself. An unanswered `SENDER_SYN` makes the glasses dump chunks
/// until the watchdog drops the link, so this SDK ACKs and receives.
public enum ShareAbility {
    public static let uniteCode = 5

    public static let pull = 1
    public static let senderSyn = 4
    public static let receiverAck = 5
    public static let senderData = 6
    public static let senderFinish = 7
    public static let receiverFinish = 8
    public static let senderFail = 9
    public static let senderCancel = 10
    public static let receiverCancel = 11
    public static let receiverFail = 12
    public static let receiveOtaFinish = 13
    public static let receiverDataAck = 14

    /// Destination the official Air OTA sender puts on `SENDER_SYN`. The glasses
    /// ignore a phone-side path and write the bins themselves; the name still
    /// has to look like a launcher files dir.
    public static let otaDirPath = "/sdcard/Android/data/com.upuphone.star.launcher/files"

    /// Cap on the chunk size advertised in `RECEIVER_ACK`. The glasses have
    /// asked for 8 KiB on some builds; MIX_CTR over a ~507-byte DMTU already
    /// fragments 4 KiB, so anything larger just adds latency.
    public static let maxChunkSize: UInt64 = 8192

    /// Chunk size the Android receiver advertises in `RECEIVER_ACK`.
    public static let preferredChunkSize: UInt64 = 4096

    public struct Message {
        public let type: Int
        public let dirPath: String
        public let taskId: String
        public let packageName: String
        public let chunkSize: UInt64
        public let chunkData: Data
        public let totalSize: UInt64
        public let count: UInt64
        public let beginStart: UInt64
        public let chunkStart: UInt64
        public let order: Int
        public let md5: String
        public let fileName: String
        public let chunkEnd: UInt64
    }

    public static func parse(_ body: Data) -> Message? {
        let fields = Pb.parse(body)
        let type = Int(Pb.firstVarint(fields, 1, 0))
        guard type > 0 else { return nil }
        return Message(
            type: type,
            dirPath: Pb.firstString(fields, 2),
            taskId: Pb.firstString(fields, 3),
            packageName: Pb.firstString(fields, 8),
            chunkSize: Pb.firstVarint(fields, 13),
            chunkData: Pb.firstBytes(fields, 14),
            totalSize: Pb.firstVarint(fields, 15),
            count: Pb.firstVarint(fields, 16),
            beginStart: Pb.firstVarint(fields, 17),
            chunkStart: Pb.firstVarint(fields, 18),
            order: Int(Pb.firstVarint(fields, 19)),
            md5: Pb.firstString(fields, 20),
            fileName: Pb.firstString(fields, 21),
            chunkEnd: Pb.firstVarint(fields, 22)
        )
    }

    /// True when the glasses are pushing a file we should receive (not cancel).
    public static func shouldAbort(_ type: Int) -> Bool {
        type == pull || type == senderSyn || type == senderData || type == senderFinish
    }

    /// Share frames normally arrive with outer category 5. If the glasses omit
    /// that tag, the protobuf still starts with `type` rather than `{`.
    public static func isUnframedPush(_ body: Data) -> Bool {
        guard body.first != UInt8(ascii: "{") else { return false }
        guard let parsed = parse(body) else { return false }
        return shouldAbort(parsed.type)
    }

    public static func receiverAck(taskId: String,
                                   chunkSize: UInt64 = preferredChunkSize) -> Data {
        var body = Pb.varintField(1, UInt64(receiverAck))
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        body += Pb.varintField(13, chunkSize)
        body += Pb.varintField(17, 0)
        return body
    }

    public static func receiverDataAck(taskId: String, chunkEnd: UInt64) -> Data {
        var body = Pb.varintField(1, UInt64(receiverDataAck))
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        body += Pb.varintField(22, chunkEnd)
        return body
    }

    public static func receiverFinish(taskId: String) -> Data {
        var body = Pb.varintField(1, UInt64(receiverFinish))
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        return body
    }

    public static func receiverCancel(taskId: String) -> Data {
        var body = Pb.varintField(1, UInt64(receiverCancel))
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        return body
    }

    public static func receiverFail(taskId: String) -> Data {
        var body = Pb.varintField(1, UInt64(receiverFail))
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        return body
    }

    /// Phone as sender: `SENDER_SYN` matching `BleTransferSendDelegate.sendSynMessage`.
    public static func senderSyn(taskId: String, fileName: String, totalSize: UInt64,
                                 md5: String,
                                 dirPath: String = otaDirPath,
                                 packageName: String = AppLayer.pkgLauncher) -> Data {
        var body = Pb.varintField(1, UInt64(senderSyn))
        if !dirPath.isEmpty { body += Pb.string(2, dirPath) }
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        if !packageName.isEmpty { body += Pb.string(8, packageName) }
        body += Pb.varintField(15, totalSize)
        if !md5.isEmpty { body += Pb.string(20, md5) }
        if !fileName.isEmpty { body += Pb.string(21, fileName) }
        return body
    }

    /// Phone as sender: one file slice. Field 19 (`order`) is `chunkStart / chunkSize`.
    public static func senderData(taskId: String, chunk: Data, chunkStart: UInt64,
                                  order: Int) -> Data {
        var body = Pb.varintField(1, UInt64(senderData))
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        body += Pb.bytes(14, chunk)
        body += Pb.varintField(17, 0)
        body += Pb.varintField(18, chunkStart)
        body += Pb.varintField(19, UInt64(max(0, order)))
        let end = chunkStart + UInt64(chunk.count)
        body += Pb.varintField(22, end)
        return body
    }

    public static func senderFinish(taskId: String) -> Data {
        var body = Pb.varintField(1, UInt64(senderFinish))
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        return body
    }

    public static func senderFail(taskId: String) -> Data {
        var body = Pb.varintField(1, UInt64(senderFail))
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        return body
    }

    public static func senderCancel(taskId: String) -> Data {
        var body = Pb.varintField(1, UInt64(senderCancel))
        if !taskId.isEmpty { body += Pb.string(3, taskId) }
        return body
    }

    /// True when this type is a receiver-side reply to a file we are sending.
    public static func isSenderReply(_ type: Int) -> Bool {
        type == receiverAck || type == receiverDataAck || type == receiverFinish
            || type == receiveOtaFinish || type == receiverFail || type == receiverCancel
    }
}
