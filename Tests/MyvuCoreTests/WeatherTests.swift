import XCTest
@testable import MyvuCore

/// The weather model is serialised by the official app with plain Gson and no
/// `@SerializedName`, so the wire keys ARE the Java field names — including
/// `weather` for the condition text — and null fields are omitted rather than
/// sent as JSON `null`.
final class WeatherTests: XCTestCase {
    private func reading() -> Weather.Reading {
        var r = Weather.Reading()
        r.temp = 21
        r.condition = "Partly cloudy"
        r.dayTempMax = 25
        r.dayTempMin = 14
        r.areaName = "Dar es Salaam"
        r.iconCode = "3"
        r.aqi = 42
        r.quality = "Good"
        r.futureDay = [Weather.Day(date: "2026-08-21", tempMax: 26, tempMin: 15,
                                   condition: "Sunny", iconCode: "0")]
        return r
    }

    private func data(_ r: Weather.Reading) -> [String: Any] {
        TestJson.nested(TestJson.object(Weather.build(r)), "data")
    }

    func testDataIsTheModelWithNoNestedAction() {
        let json = TestJson.object(Weather.build(reading()))
        XCTAssertEqual(TestJson.string(json, "action"), "weather")
        // Unlike the "system" family there is no data.action here.
        XCTAssertNil(TestJson.nested(json, "data")["action"])
    }

    func testConditionTextIsSerialisedUnderTheKeyWeather() {
        let d = data(reading())
        XCTAssertEqual(TestJson.string(d, "weather"), "Partly cloudy")
        XCTAssertNil(d["condition"], "the field is named weather on the wire")
    }

    func testAllPresentFieldsAppear() {
        let d = data(reading())
        XCTAssertEqual(TestJson.int(d, "temp"), 21)
        XCTAssertEqual(TestJson.int(d, "dayTempMax"), 25)
        XCTAssertEqual(TestJson.int(d, "dayTempMin"), 14)
        XCTAssertEqual(TestJson.string(d, "areaName"), "Dar es Salaam")
        XCTAssertEqual(TestJson.string(d, "iconCode"), "3")
        XCTAssertEqual(TestJson.int(d, "aqi"), 42)
        XCTAssertEqual(TestJson.string(d, "quality"), "Good")
    }

    func testUnknownFieldsAreOmittedRatherThanSentAsNull() {
        // Gson's default behaviour, and what the glasses were built against.
        let d = data(Weather.Reading())
        XCTAssertNil(d["temp"])
        XCTAssertNil(d["weather"])
        XCTAssertNil(d["areaName"])
        XCTAssertNil(d["sunriseTime"])
        XCTAssertFalse(Weather.build(Weather.Reading()).contains("null"))
    }

    func testNonNullableFieldsAreAlwaysSentEvenWhenUnset() {
        // These are primitives / non-null in the model, so the device's parser
        // expects them present.
        let d = data(Weather.Reading())
        XCTAssertEqual(TestJson.string(d, "iconCode"), "0")
        XCTAssertEqual(TestJson.int(d, "aqi"), 0)
        XCTAssertEqual(TestJson.string(d, "quality"), "")
        XCTAssertNotNil(d["futureDay"], "futureDay must be present, even if empty")
    }

    func testFutureDayEntriesUseTheSameKeyNamesAsTheParent() {
        let day = TestJson.array(data(reading()), "futureDay").first as? [String: Any] ?? [:]
        XCTAssertEqual(TestJson.string(day, "date"), "2026-08-21")
        XCTAssertEqual(TestJson.int(day, "dayTempMax"), 26)
        XCTAssertEqual(TestJson.int(day, "dayTempMin"), 15)
        XCTAssertEqual(TestJson.string(day, "weather"), "Sunny")
        XCTAssertEqual(TestJson.string(day, "iconCode"), "0")
    }

    func testFutureDayIsAnEmptyArrayNotAMissingField() {
        XCTAssertEqual(TestJson.array(data(Weather.Reading()), "futureDay").count, 0)
    }

    func testTimestampUsesTheModelsFormat() {
        // Formatted in the local zone, so assert the shape rather than an exact
        // instant.
        let s = Weather.timestamp(epochMs: 1_784_488_002_000)
        XCTAssertEqual(s.count, 19)
        XCTAssertEqual(s.dropFirst(4).first, "-")
        XCTAssertEqual(s.dropFirst(10).first, " ")
        XCTAssertEqual(s.dropFirst(13).first, ":")
    }

    func testSyncRequestIsRecognised() {
        XCTAssertTrue(Weather.isSyncRequest(JsonReader(parsing: #"{"action":"syncWeather"}"#)!))
        XCTAssertFalse(Weather.isSyncRequest(JsonReader(parsing: #"{"action":"weather"}"#)!))
    }
}
