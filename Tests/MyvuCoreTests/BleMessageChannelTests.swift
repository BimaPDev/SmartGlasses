import XCTest
@testable import MyvuCore

/// The channel decides how a payload is cut into packets and when an ACK is
/// expected. Both are invisible on the wire until something breaks, so the
/// fragment stream is captured through a fake writer and asserted directly.
final class BleMessageChannelTests: XCTestCase {
    private var written: [Data] = []
    private var received: [(pkgType: Int, payload: Data)] = []
    private var scheduler: Scheduler!
    private var channel: BleMessageChannel!

    /// Small enough that a short payload still spans several fragments.
    private let dmtu = 20

    override func setUp() {
        super.setUp()
        written = []
        received = []
        scheduler = Scheduler(label: "test-conn")
        channel = BleMessageChannel(label: "test", scheduler: scheduler,
                                    write: { [weak self] in self?.written.append($0) },
                                    receiver: { [weak self] pkg, payload in
                                        self?.received.append((pkg, payload))
                                    },
                                    // Shortened so the timeout test does not
                                    // stall the suite for the real 6 seconds.
                                    ackTimeout: 0.2)
        channel.setDmtu(dmtu)
    }

    private func payload(_ length: Int) -> Data {
        Data((0 ..< length).map { UInt8($0 % 251) })
    }

    private var parsed: [BleParsedPacket] { written.map { BlePackets.parse($0) } }

    // MARK: - Fragmentation

    func testShortPayloadGoesOutAsASingleNoAckPacket() {
        channel.send(payload(10), pkgType: BlePackets.pkgCommonData)

        XCTAssertEqual(written.count, 1)
        XCTAssertEqual(parsed[0].type, BlePackets.typeSingleCmdNoAck)
        XCTAssertEqual(parsed[0].pkgType, BlePackets.pkgCommonData)
        XCTAssertEqual(parsed[0].value, payload(10))
    }

    func testPayloadExactlyAtTheLimitStillFitsOnePacket() {
        // Off-by-one here would silently switch every message to the MIX path.
        channel.send(payload(dmtu), pkgType: BlePackets.pkgCommonData)
        XCTAssertEqual(parsed.map(\.type), [BlePackets.typeSingleCmdNoAck])
    }

    func testOversizedPayloadUsesMixCtrAndReassemblesToTheOriginal() {
        let body = payload(64)
        channel.send(body, pkgType: BlePackets.pkgCommonData)

        XCTAssertEqual(parsed[0].type, BlePackets.typeMixCtr)
        // MIX_CTR carries its first chunk inline, in the 4 bytes the control
        // header does not use.
        let inline = parsed[0].value
        XCTAssertEqual(inline.count, dmtu - 4)
        XCTAssertEqual(parsed[0].frameCount, written.count - 1)

        // Feeding our own packets back in must rebuild the payload byte for byte.
        for packet in written { channel.feed(packet) }
        XCTAssertEqual(received.count, 1)
        XCTAssertEqual(received.first?.payload, body)
    }

    func testFragmentsAreNumberedFromOneWithNoGaps() {
        channel.send(payload(100), pkgType: BlePackets.pkgCommonData)
        let fragments = parsed.filter(\.isData)
        XCTAssertEqual(fragments.map(\.sn), Array(1 ... fragments.count))
    }

    func testFastSendWritesTheControlPacketBeforeItsFragments() {
        // The version-negotiation message uses this form, and the glasses discard
        // fragments that arrive before the FAST_CTR that announces them.
        channel.sendFast(payload(50), pkgType: BlePackets.pkgStarryDataInit)

        XCTAssertEqual(parsed[0].type, BlePackets.typeFastCtr)
        XCTAssertEqual(parsed[0].pkgType, BlePackets.pkgStarryDataInit)
        XCTAssertEqual(parsed[0].frameCount, 3) // 50 bytes at 20 per fragment
        XCTAssertEqual(parsed.dropFirst().map(\.sn), [1, 2, 3])
    }

    func testFastSendOfAShortPayloadStillAnnouncesOneFrame() {
        channel.sendFast(payload(5), pkgType: BlePackets.pkgStarryDataInit)
        XCTAssertEqual(parsed[0].frameCount, 1)
        XCTAssertEqual(parsed.count, 2)
    }

    // MARK: - DMTU changes

    func testDmtuIsClampedToTheFloor() {
        channel.setDmtu(4)
        XCTAssertEqual(channel.dmtu, BleMessageChannel.minDmtu)
    }

    /// A chunk-size change mid-message would cut the remaining fragments at a
    /// different boundary than the peer expects.
    func testDmtuChangeIsDeferredWhileAMessageIsBeingReassembled() {
        channel.feed(BlePackets.fastCtrPacket(frameCount: 2, pkgType: BlePackets.pkgCommonData))
        channel.setDmtu(200)
        XCTAssertEqual(channel.dmtu, dmtu, "must not change with a message in flight")

        channel.feed(BlePackets.dataPacket(seq: 1, payload: Data([1])))
        channel.feed(BlePackets.dataPacket(seq: 2, payload: Data([2])))
        XCTAssertEqual(channel.dmtu, 200, "applied once the message completed")
    }

    // MARK: - Inbound

    func testInboundSinglePacketIsAckedAutomatically() {
        // The pairing channel's peer waits for this ACK before continuing.
        channel.feed(BlePackets.singlePacket(pkgType: BlePackets.pkgStarryData,
                                             payload: Data([1, 2, 3])))

        XCTAssertEqual(received.first?.payload, Data([1, 2, 3]))
        XCTAssertEqual(parsed.map(\.type), [BlePackets.typeSingleAck])
        XCTAssertEqual(parsed[0].ackStatus, BlePackets.ackSuccess)
    }

    func testInboundNoAckPacketIsDeliveredWithoutAnAck() {
        channel.feed(BlePackets.singleNoAckPacket(pkgType: BlePackets.pkgCommonData,
                                                   payload: Data([9])))
        XCTAssertEqual(received.count, 1)
        XCTAssertTrue(written.isEmpty)
    }

    func testInboundCtrIsAnsweredWithReady() {
        channel.feed(BlePackets.ctrPacket(frameCount: 2, pkgType: BlePackets.pkgCommonData))

        XCTAssertEqual(parsed.map(\.type), [BlePackets.typeAck])
        XCTAssertEqual(parsed[0].ackStatus, BlePackets.ackReady)
        XCTAssertTrue(received.isEmpty, "nothing is delivered until the fragments arrive")
    }

    func testMixCtrWithNoFragmentsIsDeliveredImmediately() {
        // frameCount 0 means the whole message fit in the control packet.
        channel.feed(BlePackets.mixCtrPacket(frameCount: 0, pkgType: BlePackets.pkgCommonData,
                                             firstChunk: Data([7, 7])))
        XCTAssertEqual(received.first?.payload, Data([7, 7]))
    }

    func testPkgTypeIsPassedThroughToTheReceiver() {
        channel.feed(BlePackets.singleNoAckPacket(pkgType: BlePackets.pkgStarryData,
                                                   payload: Data([1])))
        XCTAssertEqual(received.first?.pkgType, BlePackets.pkgStarryData)
    }

    // MARK: - ACK waits

    func testSingleAckedSendResolvesOnTheMatchingAck() {
        var status: Int?
        channel.sendSingleAcked(payload(8), pkgType: BlePackets.pkgStarryData) { status = $0 }

        XCTAssertEqual(parsed.map(\.type), [BlePackets.typeSingleCmd])
        XCTAssertNil(status, "the callback waits for the peer")

        channel.feed(BlePackets.singleAckPacket(status: BlePackets.ackSuccess))
        XCTAssertEqual(status, BlePackets.ackSuccess)
    }

    func testSingleAckedSendFallsBackToCtrWhenItDoesNotFit() {
        channel.sendSingleAcked(payload(100), pkgType: BlePackets.pkgStarryData) { _ in }
        XCTAssertEqual(parsed[0].type, BlePackets.typeCmd)
        XCTAssertEqual(parsed.count, 1, "fragments wait for ACK(READY)")
    }

    /// The two-stage CTR handshake: nothing is streamed until the peer says it is
    /// ready, and the caller is only told once the transfer is acknowledged.
    func testCtrSendStreamsOnlyAfterReadyAndReportsFinalStatus() {
        var status: Int?
        channel.sendCtrAcked(payload(50), pkgType: BlePackets.pkgStarryData) { status = $0 }

        XCTAssertEqual(parsed.map(\.type), [BlePackets.typeCmd])
        XCTAssertEqual(parsed[0].frameCount, 3)

        channel.feed(BlePackets.ackPacket(status: BlePackets.ackReady))
        XCTAssertEqual(parsed.dropFirst().map(\.sn), [1, 2, 3])
        XCTAssertNil(status)

        channel.feed(BlePackets.ackPacket(status: BlePackets.ackSuccess))
        XCTAssertEqual(status, BlePackets.ackSuccess)
    }

    func testCtrSendReportsFailureWithoutStreamingAnything() {
        var status: Int?
        channel.sendCtrAcked(payload(50), pkgType: BlePackets.pkgStarryData) { status = $0 }
        channel.feed(BlePackets.ackPacket(status: BlePackets.ackBusy))

        XCTAssertEqual(status, BlePackets.ackBusy)
        XCTAssertEqual(written.count, 1, "a busy peer must not be sent fragments")
    }

    func testAckTimesOutRatherThanHangingTheHandshake() {
        // Without this, a lost ACK parks pairing forever with no error.
        let done = expectation(description: "ack timeout")
        var status: Int?
        scheduler.run { [self] in
            channel.sendSingleAcked(payload(8), pkgType: BlePackets.pkgStarryData) {
                status = $0
                done.fulfill()
            }
        }

        wait(for: [done], timeout: 10)
        XCTAssertEqual(status, BlePackets.ackTimeout)
    }

    func testShutdownDropsPendingWaitersAndPartialMessages() {
        channel.sendSingleAcked(payload(8), pkgType: BlePackets.pkgStarryData) { _ in
            XCTFail("a waiter must not fire after shutdown")
        }
        channel.feed(BlePackets.fastCtrPacket(frameCount: 2, pkgType: BlePackets.pkgCommonData))
        channel.feed(BlePackets.dataPacket(seq: 1, payload: Data([1])))

        channel.shutdown()
        channel.feed(BlePackets.singleAckPacket(status: BlePackets.ackSuccess))
        channel.feed(BlePackets.dataPacket(seq: 2, payload: Data([2])))

        XCTAssertTrue(received.isEmpty, "the abandoned message must not surface later")
    }
}
