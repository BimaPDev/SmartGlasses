import Foundation

/// Formats the cruise HUD's lens card.
///
/// Pure text, so the whole display contract is unit-testable without a car, a
/// phone, or a pair of glasses.
///
/// Units are ALWAYS mph and miles. The lens has no unit flag and the wearer
/// reads it at a glance next to a car speedometer, so locale-dependent output
/// would be worse than useless.
public enum CruiseCard {
    /// Everything the card can show. Anything unknown is `nil` and is left out
    /// rather than rendered as a placeholder.
    public struct Fields: Equatable, Sendable {
        public var street: String?
        public var city: String?
        public var speedMph: Int?
        /// 8-wind compass point, e.g. `"NE"`.
        public var heading: String?
        public var tripMiles: Double?
        public var speedLimitMph: Int?

        public init(street: String? = nil, city: String? = nil, speedMph: Int? = nil,
                    heading: String? = nil, tripMiles: Double? = nil,
                    speedLimitMph: Int? = nil) {
            self.street = street
            self.city = city
            self.speedMph = speedMph
            self.heading = heading
            self.tripMiles = tripMiles
            self.speedLimitMph = speedLimitMph
        }
    }

    /// Single spaces: the lens card is narrow, and wider padding pushed the
    /// speed onto its own line mid-phrase.
    private static let separator = " · "
    private static let mpsToMph = 2.236936
    private static let metresToMiles = 0.000621371

    public static func mph(fromMps mps: Double) -> Int? {
        guard mps >= 0 else { return nil }
        return Int((mps * mpsToMph).rounded())
    }

    public static func miles(fromMetres metres: Double) -> Double {
        metres * metresToMiles
    }

    /// 8-wind compass point, or nil when CoreLocation has no course (-1).
    public static func heading(fromBearing bearing: Double) -> String? {
        guard bearing >= 0 else { return nil }
        let points = ["N", "NE", "E", "SE", "S", "SW", "W", "NW"]
        let normalized = bearing.truncatingRemainder(dividingBy: 360)
        let positive = normalized < 0 ? normalized + 360 : normalized
        let index = Int((positive / 45).rounded()) % points.count
        return points[index]
    }

    /// Street and speed — the two things worth reading at a glance.
    ///
    /// An empty street is treated as no street: a geocode that came back blank
    /// would otherwise leave a leading separator dangling before the speed.
    public static func title(_ f: Fields) -> String {
        let street = f.street.flatMap { $0.isEmpty ? nil : $0 }
        let speed = f.speedMph.map { "\($0) mph" }
        return [street, speed].compactMap { $0 }.joined(separator: separator)
    }

    /// The supporting line. Empty when nothing else is known yet.
    public static func body(_ f: Fields) -> String {
        var parts: [String] = []
        if let city = f.city, !city.isEmpty { parts.append(city) }
        if let heading = f.heading { parts.append(heading) }
        if let trip = f.tripMiles, let text = tripText(trip) { parts.append(text) }
        if let limit = f.speedLimitMph { parts.append("limit \(limit)") }
        return parts.joined(separator: separator)
    }

    /// Miles to one decimal, floored at 0.1 so a just-started drive does not
    /// read `0.0 mi`. Nil until the odometer has actually moved.
    static func tripText(_ miles: Double) -> String? {
        guard miles > 0 else { return nil }
        return String(format: "%.1f mi", max(miles, 0.1))
    }
}
