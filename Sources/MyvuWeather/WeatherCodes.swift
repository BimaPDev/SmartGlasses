import Foundation

/// Translates Open-Meteo's WMO weather codes into the glasses' own icon code and
/// a human-readable condition string.
///
/// HOW MUCH OF THIS IS VERIFIED: the glasses' icon table lives in their launcher
/// (`com.upuphone.star.launcher`), not in the phone app, so it could not be read
/// out of the decompiled APK. Only three values are directly attested, from the
/// official app's own mock payload:
///
///     "1" → 多云 (cloudy)   "2" → 阴 (overcast)   "7" → 小雨 (light rain)
///
/// Those three land exactly where the standard Chinese/CMA weather-icon numbering
/// puts them, which is strong evidence the glasses use that well-known table — so
/// the rest below follows it. Treat any code other than 1/2/7 as a very good
/// guess rather than a fact. If an icon ever looks wrong on the lens, this is the
/// single place to correct it.
public enum WeatherCodes {
    // The standard table. 1, 2 and 7 are verified; the others follow its scheme.
    static let sunny = "0"
    static let cloudy = "1" // verified
    static let overcast = "2" // verified
    static let shower = "3"
    static let thundershower = "4"
    static let thunderHail = "5"
    static let lightRain = "7" // verified
    static let moderateRain = "8"
    static let heavyRain = "9"
    static let storm = "10"
    static let snowFlurry = "13"
    static let lightSnow = "14"
    static let moderateSnow = "15"
    static let heavySnow = "16"
    static let fog = "18"
    static let freezingRain = "19"

    /// An icon code plus the text shown beside it.
    public struct Condition: Equatable, Sendable {
        public let iconCode: String
        public let text: String
    }

    /// Maps a WMO code (what Open-Meteo returns) to what the glasses expect.
    ///
    /// Unknown codes fall back to cloudy, which is visually neutral — better than
    /// a blank or a wrong-looking sun.
    public static func of(_ wmo: Int) -> Condition {
        switch wmo {
        case 0: return Condition(iconCode: sunny, text: "Clear")
        case 1: return Condition(iconCode: cloudy, text: "Mainly clear")
        case 2: return Condition(iconCode: cloudy, text: "Partly cloudy")
        case 3: return Condition(iconCode: overcast, text: "Overcast")

        case 45, 48: return Condition(iconCode: fog, text: "Fog")

        case 51: return Condition(iconCode: lightRain, text: "Light drizzle")
        case 53: return Condition(iconCode: lightRain, text: "Drizzle")
        case 55: return Condition(iconCode: moderateRain, text: "Heavy drizzle")

        case 56, 57: return Condition(iconCode: freezingRain, text: "Freezing drizzle")

        case 61: return Condition(iconCode: lightRain, text: "Light rain")
        case 63: return Condition(iconCode: moderateRain, text: "Rain")
        case 65: return Condition(iconCode: heavyRain, text: "Heavy rain")

        case 66, 67: return Condition(iconCode: freezingRain, text: "Freezing rain")

        case 71: return Condition(iconCode: lightSnow, text: "Light snow")
        case 73: return Condition(iconCode: moderateSnow, text: "Snow")
        case 75: return Condition(iconCode: heavySnow, text: "Heavy snow")
        case 77: return Condition(iconCode: lightSnow, text: "Snow grains")

        case 80: return Condition(iconCode: shower, text: "Light showers")
        case 81: return Condition(iconCode: shower, text: "Showers")
        case 82: return Condition(iconCode: storm, text: "Violent showers")

        case 85, 86: return Condition(iconCode: snowFlurry, text: "Snow showers")

        case 95: return Condition(iconCode: thundershower, text: "Thunderstorm")
        case 96, 99: return Condition(iconCode: thunderHail, text: "Thunderstorm with hail")

        default: return Condition(iconCode: cloudy, text: "Cloudy")
        }
    }
}
