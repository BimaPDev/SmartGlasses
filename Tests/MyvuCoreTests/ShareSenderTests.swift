import XCTest
@testable import MyvuCore

final class ShareSenderTests: XCTestCase {
    func testSenderSynRoundTripsTheOtaFields() {
        let syn = ShareAbility.senderSyn(
            taskId: "task-1", fileName: "platform_tester.bin",
            totalSize: 100, md5: "abc")
        let parsed = ShareAbility.parse(syn)
        XCTAssertEqual(parsed?.type, ShareAbility.senderSyn)
        XCTAssertEqual(parsed?.taskId, "task-1")
        XCTAssertEqual(parsed?.fileName, "platform_tester.bin")
        XCTAssertEqual(parsed?.totalSize, 100)
        XCTAssertEqual(parsed?.md5, "abc")
        XCTAssertEqual(parsed?.packageName, AppLayer.pkgLauncher)
        XCTAssertEqual(parsed?.dirPath, ShareAbility.otaDirPath)
        XCTAssertFalse(ShareAbility.shouldAbort(ShareAbility.receiverAck))
        XCTAssertTrue(ShareAbility.isSenderReply(ShareAbility.receiveOtaFinish))
    }

    func testSendsChunksThenFinish() {
        let scheduler = Scheduler(label: "test.share-sender")
        let payload = Data(repeating: 0x41, count: 10)
        let file = OtaFile(fileName: AirOta.m55Name, data: payload)
        var sent: [ShareAbility.Message] = []
        var finished: Result<Void, Error>?
        let sender = ShareSender(
            file: file, scheduler: scheduler,
            sendShare: { sent.append(ShareAbility.parse($0)!) },
            onProgress: { _, _ in },
            onDone: { finished = $0 },
            taskId: "t")

        scheduler.sync { sender.start() }
        XCTAssertEqual(sent.last?.type, ShareAbility.senderSyn)

        let ack = ShareAbility.parse(ShareAbility.receiverAck(taskId: "t", chunkSize: 4))!
        _ = scheduler.sync { sender.handle(ack) }
        XCTAssertEqual(sent.last?.type, ShareAbility.senderData)
        XCTAssertEqual(sent.last?.chunkStart, 0)
        XCTAssertEqual(sent.last?.chunkData.count, 4)

        func dataAck(end: UInt64) -> ShareAbility.Message {
            ShareAbility.parse(ShareAbility.receiverDataAck(taskId: "t", chunkEnd: end))!
        }
        _ = scheduler.sync { sender.handle(dataAck(end: 4)) }
        XCTAssertEqual(sent.last?.chunkStart, 4)
        _ = scheduler.sync { sender.handle(dataAck(end: 8)) }
        XCTAssertEqual(sent.last?.chunkStart, 8)
        XCTAssertEqual(sent.last?.chunkData.count, 2)
        _ = scheduler.sync { sender.handle(dataAck(end: 10)) }
        XCTAssertEqual(sent.last?.type, ShareAbility.senderFinish)

        let fin = ShareAbility.parse(ShareAbility.receiverFinish(taskId: "t"))!
        _ = scheduler.sync { sender.handle(fin) }
        XCTAssertNotNil(try finished?.get())
    }
}
