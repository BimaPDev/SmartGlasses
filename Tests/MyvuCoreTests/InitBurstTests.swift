import XCTest
@testable import MyvuCore

/// Guards the init burst, which is the piece that originally broke the reference
/// client: replaying the capture's stale high msgIds made the glasses discard
/// everything as out-of-order.
final class InitBurstTests: XCTestCase {
    private func load() throws -> [InitBurst.Entry] {
        InitBurst.load(try BundledInitBurstSource().loadText())
    }

    func testTheBundledCaptureIsReachableFromTheResourceBundle() throws {
        // A missing resource would only show up as "nothing happens after
        // connect", so fail loudly here instead.
        XCTAssertFalse(try BundledInitBurstSource().loadText().isEmpty)
    }

    func testParsesTheCaptureIntoReplayableDataMessages() throws {
        // The capture holds 32 data messages; the two SyncOffSetTime frames and
        // the sync_clone_data frame are filtered out as stale state.
        XCTAssertEqual(try load().count, 29)
    }

    func testStaleStateMessagesAreFiltered() throws {
        for e in try load() {
            XCTAssertFalse(e.bodyText.contains("SyncOffSetTime"),
                           "SyncOffSetTime would set the glasses' clock backwards")
            XCTAssertFalse(e.bodyText.contains("sync_clone_data"),
                           "sync_clone_data would replay an old settings snapshot")
        }
    }

    func testReplayProducesAGaplessSequenceStartingAtOne() throws {
        let entries = try load()
        let seq = RelaySequencer()

        var expected = 0
        for e in entries {
            let frame = seq.dataFrame(e.msgBody, category: e.category,
                                      needCallback: e.needCallback,
                                      appUniteCode: e.appUniteCode)
            expected += 1
            XCTAssertEqual(Relay.parseFrame(frame)?.msgId, expected,
                           "msgIds must be a fresh 1..N run")
        }
        XCTAssertEqual(expected, entries.count)
    }

    func testKnownInitMessagesSurvive() throws {
        // Spot-check that the filter did not over-match and drop real content.
        let bodies = try load().map(\.bodyText)
        XCTAssertTrue(bodies.contains { $0.contains("get_device_info") },
                      "get_device_info should be in the burst")
        XCTAssertTrue(bodies.contains { $0.contains("feature_list") },
                      "feature_list should be in the burst")
    }

    func testEveryEntryCarriesANonEmptyBody() throws {
        for e in try load() {
            XCTAssertFalse(e.msgBody.isEmpty, "frame \(e.frame) has an empty body")
        }
    }
}
