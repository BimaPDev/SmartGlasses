import XCTest
@testable import MyvuCore

/// The "system" family has TWO payload shapes and using the wrong one is a
/// silent no-op on the device, so both are pinned here.
final class SystemSettingsTests: XCTestCase {
    private func data(_ json: String) -> [String: Any] {
        TestJson.nested(TestJson.object(json), "data")
    }

    func testVolumeIsFlatAndSendsItsValueAsAString() {
        let d = data(SystemSettings.setVolume(7))
        XCTAssertEqual(TestJson.string(d, "action"), "set_volume")
        // A string, not a number. An int here is ignored.
        XCTAssertEqual(TestJson.string(d, "value"), "7")
        XCTAssertEqual(TestJson.int(d, "streamType"), 3)
        XCTAssertEqual(TestJson.bool(d, "needReply"), false)
    }

    func testBrightnessIsFlatAndSendsItsValueAsAString() {
        let d = data(SystemSettings.setBrightness(8))
        XCTAssertEqual(TestJson.string(d, "action"), "set_brightness")
        XCTAssertEqual(TestJson.string(d, "value"), "8")
        XCTAssertNil(d["value"] as? NSNumber, "brightness must not be a number")
    }

    func testWifiIsFlatWithABooleanValue() {
        let d = data(SystemSettings.toggleWifi(true))
        XCTAssertEqual(TestJson.string(d, "action"), "toggle_wifi")
        XCTAssertEqual(TestJson.bool(d, "value"), true)
    }

    func testDemoModeIsFlatWithABooleanValue() {
        let d = data(SystemSettings.setDemoMode(true))
        XCTAssertEqual(TestJson.string(d, "action"), "set_demo_mode")
        XCTAssertEqual(TestJson.bool(d, "value"), true)
        XCTAssertNil(d["value"] as? [String: Any],
                     "demo mode must not nest under a wrapper object")
    }

    func testDemoModeOffIsFalseNotOmitted() {
        XCTAssertEqual(TestJson.bool(data(SystemSettings.setDemoMode(false)), "value"), false)
    }

    func testZenModeIsNestedUnderItsOwnName() {
        let d = data(SystemSettings.setZenMode(true))
        XCTAssertEqual(TestJson.string(d, "action"), "set_zen_mode")
        // value is an OBJECT whose single key repeats the setting name.
        XCTAssertEqual(TestJson.bool(TestJson.nested(d, "value"), "zen_mode"), true)
    }

    func testAirModeIsNested() {
        let d = data(SystemSettings.setAirMode(false))
        XCTAssertEqual(TestJson.string(d, "action"), "set_air_mode")
        XCTAssertEqual(TestJson.bool(TestJson.nested(d, "value"), "air_mode"), false)
    }

    func testDeviceNameIsNested() {
        let d = data(SystemSettings.setDeviceName("MyvuiOS"))
        XCTAssertEqual(TestJson.string(TestJson.nested(d, "value"), "device_name"), "MyvuiOS")
    }

    func testScreenOffTimeIsANumberNotAString() {
        let d = data(SystemSettings.setScreenOffTime(30))
        XCTAssertEqual(TestJson.int(TestJson.nested(d, "value"), "screen_off_time"), 30)
    }

    func testStandbyPositionIsNested() {
        let d = data(SystemSettings.setStandbyPosition(2))
        XCTAssertEqual(TestJson.int(TestJson.nested(d, "value"), "standby_position"), 2)
    }

    /// `set_fov_pos_type` nests its value under `fov_pos`, NOT under a key
    /// matching the action name — the one exception in the family.
    func testFovPosTypeUsesAKeyThatDoesNotMatchItsActionName() {
        let value = TestJson.nested(data(SystemSettings.setFovPosType(1)), "value")
        XCTAssertEqual(TestJson.int(value, "fov_pos"), 1)
        XCTAssertNil(value["fov_pos_type"])
    }

    func testLanguageSendsLanguageAndCountrySideBySide() {
        let value = TestJson.nested(data(SystemSettings.setLanguage(language: "en",
                                                                   country: "US")), "value")
        XCTAssertEqual(TestJson.string(value, "language"), "en")
        XCTAssertEqual(TestJson.string(value, "country"), "US")
    }

    func testQueriesCarryNothingButTheirAction() {
        let d = data(SystemSettings.query("get_device_info"))
        XCTAssertEqual(TestJson.string(d, "action"), "get_device_info")
        XCTAssertEqual(d.count, 1, "a query must not carry a value")
    }

    func testEveryBuilderUsesTheSystemEnvelope() {
        for json in [SystemSettings.setVolume(1), SystemSettings.setBrightness(1),
                     SystemSettings.toggleWifi(true), SystemSettings.setDemoMode(true),
                     SystemSettings.setZenMode(true),
                     SystemSettings.query("get_brightness")] {
            XCTAssertEqual(TestJson.string(TestJson.object(json), "action"), "system")
        }
    }

    func testGlassLogUsesTheUserFeedbackEnvelope() {
        let json = TestJson.object(GlassLog.request(channel: "BLE",
                                                    filePath: "/tmp/myvu-ulog/"))
        XCTAssertEqual(TestJson.string(json, "action"), "user_feedback")
        let d = TestJson.nested(json, "data")
        XCTAssertEqual(TestJson.string(d, "action"), "get_glass_log")
        XCTAssertEqual(TestJson.string(d, "channel"), "BLE")
        XCTAssertEqual(TestJson.string(d, "filePath"), "/tmp/myvu-ulog/")
    }

    func testGlassScreenshotValueIsAJsonStringNotAnObject() {
        let json = TestJson.object(GlassScreenshot.request(useEncoding: true))
        XCTAssertEqual(TestJson.string(json, "action"), "screenshot")
        let d = TestJson.nested(json, "data")
        XCTAssertEqual(TestJson.string(d, "action"), "get_glass_screenshot")
        // value is a STRING containing serialised GlassScreenshotReq.
        guard let value = TestJson.string(d, "value") else {
            return XCTFail("screenshot value must be a JSON string")
        }
        XCTAssertNil(d["value"] as? [String: Any])
        let inner = TestJson.object(value)
        XCTAssertEqual(TestJson.bool(inner, "useEncoding"), true)
        XCTAssertNil(inner["filePath"], "nil filePath must be omitted, not null")
    }

    // MARK: - Clock

    func testClockSyncSendsMillisAsAStringAndOffsetAsANumber() {
        let d = data(ClockSync.build(nowMs: 1_784_488_002_000,
                                     timeZone: TimeZone(identifier: "Europe/Berlin")!))
        // syncTimeData is a STRING; timeZoneOffSet is a number of MILLISECONDS.
        XCTAssertEqual(TestJson.string(d, "syncTimeData"), "1784488002000")
        XCTAssertEqual(TestJson.int(d, "timeZoneOffSet"), 7_200_000) // CEST, +2h
    }

    func testClockSyncOffsetFollowsDaylightSaving() {
        // Same zone, mid-winter: +1h rather than +2h.
        let d = data(ClockSync.build(nowMs: 1_768_000_000_000,
                                     timeZone: TimeZone(identifier: "Europe/Berlin")!))
        XCTAssertEqual(TestJson.int(d, "timeZoneOffSet"), 3_600_000)
    }

    func testClockSyncUsesTheCapturedActionName() {
        XCTAssertEqual(TestJson.string(TestJson.object(ClockSync.build()), "action"),
                       "SyncOffSetTime")
    }

    func testInboundTimeSyncIsARequestOnlyWhenItCarriesNoTime() {
        // The glasses ask by omitting syncTimeData. Answering a message that
        // already has it would loop with our own echo.
        XCTAssertTrue(ClockSync.isRequest(
            JsonReader(parsing: #"{"action":"SyncOffSetTime","data":{}}"#)!))
        XCTAssertTrue(ClockSync.isRequest(
            JsonReader(parsing: #"{"action":"SyncOffSetTime"}"#)!))
        XCTAssertFalse(ClockSync.isRequest(JsonReader(parsing: ClockSync.build())!))
        XCTAssertFalse(ClockSync.isRequest(
            JsonReader(parsing: #"{"action":"weather"}"#)!))
    }
}
