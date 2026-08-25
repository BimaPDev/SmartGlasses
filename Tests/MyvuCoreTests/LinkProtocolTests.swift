import XCTest
@testable import MyvuCore

final class LinkProtocolTests: XCTestCase {
    func testSppShortUuidIsDecodedLittleEndian() {
        // The captured payload 21 91 00 00 is 0x9121 (37153) little-endian,
        // which sits inside SecureRandom.nextInt(65535). Big-endian would give
        // 0x21910000 — far out of range, which is how the endianness was
        // established in the first place.
        XCTAssertEqual(LinkProtocol.sppShortUuidToString(Hex.decode("21910000")),
                       "00009121-0000-1000-8000-00805f9b34fb")
    }

    func testSppShortUuidPadsToFourHexDigits() {
        XCTAssertEqual(LinkProtocol.sppShortUuidToString(Hex.decode("42000000")),
                       "00000042-0000-1000-8000-00805f9b34fb")
    }

    func testSppShortUuidRejectsShortPayload() {
        XCTAssertNil(LinkProtocol.sppShortUuidToString(Data([1, 2])))
    }

    func testLinkProtocolRoundTrips() {
        let mac = Hex.decode("7ca375d094f1")
        let payload = Data([9, 8, 7])

        let m = LinkProtocol.parse(
            LinkProtocol.build(identifier: mac, cmd: LinkCommands.sppServerUuidSync,
                               data: payload))

        XCTAssertEqual(m.deviceId, DeviceId.deal(mac))
        XCTAssertEqual(m.cmd, LinkCommands.sppServerUuidSync)
        XCTAssertEqual(m.data, payload)
    }

    func testEmptyDataFieldIsOmittedAndParsesBack() {
        let mac = Hex.decode("7ca375d094f1")
        let m = LinkProtocol.parse(LinkProtocol.build(identifier: mac,
                                                      cmd: LinkCommands.initCmd))
        XCTAssertEqual(m.cmd, LinkCommands.initCmd)
        XCTAssertTrue(m.data.isEmpty)
    }

    func testWriteSwitchInfoOmitsZeroCode() {
        let info = Data([1, 2, 3])
        // code == 0 is omitted entirely; field 2 still parses either way.
        XCTAssertEqual(
            LinkProtocol.parseWriteSwitchInfo(LinkProtocol.writeSwitchInfo(info: info, code: 0)),
            info)
        XCTAssertEqual(
            LinkProtocol.parseWriteSwitchInfo(LinkProtocol.writeSwitchInfo(info: info, code: 5)),
            info)
    }

    func testDeviceInfoRoundTrips() {
        let encoded = DeviceInfo.build(btMac: "AA:BB:CC:DD:EE:FF", companyId: "",
                                       categoryId: "9999", modelId: "", name: "MyvuiOS",
                                       battery: 100, btStatus: 0)
        let d = DeviceInfo.parse(encoded)

        XCTAssertEqual(d.btMac, "AA:BB:CC:DD:EE:FF")
        XCTAssertEqual(d.categoryId, "9999")
        XCTAssertEqual(d.name, "MyvuiOS")
        XCTAssertEqual(d.battery, 100)
        XCTAssertEqual(d.btStatus, 0)
    }

    func testMacHelpersAcceptCommonSeparators() {
        // Synthetic address: the helpers only care about separators and case.
        let expected = Hex.decode("123456789abc")
        XCTAssertEqual(DeviceId.macToBytes("12:34:56:78:9A:BC"), expected)
        XCTAssertEqual(DeviceId.macToBytes("12-34-56-78-9a-bc"), expected)
        XCTAssertEqual(DeviceId.macToHex("12:34:56:78:9A:BC"), "123456789abc")
    }

    func testAbilityHandshakeCarriesTheAdvertisedAbilities() {
        let msg = Session.buildAbilityMessage(deviceIdHex: "aabbccddeeff",
                                              deviceName: "MyvuiOS", session: "1234")
        // Class byte 0x02 identifies a StreamReq.
        XCTAssertEqual(msg.first, Session.authClassByte)

        let fields = Pb.parse(msg.dropFirst())
        // AUTH is stream type 0, which is omitted from the wire.
        XCTAssertNil(Pb.first(fields, 1))
        XCTAssertEqual(Pb.firstString(fields, 3), "aabbccddeeff")

        let bean = TestJson.object(Pb.firstString(fields, 4))
        XCTAssertEqual(TestJson.array(bean, "ability").count, 4)
        XCTAssertEqual(TestJson.string(bean, "session"), "1234")
        XCTAssertEqual(TestJson.string(bean, "version"), Session.defaultVersion)
        XCTAssertEqual(TestJson.int(bean, "weight"), Session.defaultWeight)
    }

    func testAuthSuccessCarriesTypeAndTimestamp() {
        let msg = Session.buildAuthSuccessMessage(deviceIdHex: "aabbccddeeff",
                                                  deviceName: "MyvuiOS", session: "1234",
                                                  nowMs: 1_739_000_000_000)
        let fields = Pb.parse(msg.dropFirst())
        XCTAssertEqual(Pb.firstVarint(fields, 1, 0), UInt64(Session.streamAuthSuccess))
        // Field 12 only appears on AUTH_SUCCESS.
        XCTAssertEqual(Pb.firstVarint(fields, 12, 0), 1_739_000_000_000)
    }

    func testAbilityReplyParses() {
        // The glasses answer with the same StreamReq shape.
        let reply = Session.buildAbilityMessage(deviceIdHex: "0e6b2f8a5c83",
                                                deviceName: "MYVU", session: "9")
        let parsed = Session.parseAbilityReply(reply)
        XCTAssertEqual(parsed.deviceId, "0e6b2f8a5c83")
        XCTAssertNotNil(parsed.authBeanJson)
        XCTAssertTrue(parsed.authBeanJson?.contains("abilityShare") == true,
                       "abilityShare is required to receive HUD screenshots")
    }

    func testClassicLinkUpIncludesExistConnectedBt() {
        // The glasses' steady iOS state is 9, not HFP/A2DP. Treating 9 as down
        // made IOS_CONNECT_BT keep forcing a fresh pair and drop Bluetooth.
        XCTAssertTrue(LinkCommands.isClassicLinkUp(LinkCommands.btStatusExistConnectedBt))
        XCTAssertTrue(LinkCommands.isClassicLinkUp(LinkCommands.btStatusConnectedHfp))
        XCTAssertTrue(LinkCommands.isClassicLinkUp(LinkCommands.btStatusConnectedA2dp))
        XCTAssertFalse(LinkCommands.isClassicLinkUp(LinkCommands.btStatusNoConnectedBt))
        XCTAssertFalse(LinkCommands.isClassicLinkUp(LinkCommands.btStatusDisconnected))
        XCTAssertFalse(LinkCommands.isClassicLinkUp(LinkCommands.btStatusConnectFail))
    }
}
