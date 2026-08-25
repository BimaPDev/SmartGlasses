import Foundation

/// A routed path: maneuver steps plus the polyline used for map-matching.
public struct Route: Sendable {
    /// One maneuver along the route.
    public struct Step: Sendable {
        /// Glasses arrow-icon value (see `IcMap` — provisional).
        public let ic: Int
        /// Road you travel AFTER this maneuver.
        public let road: String
        public let distanceM: Int
        public let durationS: Double
        /// Raw OSRM maneuver type/modifier, kept for icon calibration.
        public let type: String
        public let modifier: String
        /// Cumulative distance along the route at which this maneuver occurs.
        public let atM: Double

        public init(ic: Int, road: String, distanceM: Int, durationS: Double,
                    type: String, modifier: String, atM: Double) {
            self.ic = ic
            self.road = road
            self.distanceM = distanceM
            self.durationS = durationS
            self.type = type
            self.modifier = modifier
            self.atM = atM
        }
    }

    /// A polyline point with its cumulative distance from the origin.
    public struct Vertex: Sendable {
        public let lat: Double
        public let lon: Double
        public let cumulativeM: Double

        public init(lat: Double, lon: Double, cumulativeM: Double) {
            self.lat = lat
            self.lon = lon
            self.cumulativeM = cumulativeM
        }
    }

    public let steps: [Step]
    public let totalDistanceM: Int
    public let totalDurationS: Double
    public let vertices: [Vertex]

    public init(steps: [Step], totalDistanceM: Int, totalDurationS: Double,
                vertices: [Vertex]) {
        self.steps = steps
        self.totalDistanceM = totalDistanceM
        self.totalDurationS = totalDurationS
        self.vertices = vertices
    }
}

/// Resolves a destination and computes a route to it.
///
/// The default `OsrmRouteProvider` uses the public OSRM demo server plus
/// Nominatim geocoding; supply your own to point at a self-hosted router or a
/// different routing service.
public protocol RouteProvider: Sendable {
    /// - Parameter destination: a place name or a literal `"lat,lon"` pair.
    func route(fromLat: Double, fromLon: Double, destination: String) async throws -> Route
}
