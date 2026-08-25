import XCTest
@testable import MyvuCore
@testable import MyvuNav

/// Replays a scripted track instead of touching CoreLocation.
private final class FakeLocationSource: LocationSourceProviding {
    private(set) var started = false
    private(set) var stopped = false
    private var onFix: ((LocationFix) -> Void)?
    private var onUnavailable: ((String) -> Void)?

    func start(onFix: @escaping (LocationFix) -> Void,
               onUnavailable: @escaping (String) -> Void) {
        started = true
        self.onFix = onFix
        self.onUnavailable = onUnavailable
    }

    func stop() {
        stopped = true
        onFix = nil
    }

    func emit(lat: Double, lon: Double, speedMps: Double = -1) {
        onFix?(LocationFix(latitude: lat, longitude: lon, speedMps: speedMps))
    }

    func fail(_ reason: String) { onUnavailable?(reason) }
}

private struct FixedRouteProvider: RouteProvider {
    let route: Route
    /// Counted so re-routing can be observed. A box because the protocol is
    /// Sendable and the provider is therefore a value.
    let calls = Counter()

    final class Counter: @unchecked Sendable {
        private let lock = NSLock()
        private var value = 0
        var count: Int { lock.withLock { value } }
        func increment() { lock.withLock { value += 1 } }
    }

    func route(fromLat: Double, fromLon: Double, destination: String) async throws -> Route {
        calls.increment()
        return route
    }
}

/// Collects what the session would have put on the wire.
private final class SentActions: @unchecked Sendable {
    private let lock = NSLock()
    private var items: [(json: String, target: String, source: String)] = []

    func record(_ json: String, _ target: String, _ source: String) {
        lock.withLock { items.append((json, target, source)) }
    }

    var all: [(json: String, target: String, source: String)] { lock.withLock { items } }
    var identities: [String] {
        all.compactMap { JsonReader(parsing: $0.json)?.optString("identity") }
    }

    func first(identity: String) -> JsonReader? {
        all.lazy.compactMap { JsonReader(parsing: $0.json) }
            .first { $0.optString("identity") == identity }
    }
}

final class NavSessionTests: XCTestCase {
    private var scheduler: Scheduler!
    private var location: FakeLocationSource!
    private var sent: SentActions!

    override func setUp() {
        super.setUp()
        scheduler = Scheduler(label: "test.nav")
        location = FakeLocationSource()
        sent = SentActions()
    }

    /// A straight 333m run north with a right turn at 222m.
    private func straightRoute() -> Route {
        Route(steps: [
            Route.Step(ic: 1, road: "First Road", distanceM: 222, durationS: 30,
                       type: "depart", modifier: "", atM: 0),
            Route.Step(ic: 2, road: "Second Road", distanceM: 111, durationS: 15,
                       type: "turn", modifier: "right", atM: 222),
        ], totalDistanceM: 333, totalDurationS: 45, vertices: [
            Route.Vertex(lat: 0.000, lon: 0, cumulativeM: 0),
            Route.Vertex(lat: 0.001, lon: 0, cumulativeM: 111),
            Route.Vertex(lat: 0.002, lon: 0, cumulativeM: 222),
            Route.Vertex(lat: 0.003, lon: 0, cumulativeM: 333),
        ])
    }

    private func makeSession(_ provider: RouteProvider) -> NavSession {
        NavSession(scheduler: scheduler,
                   send: { [sent] json, target, source in sent!.record(json, target, source) },
                   source: location, routeProvider: provider)
    }

    /// `start` hops onto the scheduler, so a fix emitted straight afterwards
    /// would race the subscription and be dropped.
    private func start(_ session: NavSession, to destination: String = "Dodoma") {
        session.start(destination)
        scheduler.sync {}
    }

    private struct Timeout: Error {}

    /// Routing runs in a Task, so the assertions have to wait for the send
    /// rather than assume it has already happened.
    ///
    /// Throws rather than only failing, so a test that never gets its send stops
    /// here instead of crashing on the next `sent.all[...]`.
    private func waitForSend(count: Int, file: StaticString = #filePath,
                             line: UInt = #line) throws {
        let deadline = Date().addingTimeInterval(2)
        while sent.all.count < count, Date() < deadline {
            RunLoop.current.run(until: Date().addingTimeInterval(0.01))
        }
        guard sent.all.count >= count else {
            XCTFail("timed out waiting for \(count) sends, saw \(sent.all.count)",
                    file: file, line: line)
            throw Timeout()
        }
    }

    func testTheFirstFixTriggersRoutingAndOpensTheHud() throws {
        let session = makeSession(FixedRouteProvider(route: straightRoute()))
        start(session)
        XCTAssertTrue(location.started)

        location.emit(lat: 0, lon: 0)
        try waitForSend(count: 1)

        // The HUD launch is an open_app request, so it must be addressed to the
        // launcher — sending it to the nav app is silently ignored.
        let launch = sent.all[0]
        XCTAssertEqual(launch.target, NavCommands.launchTargetPkg)
        XCTAssertEqual(launch.source, NavCommands.sourcePkg)
        let data = JsonReader(parsing: launch.json)?.optObject("data")
        XCTAssertEqual(data?.optString("action"), "open_app")
    }

    func testSubsequentFixesStreamFramesToTheNavApp() throws {
        let session = makeSession(FixedRouteProvider(route: straightRoute()))
        start(session)
        location.emit(lat: 0, lon: 0)
        try waitForSend(count: 1)

        location.emit(lat: 0.001, lon: 0, speedMps: 10)
        try waitForSend(count: 2)

        let frame = sent.all[1]
        XCTAssertEqual(frame.target, NavCommands.frameTargetPkg)
        let f = JsonReader(parsing: frame.json)
        XCTAssertEqual(f?.optString("identity"), "navi_info")
        XCTAssertEqual(f?.optInt("prd", -1), 222)
        // The turn ahead, not the one already taken.
        XCTAssertEqual(f?.optInt("ic", -1), 2)
        XCTAssertEqual(f?.optString("nrn"), "Second Road")
        // 10 m/s is 36 km/h, rendered as text.
        XCTAssertEqual(f?.optString("ns"), "36")
    }

    func testRideDistanceAccumulatesAcrossFixes() throws {
        let session = makeSession(FixedRouteProvider(route: straightRoute()))
        start(session)
        location.emit(lat: 0, lon: 0)
        try waitForSend(count: 1)
        location.emit(lat: 0.001, lon: 0)
        try waitForSend(count: 2)
        location.emit(lat: 0.002, lon: 0)
        try waitForSend(count: 3)

        // Two ~111m legs since the first fix.
        let rdd = JsonReader(parsing: sent.all[2].json)?.optInt("rdd", -1) ?? -1
        XCTAssertEqual(Double(rdd), 222, accuracy: 3)
    }

    func testGoingOffRouteRecalculatesInsteadOfSendingAFrame() throws {
        let provider = FixedRouteProvider(route: straightRoute())
        let session = makeSession(provider)
        start(session)
        location.emit(lat: 0, lon: 0)
        try waitForSend(count: 1)
        XCTAssertEqual(provider.calls.count, 1)

        // ~1.1km east of the polyline.
        location.emit(lat: 0.001, lon: 0.01)

        let deadline = Date().addingTimeInterval(2)
        while provider.calls.count < 2, Date() < deadline {
            RunLoop.current.run(until: Date().addingTimeInterval(0.01))
        }
        XCTAssertEqual(provider.calls.count, 2, "should have re-routed")
        // A frame drawn from an abandoned route would point the arrow at a road
        // the rider is no longer on.
        XCTAssertEqual(sent.identities.filter { $0 == "navi_info" }.count, 0)
    }

    func testArrivingStopsTheSessionAndTellsTheGlasses() throws {
        let session = makeSession(FixedRouteProvider(route: straightRoute()))
        start(session)
        location.emit(lat: 0, lon: 0)
        try waitForSend(count: 1)

        location.emit(lat: 0.003, lon: 0) // the end of the polyline
        try waitForSend(count: 3) // the final frame, then navi_stop

        XCTAssertEqual(sent.first(identity: "navi_event")?.optString("data"), "navi_stop")
        XCTAssertFalse(session.isActive)
        XCTAssertTrue(location.stopped)
    }

    func testStopIsIdempotent() throws {
        let session = makeSession(FixedRouteProvider(route: straightRoute()))
        start(session)
        location.emit(lat: 0, lon: 0)
        try waitForSend(count: 1)

        session.stop()
        session.stop()
        scheduler.sync {}

        // A second navi_stop would restart nothing, but it does tell us the
        // guard has come loose.
        XCTAssertEqual(sent.identities.filter { $0 == "navi_event" }.count, 1)
    }

    func testAnUnavailableLocationSourceEndsTheSession() {
        let session = makeSession(FixedRouteProvider(route: straightRoute()))
        start(session)
        location.fail("location access is denied")
        scheduler.sync {}

        XCTAssertFalse(session.isActive)
    }

    func testCalibrationFramesGoToTheNavAppWithTheGivenIcon() {
        let session = makeSession(FixedRouteProvider(route: straightRoute()))
        session.sendCalibrationFrame(ic: 7, roadName: "Test Road")

        XCTAssertEqual(sent.all.first?.target, NavCommands.frameTargetPkg)
        XCTAssertEqual(sent.first(identity: "navi_info")?.optInt("ic", -1), 7)
    }

    func testLensCardSurfacePushesNotificationsInsteadOfOpenApp() throws {
        let session = NavSession(
            scheduler: scheduler,
            send: { [sent] json, target, source in sent!.record(json, target, source) },
            source: location,
            routeProvider: FixedRouteProvider(route: straightRoute()),
            surface: .lensCard)
        start(session)
        location.emit(lat: 0, lon: 0)
        try waitForSend(count: 1)

        let first = sent.all[0]
        XCTAssertEqual(first.target, AppLayer.pkgLauncher)
        let reader = JsonReader(parsing: first.json)
        XCTAssertEqual(reader?.optString("action"), "notification")
        XCTAssertTrue(first.json.contains("phone-dev.myvu.sdk-\(LensCards.guideNumericId)"))
        XCTAssertTrue(first.json.contains("First Road") || first.json.contains("Start")
            || first.json.contains("Ahead"))
    }
}

final class OsrmParsingTests: XCTestCase {
    /// A two-step route: depart, then arrive 200m north.
    private let response = """
    {
      "code": "Ok",
      "routes": [{
        "distance": 200.4,
        "duration": 42.7,
        "geometry": {"coordinates": [[0.0, 0.0], [0.0, 0.0009], [0.0, 0.0018]]},
        "legs": [{"steps": [
          {"name": "First Road", "distance": 200.4, "duration": 42.7,
           "maneuver": {"type": "depart", "modifier": "", "location": [0.0, 0.0]}},
          {"name": "", "distance": 0, "duration": 0,
           "maneuver": {"type": "arrive", "modifier": "", "location": [0.0, 0.0018]}}
        ]}]
      }]
    }
    """

    private func decode(_ json: String) -> [String: Any] {
        (try? JSONSerialization.jsonObject(with: Data(json.utf8))) as? [String: Any] ?? [:]
    }

    func testGeoJsonCoordinatesAreReadAsLonLat() throws {
        // GeoJSON is lon,lat — the reverse of everything else here. Getting it
        // backwards puts the route in the wrong hemisphere.
        let route = try Osrm.parse(decode(response))
        XCTAssertEqual(route.vertices.count, 3)
        XCTAssertEqual(route.vertices[1].lat, 0.0009, accuracy: 1e-9)
        XCTAssertEqual(route.vertices[1].lon, 0, accuracy: 1e-9)
    }

    func testVerticesCarryCumulativeDistance() throws {
        let route = try Osrm.parse(decode(response))
        XCTAssertEqual(route.vertices[0].cumulativeM, 0, accuracy: 0.01)
        XCTAssertEqual(route.vertices[2].cumulativeM, 200, accuracy: 5)
    }

    func testStepsGetIconsAndAPositionAlongTheRoute() throws {
        let route = try Osrm.parse(decode(response))
        XCTAssertEqual(route.steps.count, 2)
        XCTAssertEqual(route.steps[0].ic, 1, "depart is straight ahead")
        XCTAssertEqual(route.steps[1].ic, 15, "arrive")
        XCTAssertEqual(route.steps[1].atM, 200, accuracy: 5)
        XCTAssertEqual(route.totalDistanceM, 200)
    }

    func testANoRouteResponseIsAnError() {
        let noRoute = decode("""
        {"code": "NoRoute", "message": "Impossible route"}
        """)
        XCTAssertThrowsError(try Osrm.parse(noRoute))
    }
}
