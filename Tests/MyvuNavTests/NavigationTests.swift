import XCTest
@testable import MyvuCore
@testable import MyvuNav

final class GeoTests: XCTestCase {
    func testHaversineMatchesAKnownDistance() {
        // Dar es Salaam → Dodoma is roughly 380 km.
        let d = Geo.haversine(-6.7924, 39.2083, -6.1630, 35.7516)
        XCTAssertTrue(d > 380_000 && d < 400_000, "got \(d)")
    }

    func testHaversineIsZeroForTheSamePoint() {
        XCTAssertEqual(Geo.haversine(-6.7924, 39.2083, -6.7924, 39.2083), 0, accuracy: 0.001)
    }

    func testHaversineIsSymmetric() {
        XCTAssertEqual(Geo.haversine(-6.79, 39.20, -6.80, 39.21),
                       Geo.haversine(-6.80, 39.21, -6.79, 39.20), accuracy: 0.001)
    }
}

final class IcMapTests: XCTestCase {
    func testManeuverTypeTakesPriorityOverModifier() {
        // A roundabout with a "right" modifier is still a roundabout icon.
        XCTAssertEqual(IcMap.forManeuver(type: "roundabout", modifier: "right"), 9)
        XCTAssertEqual(IcMap.forManeuver(type: "turn", modifier: "right"), 2)
    }

    func testUnknownManeuversFallBackToStraight() {
        XCTAssertEqual(IcMap.forManeuver(type: "no-such-type", modifier: "no-such-modifier"),
                       IcMap.defaultIc)
        XCTAssertEqual(IcMap.forManeuver(type: nil, modifier: nil), IcMap.defaultIc)
    }
}

final class RouteTrackerTests: XCTestCase {
    /// Four vertices ~111m apart along a meridian, with a turn at ~222m.
    private func straightRoute() -> Route {
        let vertices = [
            Route.Vertex(lat: 0.000, lon: 0, cumulativeM: 0),
            Route.Vertex(lat: 0.001, lon: 0, cumulativeM: 111),
            Route.Vertex(lat: 0.002, lon: 0, cumulativeM: 222),
            Route.Vertex(lat: 0.003, lon: 0, cumulativeM: 333),
        ]
        let steps = [
            Route.Step(ic: 1, road: "First Road", distanceM: 222, durationS: 30,
                       type: "depart", modifier: "", atM: 0),
            Route.Step(ic: 2, road: "Second Road", distanceM: 111, durationS: 15,
                       type: "turn", modifier: "right", atM: 222),
            Route.Step(ic: 15, road: "", distanceM: 0, durationS: 0,
                       type: "arrive", modifier: "", atM: 333),
        ]
        return Route(steps: steps, totalDistanceM: 333, totalDurationS: 45, vertices: vertices)
    }

    func testTrackerReportsProgressAndTheNextManeuver() {
        let s = RouteTracker(route: straightRoute()).update(lat: 0.001, lon: 0)

        XCTAssertEqual(s.travelledM, 111, accuracy: 1)
        XCTAssertEqual(s.remainingM, 222, accuracy: 1)
        XCTAssertFalse(s.offRoute)
        XCTAssertEqual(s.nextStep?.ic, 2, "the turn ahead, not the one behind")
        XCTAssertEqual(s.distToNextM, 111, accuracy: 1)
    }

    func testTrackerDetectsBeingOffRoute() {
        // ~1.1km east of the polyline, far beyond the 45m threshold.
        let s = RouteTracker(route: straightRoute()).update(lat: 0.001, lon: 0.01)
        XCTAssertTrue(s.offRoute)
        XCTAssertGreaterThan(s.deviationM, RouteTracker.offRouteM)
    }

    func testTrackerReturnsNoNextStepAtTheEnd() {
        let s = RouteTracker(route: straightRoute()).update(lat: 0.003, lon: 0)
        XCTAssertNil(s.nextStep, "past the last maneuver")
        XCTAssertEqual(s.remainingM, 0, accuracy: 1)
    }

    func testTrackerSurvivesAnEmptyRoute() {
        // A route with no geometry must not read as an infinite deviation,
        // which would park the HUD permanently in "off route".
        let empty = Route(steps: [], totalDistanceM: 0, totalDurationS: 0, vertices: [])
        let s = RouteTracker(route: empty).update(lat: 1, lon: 1)
        XCTAssertEqual(s.travelledM, 0, accuracy: 0.001)
        XCTAssertFalse(s.offRoute)
    }
}

final class NavCommandsTests: XCTestCase {
    private func parse(_ json: String) -> JsonReader {
        guard let r = JsonReader(parsing: json) else {
            XCTFail("not parseable: \(json)")
            return JsonReader(parsing: "{}")!
        }
        return r
    }

    func testNaviInfoUsesTheAppsShortKeys() {
        var frame = NavCommands.Frame()
        frame.ic = 2
        frame.pathDistanceM = 5000
        frame.remainingM = 3000
        frame.remainingS = 400
        frame.nextRoadName = "Samora Avenue"
        frame.nextRoadDistanceM = 250
        frame.speed = "48"
        frame.rideDistanceM = 2000

        let f = parse(NavCommands.buildNaviInfo(frame))
        XCTAssertEqual(f.optString("identity"), "navi_info")
        XCTAssertEqual(f.optInt("ic", -1), 2)
        XCTAssertEqual(f.optInt("pd", -1), 5000)
        XCTAssertEqual(f.optInt("prd", -1), 3000)
        XCTAssertEqual(f.optInt("prt", -1), 400)
        XCTAssertEqual(f.optString("nrn"), "Samora Avenue")
        XCTAssertEqual(f.optInt("nrd", -1), 250)
        XCTAssertEqual(f.optInt("rdd", -1), 2000)
        XCTAssertEqual(f.optInt("gs", -1), 1)
        XCTAssertGreaterThan(f.optInt("ack", 0), 1_600_000_000_000)
    }

    func testSpeedIsAStringOnTheWire() {
        // The glasses' bean types ns as a string; a bare number does not bind.
        var frame = NavCommands.Frame()
        frame.speed = "48"
        XCTAssertTrue(NavCommands.buildNaviInfo(frame).contains("\"ns\":\"48\""))
    }

    func testStartCarriesExtAsAJsonString() {
        var frame = NavCommands.Frame()
        frame.pathDistanceM = 1000
        frame.remainingM = 1000
        frame.remainingS = 120
        frame.nextRoadName = "Ali Hassan Mwinyi Road"
        frame.nextRoadDistanceM = 300

        let data = parse(NavCommands.buildStart(frame)).optObject("data")
        XCTAssertEqual(data?.optString("action"), "open_app")
        XCTAssertEqual(data?.optString("pkg"), "com.upuphone.ar.navi.glass")
        XCTAssertEqual(data?.optBool("show_status_bar", true), false)

        // ext must be a STRING containing JSON, not a nested object.
        let ext = parse(data?.optString("ext") ?? "")
        XCTAssertEqual(ext.optInt("ic", -1), 1)
        XCTAssertEqual(ext.optString("nrn"), "Ali Hassan Mwinyi Road")
        // The initial frame omits the navi_info "identity" wrapper.
        XCTAssertFalse(ext.has("identity"))
    }

    func testOpenSendsAnEmptyExt() {
        XCTAssertEqual(parse(NavCommands.buildOpen()).optObject("data")?.optString("ext"), "")
    }

    func testStopIsANaviEvent() {
        let e = parse(NavCommands.buildStop())
        XCTAssertEqual(e.optString("identity"), "navi_event")
        XCTAssertEqual(e.optString("data"), "navi_stop")
    }

    /// REGRESSION: open_app was addressed to the nav app, so nothing ever acted
    /// on it and navigation silently never started. open/start must go to the
    /// LAUNCHER (it is what opens apps); only HUD data goes to the nav app.
    func testLaunchAndFrameMessagesTargetDifferentPackages() {
        XCTAssertEqual(NavCommands.launchTargetPkg, "com.upuphone.star.launcher",
                       "open_app must go to the launcher")
        XCTAssertEqual(NavCommands.frameTargetPkg, "com.upuphone.ar.navi.glass",
                       "HUD frames go straight to the nav app")
        XCTAssertEqual(NavCommands.sourcePkg, "com.upuphone.ar.navi.lite",
                       "everything is sourced from the phone-side nav package")
        XCTAssertNotEqual(NavCommands.launchTargetPkg, NavCommands.frameTargetPkg)
    }
}
