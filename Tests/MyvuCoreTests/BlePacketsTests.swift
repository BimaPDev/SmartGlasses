import XCTest
@testable import MyvuCore

/// The BLE packet codec, the LinkProtocol protobuf, and `dealDeviceId`, all
/// validated against real captured bytes.
final class BlePacketsTests: XCTestCase {
    func testDealDeviceIdMatchesTheWire() {
        XCTAssertEqual(DeviceId.deal(CapturedFrames.phoneMac), CapturedFrames.phoneDeviceId)
    }

    func testDealDeviceIdIsItsOwnInverse() {
        // Reverse + bitwise-NOT is an involution, which is why the same helper
        // works in both directions.
        XCTAssertEqual(DeviceId.deal(DeviceId.deal(CapturedFrames.phoneMac)),
                       CapturedFrames.phoneMac)
    }

    func testFastCtrNegotiationPacketParses() {
        let p = BlePackets.parse(CapturedFrames.f479)
        XCTAssertEqual(p.type, BlePackets.typeFastCtr)
        XCTAssertEqual(p.pkgType, BlePackets.pkgStarryDataInit)
        XCTAssertEqual(p.frameCount, 1)
        XCTAssertFalse(p.isData)
    }

    func testVersionJsonReassemblesFromDataFragment() {
        let p = BlePackets.parse(CapturedFrames.f480)
        XCTAssertTrue(p.isData)
        XCTAssertEqual(p.sn, 1)

        let own = TestJson.object(String(data: p.value, encoding: .utf8) ?? "")
        XCTAssertEqual(TestJson.string(own, "i"), "7ca375d094f1")
        XCTAssertEqual(TestJson.int(own, "e"), 5)
        XCTAssertEqual(TestJson.int(own, "v"), 3)
    }

    func testGlassesReplyIsSingleNoAckAndNegotiatesCbc() {
        let p = BlePackets.parse(CapturedFrames.f483)
        XCTAssertEqual(p.type, BlePackets.typeSingleCmdNoAck)

        let peer = TestJson.object(String(data: p.value, encoding: .utf8) ?? "")
        // e=1 → AES/CBC. This is the mode a real session actually used, which is
        // why the crypto tests exercise CBC hardest.
        XCTAssertEqual(TestJson.int(peer, "e"), 1)
    }

    func testWriteSwitchKeyFrameDecodesFully() {
        let p = BlePackets.parse(CapturedFrames.f484)
        XCTAssertEqual(p.type, BlePackets.typeSingleCmd)
        XCTAssertEqual(p.pkgType, BlePackets.pkgStarryData)

        let lp = LinkProtocol.parse(p.value)
        XCTAssertEqual(lp.deviceId, CapturedFrames.phoneDeviceId)
        XCTAssertEqual(lp.cmd, LinkCommands.writeSwitchKey)

        let (key, info) = LinkProtocol.parseWriteSwitchKey(lp.data)
        XCTAssertEqual(info, CapturedFrames.phoneMac)
        XCTAssertEqual(key.count, 91, "P-256 SPKI DER is 91 bytes")
        XCTAssertEqual(key[key.startIndex], 0x30)
        XCTAssertEqual(key[key.startIndex + 1], 0x59)
    }

    /// The highest-value test in the suite: re-encoding the captured
    /// WRITE_SWITCH_KEY must reproduce it byte for byte. One assertion validates
    /// the protobuf writer, `dealDeviceId`, and little-endian packet framing
    /// simultaneously — if the BLE layer's endianness is wrong anywhere, this
    /// fails immediately.
    func testReEncodingReproducesCapturedFrameExactly() {
        let p = BlePackets.parse(CapturedFrames.f484)
        let (key, _) = LinkProtocol.parseWriteSwitchKey(LinkProtocol.parse(p.value).data)

        let rebuilt = BlePackets.singlePacket(
            pkgType: BlePackets.pkgStarryData,
            payload: LinkProtocol.build(
                identifier: CapturedFrames.phoneMac,
                cmd: LinkCommands.writeSwitchKey,
                data: LinkProtocol.writeSwitchKey(key: key, info: CapturedFrames.phoneMac)))

        XCTAssertEqual(rebuilt, CapturedFrames.f484)
    }

    func testControlPacketEncodersAreLittleEndian() {
        // frameCount 1 must land as 01 00, not 00 01.
        XCTAssertEqual(BlePackets.fastCtrPacket(frameCount: 1,
                                                pkgType: BlePackets.pkgStarryDataInit),
                       CapturedFrames.f479)

        let ctr = [UInt8](BlePackets.ctrPacket(frameCount: 258,
                                               pkgType: BlePackets.pkgCommonData))
        XCTAssertEqual(ctr[4], 0x02)
        XCTAssertEqual(ctr[5], 0x01)
    }

    func testDataPacketRoundTrips() {
        let payload = Data("hello glasses".utf8)
        let p = BlePackets.parse(BlePackets.dataPacket(seq: 7, payload: payload))
        XCTAssertTrue(p.isData)
        XCTAssertEqual(p.sn, 7)
        XCTAssertEqual(p.value, payload)
    }

    func testMixCtrCarriesFrameCountAndFirstChunk() {
        let chunk = Data([1, 2, 3, 4])
        let p = BlePackets.parse(BlePackets.mixCtrPacket(frameCount: 3,
                                                         pkgType: BlePackets.pkgCommonData,
                                                         firstChunk: chunk))
        XCTAssertEqual(p.type, BlePackets.typeMixCtr)
        XCTAssertEqual(p.frameCount, 3)
        XCTAssertEqual(p.value, chunk)
    }

    func testAckStatusDecodes() {
        let p = BlePackets.parse(BlePackets.singleAckPacket(status: BlePackets.ackSuccess))
        XCTAssertEqual(p.type, BlePackets.typeSingleAck)
        XCTAssertEqual(p.ackStatus, BlePackets.ackSuccess)
    }

    func testShortAndEmptyBuffersDoNotCrash() {
        // Inbound data comes off a radio; truncated reads must not throw.
        XCTAssertEqual(BlePackets.parse(Data()).sn, 0)
        XCTAssertEqual(BlePackets.parse(Data([0])).sn, 0)
        XCTAssertEqual(BlePackets.parse(Data([0, 0])).type, -1)
    }
}
