import Foundation

/// Snaps a live position onto a `Route` and reports progress plus the upcoming
/// maneuver.
///
/// Nearest-vertex snapping: coarse, but robust and cheap, and accurate enough
/// for a HUD at typical OSRM vertex spacing. It does not project onto segments,
/// so expect a few metres of quantisation.
public struct RouteTracker {
    /// How far off the polyline before we call it off-route.
    public static let offRouteM = 45.0
    /// A maneuver within this distance behind us is considered already taken.
    private static let passedMarginM = 5.0

    public struct State {
        public let travelledM: Double
        public let remainingM: Double
        public let offRoute: Bool
        /// Distance from the nearest route vertex.
        public let deviationM: Double
        /// The maneuver ahead, or nil once past the last one.
        public let nextStep: Route.Step?
        public let distToNextM: Double
    }

    private let route: Route

    public init(route: Route) {
        self.route = route
    }

    public func update(lat: Double, lon: Double) -> State {
        var bestDistance = Double.greatestFiniteMagnitude
        var travelled = 0.0

        for v in route.vertices {
            let d = Geo.haversine(lat, lon, v.lat, v.lon)
            if d < bestDistance {
                bestDistance = d
                travelled = v.cumulativeM
            }
        }
        // A route with no geometry cannot be deviated from, and reporting the
        // sentinel as a deviation would put the HUD permanently off-route.
        if route.vertices.isEmpty { bestDistance = 0 }

        var next: Route.Step?
        var distToNext = 0.0
        for s in route.steps where s.atM > travelled + RouteTracker.passedMarginM {
            next = s
            distToNext = s.atM - travelled
            break
        }

        return State(travelledM: travelled,
                     remainingM: max(0, Double(route.totalDistanceM) - travelled),
                     offRoute: bestDistance > RouteTracker.offRouteM,
                     deviationM: bestDistance,
                     nextStep: next,
                     distToNextM: distToNext)
    }
}
