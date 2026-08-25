import XCTest
@testable import MyvuCore

final class ShareAbilityTests: XCTestCase {
    func testParsesSenderSynAndBuildsReceiverAck() {
        let syn = Pb.varintField(1, UInt64(ShareAbility.senderSyn))
            + Pb.string(3, "task-abc")
            + Pb.string(21, "screenshot")
        let parsed = ShareAbility.parse(syn)
        XCTAssertEqual(parsed?.type, ShareAbility.senderSyn)
        XCTAssertEqual(parsed?.taskId, "task-abc")
        XCTAssertEqual(parsed?.fileName, "screenshot")
        XCTAssertTrue(ShareAbility.shouldAbort(parsed!.type))

        let ack = ShareAbility.receiverAck(taskId: "task-abc")
        let fields = Pb.parse(ack)
        XCTAssertEqual(Pb.firstVarint(fields, 1), UInt64(ShareAbility.receiverAck))
        XCTAssertEqual(Pb.firstString(fields, 3), "task-abc")
        XCTAssertEqual(Pb.firstVarint(fields, 13), ShareAbility.preferredChunkSize)
        XCTAssertEqual(Pb.firstVarint(fields, 17), 0)
    }

    func testDoesNotAbortAReceiverAck() {
        XCTAssertFalse(ShareAbility.shouldAbort(5), "RECEIVER_ACK is inbound confirmation, not a push")
        XCTAssertTrue(ShareAbility.shouldAbort(ShareAbility.senderData))
        XCTAssertTrue(ShareAbility.shouldAbort(ShareAbility.senderFinish))
        XCTAssertFalse(ShareAbility.shouldAbort(ShareAbility.receiveOtaFinish))
    }

    func testShareFrameUsesUniteCode5() {
        let body = ShareAbility.receiverCancel(taskId: "t1")
        let frame = Relay.buildFrame(category: Relay.defaultCategory, msgType: MsgType.send,
                                     msgId: 3, needCallback: 1,
                                     appUniteCode: ShareAbility.uniteCode, msgBody: body)
        let m = Relay.parseFrame(frame)
        XCTAssertEqual(m?.appUniteCode, 5)
        XCTAssertEqual(ShareAbility.parse(m!.msgBody)?.taskId, "t1")
    }

    func testUnframedPushDetectsSynWithoutUniteCode() {
        let syn = Pb.varintField(1, UInt64(ShareAbility.senderSyn)) + Pb.string(3, "t")
        XCTAssertTrue(ShareAbility.isUnframedPush(syn))
        XCTAssertFalse(ShareAbility.isUnframedPush(Data(#"{"action":"screenshot"}"#.utf8)))
    }

    /// Captured 19:47:43 screenshot SYN: category 5, protobuf in payload tag 113.
    func testParsesUnframedScreenshotSynFromCapture() {
        let protobuf = Hex.decode("080412352f7364636172642f416e64726f69642f646174612f636f6d2e75707570686f6e652e737461722e6c61756e636865722f66696c65731a2466373166326665372d353265612d346439622d613539322d393765383731373732333034421a636f6d2e75707570686f6e652e737461722e6c61756e636865726880a00178d238800181d016a201203766386230333761646630666262373239366538376461386235643531336134aa010a73637265656e73686f74")
        let frame = Relay.buildShareFrame(protobuf)
        let m = Relay.parseFrame(frame)
        XCTAssertEqual(m?.category, 5)
        XCTAssertEqual(m?.msgType, 0)
        XCTAssertEqual(m?.msgId, 0)
        XCTAssertEqual(m?.appUniteCode, 5)
        let parsed = ShareAbility.parse(m!.msgBody)
        XCTAssertEqual(parsed?.type, ShareAbility.senderSyn)
        XCTAssertEqual(parsed?.taskId, "f71f2fe7-52ea-4d9b-a592-97e871772304")
        XCTAssertEqual(parsed?.fileName, "screenshot")
        XCTAssertEqual(parsed?.totalSize, 7250)
        XCTAssertEqual(parsed?.md5, "7f8b037adf0fbb7296e87da8b5d513a4")
        XCTAssertEqual(parsed?.packageName, "com.upuphone.star.launcher")
    }

    func testReceiverRoundTripsJpegUnderDocuments() throws {
        let dir = FileManager.default.temporaryDirectory
            .appendingPathComponent("share-\(UUID().uuidString)", isDirectory: true)
        defer { try? FileManager.default.removeItem(at: dir) }
        let receiver = ShareReceiver(directory: dir)
        let task = "task-jpeg"
        let jpeg = Data([0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10]) + Data(repeating: 0x00, count: 20)

        let synBody = Pb.varintField(1, UInt64(ShareAbility.senderSyn))
            + Pb.string(3, task)
            + Pb.varintField(15, UInt64(jpeg.count))
            + Pb.string(20, ShareReceiver.md5Hex(jpeg))
            + Pb.string(21, "screenshot")
        _ = receiver.handleSyn(ShareAbility.parse(synBody)!)

        let dataBody = Pb.varintField(1, UInt64(ShareAbility.senderData))
            + Pb.string(3, task)
            + Pb.bytes(14, jpeg)
        let ack = receiver.handleData(ShareAbility.parse(dataBody)!)
        XCTAssertEqual(ShareAbility.parse(ack!)?.type, ShareAbility.receiverDataAck)

        let finishBody = Pb.varintField(1, UInt64(ShareAbility.senderFinish))
            + Pb.string(3, task)
        let file = receiver.handleFinish(ShareAbility.parse(finishBody)!)
        XCTAssertEqual(file?.fileName, "screenshot.jpg")
        XCTAssertEqual(try Data(contentsOf: file!.url), jpeg)
    }

    func testRleDecodeAndNibbleUnpack() {
        // (value, count) pairs: three 0xAB bytes.
        let packed = GlassScreenshotCodec.rleDecode(Data([0xAB, 0x03]))
        XCTAssertEqual([UInt8](packed), [0xAB, 0xAB, 0xAB])
        let gray = GlassScreenshotCodec.unpackNibbles(Data([0xA5]))
        XCTAssertEqual(gray, [0xA0, 0x50])
    }

    func testPngFromOneBlankHudRow() {
        // 320 packed zeros = one 640-pixel row. Encode as RLE (0x00, 0xFF)+(0x00, 65).
        var rle = Data()
        rle.append(contentsOf: [0x00, 0xFF, 0x00, 65])
        let png = GlassScreenshotCodec.png(fromG4: rle)
        XCTAssertNotNil(png)
        XCTAssertTrue(png!.starts(with: [0x89, 0x50, 0x4E, 0x47]))
    }
}
