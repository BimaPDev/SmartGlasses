import Foundation

/// Weather sync.
///
/// Wire format is `{"action":"weather","data":{ …ArWeatherModel… }}` sent to the
/// launcher. Unlike the "system" family there is NO nested `data.action` — the
/// `data` object IS the model.
///
/// Field names below are the model's Java field names verbatim: the official app
/// serialises with plain Gson and no `@SerializedName`, so the wire keys are
/// exactly the field names. Gson also OMITS null fields by default, which is the
/// behaviour the glasses were built against — so an unknown value is left out
/// entirely rather than sent as JSON `null`.
///
/// Temperatures are integer degrees CELSIUS. The official app hardcodes
/// `unit=metric` and there is no unit flag anywhere in the payload, so there is
/// nothing to negotiate.
public enum Weather {
    public static let action = "weather"

    /// The glasses ask for a refresh with `{"action":"syncWeather"}`. Curiously
    /// the official app parses this and then drops it — its handler callback is
    /// never assigned — so in the real app the refresh only ever comes from its
    /// own 30-minute timer. This SDK answers it.
    public static let syncRequestAction = "syncWeather"

    /// One entry of the forecast (ArFutureDay). All fields optional.
    public struct Day: Equatable, Sendable {
        public var date: String? // "yyyy-MM-dd"
        public var tempMax: Int?
        public var tempMin: Int?
        public var condition: String? // serialised as "weather"
        public var iconCode: String?

        public init(date: String? = nil, tempMax: Int? = nil, tempMin: Int? = nil,
                    condition: String? = nil, iconCode: String? = nil) {
            self.date = date
            self.tempMax = tempMax
            self.tempMin = tempMin
            self.condition = condition
            self.iconCode = iconCode
        }
    }

    /// ArWeatherModel. Nil fields are omitted from the wire.
    public struct Reading: Equatable, Sendable {
        public var temp: Int?
        /// Human-readable condition text; serialised as "weather".
        public var condition: String?
        public var dayTempMax: Int?
        public var dayTempMin: Int?
        public var areaName: String?
        /// NOT nullable in the model — always send something.
        public var iconCode: String = "0"
        public var lastUpdate: String?
        public var sunriseTime: String?
        public var sunsetTime: String?
        /// Primitive in the model, so always present; 0 when unknown.
        public var aqi: Int = 0
        /// Not nullable in the model; "" when unknown.
        public var quality: String = ""
        /// Not nullable in the model; may be empty.
        public var futureDay: [Day] = []

        public init() {}
    }

    public static func build(_ r: Reading) -> String {
        var data = JsonObject()
        data.putIfPresent("temp", r.temp)
        data.putIfPresent("weather", r.condition)
        data.putIfPresent("dayTempMax", r.dayTempMax)
        data.putIfPresent("dayTempMin", r.dayTempMin)
        data.putIfPresent("areaName", r.areaName)
        data.put("iconCode", r.iconCode)
        data.putIfPresent("lastUpdate", r.lastUpdate)
        data.putIfPresent("sunriseTime", r.sunriseTime)
        data.putIfPresent("sunsetTime", r.sunsetTime)
        data.put("aqi", r.aqi)
        data.put("quality", r.quality)

        var days: [JsonValue] = []
        for d in r.futureDay {
            var o = JsonObject()
            o.putIfPresent("date", d.date)
            o.putIfPresent("dayTempMax", d.tempMax)
            o.putIfPresent("dayTempMin", d.tempMin)
            o.putIfPresent("weather", d.condition)
            o.putIfPresent("iconCode", d.iconCode)
            days.append(.object(o))
        }
        data.put("futureDay", .array(days))

        var out = JsonObject()
        out.put("action", action)
        out.put("data", data)
        return out.serialized()
    }

    /// Formats an epoch-millisecond value the way the model expects.
    public static func timestamp(epochMs: Int64) -> String {
        formatter.string(from: Date(timeIntervalSince1970: Double(epochMs) / 1000))
    }

    /// The model's timestamp format, confirmed against the app's parser.
    private static let formatter: DateFormatter = {
        let f = DateFormatter()
        f.dateFormat = "yyyy-MM-dd HH:mm:ss"
        f.locale = Locale(identifier: "en_US_POSIX")
        return f
    }()

    /// True when the glasses are asking us to push fresh weather.
    public static func isSyncRequest(_ message: JsonReader) -> Bool {
        message.optString("action") == syncRequestAction
    }
}
