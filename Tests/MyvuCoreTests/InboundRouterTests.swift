import XCTest
@testable import MyvuCore

/// The router answers requests the glasses make of the phone. Several
/// glasses-side features do not work at all unless the phone replies, so these
/// tests check that a reply is produced AND that it is routed to the right
/// package.
final class InboundRouterTests: XCTestCase {
    private struct Sent {
        let json: String
        let target: String
        let source: String
    }

    private var sent: [Sent] = []
    private var router: InboundRouter!

    override func setUp() {
        super.setUp()
        sent = []
        router = InboundRouter { [weak self] json, target, source in
            self?.sent.append(Sent(json: json, target: target, source: source))
        }
    }

    /// Without this ack the glasses' nav app ignores every frame we stream and
    /// re-sends the request forever.
    func testLaunchAppRequestIsAckedWithTypeTwelve() {
        router.handle(body: #"""
        {"type":11,"data":{"appId":"com.upuphone.ar.navi.glass","menuId":"m1","requestId":"r1"}}
        """#)

        XCTAssertEqual(sent.count, 1)
        let reply = TestJson.object(sent[0].json)
        XCTAssertEqual(TestJson.int(reply, "type"), 12)

        let payload = TestJson.nested(reply, "data")
        XCTAssertEqual(TestJson.string(payload, "appId"), "com.upuphone.ar.navi.glass")
        XCTAssertEqual(TestJson.int(payload, "code"), 200)
        XCTAssertEqual(TestJson.bool(payload, "success"), true)
        // The request's correlation ids must be echoed back.
        XCTAssertEqual(TestJson.string(payload, "menuId"), "m1")
        XCTAssertEqual(TestJson.string(payload, "requestId"), "r1")
    }

    func testLaunchAppAckGoesOutOnTheInterconnectChannel() {
        router.handle(body: #"{"type":11,"data":{"appId":"x"}}"#)
        XCTAssertEqual(sent.first?.target, AppLayer.pkgInterconnect)
        XCTAssertEqual(sent.first?.source, AppLayer.pkgInterconnect)
    }

    func testLaunchAppRequestWithoutAnAppIdIsIgnored() {
        router.handle(body: #"{"type":11,"data":{}}"#)
        XCTAssertTrue(sent.isEmpty)
    }

    func testTimeSyncRequestIsAnsweredOnTheLauncherChannel() {
        router.handle(body: #"{"action":"SyncOffSetTime","data":{}}"#)

        XCTAssertEqual(sent.count, 1)
        let reply = TestJson.object(sent[0].json)
        XCTAssertEqual(TestJson.string(reply, "action"), "SyncOffSetTime")
        XCTAssertNotNil(TestJson.string(TestJson.nested(reply, "data"), "syncTimeData"))
        XCTAssertEqual(sent[0].target, AppLayer.pkgLauncher)
    }

    /// Answering a message that already carries the time would echo our own
    /// reply back and forth indefinitely.
    func testATimePayloadIsNotMistakenForARequest() {
        router.handle(body: ClockSync.build())
        XCTAssertTrue(sent.isEmpty)
    }

    func testWeatherRequestFiresTheCallbackWithoutSendingAnything() {
        var asked = 0
        router.onWeatherRequested = { asked += 1 }

        router.handle(body: #"{"action":"syncWeather"}"#)

        XCTAssertEqual(asked, 1)
        XCTAssertTrue(sent.isEmpty, "the push is the caller's decision")
    }

    func testAiTriggerCodesAreDispatched() {
        var codes: [Int] = []
        router.onAiTrigger = { code, _ in codes.append(code) }

        router.handle(body: #"{"code":3}"#) // hardware button
        router.handle(body: #"{"code":7}"#) // wake word
        router.handle(body: #"{"code":5}"#) // unrelated

        XCTAssertEqual(codes, [3, 7])
    }

    func testAiTriggerPayloadIsPassedThrough() {
        var payloadText: String?
        router.onAiTrigger = { _, payload in payloadText = payload?.optString("text") }

        router.handle(body: #"{"code":7,"payload":{"text":"hey myvu"}}"#)
        XCTAssertEqual(payloadText, "hey myvu")
    }

    /// Relay bodies are protobuf with JSON embedded inside, so the router scans
    /// for balanced brace runs rather than decoding the envelope.
    func testJsonEmbeddedInABinaryEnvelopeIsStillFound() {
        let body = "\u{01}p\u{00}\u{01}"
            + #"{"action":"syncWeather"}"#
            + "\u{03}trailing-garbage"

        var asked = false
        router.onWeatherRequested = { asked = true }
        router.handle(body: body)
        XCTAssertTrue(asked)
    }

    func testNestedObjectsAreScannedAsOneCandidate() {
        let found = InboundRouter.findJsonObjects(#"noise{"a":{"b":1}}more{"c":2}"#)
        XCTAssertEqual(found, [#"{"a":{"b":1}}"#, #"{"c":2}"#])
    }

    func testUnbalancedBracesDoNotProduceACandidate() {
        XCTAssertTrue(InboundRouter.findJsonObjects(#"{"a":1"#).isEmpty)
        XCTAssertTrue(InboundRouter.findJsonObjects("no json here").isEmpty)
    }

    func testGarbageInboundIsHandledWithoutSendingAnything() {
        router.handle(body: "")
        router.handle(body: "{}")
        router.handle(body: "{not json at all}")
        XCTAssertTrue(sent.isEmpty)
    }

    func testMultipleRequestsInOneBodyAreEachAnswered() {
        router.handle(body: #"{"type":11,"data":{"appId":"x"}}{"action":"SyncOffSetTime"}"#)
        XCTAssertEqual(sent.count, 2)
    }

    func testAiTriggerObjectsAreIdentifiable() {
        // Used by the client to route triggers to the AI module rather than
        // surfacing them as generic inbound events.
        XCTAssertTrue(InboundRouter.isAiTriggerObject(#"{"code":3}"#))
        XCTAssertTrue(InboundRouter.isAiTriggerObject(#"{"code":7}"#))
        XCTAssertFalse(InboundRouter.isAiTriggerObject(#"{"code":1}"#))
        XCTAssertFalse(InboundRouter.isAiTriggerObject("not json"))
    }

    func testAirOtaRequestSendIsDispatchedAndNotAnsweredByTheRouter() {
        var got: (String, String)?
        router.onAirOta = { got = ($0, $1) }
        router.handle(body: AirOta.envelope(
            subAction: AirOta.requestSendFile,
            value: #"{"fileName":"platform_tester.bin"}"#))
        XCTAssertEqual(got?.0, AirOta.requestSendFile)
        XCTAssertEqual(AirOta.parseFileName(got!.1), "platform_tester.bin")
        XCTAssertTrue(sent.isEmpty, "the session ACKs; the router must not")
        XCTAssertTrue(InboundRouter.isAirOtaObject(
            #"{"action":"air_ota","data":{"action":"x","value":""}}"#))
    }
}
