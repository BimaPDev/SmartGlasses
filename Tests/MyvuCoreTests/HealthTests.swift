import XCTest
@testable import MyvuCore

/// Wire-format and inbound-routing tests for the step-count (`syncSport`) sync.
final class HealthTests: XCTestCase {
    func testBuildProducesTheHandleHealthMsgFields() {
        let json = Health.build(Health.Reading(stepCount: 4213))
        // Fields the firmware's handleHealthMsg reads, under the reconstructed
        // top-level action. JsonObject preserves insertion order.
        XCTAssertEqual(json, #"{"action":"sport","data":{"errorCode":0,"stepCount":4213}}"#)
    }

    func testBuildCarriesANonZeroErrorCode() {
        let json = Health.build(Health.Reading(stepCount: 0, errorCode: 1))
        XCTAssertEqual(json, #"{"action":"sport","data":{"errorCode":1,"stepCount":0}}"#)
    }

    func testSyncRequestIsRecognised() {
        let reader = JsonReader(parsing: #"{"action":"syncSport"}"#)!
        XCTAssertTrue(Health.isSyncRequest(reader))
    }

    func testOtherActionsAreNotSyncRequests() {
        let reader = JsonReader(parsing: #"{"action":"syncWeather"}"#)!
        XCTAssertFalse(Health.isSyncRequest(reader))
    }

    func testInboundRouterFiresOnStepsRequest() {
        var fired = false
        let router = InboundRouter(send: { _, _, _ in })
        router.onStepsRequested = { fired = true }
        // Embedded in a larger protobuf-ish body, like the real relay frames.
        router.handle(body: #"garbage{"action":"syncSport"}trailing"#)
        XCTAssertTrue(fired)
    }

    func testInboundRouterIgnoresUnrelatedBodies() {
        var fired = false
        let router = InboundRouter(send: { _, _, _ in })
        router.onStepsRequested = { fired = true }
        router.handle(body: #"{"action":"syncWeather"}"#)
        XCTAssertFalse(fired)
    }
}
