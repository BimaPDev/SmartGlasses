import XCTest
@testable import MyvuCore

/// TLV codec, relay framing, and sequencing.
final class TlvRelayTests: XCTestCase {
    func testTlvIntsAreBigEndian() {
        // Opposite endianness to the BLE packet layer — the single easiest thing
        // to get wrong when porting, so assert the actual bytes.
        var box = TlvBox()
        box.putInt(TlvTags.msgId, 1)
        let ser = [UInt8](box.serialized())
        // [tag][len:2][value:4]
        XCTAssertEqual(Int(ser[0]), TlvTags.msgId)
        XCTAssertEqual(ser[1], 0)
        XCTAssertEqual(ser[2], 4)
        XCTAssertEqual(Array(ser[3 ..< 7]), [0, 0, 0, 1])
    }

    func testTlvPreservesInsertionOrder() {
        // Byte-identical output versus the capture is how these frames are
        // verified, and an unordered dictionary would reorder tags.
        var box = TlvBox()
        box.putByte(100, 3)
        box.putInt(101, 7)
        box.putByte(103, 1)
        let ser = [UInt8](box.serialized())
        XCTAssertEqual(Int(ser[0]), 100)
        XCTAssertEqual(Int(ser[4]), 101)
        XCTAssertEqual(Int(ser[11]), 103)
    }

    func testTlvRoundTrips() {
        let body = Data("payload".utf8)
        var box = TlvBox()
        box.putByte(TlvTags.msgType, MsgType.send)
        box.putInt(TlvTags.msgId, 42)
        box.putBytes(TlvTags.msgBody, body)

        let parsed = TlvBox.parse(box.serialized())
        XCTAssertEqual(parsed.getByte(TlvTags.msgType), MsgType.send)
        XCTAssertEqual(parsed.getInt(TlvTags.msgId), 42)
        XCTAssertEqual(parsed.getBytes(TlvTags.msgBody), body)
        XCTAssertNil(parsed.getInt(TlvTags.errorCode),
                     "absent tags return nil so callers can default")
    }

    func testRelayFrameRoundTrips() {
        let body = Data(#"{"action":"notification"}"#.utf8)
        let frame = Relay.buildFrame(category: Relay.defaultCategory, msgType: MsgType.send,
                                     msgId: 1, needCallback: 1, appUniteCode: 1, msgBody: body)

        let m = Relay.parseFrame(frame)
        XCTAssertNotNil(m)
        XCTAssertEqual(m?.category, Relay.defaultCategory)
        XCTAssertEqual(m?.msgType, MsgType.send)
        XCTAssertEqual(m?.msgId, 1)
        XCTAssertEqual(m?.needCallback, 1)
        XCTAssertEqual(m?.msgBody, body)
    }

    func testNonRelayBuffersParseToNil() {
        XCTAssertNil(Relay.parseFrame(Data()))
        XCTAssertNil(Relay.parseFrame(Data([0x02, 0x00])), "wrong frame prefix")
    }

    func testSequencerStartsAtOne() {
        // Load-bearing: the glasses track the last received sequence number
        // (0 on a fresh connect) and discard anything that looks out of order,
        // so every new connection must restart the sequence at 1.
        let seq = RelaySequencer()
        XCTAssertEqual(seq.outId, 0)

        XCTAssertEqual(Relay.parseFrame(seq.dataFrame(Data([1])))?.msgId, 1)
        XCTAssertEqual(Relay.parseFrame(seq.dataFrame(Data([2])))?.msgId, 2)
    }

    func testAckFrameEchoesPeerIdAndCategory() {
        let inbound = Relay.parseFrame(
            Relay.buildFrame(category: 5, msgType: MsgType.send, msgId: 99,
                             needCallback: 1, appUniteCode: 1, msgBody: Data([7])))
        XCTAssertNotNil(inbound)

        let ack = Relay.parseFrame(RelaySequencer().ackFrame(for: inbound!))
        XCTAssertEqual(ack?.msgType, MsgType.sendSuccess)
        XCTAssertEqual(ack?.msgId, 99)
        XCTAssertEqual(ack?.category, 5, "ACK must be sent in the peer's category")
    }

    func testUnframedSharePayloadIsNotSuperMessage() {
        let protobuf = Pb.varintField(1, 4) + Pb.string(3, "tid")
        let frame = Relay.buildShareFrame(protobuf)
        XCTAssertEqual(frame.first, Relay.framePrefix)
        let m = Relay.parseFrame(frame)
        XCTAssertEqual(m?.category, ShareAbility.uniteCode)
        XCTAssertEqual(m?.msgType, 0)
        XCTAssertEqual(m?.msgId, 0)
        XCTAssertEqual(m?.msgBody, protobuf)
        XCTAssertEqual(m?.appUniteCode, 5)
    }
}
