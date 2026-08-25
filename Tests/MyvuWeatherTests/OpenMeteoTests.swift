import XCTest
@testable import MyvuCore
@testable import MyvuWeather

/// Shaping an Open-Meteo response into the glasses' model, without hitting the
/// network: `shape` takes the already-decoded JSON precisely so it can be tested.
final class OpenMeteoTests: XCTestCase {
    /// Decoded from text rather than written as a Swift literal, so the values
    /// are the NSNumbers the network path really produces. A literal would type
    /// the whole map as Double and quietly test something else.
    private func decode(_ json: String) -> [String: Any] {
        let data = Data(json.utf8)
        return (try? JSONSerialization.jsonObject(with: data)) as? [String: Any] ?? [:]
    }

    private lazy var response = decode("""
    {
      "current": {"temperature_2m": 21.4, "weather_code": 3},
      "daily": {
        "time": ["2026-08-20", "2026-08-21", "2026-08-22"],
        "temperature_2m_max": [25.6, 26.1, 24.0],
        "temperature_2m_min": [14.2, 15.0, 13.7],
        "weather_code": [3, 0, 61],
        "sunrise": ["2026-08-20T06:12", "2026-08-21T06:13", "2026-08-22T06:14"],
        "sunset": ["2026-08-20T20:31", "2026-08-21T20:29", "2026-08-22T20:27"]
      }
    }
    """)

    func testCurrentConditionsAreRoundedToWholeDegrees() {
        // The model's temperatures are integer degrees Celsius; a fractional
        // value would not bind.
        let r = OpenMeteo.shape(response, areaName: "Berlin")
        XCTAssertEqual(r.temp, 21)
        XCTAssertEqual(r.areaName, "Berlin")
        XCTAssertEqual(r.condition, "Overcast")
        XCTAssertEqual(r.iconCode, WeatherCodes.overcast)
    }

    func testTodaySuppliesTheHeadlineHighLowAndSunTimes() {
        let r = OpenMeteo.shape(response, areaName: nil)
        XCTAssertEqual(r.dayTempMax, 26)
        XCTAssertEqual(r.dayTempMin, 14)
        // Seconds are appended: Open-Meteo omits them and the glasses' parser
        // expects them.
        XCTAssertEqual(r.sunriseTime, "2026-08-20 06:12:00")
        XCTAssertEqual(r.sunsetTime, "2026-08-20 20:31:00")
    }

    func testForecastStartsAtTodayLikeTheOfficialPayload() {
        let r = OpenMeteo.shape(response, areaName: nil)
        XCTAssertEqual(r.futureDay.count, 3)
        XCTAssertEqual(r.futureDay[0].date, "2026-08-20")
        XCTAssertEqual(r.futureDay[1].condition, "Clear")
        XCTAssertEqual(r.futureDay[2].tempMax, 24)
        XCTAssertEqual(r.futureDay[2].iconCode, WeatherCodes.lightRain)
    }

    func testLastUpdateUsesTheModelsTimestampFormat() {
        XCTAssertEqual(OpenMeteo.shape(response, areaName: nil).lastUpdate?.count, 19)
    }

    func testAnEmptyResponseStillProducesASendableReading() {
        // A partial response must not produce a payload the glasses reject: the
        // non-nullable fields have to survive.
        let r = OpenMeteo.shape([:], areaName: nil)
        XCTAssertNil(r.temp)
        XCTAssertEqual(r.iconCode, "0")
        XCTAssertEqual(r.quality, "")
        XCTAssertTrue(r.futureDay.isEmpty)
        XCTAssertFalse(Weather.build(r).contains("null"))
    }

    func testMissingDailyArraysDoNotDesynchroniseTheForecast() {
        // Open-Meteo has been seen to return fewer entries in one array than
        // another; indexing must stay in bounds and skip what is absent.
        let r = OpenMeteo.shape(decode("""
        {"daily": {"time": ["2026-08-20", "2026-08-21"], "temperature_2m_max": [25.0]}}
        """), areaName: nil)
        XCTAssertEqual(r.futureDay.count, 2)
        XCTAssertEqual(r.futureDay[0].tempMax, 25)
        XCTAssertNil(r.futureDay[1].tempMax)
        XCTAssertNil(r.futureDay[1].condition)
    }

    func testNullsInsideAnArrayDoNotDiscardTheRestOfIt() {
        // A null hour is normal in Open-Meteo's output. Reading the array
        // strictly would drop every other day along with it.
        let r = OpenMeteo.shape(decode("""
        {"daily": {"time": ["2026-08-20", "2026-08-21"],
                   "temperature_2m_max": [null, 26],
                   "weather_code": [0, null]}}
        """), areaName: nil)
        XCTAssertNil(r.futureDay[0].tempMax)
        XCTAssertEqual(r.futureDay[0].condition, "Clear")
        XCTAssertEqual(r.futureDay[1].tempMax, 26)
        XCTAssertNil(r.futureDay[1].condition)
    }

    func testIsoTimestampsWithSecondsArePassedThroughUnchanged() {
        XCTAssertEqual(OpenMeteo.isoToStamp("2026-08-20T06:12:34"), "2026-08-20 06:12:34")
        XCTAssertNil(OpenMeteo.isoToStamp(""))
    }
}
