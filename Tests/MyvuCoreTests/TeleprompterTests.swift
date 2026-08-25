import XCTest
@testable import MyvuCore

/// The teleprompter payloads nest JSON *as strings* in two places. Sending those
/// as real objects instead silently fails to bind on the device, so the string
/// nesting is asserted directly.
final class TeleprompterTests: XCTestCase {
    private let script = "Line one.\nLine two."

    func testOpenLaunchesTheTiciSceneWithExtAsAJsonString() {
        let json = TestJson.object(Teleprompter.buildOpen(text: script, title: "Demo",
                                                          msgId: "fixed-id"))
        XCTAssertEqual(TestJson.string(json, "action"), "app")

        let d = TestJson.nested(json, "data")
        XCTAssertEqual(TestJson.string(d, "action"), "open_app")
        XCTAssertEqual(TestJson.string(d, "launchMode"), "scene")
        XCTAssertEqual(TestJson.string(d, "pkg"), AppLayer.pkgTici)

        // ext is a STRING containing JSON, not a nested object.
        let extRaw = TestJson.string(d, "ext")
        XCTAssertNotNil(extRaw)
        XCTAssertNil(d["ext"] as? [String: Any])

        let ext = TestJson.object(extRaw ?? "")
        XCTAssertEqual(TestJson.string(ext, "fileKey"), "1/Demo")
        XCTAssertEqual(TestJson.string(ext, "msgId"), "fixed-id")
        XCTAssertEqual(TestJson.int(ext, "totalPage"), 1)
        XCTAssertEqual(TestJson.int(ext, "version"), 2)
    }

    func testOpenReportsBothByteAndCharacterLengths() {
        // sourceByteSize is UTF-8 bytes; totalTextLength is UTF-16 code units,
        // matching Java's String.length(). They differ for non-ASCII text, and
        // conflating them truncates the script on the device.
        let text = "café ☕"
        let ext = TestJson.object(
            TestJson.string(TestJson.nested(TestJson.object(
                Teleprompter.buildOpen(text: text)), "data"), "ext") ?? "")

        XCTAssertEqual(TestJson.int(ext, "sourceByteSize"), Data(text.utf8).count)
        XCTAssertEqual(TestJson.int(ext, "totalTextLength"), text.utf16.count)
        XCTAssertNotEqual(TestJson.int(ext, "sourceByteSize"),
                          TestJson.int(ext, "totalTextLength"))
    }

    func testContentCarriesTheScriptWithValueAsAJsonString() {
        let json = TestJson.object(Teleprompter.buildContent(text: script, title: "Demo",
                                                             msgId: "fixed-id"))
        XCTAssertEqual(TestJson.string(json, "action"), "tici")

        let d = TestJson.nested(json, "data")
        XCTAssertEqual(TestJson.string(d, "action"), "send_content")
        XCTAssertNil(d["value"] as? [String: Any], "value must be a JSON string")

        let value = TestJson.object(TestJson.string(d, "value") ?? "")
        XCTAssertEqual(TestJson.string(value, "sourceText"), script)
        XCTAssertEqual(TestJson.string(value, "fileKey"), "1/Demo")
        XCTAssertEqual(TestJson.int(value, "part"), 0)
    }

    func testOpenAndContentAgreeOnTheFileKey() {
        // The device keys the document by fileKey; a mismatch means the content
        // arrives for a document that was never opened.
        let openExt = TestJson.object(
            TestJson.string(TestJson.nested(TestJson.object(
                Teleprompter.buildOpen(text: script, title: "Talk")), "data"), "ext") ?? "")
        let contentValue = TestJson.object(
            TestJson.string(TestJson.nested(TestJson.object(
                Teleprompter.buildContent(text: script, title: "Talk")), "data"), "value") ?? "")

        XCTAssertEqual(TestJson.string(openExt, "fileKey"), "1/Talk")
        XCTAssertEqual(TestJson.string(contentValue, "fileKey"), "1/Talk")
    }

    func testHighlightTargetsPaddedIndexAndFileKey() {
        let d = TestJson.nested(TestJson.object(
            Teleprompter.buildHighlight(index: 3, title: "Demo")), "data")
        XCTAssertEqual(TestJson.string(d, "action"), "highlight_index")

        let value = TestJson.object(TestJson.string(d, "value") ?? "")
        XCTAssertEqual(TestJson.int(value, "index"), 3)
        XCTAssertEqual(TestJson.string(value, "fileKey"), "1/Demo")
    }

    /// The gap between the two messages is load-bearing: the content message is
    /// dropped if the app has not finished launching.
    func testOpenToContentDelayIsPreserved() {
        XCTAssertEqual(Teleprompter.openToContentDelay, 0.4, accuracy: 0.001)
    }
}
