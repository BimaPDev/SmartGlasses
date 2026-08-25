import XCTest
@testable import MyvuCore

final class TrackpadTests: XCTestCase {
    private func data(_ json: String) -> [String: Any] {
        TestJson.nested(TestJson.object(json), "data")
    }

    func testTapsCarryTheirActionAndATimestamp() {
        for (json, expected) in [(Trackpad.click(nowMs: 5), "click"),
                                 (Trackpad.doubleClick(nowMs: 5), "doubleClick"),
                                 (Trackpad.longPress(nowMs: 5), "longPress"),
                                 (Trackpad.start(nowMs: 5), "start"),
                                 (Trackpad.stop(nowMs: 5), "stop")] {
            XCTAssertEqual(TestJson.string(TestJson.object(json), "action"), "phonepad")
            let d = data(json)
            XCTAssertEqual(TestJson.string(d, "action"), expected)
            XCTAssertEqual(TestJson.int(d, "time"), 5)
        }
    }

    func testSwipeUsesGestureModeWithTheDirectionAsActionType() {
        let d = data(Trackpad.swipe(direction: Trackpad.swipeLeft, startX: 100, startY: 200,
                                    endX: 20, endY: 200, speedX: -1.5, speedY: 0, nowMs: 9))
        XCTAssertEqual(TestJson.string(d, "action"), "gestureMode")
        XCTAssertEqual(TestJson.int(d, "actionType"), Trackpad.swipeLeft)
        XCTAssertEqual(TestJson.double(d, "startX"), 100)
        XCTAssertEqual(TestJson.double(d, "endX"), 20)
        XCTAssertEqual(TestJson.double(d, "speedX"), -1.5)
        XCTAssertEqual(TestJson.int(d, "time"), 9)
    }

    /// The direction codes are Android `KeyEvent` values. They are part of the
    /// wire protocol rather than a platform detail, so they must keep these exact
    /// values on iOS.
    func testDirectionCodesMatchTheAndroidKeyEventValues() {
        XCTAssertEqual(Trackpad.swipeUp, 19)
        XCTAssertEqual(Trackpad.swipeDown, 20)
        XCTAssertEqual(Trackpad.swipeLeft, 21)
        XCTAssertEqual(Trackpad.swipeRight, 22)
    }

    func testWholeCoordinatesSerialiseWithoutATrailingPointZero() {
        // org.json trims ".0"; matching it keeps payloads identical to Android's.
        let raw = Trackpad.swipe(direction: Trackpad.swipeUp, startX: 1, startY: 2,
                                 endX: 3, endY: 4, speedX: 0, speedY: 0, nowMs: 1)
        XCTAssertTrue(raw.contains(#""startX":1"#))
        XCTAssertFalse(raw.contains("1.0"))
    }
}
