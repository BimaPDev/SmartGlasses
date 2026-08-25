import Foundation
import MyvuCore

/// Routing and geocoding over the public OSRM and Nominatim services.
///
/// The public OSRM demo server has no SLA or rate guarantee; swap in a
/// self-hosted instance for anything beyond experimenting. Nominatim asks for a
/// descriptive User-Agent and light usage.
public enum Osrm {
    private static let osrmBase = "https://router.project-osrm.org"
    private static let nominatimBase = "https://nominatim.openstreetmap.org"
    private static let userAgent = "myvu-ios-sdk/1.0"
    private static let timeout: TimeInterval = 20

    /// Resolves `"lat,lon"` directly, otherwise geocodes the text.
    public static func parsePoint(_ s: String) async throws -> (lat: Double, lon: Double) {
        let t = s.trimmingCharacters(in: .whitespacesAndNewlines)
        let parts = t.split(separator: ",")
        if parts.count == 2,
           let lat = Double(parts[0].trimmingCharacters(in: .whitespaces)),
           let lon = Double(parts[1].trimmingCharacters(in: .whitespaces)) {
            return (lat, lon)
        }
        return try await geocode(t)
    }

    /// Nominatim forward geocode.
    public static func geocode(_ place: String) async throws -> (lat: Double, lon: Double) {
        var components = URLComponents(string: nominatimBase + "/search")!
        components.queryItems = [
            URLQueryItem(name: "q", value: place),
            URLQueryItem(name: "format", value: "json"),
            URLQueryItem(name: "limit", value: "1"),
        ]
        let body = try await get(components.url!)
        guard let results = try JSONSerialization.jsonObject(with: body) as? [[String: Any]],
              let first = results.first
        else {
            throw MyvuError.notFound("no geocode result for \"\(place)\"")
        }
        // Nominatim returns coordinates as STRINGS, not numbers.
        guard let lat = Double(first["lat"] as? String ?? ""),
              let lon = Double(first["lon"] as? String ?? "")
        else {
            throw MyvuError.notFound("unparseable geocode response for \"\(place)\"")
        }
        return (lat, lon)
    }

    /// Fetches a turn-by-turn route with geometry, for map-matching.
    public static func route(originLat: Double, originLon: Double,
                             destLat: Double, destLon: Double,
                             profile: String) async throws -> Route {
        // OSRM takes lon,lat — the opposite order to everything else here.
        let coords = String(format: "%f,%f;%f,%f", originLon, originLat, destLon, destLat)
        var components = URLComponents(
            string: "\(osrmBase)/route/v1/\(profile)/\(coords)")!
        components.queryItems = [
            URLQueryItem(name: "overview", value: "full"),
            URLQueryItem(name: "geometries", value: "geojson"),
            URLQueryItem(name: "steps", value: "true"),
            URLQueryItem(name: "annotations", value: "false"),
        ]

        let body = try await get(components.url!)
        guard let data = try JSONSerialization.jsonObject(with: body) as? [String: Any] else {
            throw MyvuError.notFound("unparseable OSRM response")
        }
        return try parse(data)
    }

    static func parse(_ data: [String: Any]) throws -> Route {
        let code = data["code"] as? String ?? "?"
        guard code == "Ok", let routes = data["routes"] as? [[String: Any]],
              let r = routes.first
        else {
            throw MyvuError.notFound(
                "OSRM returned \(code): \(data["message"] as? String ?? "no route")")
        }

        let geometry = r["geometry"] as? [String: Any]
        let vertices = buildVertices(geometry?["coordinates"] as? [[Double]] ?? [])
        let steps = buildSteps(r["legs"] as? [[String: Any]] ?? [], vertices: vertices)

        let distance = Int(r["distance"] as? Double ?? 0)
        let duration = r["duration"] as? Double ?? 0
        SdkLog.log("route: \(steps.count) steps, \(distance)m, \(Int(duration.rounded()))s")
        return Route(steps: steps, totalDistanceM: distance, totalDurationS: duration,
                     vertices: vertices)
    }

    private static func buildVertices(_ coordinates: [[Double]]) -> [Route.Vertex] {
        var out: [Route.Vertex] = []
        out.reserveCapacity(coordinates.count)
        var acc = 0.0
        var prevLat = 0.0
        var prevLon = 0.0
        for (i, c) in coordinates.enumerated() where c.count >= 2 {
            let lon = c[0] // GeoJSON is lon,lat
            let lat = c[1]
            if i > 0 { acc += Geo.haversine(prevLat, prevLon, lat, lon) }
            out.append(Route.Vertex(lat: lat, lon: lon, cumulativeM: acc))
            prevLat = lat
            prevLon = lon
        }
        return out
    }

    private static func buildSteps(_ legs: [[String: Any]],
                                   vertices: [Route.Vertex]) -> [Route.Step] {
        var steps: [Route.Step] = []
        for leg in legs {
            for st in leg["steps"] as? [[String: Any]] ?? [] {
                let man = st["maneuver"] as? [String: Any]
                let type = man?["type"] as? String ?? ""
                let modifier = man?["modifier"] as? String ?? ""

                var at = 0.0
                if let loc = man?["location"] as? [Double], loc.count >= 2 {
                    at = nearestCumulative(vertices, lat: loc[1], lon: loc[0])
                }

                steps.append(Route.Step(
                    ic: IcMap.forManeuver(type: type, modifier: modifier),
                    road: st["name"] as? String ?? "",
                    distanceM: Int(st["distance"] as? Double ?? 0),
                    durationS: st["duration"] as? Double ?? 0,
                    type: type, modifier: modifier, atM: at))
            }
        }
        return steps
    }

    /// Where along the polyline a maneuver sits, so progress can be compared
    /// against it later without re-searching.
    private static func nearestCumulative(_ vertices: [Route.Vertex],
                                          lat: Double, lon: Double) -> Double {
        var bestCum = 0.0
        var bestDistance = Double.greatestFiniteMagnitude
        for v in vertices {
            let d = Geo.haversine(lat, lon, v.lat, v.lon)
            if d < bestDistance {
                bestDistance = d
                bestCum = v.cumulativeM
            }
        }
        return bestCum
    }

    private static func get(_ url: URL) async throws -> Data {
        var request = URLRequest(url: url, timeoutInterval: timeout)
        request.setValue(userAgent, forHTTPHeaderField: "User-Agent")

        let (data, response) = try await URLSession.shared.data(for: request)
        if let http = response as? HTTPURLResponse, http.statusCode >= 400 {
            let text = String(decoding: data.prefix(200), as: UTF8.self)
            throw MyvuError.notFound("HTTP \(http.statusCode) from \(url.host ?? "?"): \(text)")
        }
        return data
    }
}

/// Default `RouteProvider`: geocodes with Nominatim and routes with the public
/// OSRM demo server (see `Osrm`). The demo server has no SLA — for production,
/// point a custom provider at your own OSRM instance.
public struct OsrmRouteProvider: RouteProvider {
    private let profile: String

    /// - Parameter profile: OSRM profile — `driving`, `walking` or `cycling`.
    public init(profile: String = "driving") {
        self.profile = profile
    }

    public func route(fromLat: Double, fromLon: Double,
                      destination: String) async throws -> Route {
        let dest = try await Osrm.parsePoint(destination)
        return try await Osrm.route(originLat: fromLat, originLon: fromLon,
                                    destLat: dest.lat, destLon: dest.lon, profile: profile)
    }
}
