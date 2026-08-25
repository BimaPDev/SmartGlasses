import Foundation

public enum MsgType {
    public static let send = 3
    public static let sendSuccess = 4
    public static let openSuccess = 6
}

public struct RelayMessage {
    public let category: Int
    public let msgType: Int
    public let msgId: Int
    public let needCallback: Int
    public let appUniteCode: Int
    public let msgBody: Data
}

/// The RunAsOne relay (SuperMessage) layer — the one that flips the glasses to
/// "connected".
public enum Relay {
    public static let framePrefix: UInt8 = 0x01
    public static let defaultCategory = 3

    /// Returns nil if the buffer is not a relay frame.
    public static func parseFrame(_ raw: Data) -> RelayMessage? {
        guard let first = raw.first, first == framePrefix else { return nil }
        let outer = TlvBox.parse(raw.subdata(in: (raw.startIndex + 1) ..< raw.endIndex))
        let category = outer.getByte(TlvTags.category)
        guard let payload = outer.getBytes(TlvTags.payload) else { return nil }
        let inner = TlvBox.parse(payload)
        // ShareAbility (category 5) puts the protobuf directly in the payload
        // tag — it is not a SuperMessage. TLV-parsing those bytes yields no
        // msgType (100) / msgBody (105), so surface the protobuf as msgBody
        // and do not invent a SuperMessage msgId.
        if inner.getByte(TlvTags.msgType) == nil, inner.getBytes(TlvTags.msgBody) == nil {
            return RelayMessage(
                category: category ?? defaultCategory,
                msgType: 0,
                msgId: 0,
                needCallback: 0,
                appUniteCode: category ?? 0,
                msgBody: payload
            )
        }
        return RelayMessage(
            category: category ?? defaultCategory,
            msgType: inner.getByte(TlvTags.msgType) ?? 0,
            msgId: inner.getInt(TlvTags.msgId) ?? 0,
            needCallback: inner.getByte(TlvTags.needCallback) ?? 0,
            appUniteCode: inner.getByte(TlvTags.appUniteCode) ?? 0,
            msgBody: inner.getBytes(TlvTags.msgBody) ?? Data()
        )
    }

    /// Unframed ShareAbility reply: category 5, payload = `ShareApi.Message`
    /// protobuf. Must not go through `RelaySequencer.dataFrame` (that wraps
    /// SuperMessage and burns a relay msgId).
    public static func buildShareFrame(_ protobuf: Data) -> Data {
        var outer = TlvBox()
        outer.putByte(TlvTags.category, ShareAbility.uniteCode)
        outer.putBytes(TlvTags.payload, protobuf)
        return Data([framePrefix]) + outer.serialized()
    }

    public static func buildFrame(category: Int, msgType: Int, msgId: Int,
                                  needCallback: Int, appUniteCode: Int,
                                  msgBody: Data) -> Data {
        var inner = TlvBox()
        inner.putByte(TlvTags.msgType, msgType)
        inner.putInt(TlvTags.msgId, msgId)
        inner.putByte(TlvTags.needCallback, needCallback)
        inner.putByte(TlvTags.appUniteCode, appUniteCode)
        if !msgBody.isEmpty { inner.putBytes(TlvTags.msgBody, msgBody) }

        var outer = TlvBox()
        outer.putByte(TlvTags.category, category)
        outer.putBox(TlvTags.payload, inner)
        return Data([framePrefix]) + outer.serialized()
    }
}

/// Owns the outgoing `msgId` counter and builds data/ACK frames.
///
/// Sequencing is load-bearing: `msgId` starts at 1 and increments with no gaps.
/// The glasses track the last id they received and buffer — never deliver —
/// anything that looks like an out-of-order jump.
public final class RelaySequencer {
    public private(set) var outId = 0
    public var lastRecvId = 0

    public init() {}

    public func nextId() -> Int {
        outId += 1
        return outId
    }

    public func dataFrame(_ msgBody: Data, category: Int = Relay.defaultCategory,
                          needCallback: Int = 1, appUniteCode: Int = 1) -> Data {
        Relay.buildFrame(category: category, msgType: MsgType.send, msgId: nextId(),
                         needCallback: needCallback, appUniteCode: appUniteCode,
                         msgBody: msgBody)
    }

    public func ackFrame(for message: RelayMessage) -> Data {
        var inner = TlvBox()
        inner.putByte(TlvTags.msgType, MsgType.sendSuccess)
        inner.putInt(TlvTags.msgId, message.msgId)
        var outer = TlvBox()
        outer.putByte(TlvTags.category, message.category)
        outer.putBox(TlvTags.payload, inner)
        return Data([Relay.framePrefix]) + outer.serialized()
    }
}
