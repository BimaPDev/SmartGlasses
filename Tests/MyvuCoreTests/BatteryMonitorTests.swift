import XCTest
@testable import MyvuCore

final class BatteryMonitorTests: XCTestCase {
    /// The shape `GlassHelper` parses: `value` is a JSON string.
    private func push(_ percent: Int, charging: Bool = false) -> JsonReader {
        let inner = "{\\\"battery\\\":\(percent),\\\"isCharging\\\":\(charging)}"
        let json = "{\"action\":\"sync_glass_battery_info\",\"value\":\"\(inner)\"}"
        return JsonReader(parsing: json)!
    }

    // MARK: - Parsing

    func testTheBatteryPushIsParsedFromAJsonStringValue() throws {
        let battery = try XCTUnwrap(BatteryFeed.parse(push(84)))
        XCTAssertEqual(battery.percent, 84)
        XCTAssertFalse(battery.isCharging)

        let charging = try XCTUnwrap(BatteryFeed.parse(push(84, charging: true)))
        XCTAssertTrue(charging.isCharging)
    }

    func testANestedObjectValueIsAcceptedToo() throws {
        // Not what the current firmware sends, but a tightening we should
        // survive rather than go silent on.
        let json = """
        {"action":"sync_glass_battery_info","value":{"battery":42,"isCharging":false}}
        """
        let battery = try XCTUnwrap(BatteryFeed.parse(JsonReader(parsing: json)!))
        XCTAssertEqual(battery.percent, 42)
    }

    func testUnrelatedMessagesAndNonsenseLevelsAreIgnored() {
        let other = #"{"action":"sync_glass_update_progress","value":"40"}"#
        XCTAssertNil(BatteryFeed.parse(JsonReader(parsing: other)!))

        let silly = #"{"action":"sync_glass_battery_info","value":"{\"battery\":220}"}"#
        XCTAssertNil(BatteryFeed.parse(JsonReader(parsing: silly)!))

        let empty = #"{"action":"sync_glass_battery_info","value":"{}"}"#
        XCTAssertNil(BatteryFeed.parse(JsonReader(parsing: empty)!))
    }

    // MARK: - Thresholds

    func testEachThresholdFiresOnceAsTheBatteryFalls() {
        let monitor = BatteryMonitor()
        var fired: [Int] = []
        for percent in stride(from: 100, through: 5, by: -1) {
            if let t = monitor.update(GlassesBattery(percent: percent, isCharging: false)) {
                fired.append(t)
            }
        }
        XCTAssertEqual(fired, [80, 50, 40, 20, 10])
    }

    func testAThresholdDoesNotRepeatWhileTheBatterySitsBelowIt() {
        let monitor = BatteryMonitor()
        monitor.seed(percent: 100)
        XCTAssertEqual(monitor.update(GlassesBattery(percent: 20, isCharging: false)), 20)
        // The glasses keep pushing; none of these is news.
        for percent in [20, 19, 18, 17] {
            XCTAssertNil(monitor.update(GlassesBattery(percent: percent, isCharging: false)),
                         "\(percent)% re-announced")
        }
    }

    func testOnlyTheLowestThresholdIsAnnouncedWhenADropSkipsSeveral() {
        let monitor = BatteryMonitor()
        monitor.seed(percent: 100)
        // A gap in the pushes takes 55 straight to 38, crossing 50 and 40.
        XCTAssertEqual(monitor.update(GlassesBattery(percent: 55, isCharging: false)), 80)
        XCTAssertEqual(monitor.update(GlassesBattery(percent: 38, isCharging: false)), 40)
        // 50 must not turn up afterwards as a leftover.
        XCTAssertNil(monitor.update(GlassesBattery(percent: 37, isCharging: false)))
    }

    func testChargingIsSilentAndRearmsTheThresholdsItPasses() {
        let monitor = BatteryMonitor()
        monitor.seed(percent: 100)
        XCTAssertEqual(monitor.update(GlassesBattery(percent: 45, isCharging: false)), 50)

        // Plugged in and climbing: not one of these is worth a banner.
        for percent in [46, 55, 70, 90] {
            XCTAssertNil(monitor.update(GlassesBattery(percent: percent, isCharging: true)),
                         "charging through \(percent)% alerted")
        }
        // Unplugged, and 50 is live again.
        XCTAssertEqual(monitor.update(GlassesBattery(percent: 50, isCharging: false)), 50)
    }

    func testAReadingThatDithersAcrossAThresholdOnlyAlertsOnce() {
        let monitor = BatteryMonitor()
        monitor.seed(percent: 100)
        XCTAssertEqual(monitor.update(GlassesBattery(percent: 20, isCharging: false)), 20)
        // 21 is within the hysteresis band, so it does not re-arm.
        for percent in [21, 20, 21, 20, 22] {
            XCTAssertNil(monitor.update(GlassesBattery(percent: percent, isCharging: false)),
                         "dithering at \(percent)% alerted again")
        }
    }

    func testConnectingBelowAThresholdAnnouncesNothingItDidNotSeeCross() {
        let monitor = BatteryMonitor()
        // First thing we ever hear is 8%: nothing was crossed while we watched.
        XCTAssertNil(monitor.update(GlassesBattery(percent: 8, isCharging: false)))
        XCTAssertNil(monitor.update(GlassesBattery(percent: 7, isCharging: false)))
        // A charge and a fresh fall does alert.
        XCTAssertNil(monitor.update(GlassesBattery(percent: 60, isCharging: true)))
        XCTAssertEqual(monitor.update(GlassesBattery(percent: 50, isCharging: false)), 50)
    }

    func testHandleParsesAndFiresInOneStep() throws {
        let monitor = BatteryMonitor()
        monitor.seed(percent: 100)
        XCTAssertNil(monitor.handle(inbound: push(85)))
        let hit = try XCTUnwrap(monitor.handle(inbound: push(80)))
        XCTAssertEqual(hit.threshold, 80)
        XCTAssertEqual(hit.battery.percent, 80)
    }
}
