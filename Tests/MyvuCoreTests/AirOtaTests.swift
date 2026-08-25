import XCTest
@testable import MyvuCore

final class AirOtaTests: XCTestCase {
    func testOpenSendsEmptyValueString() {
        let json = AirOta.buildOpen()
        let env = TestJson.object(json)
        XCTAssertEqual(TestJson.string(env, "action"), "air_ota")
        let data = TestJson.nested(env, "data")
        XCTAssertEqual(TestJson.string(data, "action"), "open_air_glass_update_app")
        XCTAssertEqual(TestJson.string(data, "value"), "")
        XCTAssertNil(data["value"] as? [String: Any], "value must be a string, not an object")
    }

    func testFileInfoValueIsAStringContainingAJsonArray() {
        let files = [
            OtaFile(fileName: AirOta.bthName, data: Data(repeating: 1, count: 1_341_116)),
            OtaFile(fileName: AirOta.m55Name, data: Data(repeating: 2, count: 6_771_708)),
        ]
        let json = AirOta.buildSyncFileInfo(files)
        let data = TestJson.nested(TestJson.object(json), "data")
        XCTAssertEqual(TestJson.string(data, "action"), "sync_air_update_file_info")
        let value = TestJson.string(data, "value")
        XCTAssertEqual(
            value,
            #"[{"fileName":"best1600_watch_bth.bin","fileSize":1341116},{"fileName":"platform_tester.bin","fileSize":6771708}]"#)
        XCTAssertNil(data["value"] as? [Any], "Gson binds value as a String")
    }

    func testSuccessReplyKeepsCodeInsideTheValueString() {
        let json = AirOta.success(subAction: AirOta.requestSendFile)
        let data = TestJson.nested(TestJson.object(json), "data")
        XCTAssertEqual(TestJson.string(data, "action"), "request_send_air_update_file")
        XCTAssertEqual(TestJson.string(data, "value"), #"{"code":0,"msg":"success"}"#)
    }

    func testParseInboundReadsStringValueAndFileName() {
        let body = AirOta.envelope(
            subAction: AirOta.requestSendFile,
            value: #"{"fileName":"platform_tester.bin"}"#)
        let parsed = AirOta.parseInbound(JsonReader(parsing: body)!)
        XCTAssertEqual(parsed?.subAction, AirOta.requestSendFile)
        XCTAssertEqual(AirOta.parseFileName(parsed!.value), "platform_tester.bin")
    }

    func testParseInboundAcceptsAnEmbeddedValueObject() {
        let body = #"{"action":"air_ota","data":{"action":"request_send_air_update_file","value":{"fileName":"best1600_watch_bth.bin"}}}"#
        let parsed = AirOta.parseInbound(JsonReader(parsing: body)!)
        XCTAssertEqual(AirOta.parseFileName(parsed!.value), AirOta.bthName)
    }

    func testZipStoreRoundTrip() throws {
        let payload = Data("hello ota".utf8)
        let zip = Self.storeZip(name: "platform_tester.bin", payload: payload)
        let entries = try ZipArchive.entries(from: zip)
        XCTAssertEqual(entries["platform_tester.bin"], payload)
    }

    func testFilesFromOfficialBimaZipIfPresent() throws {
        let root = URL(fileURLWithPath: #filePath)
            .deletingLastPathComponent()
            .deletingLastPathComponent()
            .deletingLastPathComponent()
        let zip = root.appendingPathComponent(
            "Reverse/firmware/patched_bima/ota_star-air_1.0.12.83_BIMA.zip")
        try XCTSkipUnless(FileManager.default.fileExists(atPath: zip.path),
                          "BIMA zip is not in this checkout")
        let files = try AirOta.files(fromZip: Data(contentsOf: zip))
        XCTAssertEqual(files.map(\.fileName), [AirOta.bthName, AirOta.m55Name])
        XCTAssertEqual(files[0].fileSize, 1_341_116)
        XCTAssertEqual(files[1].fileSize, 6_771_708)
        XCTAssertEqual(files[0].md5, "05d0138bb6969ce4c25ceb0da5ec07a4")
        XCTAssertEqual(files[1].md5, "f60d051d05649e5552d70e1176f82fb7")
    }

    /// STORE-method zip with one local-file header and a central-directory marker.
    private static func storeZip(name: String, payload: Data) -> Data {
        let nameData = Data(name.utf8)
        var local = Data()
        local.append(contentsOf: [0x50, 0x4b, 0x03, 0x04])
        local.append(contentsOf: [0x14, 0x00, 0x00, 0x00, 0x00, 0x00])
        local.append(contentsOf: [0x00, 0x00, 0x00, 0x00])
        local.append(contentsOf: [0x00, 0x00, 0x00, 0x00])
        func u32(_ n: UInt32) -> [UInt8] {
            [UInt8(n & 0xFF), UInt8((n >> 8) & 0xFF),
             UInt8((n >> 16) & 0xFF), UInt8((n >> 24) & 0xFF)]
        }
        func u16(_ n: UInt16) -> [UInt8] {
            [UInt8(n & 0xFF), UInt8((n >> 8) & 0xFF)]
        }
        local.append(contentsOf: u32(UInt32(payload.count)))
        local.append(contentsOf: u32(UInt32(payload.count)))
        local.append(contentsOf: u16(UInt16(nameData.count)))
        local.append(contentsOf: u16(0))
        local.append(nameData)
        local.append(payload)
        local.append(contentsOf: [0x50, 0x4b, 0x01, 0x02])
        return local
    }
}
