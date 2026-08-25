import XCTest
@testable import MyvuCore

final class LensCardsTests: XCTestCase {
    func testSplitParagraphsOnBlankLines() {
        let parts = LensScript.splitParagraphs("One.\n\nTwo.\n\n\nThree.")
        XCTAssertEqual(parts, ["One.", "Two.", "Three."])
    }

    func testSingleBlockWhenNoBlankLine() {
        let parts = LensScript.splitParagraphs("Line one.\nLine two.")
        XCTAssertEqual(parts, ["Line one.\nLine two."])
    }

    func testShowAdvancesAndReusesStableId() {
        var sent: [String] = []
        let script = LensScript(title: "Talk") { sent.append($0) }
        script.load("A\n\nB\n\nC")

        XCTAssertEqual(sent.count, 1)
        XCTAssertTrue(sent[0].contains("phone-dev.myvu.sdk-\(LensCards.scriptNumericId)"))
        XCTAssertTrue(sent[0].contains("Talk · 1/3"))
        XCTAssertTrue(sent[0].contains("A"))

        script.next()
        XCTAssertEqual(sent.count, 2)
        XCTAssertTrue(sent[1].contains("Talk · 2/3"))
        XCTAssertTrue(sent[1].contains("B"))
        XCTAssertEqual(script.index, 1)

        script.next()
        script.next() // already at end
        XCTAssertEqual(script.index, 2)
        XCTAssertEqual(sent.count, 3)

        script.clear()
        XCTAssertEqual(sent.count, 4)
        XCTAssertTrue(sent[3].contains("DISMISS_NOTIFICATION"))
        XCTAssertTrue(script.isEmpty)
    }
}
