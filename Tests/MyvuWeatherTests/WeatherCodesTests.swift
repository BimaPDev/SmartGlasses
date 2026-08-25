import XCTest
@testable import MyvuWeather

final class WeatherCodesTests: XCTestCase {
    /// The only three icon codes attested by the official app's own mock
    /// payload. Everything else in the table is inference from the standard
    /// Chinese/CMA numbering, so these are the ones worth pinning.
    func testTheVerifiedIconCodes() {
        XCTAssertEqual(WeatherCodes.of(2).iconCode, "1", "partly cloudy → 多云")
        XCTAssertEqual(WeatherCodes.of(3).iconCode, "2", "overcast → 阴")
        XCTAssertEqual(WeatherCodes.of(61).iconCode, "7", "light rain → 小雨")
    }

    func testClearSkyIsIconZero() {
        XCTAssertEqual(WeatherCodes.of(0).iconCode, "0")
        XCTAssertEqual(WeatherCodes.of(0).text, "Clear")
    }

    func testRainIntensifiesThroughTheTable() {
        XCTAssertEqual(WeatherCodes.of(61).iconCode, WeatherCodes.lightRain)
        XCTAssertEqual(WeatherCodes.of(63).iconCode, WeatherCodes.moderateRain)
        XCTAssertEqual(WeatherCodes.of(65).iconCode, WeatherCodes.heavyRain)
    }

    func testUnknownCodesFallBackToCloudy() {
        // Visually neutral, which beats a blank panel or a wrong-looking sun.
        for wmo in [-1, 7, 42, 1000] {
            XCTAssertEqual(WeatherCodes.of(wmo).iconCode, WeatherCodes.cloudy)
            XCTAssertEqual(WeatherCodes.of(wmo).text, "Cloudy")
        }
    }

    func testEveryConditionCarriesBothAnIconAndText() {
        // An empty string here renders as a gap on the lens.
        for wmo in 0 ... 99 {
            let c = WeatherCodes.of(wmo)
            XCTAssertFalse(c.iconCode.isEmpty, "wmo \(wmo)")
            XCTAssertFalse(c.text.isEmpty, "wmo \(wmo)")
        }
    }
}
