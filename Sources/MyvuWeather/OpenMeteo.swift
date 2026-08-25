import Foundation
import MyvuCore

/// Degree system for the integer temperatures pushed to the glasses.
///
/// The wire format has **no unit flag** — the official China app always sends
/// Celsius. US users typically want the same numbers their iPhone Weather app
/// shows (Fahrenheit), so this SDK lets the caller choose. The lens just
/// renders the integer.
public enum TemperatureUnit: String, Sendable {
    case celsius
    case fahrenheit

    /// Matches the phone's region settings (US → °F, most elsewhere → °C).
    public static var forCurrentLocale: TemperatureUnit {
        if #available(iOS 16, macOS 13, *) {
            return Locale.current.measurementSystem == .metric ? .celsius : .fahrenheit
        }
        return Locale.current.usesMetricSystem ? .celsius : .fahrenheit
    }

    public var symbol: String { self == .celsius ? "°C" : "°F" }

    /// Open-Meteo `temperature_unit` query value.
    var openMeteoValue: String { rawValue }
}

/// Fetches the forecast from Open-Meteo and shapes it into the glasses' model.
///
/// Open-Meteo was chosen over OpenWeatherMap because it needs NO API key, and it
/// takes lat/lon directly, which is what a location provider already gives us.
///
/// The official app cannot help here — it pulls from Meizu's own backend, which
/// we have no access to. Only the OUTPUT shape has to match, and that is pinned
/// by `Weather`/ArWeatherModel in the core module.
public enum OpenMeteo {
    private static let base = URL(string: "https://api.open-meteo.com/v1/forecast")!
    /// The same provider's geocoder, so a place name needs no second service.
    private static let geocodeBase =
        URL(string: "https://geocoding-api.open-meteo.com/v1/search")!
    /// The model carries a 7-day futureDay list.
    private static let forecastDays = 7
    private static let timeout: TimeInterval = 20

    /// A resolved place: coordinates plus the name to show on the lens.
    public struct Place: Equatable, Sendable {
        public let latitude: Double
        public let longitude: Double
        public let name: String?
    }

    /// Resolves `"lat,lon"` or a place name ("Dar es Salaam") to coordinates.
    ///
    /// Literal coordinates are parsed locally; anything else goes to Open-Meteo's
    /// geocoder, whose returned name becomes the lens's areaName.
    public static func resolve(_ place: String) async throws -> Place {
        let s = place.trimmingCharacters(in: .whitespacesAndNewlines)
        guard !s.isEmpty else { throw MyvuError.notFound("no place given") }

        let parts = s.split(separator: ",", maxSplits: 1)
        if parts.count == 2,
           let lat = Double(parts[0].trimmingCharacters(in: .whitespaces)),
           let lon = Double(parts[1].trimmingCharacters(in: .whitespaces)) {
            // Literal coordinates carry no name.
            return Place(latitude: lat, longitude: lon, name: nil)
        }

        var components = URLComponents(url: geocodeBase, resolvingAgainstBaseURL: false)!
        components.queryItems = [
            URLQueryItem(name: "name", value: s),
            URLQueryItem(name: "count", value: "1"),
            URLQueryItem(name: "format", value: "json"),
        ]
        let root = try await getJson(components.url!)
        guard let hit = (root["results"] as? [[String: Any]])?.first,
              let lat = hit["latitude"] as? Double,
              let lon = hit["longitude"] as? Double
        else {
            throw MyvuError.notFound("no place matched \"\(s)\"")
        }
        return Place(latitude: lat, longitude: lon, name: hit["name"] as? String ?? s)
    }

    /// - Parameter areaName: shown on the lens; nil leaves it off the wire.
    /// - Parameter unit: Celsius (stock MYVU) or Fahrenheit (matches US iPhone Weather).
    public static func fetch(latitude: Double, longitude: Double,
                             areaName: String?,
                             unit: TemperatureUnit = .celsius) async throws -> Weather.Reading {
        var components = URLComponents(url: base, resolvingAgainstBaseURL: false)!
        components.queryItems = [
            URLQueryItem(name: "latitude", value: String(format: "%.4f", latitude)),
            URLQueryItem(name: "longitude", value: String(format: "%.4f", longitude)),
            URLQueryItem(name: "current", value: "temperature_2m,weather_code"),
            URLQueryItem(name: "daily",
                         value: "weather_code,temperature_2m_max,temperature_2m_min,"
                             + "sunrise,sunset"),
            // timezone=auto makes sunrise/sunset LOCAL to the queried point,
            // which is what the glasses display.
            URLQueryItem(name: "timezone", value: "auto"),
            URLQueryItem(name: "forecast_days", value: String(forecastDays)),
            URLQueryItem(name: "temperature_unit", value: unit.openMeteoValue),
        ]

        let root = try await getJson(components.url!)
        return shape(root, areaName: areaName)
    }

    static func shape(_ root: [String: Any], areaName: String?) -> Weather.Reading {
        var r = Weather.Reading()
        r.areaName = areaName
        r.lastUpdate = Weather.timestamp(epochMs: Session.nowMillis())

        if let current = root["current"] as? [String: Any] {
            r.temp = degrees(current["temperature_2m"])
            let c = WeatherCodes.of(number(current["weather_code"]).map(Int.init) ?? -1)
            r.iconCode = c.iconCode
            r.condition = c.text
        }

        guard let daily = root["daily"] as? [String: Any] else { return r }
        let dates = daily["time"] as? [String] ?? []
        let max = array(daily["temperature_2m_max"])
        let min = array(daily["temperature_2m_min"])
        let codes = array(daily["weather_code"])
        let sunrise = daily["sunrise"] as? [String] ?? []
        let sunset = daily["sunset"] as? [String] ?? []

        // Index 0 is today: it supplies the headline high/low and the sun times
        // the glasses also use for auto-brightness.
        if let v = max.first ?? nil { r.dayTempMax = Int(v.rounded()) }
        if let v = min.first ?? nil { r.dayTempMin = Int(v.rounded()) }
        if let v = sunrise.first { r.sunriseTime = isoToStamp(v) }
        if let v = sunset.first { r.sunsetTime = isoToStamp(v) }

        // The rest are the forecast. The official app's own payload starts
        // futureDay at today, so match that.
        for (i, date) in dates.enumerated() {
            var d = Weather.Day(date: date)
            if i < max.count, let v = max[i] { d.tempMax = Int(v.rounded()) }
            if i < min.count, let v = min[i] { d.tempMin = Int(v.rounded()) }
            if i < codes.count, let v = codes[i] {
                let c = WeatherCodes.of(Int(v))
                d.iconCode = c.iconCode
                d.condition = c.text
            }
            r.futureDay.append(d)
        }
        return r
    }

    // Numbers are read loosely on purpose. JSONSerialization hands back
    // NSNumber, which casts to either Int or Double, but a temperature can also
    // arrive as a whole number and Open-Meteo nulls out any hour it has no data
    // for — a strict `as? [Double]` would then discard the entire array.
    private static func number(_ value: Any?) -> Double? {
        if let d = value as? Double { return d }
        if let i = value as? Int { return Double(i) }
        return nil
    }

    private static func degrees(_ value: Any?) -> Int? {
        number(value).map { Int($0.rounded()) }
    }

    private static func array(_ value: Any?) -> [Double?] {
        (value as? [Any])?.map(number) ?? []
    }

    /// `"2024-04-11T05:31"` → `"2024-04-11 05:31:00"`, the format the model wants.
    static func isoToStamp(_ iso: String) -> String? {
        guard !iso.isEmpty else { return nil }
        let s = iso.replacingOccurrences(of: "T", with: " ")
        // Open-Meteo omits seconds; the glasses' parser expects them.
        return s.count == 16 ? s + ":00" : s
    }

    private static func getJson(_ url: URL) async throws -> [String: Any] {
        var request = URLRequest(url: url, timeoutInterval: timeout)
        request.setValue("myvu-ios-sdk/1.0", forHTTPHeaderField: "User-Agent")

        let (data, response) = try await URLSession.shared.data(for: request)
        if let http = response as? HTTPURLResponse, http.statusCode != 200 {
            throw MyvuError.notFound("weather HTTP \(http.statusCode)")
        }
        guard let obj = try JSONSerialization.jsonObject(with: data) as? [String: Any] else {
            throw MyvuError.notFound("the weather service returned something unexpected")
        }
        return obj
    }
}
