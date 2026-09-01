import XCTest
@testable import MyvuCore
@testable import MyvuNav

/// Replays a scripted track. Shared shape with `NavSessionTests`' fake, kept
/// separate so the two suites can evolve independently.
private final class FakeLocation: LocationSourceProviding {
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

    func emit(lat: Double = 0, lon: Double = 0, speedMps: Double, bearing: Double = -1) {
        onFix?(LocationFix(latitude: lat, longitude: lon,
                           speedMps: speedMps, bearing: bearing))
    }

    func fail(_ reason: String) { onUnavailable?(reason) }
}

private final class FakeMotion: MotionSourceProviding {
    private var onActivity: ((MotionActivity) -> Void)?

    func start(onActivity: @escaping (MotionActivity) -> Void) {
        self.onActivity = onActivity
    }

    func stop() { onActivity = nil }

    func emit(_ activity: MotionActivity) { onActivity?(activity) }
}

private struct StubPlaceNames: PlaceNameProviding {
    let place: PlaceName?

    func placeName(lat: Double, lon: Double) async throws -> PlaceName {
        guard let place else { throw MyvuError.notFound("no placemark") }
        return place
    }
}

private struct StubSpeedLimits: SpeedLimitProviding {
    let mph: Int?

    func speedLimitMph(lat: Double, lon: Double) async throws -> Int? { mph }
}

/// Collects what the session would have put on the wire.
private final class SentCards: @unchecked Sendable {
    private let lock = NSLock()
    private var items: [(json: String, target: String, source: String)] = []

    func record(_ json: String, _ target: String, _ source: String) {
        lock.withLock { items.append((json, target, source)) }
    }

    var all: [String] { lock.withLock { items.map(\.json) } }
    var targets: [String] { lock.withLock { items.map(\.target) } }

    /// SHOW frames carry entries; DISMISS frames carry ids.
    var showCount: Int { all.filter { $0.contains("\"title\"") }.count }
    var dismissCount: Int { all.count - showCount }

    var identities: [String] {
        all.compactMap { JsonReader(parsing: $0)?.optString("identity") }
    }

    func firstFrame(identity: String) -> JsonReader? {
        all.lazy.compactMap { JsonReader(parsing: $0) }
            .first { $0.optString("identity") == identity }
    }
}

/// Hand-cranked clock, so a 45-second parked timeout takes no real time.
private final class FakeClock: @unchecked Sendable {
    private let lock = NSLock()
    private var value = Date(timeIntervalSince1970: 1_700_000_000)

    var now: Date { lock.withLock { value } }
    func advance(_ seconds: TimeInterval) { lock.withLock { value += seconds } }
}

final class CruiseHudTests: XCTestCase {
    private var scheduler: Scheduler!
    private var location: FakeLocation!
    private var motion: FakeMotion!
    private var clock: FakeClock!

    /// 12 mph is the start threshold; these sit clearly either side of it.
    private let fast = 20.0 // ~45 mph
    private let crawl = 1.0 // ~2 mph

    override func setUp() {
        super.setUp()
        scheduler = Scheduler(label: "test.cruise")
        location = FakeLocation()
        motion = FakeMotion()
        clock = FakeClock()
    }

    private func makeDetector() -> DriveDetector {
        DriveDetector(scheduler: scheduler, location: location, motion: motion,
                      now: { [clock] in clock!.now })
    }

    private func startDetector(_ detector: DriveDetector,
                               onUpdate: @escaping (DriveDetector.Update) -> Void = { _ in }) {
        detector.start(onUpdate: onUpdate, onUnavailable: { _ in })
        scheduler.sync {}
    }

    /// Feeds a fix and waits for the scheduler to drain it.
    private func emit(speedMps: Double, lat: Double = 0, bearing: Double = -1) {
        location.emit(lat: lat, speedMps: speedMps, bearing: bearing)
        scheduler.sync {}
    }

    private func activity(_ a: MotionActivity) {
        motion.emit(a)
        scheduler.sync {}
    }

    // MARK: - DriveDetector

    func testDrivingStartsOnlyAfterTheFullStartHold() {
        let detector = makeDetector()
        startDetector(detector)
        activity(.automotive)

        emit(speedMps: fast)
        XCTAssertFalse(detector.isDriving)

        // One second short of the 8s hold.
        clock.advance(7)
        emit(speedMps: fast)
        XCTAssertFalse(detector.isDriving, "7s at speed must not be enough")

        clock.advance(1)
        emit(speedMps: fast)
        XCTAssertTrue(detector.isDriving)
    }

    func testABriefDipBelowTheThresholdRestartsTheStartHold() {
        let detector = makeDetector()
        startDetector(detector)
        activity(.automotive)

        emit(speedMps: fast)
        clock.advance(7)
        emit(speedMps: crawl)

        clock.advance(7)
        emit(speedMps: fast)
        XCTAssertFalse(detector.isDriving,
                       "the hold should have restarted at the slow fix")
    }

    func testATrafficLightDoesNotEndTheDriveButParkingDoes() {
        let detector = makeDetector()
        startDetector(detector)
        activity(.automotive)
        emit(speedMps: fast)
        clock.advance(8)
        emit(speedMps: fast)
        XCTAssertTrue(detector.isDriving)

        // A 10-second light.
        emit(speedMps: 0)
        clock.advance(10)
        emit(speedMps: 0)
        XCTAssertTrue(detector.isDriving, "a red light must not drop the HUD")

        emit(speedMps: fast)
        clock.advance(5)
        emit(speedMps: fast)
        XCTAssertTrue(detector.isDriving)

        // Now actually park.
        emit(speedMps: 0)
        clock.advance(45)
        emit(speedMps: 0)
        XCTAssertFalse(detector.isDriving)
    }

    func testWalkingEndsTheDriveEvenWhileGpsStillReportsSpeed() {
        let detector = makeDetector()
        startDetector(detector)
        activity(.automotive)
        emit(speedMps: fast)
        clock.advance(8)
        emit(speedMps: fast)
        XCTAssertTrue(detector.isDriving)

        activity(.walking)
        emit(speedMps: fast)
        clock.advance(10)
        emit(speedMps: fast)
        XCTAssertFalse(detector.isDriving)
    }

    func testWalkingNeverStartsADriveNoMatterTheSpeed() {
        let detector = makeDetector()
        startDetector(detector)
        activity(.walking)

        emit(speedMps: fast)
        clock.advance(30)
        emit(speedMps: fast)
        XCTAssertFalse(detector.isDriving)
    }

    func testMotionDeniedStillAllowsDrivingFromGpsAlone() {
        let detector = makeDetector()
        startDetector(detector)
        activity(.unavailable)

        emit(speedMps: fast)
        clock.advance(8)
        emit(speedMps: fast)
        XCTAssertTrue(detector.isDriving)
    }

    // MARK: - CruiseCard

    func testTheCardShowsEveryFieldInMphAndMiles() {
        let fields = CruiseCard.Fields(street: "Main Street", city: "Cambridge",
                                       speedMph: 42, heading: "N",
                                       tripMiles: 3.24, speedLimitMph: 30)
        let title = CruiseCard.title(fields)
        let body = CruiseCard.body(fields)

        XCTAssertTrue(title.contains("Main Street"))
        XCTAssertTrue(title.contains("42 mph"))
        XCTAssertTrue(body.contains("Cambridge"))
        XCTAssertTrue(body.contains("N"))
        XCTAssertTrue(body.contains("3.2 mi"))
        XCTAssertTrue(body.contains("limit 30"))
        // The lens has no unit flag, so metric output would be silently wrong.
        XCTAssertFalse((title + body).contains("km"))
    }

    func testMissingFieldsAreOmittedRatherThanPlaceheld() {
        let fields = CruiseCard.Fields(speedMph: 31)
        XCTAssertEqual(CruiseCard.title(fields), "31 mph")
        XCTAssertEqual(CruiseCard.body(fields), "")

        let partial = CruiseCard.Fields(street: "Elm Road", city: "Ely", speedMph: 20)
        XCTAssertEqual(CruiseCard.body(partial), "Ely")
        XCTAssertFalse(CruiseCard.body(partial).contains("limit"))
    }

    func testSpeedAndTripConversions() {
        // 20 m/s is 44.7 mph.
        XCTAssertEqual(CruiseCard.mph(fromMps: 20), 45)
        XCTAssertNil(CruiseCard.mph(fromMps: -1), "no speed must not read as 0 mph")
        // A drive that has not moved yet has no trip to show.
        XCTAssertNil(CruiseCard.tripText(0))
        XCTAssertEqual(CruiseCard.tripText(0.01), "0.1 mi")
    }

    func testHeadingIsAnEightWindPointOrNothing() {
        XCTAssertEqual(CruiseCard.heading(fromBearing: 0), "N")
        XCTAssertEqual(CruiseCard.heading(fromBearing: 45), "NE")
        XCTAssertEqual(CruiseCard.heading(fromBearing: 350), "N")
        // 200 is nearer due south than southwest; 215 crosses over.
        XCTAssertEqual(CruiseCard.heading(fromBearing: 200), "S")
        XCTAssertEqual(CruiseCard.heading(fromBearing: 215), "SW")
        XCTAssertNil(CruiseCard.heading(fromBearing: -1))
    }

    // MARK: - Speed limits

    func testOsmMaxspeedIsKmhUnlessItSaysMph() {
        // OSM's bare numbers are km/h; 30 km/h is 19 mph.
        XCTAssertEqual(OsmSpeedLimitProvider.parseMaxspeed("30"), 19)
        XCTAssertEqual(OsmSpeedLimitProvider.parseMaxspeed("30 mph"), 30)
        XCTAssertEqual(OsmSpeedLimitProvider.parseMaxspeed("50 km/h"), 31)
        XCTAssertNil(OsmSpeedLimitProvider.parseMaxspeed("walk"))
        XCTAssertNil(OsmSpeedLimitProvider.parseMaxspeed("DE:urban"))
    }

    func testOverpassResponseParsing() throws {
        let json = """
        {"elements":[{"type":"way","tags":{"highway":"residential","maxspeed":"25 mph"}}]}
        """
        XCTAssertEqual(OsmSpeedLimitProvider.parse(Data(json.utf8)), 25)

        let empty = #"{"elements":[]}"#
        XCTAssertNil(OsmSpeedLimitProvider.parse(Data(empty.utf8)))
    }

    // MARK: - CruiseSession

    private func makeSession(_ sent: SentCards, detector: DriveDetector,
                             street: String? = "Main Street", city: String? = "Cambridge",
                             limit: Int? = 30,
                             surface: CruiseSession.Surface = .lensCard) -> CruiseSession {
        CruiseSession(scheduler: scheduler,
                      send: { json, target, source in sent.record(json, target, source) },
                      detector: detector,
                      placeNames: StubPlaceNames(
                        place: street == nil && city == nil
                            ? nil : PlaceName(street: street, city: city)),
                      speedLimits: StubSpeedLimits(mph: limit),
                      surface: surface,
                      now: { [clock] in clock!.now })
    }

    /// Spins the run loop until the async geocode has landed a street on a card.
    ///
    /// Only usable on the card surface: cards are pushed whenever the text
    /// changes, so the stubbed lookup lands one without the clock moving.
    private func waitForStreet(_ sent: SentCards, _ needle: String = "Main Street") {
        let deadline = Date().addingTimeInterval(2)
        while !sent.all.contains(where: { $0.contains(needle) }), Date() < deadline {
            RunLoop.current.run(until: Date().addingTimeInterval(0.01))
        }
    }

    /// Lets the stubbed geocode and speed-limit tasks land, then pushes a fix
    /// far enough into the future to clear the HUD's frame rate limiter.
    ///
    /// HUD frames are time-limited rather than change-driven, and the clock here
    /// is hand-cranked, so without advancing it the enriched frame never goes out.
    private func settleAndPushHudFrame(lat: Double = 0.03, speedMps: Double? = nil) {
        RunLoop.current.run(until: Date().addingTimeInterval(0.1))
        scheduler.sync {}
        clock.advance(2)
        emit(speedMps: speedMps ?? fast, lat: lat)
    }

    /// Gets the detector into the driving state with the session already running.
    private func driveUpToSpeed() {
        activity(.automotive)
        emit(speedMps: fast)
        clock.advance(8)
        emit(speedMps: fast, lat: 0.01)
    }

    func testNoCardIsSentWhileTheGlassesCannotBeWrittenTo() {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector)
        session.start()
        scheduler.sync {}

        driveUpToSpeed()
        XCTAssertTrue(detector.isDriving)
        XCTAssertEqual(sent.all.count, 0, "disconnected glasses must not be written to")
    }

    func testReconnectingMidDriveShowsTheCardWithoutWaitingForAFix() {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector)
        session.start()
        scheduler.sync {}
        driveUpToSpeed()
        XCTAssertEqual(sent.showCount, 0)

        session.setCanSend(true)
        scheduler.sync {}
        XCTAssertEqual(sent.showCount, 1, "the card should appear on reconnect alone")
    }

    func testTurnByTurnTakingTheLensDismissesTheCruiseCard() {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector)
        session.start()
        session.setCanSend(true)
        scheduler.sync {}
        driveUpToSpeed()
        XCTAssertEqual(sent.showCount, 1)

        // Turn-by-turn starting closes the gate.
        session.setCanSend(false)
        scheduler.sync {}
        XCTAssertEqual(sent.dismissCount, 1)

        let showsBefore = sent.showCount
        clock.advance(10)
        emit(speedMps: fast, lat: 0.02)
        XCTAssertEqual(sent.showCount, showsBefore, "no cruise cards while routing")
    }

    func testParkingDismissesTheCard() {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector)
        session.start()
        session.setCanSend(true)
        scheduler.sync {}
        driveUpToSpeed()
        XCTAssertEqual(sent.showCount, 1)

        emit(speedMps: 0, lat: 0.02)
        clock.advance(45)
        emit(speedMps: 0, lat: 0.02)
        XCTAssertFalse(detector.isDriving)
        XCTAssertEqual(sent.dismissCount, 1)
    }

    func testTheCardCarriesTheStreetAndSpeedOnceGeocodingLands() throws {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector)
        session.start()
        session.setCanSend(true)
        scheduler.sync {}
        driveUpToSpeed()

        // Geocoding and the limit lookup are async; give them a moment to land
        // and to push an updated card.
        waitForStreet(sent)

        let card = try XCTUnwrap(sent.all.last { $0.contains("Main Street") })
        XCTAssertTrue(card.contains("mph"))
        XCTAssertFalse(card.contains("km/h"))
    }

    // MARK: - Native HUD surface

    func testTheHudSurfaceOpensTheNavPageThroughTheLauncherThenStreamsFrames() throws {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector, surface: .hud)
        session.start()
        session.setCanSend(true)
        scheduler.sync {}
        driveUpToSpeed()

        // open_app must be addressed to the LAUNCHER; sending it to the nav app
        // is a silent no-op.
        let first = try XCTUnwrap(sent.all.first)
        XCTAssertEqual(sent.targets.first, NavCommands.launchTargetPkg)
        let data = try XCTUnwrap(JsonReader(parsing: first)?.optObject("data"))
        XCTAssertEqual(data.optString("action"), "open_app")

        // Subsequent frames are navi_info, straight to the nav app.
        settleAndPushHudFrame()
        let frame = try XCTUnwrap(sent.firstFrame(identity: "navi_info"))
        XCTAssertEqual(sent.targets.last, NavCommands.frameTargetPkg)
        // The road slot carries the street alone; the speed is the big numeral
        // in nrd above it — see cruiseFrame.
        XCTAssertEqual(frame.optString("nrn"), "Main Street")
        XCTAssertEqual(frame.optInt("nrd", -1), 45)
        // No destination, so nothing may claim a remaining distance or time.
        XCTAssertEqual(frame.optInt("prd", -1), 0)
        XCTAssertEqual(frame.optInt("prt", -1), 0)
    }

    func testTheHudSurfaceSendsSpeedInKmhBecauseTheLabelIsHardcoded() throws {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector, surface: .hud)
        session.start()
        session.setCanSend(true)
        scheduler.sync {}
        driveUpToSpeed()

        // 20 m/s is 72 km/h (and 45 mph). The nav page draws a fixed "km/h"
        // label, so the number on the wire has to be the km/h one.
        settleAndPushHudFrame(speedMps: 20)
        let frame = try XCTUnwrap(sent.firstFrame(identity: "navi_info"))
        XCTAssertEqual(frame.optString("ns"), "72")
    }

    func testParkingStopsTheNavPageRatherThanDismissingACard() throws {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector, surface: .hud)
        session.start()
        session.setCanSend(true)
        scheduler.sync {}
        driveUpToSpeed()
        settleAndPushHudFrame()

        emit(speedMps: 0, lat: 0.04)
        clock.advance(45)
        emit(speedMps: 0, lat: 0.04)
        XCTAssertFalse(detector.isDriving)

        let stop = try XCTUnwrap(sent.firstFrame(identity: "navi_event"))
        XCTAssertEqual(stop.optString("data"), "navi_stop")
        XCTAssertFalse(sent.all.contains { $0.contains("\"title\"") },
                       "the HUD surface must never post a notification card")
    }

    // MARK: - Speed limit on the nav page

    func testTheRoadSlotCarriesTheStreetAlone() {
        // Speed and limit both stay out of the text slot.
        XCTAssertEqual(CruiseSession.hudRoadText(
            CruiseCard.Fields(street: "Sherrie Ln", speedMph: 34, speedLimitMph: 30)),
                       "Sherrie Ln")

        // Nothing geocoded yet leaves the slot empty rather than placeheld.
        XCTAssertEqual(CruiseSession.hudRoadText(
            CruiseCard.Fields(speedMph: 34)), "")
    }

    func testTheAckIsShiftedSoA24HourClockPrintsThe12HourHour() {
        var utc = Calendar(identifier: .gregorian)
        utc.timeZone = TimeZone(identifier: "UTC")!

        func hourShown(_ hour: Int) -> Int {
            let base = utc.date(from: DateComponents(timeZone: utc.timeZone,
                                                     year: 2026, month: 9, day: 1,
                                                     hour: hour, minute: 45))!
            let ms = Int64(base.timeIntervalSince1970 * 1000)
            let shifted = NavCommands.twelveHourAck(nowMs: ms, calendar: utc)
            let date = Date(timeIntervalSince1970: Double(shifted) / 1000)
            // Minutes must survive the shift untouched.
            XCTAssertEqual(utc.component(.minute, from: date), 45)
            return utc.component(.hour, from: date)
        }

        // Afternoon is the whole point: 13:45 has to print as 01:45.
        XCTAssertEqual(hourShown(13), 1)
        XCTAssertEqual(hourShown(23), 11)
        // Morning is already a 12-hour reading and must not be touched.
        XCTAssertEqual(hourShown(9), 9)
        // Noon and midnight both read 12 on a 12-hour face — the two cases a
        // bare `% 12` gets wrong.
        XCTAssertEqual(hourShown(12), 12)
        XCTAssertEqual(hourShown(0), 12)
    }

    func testTheSpeedRidesInTheManeuverDistanceSlot() {
        // nrd is the only large numeral the page draws, and a route-less frame
        // has no maneuver to describe — so the speed gets it.
        let frame = NavCommands.cruiseFrame(roadName: "Sherrie Ln", speedKmh: 55,
                                            speedMph: 34, tripDistanceM: 800,
                                            hasFix: true)
        XCTAssertEqual(frame.nextRoadDistanceM, 34)
        XCTAssertEqual(frame.nextRoadName, "Sherrie Ln")
        // The route slots stay zeroed: there is no destination.
        XCTAssertEqual(frame.remainingM, 0)
        XCTAssertEqual(frame.remainingS, 0)
    }

    func testTheSpeedBubbleMessageCarriesTheLimitAsAnArrayItem() throws {
        let json = NavCommands.buildCameraSpeed(30)
        let root = try XCTUnwrap(JsonReader(parsing: json))
        XCTAssertEqual(root.optString("identity"), "interval_camera_info")

        // Published under both names because which one wraps the array is not
        // resolvable from the firmware strings alone.
        for path in ["intervalCameraInfo", "cameraIntervalInfo"] {
            XCTAssertTrue(json.contains(path), "missing \(path)")
        }
        XCTAssertTrue(json.contains("\"cameraSpeed\":30"))
        XCTAssertTrue(json.contains("\"carEnterCameraStatus\":1"))

        // Leaving the zone clears the bubble.
        let leaving = NavCommands.buildCameraSpeed(0, entering: false)
        XCTAssertTrue(leaving.contains("\"carEnterCameraStatus\":0"))
    }

    func testTheHudPushesTheSpeedBubbleOnceAndOnlyAgainOnChange() throws {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector, limit: 30, surface: .hud)
        session.start()
        session.setCanSend(true)
        scheduler.sync {}
        driveUpToSpeed()
        settleAndPushHudFrame()

        let camera = sent.identities.filter { $0 == "interval_camera_info" }
        XCTAssertEqual(camera.count, 1, "an unchanged limit must not re-send")

        // The text slot stays on the street regardless of the limit.
        let frame = try XCTUnwrap(sent.firstFrame(identity: "navi_info"))
        XCTAssertEqual(frame.optString("nrn"), "Main Street")
    }

    func testNoSpeedBubbleWhenTheRoadHasNoMappedLimit() {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector, limit: nil, surface: .hud)
        session.start()
        session.setCanSend(true)
        scheduler.sync {}
        driveUpToSpeed()
        settleAndPushHudFrame()

        XCTAssertFalse(sent.identities.contains("interval_camera_info"),
                       "an unmapped road must not invent a limit")
    }

    // MARK: - Demo drive

    func testOffsetWalksTheDistanceItWasAskedFor() {
        let start = (lat: 37.3349, lon: -122.0090)
        let moved = Geo.offset(lat: start.lat, lon: start.lon,
                               distanceM: 1000, bearing: 90)
        XCTAssertEqual(Geo.haversine(start.lat, start.lon, moved.lat, moved.lon),
                       1000, accuracy: 1)
        // Due east: longitude climbs, latitude holds.
        XCTAssertGreaterThan(moved.lon, start.lon)
        XCTAssertEqual(moved.lat, start.lat, accuracy: 0.0001)
    }

    func testOffsetKeepsLongitudeInRangeAcrossTheDateLine() {
        let moved = Geo.offset(lat: 0, lon: 179.99, distanceM: 5000, bearing: 90)
        XCTAssertLessThanOrEqual(moved.lon, 180)
        XCTAssertGreaterThanOrEqual(moved.lon, -180)
    }

    func testTheDemoTrackMovesAtTheSpeedItReports() throws {
        // No origin source, so it seeds from the fallback immediately.
        let source = SimulatedLocationSource(fallback: (37.3349, -122.0090),
                                             speedMps: 15.6, bearing: 90,
                                             interval: 0.05)
        var fixes: [LocationFix] = []
        let lock = NSLock()
        source.start(onFix: { fix in lock.withLock { fixes.append(fix) } },
                     onUnavailable: { _ in XCTFail("the demo must not fail to start") })

        let deadline = Date().addingTimeInterval(2)
        while lock.withLock({ fixes.count }) < 3, Date() < deadline {
            RunLoop.current.run(until: Date().addingTimeInterval(0.01))
        }
        source.stop()

        let collected = lock.withLock { fixes }
        XCTAssertGreaterThanOrEqual(collected.count, 3)
        XCTAssertEqual(collected[0].speedMps, 15.6, accuracy: 0.001)
        // Each tick advances speed * interval along the bearing.
        let step = Geo.haversine(collected[0].latitude, collected[0].longitude,
                                 collected[1].latitude, collected[1].longitude)
        XCTAssertEqual(step, 15.6 * 0.05, accuracy: 0.5)
    }

    func testTheDemoDriveDrivesTheRealCruisePipeline() throws {
        let sent = SentCards()
        let source = SimulatedLocationSource(fallback: (37.3349, -122.0090),
                                             speedMps: 15.6, interval: 0.05)
        // Real detector, real session — only the fixes are invented.
        let detector = DriveDetector(scheduler: scheduler, location: source,
                                     motion: SimulatedMotionSource(),
                                     startHold: 0.1, stopHold: 3,
                                     now: Date.init)
        let session = CruiseSession(
            scheduler: scheduler,
            send: { json, target, source in sent.record(json, target, source) },
            detector: detector,
            placeNames: StubPlaceNames(place: PlaceName(street: "Demo Road", city: "Palo Alto")),
            speedLimits: StubSpeedLimits(mph: 35),
            surface: .lensCard)
        session.start()
        session.setCanSend(true)

        waitForStreet(sent, "Demo Road")
        session.stop()

        let card = try XCTUnwrap(sent.all.last { $0.contains("Demo Road") })
        // 15.6 m/s is 35 mph.
        XCTAssertTrue(card.contains("35 mph"), "demo speed should read as mph on the card")
    }

    func testTurnByTurnTakingOverStopsTheCruiseNavPage() throws {
        let sent = SentCards()
        let detector = makeDetector()
        let session = makeSession(sent, detector: detector, surface: .hud)
        session.start()
        session.setCanSend(true)
        scheduler.sync {}
        driveUpToSpeed()
        settleAndPushHudFrame()

        session.setCanSend(false)
        scheduler.sync {}
        XCTAssertEqual(sent.identities.filter { $0 == "navi_event" }.count, 1,
                       "cruise must hand the page over exactly once")
    }
}
