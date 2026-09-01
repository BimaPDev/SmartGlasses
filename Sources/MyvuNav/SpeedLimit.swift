import Foundation
import MyvuCore

/// Looks up the posted speed limit at a fix, in mph.
///
/// Returns nil — not an error — when the road simply has no `maxspeed` mapped,
/// which is the common case outside cities.
public protocol SpeedLimitProviding: Sendable {
    func speedLimitMph(lat: Double, lon: Double) async throws -> Int?
}

/// Speed limits from OpenStreetMap via Overpass.
///
/// Overpass is a shared community service with no SLA: the query radius is
/// small, results are cached, and `CruiseSession` only asks when the road
/// changes. A failure is swallowed by the caller and the card simply omits the
/// limit.
public actor OsmSpeedLimitProvider: SpeedLimitProviding {
    private static let endpoint = "https://overpass-api.de/api/interpreter"
    private static let userAgent = "myvu-ios-sdk/1.0"
    private static let timeout: TimeInterval = 8
    /// Metres around the fix to look for a road.
    private static let radiusM = 30
    private static let cacheTtl: TimeInterval = 600

    private struct Entry {
        let mph: Int?
        let at: Date
    }

    private var cache: [String: Entry] = [:]
    private let now: @Sendable () -> Date

    public init(now: @escaping @Sendable () -> Date = { Date() }) {
        self.now = now
    }

    public func speedLimitMph(lat: Double, lon: Double) async throws -> Int? {
        let key = Self.cacheKey(lat: lat, lon: lon)
        if let hit = cache[key], now().timeIntervalSince(hit.at) < Self.cacheTtl {
            return hit.mph
        }
        let mph = try await fetch(lat: lat, lon: lon)
        // Cache misses too: a road with no mapped limit should not be re-queried
        // every few seconds for the whole drive.
        cache[key] = Entry(mph: mph, at: now())
        return mph
    }

    private func fetch(lat: Double, lon: Double) async throws -> Int? {
        let query = """
        [out:json][timeout:\(Int(Self.timeout))];\
        way(around:\(Self.radiusM),\(lat),\(lon))[highway][maxspeed];\
        out tags 1;
        """
        var request = URLRequest(url: URL(string: Self.endpoint)!,
                                 timeoutInterval: Self.timeout)
        request.httpMethod = "POST"
        request.setValue(Self.userAgent, forHTTPHeaderField: "User-Agent")
        request.setValue("application/x-www-form-urlencoded",
                         forHTTPHeaderField: "Content-Type")
        request.httpBody = Data(query.utf8)

        let (data, response) = try await URLSession.shared.data(for: request)
        if let http = response as? HTTPURLResponse, http.statusCode >= 400 {
            throw MyvuError.notFound("HTTP \(http.statusCode) from Overpass")
        }
        return Self.parse(data)
    }

    /// Rounded to ~11 m so a moving car reuses one cache entry along a block.
    static func cacheKey(lat: Double, lon: Double) -> String {
        String(format: "%.4f,%.4f", lat, lon)
    }

    /// Pulls the first element's `maxspeed` out of an Overpass JSON response.
    static func parse(_ data: Data) -> Int? {
        guard let root = try? JSONSerialization.jsonObject(with: data) as? [String: Any],
              let elements = root["elements"] as? [[String: Any]]
        else { return nil }
        for element in elements {
            guard let tags = element["tags"] as? [String: Any] else { continue }
            let raw = (tags["maxspeed"] as? String) ?? (tags["maxspeed:forward"] as? String)
            if let raw, let mph = parseMaxspeed(raw) { return mph }
        }
        return nil
    }

    /// OSM's `maxspeed` is km/h unless it says otherwise, so a bare number must
    /// be converted or every US limit would read ~30% low.
    ///
    /// Symbolic values (`walk`, `none`, `DE:urban`) carry no number and are nil.
    static func parseMaxspeed(_ raw: String) -> Int? {
        let text = raw.trimmingCharacters(in: .whitespaces).lowercased()
        let isMph = text.hasSuffix("mph")
        let number = text
            .replacingOccurrences(of: "mph", with: "")
            .replacingOccurrences(of: "km/h", with: "")
            .replacingOccurrences(of: "kmh", with: "")
            .trimmingCharacters(in: .whitespaces)
        guard let value = Double(number), value > 0 else { return nil }
        return isMph ? Int(value.rounded()) : Int((value * 0.621371).rounded())
    }
}
