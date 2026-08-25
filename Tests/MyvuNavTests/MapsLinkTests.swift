import XCTest
@testable import MyvuNav

/// Real share-sheet output from each app, since the formats differ enough that
/// inventing them would prove nothing.
final class MapsLinkTests: XCTestCase {
    func testAppleMapsLatLon() {
        XCTAssertEqual(MapsLink.destination(from: "https://maps.apple.com/?ll=37.331,-122.031"),
                       "37.331,-122.031")
    }

    func testAppleMapsDaddrWinsOverViewport() {
        // ll is the map centre, daddr is where the user actually wants to go.
        let url = "https://maps.apple.com/?ll=40.0,-74.0&daddr=37.331,-122.031"
        XCTAssertEqual(MapsLink.destination(from: url), "37.331,-122.031")
    }

    func testWazeEncodedComma() {
        let url = "https://waze.com/ul?ll=37.331%2C-122.031&navigate=yes"
        XCTAssertEqual(MapsLink.destination(from: url), "37.331,-122.031")
    }

    func testGoogleAtCoordinateInPath() {
        let url = "https://www.google.com/maps/place/Apple+Park/@37.331,-122.031,17z/data=!3m1"
        XCTAssertEqual(MapsLink.destination(from: url), "37.331,-122.031")
    }

    func testGoogleDirectionsDestination() {
        let url = "https://www.google.com/maps/dir/?api=1&destination=37.331,-122.031"
        XCTAssertEqual(MapsLink.destination(from: url), "37.331,-122.031")
    }

    /// Google Maps shares a title and address around the link, not a bare URL.
    func testExtractsLinkFromSurroundingText() {
        let shared = "Apple Park\nOne Apple Park Way\nhttps://maps.apple.com/?ll=37.331,-122.031"
        XCTAssertEqual(MapsLink.destination(from: shared), "37.331,-122.031")
    }

    /// A place name is still useful — NavSession geocodes it.
    func testFallsBackToPlaceName() {
        let url = "https://maps.google.com/?q=Eiffel+Tower+Paris"
        XCTAssertEqual(MapsLink.destination(from: url), "Eiffel Tower Paris")
    }

    /// Short links carry no coordinates until the redirect is followed, so the
    /// offline parse must decline rather than guess.
    func testShortLinkHasNothingToParseOffline() {
        XCTAssertNil(MapsLink.destination(from: "https://maps.app.goo.gl/aBcDeFgHiJk"))
    }

    func testRejectsOutOfRangeAndNullIsland() {
        XCTAssertNil(MapsLink.destination(from: "https://maps.apple.com/?ll=200.0,-500.0"))
        XCTAssertNil(MapsLink.destination(from: "https://maps.apple.com/?ll=0,0"))
    }

    func testIgnoresNonMapsText() {
        XCTAssertNil(MapsLink.destination(from: "just some words"))
        XCTAssertNil(MapsLink.destination(from: ""))
    }
}
