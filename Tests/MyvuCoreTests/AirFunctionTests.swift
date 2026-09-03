import XCTest
@testable import MyvuCore

/// `AIR_FUNCTION` is the caller-ID loop: the glasses have an HFP number and no
/// phonebook, so they ask the phone for a name. Getting the reply shape wrong
/// leaves the lens showing "Unknown" with no error anywhere.
final class AirFunctionTests: XCTestCase {
    private func reader(_ json: String) -> JsonReader {
        guard let r = JsonReader(parsing: json) else {
            XCTFail("not parseable: \(json)")
            return JsonReader(raw: [:])
        }
        return r
    }

    /// Captured verbatim off a real incoming call: the payload is under
    /// `value`, and there is no top-level `action` at all.
    private let inbound = """
    {"value":{"functionName":"QUERY_CONTACT_ADDRESS","requestId":"000",\
    "param":{"phoneNo":"+15073996842"},\
    "targetPackage":"com.upuphone.star.launcher"}}
    """

    /// The `data`-wrapped form the official app's own helper emits.
    private let inboundDataForm = """
    {"action":"AIR_FUNCTION","data":{"functionName":"QUERY_CONTACT",\
    "requestId":"req-42","param":{"phoneNo":"+15073996842"},\
    "targetPackage":"com.upuphone.ar.phone"}}
    """

    /// The shape a real call produces. Requiring `data` (or a top-level
    /// `action`) made this parse to nil and the lens said "Unknown".
    func testParsesTheValueWrappedRequestTheGlassesActuallySend() {
        let r = AirFunction.parseRequest(reader(inbound))
        XCTAssertEqual(r?.functionName, "QUERY_CONTACT_ADDRESS")
        XCTAssertEqual(r?.requestId, "000")
        XCTAssertEqual(r?.phoneNumber, "+15073996842")
        XCTAssertEqual(r?.targetPackage, "com.upuphone.star.launcher")
        XCTAssertEqual(r?.wantsName, true)
        XCTAssertEqual(r?.wantsAddress, true)
    }

    func testAlsoParsesTheDataWrappedFormTheOfficialHelperEmits() {
        let r = AirFunction.parseRequest(reader(inboundDataForm))
        XCTAssertEqual(r?.functionName, "QUERY_CONTACT")
        XCTAssertEqual(r?.requestId, "req-42")
        XCTAssertEqual(r?.wantsName, true)
        XCTAssertEqual(r?.wantsAddress, false)
    }

    func testOtherActionsAreNotMistakenForALookup() {
        XCTAssertNil(AirFunction.parseRequest(
            reader(#"{"action":"system","data":{"action":"get_brightness"}}"#)))
    }

    /// Our own reply travels the same relay we read from. It carries `code` and
    /// `data` but no `param`, and must never be re-answered as a request.
    func testOurOwnReplyIsNotParsedAsAFreshRequest() {
        let request = AirFunction.parseRequest(reader(inbound))!
        let reply = AirFunction.reply(to: request, displayName: "Ada Lovelace")
        XCTAssertNil(AirFunction.parseRequest(reader(reply)),
                     "answering our own reply would loop forever")
    }

    func testReplyEchoesTheRequestIdAndCarriesTheName() {
        let request = AirFunction.parseRequest(reader(inbound))!
        let data = TestJson.nested(
            TestJson.object(AirFunction.reply(to: request, displayName: "Ada Lovelace")),
            "data")
        // The requestId is how the glasses match the answer to the call card.
        XCTAssertEqual(TestJson.string(data, "requestId"), "000")
        XCTAssertEqual(TestJson.string(data, "functionName"), "QUERY_CONTACT_ADDRESS")
        XCTAssertEqual(TestJson.int(data, "code"), 200)
        XCTAssertEqual(TestJson.string(TestJson.nested(data, "data"), "displayName"),
                       "Ada Lovelace")
    }

    func testSuccessDefaultsMatchTheDecompiledModel() {
        // AirResultModel's own defaults: code 200, msg "成功".
        let request = AirFunction.parseRequest(reader(inbound))!
        let data = TestJson.nested(
            TestJson.object(AirFunction.reply(to: request, displayName: "X")), "data")
        XCTAssertEqual(TestJson.int(data, "code"), AirFunction.codeSuccess)
        XCTAssertEqual(TestJson.string(data, "msg"), "成功")
    }

    private func payload(_ json: String) -> [String: Any] {
        TestJson.nested(TestJson.nested(TestJson.object(json), "data"), "data")
    }

    /// An unknown number answers with the NUMBER as the name, which is what
    /// `ContactHelper.c` falls back to. Silence is what produced "Unknown".
    func testUnknownNumberSendsTheNumberBackAsTheName() {
        let request = AirFunction.parseRequest(reader(inbound))!
        let p = payload(AirFunction.reply(to: request))
        XCTAssertEqual(TestJson.string(p, "displayName"), "+15073996842")
    }

    func testEmptyNameIsTreatedAsNoName() {
        let request = AirFunction.parseRequest(reader(inbound))!
        let p = payload(AirFunction.reply(to: request, displayName: ""))
        XCTAssertEqual(TestJson.string(p, "displayName"), "+15073996842")
    }

    /// QUERY_CONTACT_ADDRESS promises both halves. Shipping only `displayName`
    /// is a half-answer and the lens kept saying "Unknown".
    func testContactAddressAlwaysShipsGeoEvenWhenUnknown() {
        let request = AirFunction.parseRequest(reader(inbound))!
        let p = payload(AirFunction.reply(to: request, displayName: "Ada"))
        XCTAssertEqual(TestJson.string(p, "geo"), "",
                       "the key must be present even when empty")
        XCTAssertEqual(TestJson.string(p, "displayName"), "Ada")
    }

    func testAddressLookupCarriesGeo() {
        let request = AirFunction.parseRequest(reader(inbound))!
        let p = payload(AirFunction.reply(to: request, displayName: "Ada",
                                          address: "Minnesota"))
        XCTAssertEqual(TestJson.string(p, "geo"), "Minnesota")
        XCTAssertEqual(TestJson.string(p, "displayName"), "Ada")
    }

    /// A name-only function must NOT invent a geo key.
    func testPlainContactLookupDoesNotShipGeo() {
        let request = AirFunction.parseRequest(reader(inboundDataForm))!
        let p = payload(AirFunction.reply(to: request, displayName: "Ada"))
        XCTAssertNil(p["geo"])
        XCTAssertEqual(TestJson.string(p, "displayName"), "Ada")
    }

    func testFailureUsesCodeZeroAndKeepsTheRequestId() {
        let request = AirFunction.parseRequest(reader(inbound))!
        let data = TestJson.nested(
            TestJson.object(AirFunction.failure(to: request, message: "no permission")),
            "data")
        XCTAssertEqual(TestJson.int(data, "code"), 0)
        XCTAssertEqual(TestJson.string(data, "msg"), "no permission")
        XCTAssertEqual(TestJson.string(data, "requestId"), "000")
    }

    func testRouterDispatchesTheLookupAndDoesNotDoubleReportIt() {
        var seen: [AirFunction.Request] = []
        let router = InboundRouter(send: { _, _, _ in })
        router.onContactLookup = { seen.append($0) }
        router.handle(body: inbound)
        XCTAssertEqual(seen.count, 1)
        XCTAssertEqual(seen.first?.phoneNumber, "+15073996842")
        // The client filters these out of the generic .unknown stream.
        XCTAssertTrue(InboundRouter.isContactLookupObject(inbound))
    }
}
