import Foundation

/// Great-circle geometry. Pure maths, so unit-testable off-device.
public enum Geo {
    private static let earthRadiusM = 6_371_000.0

    /// Distance between two lat/lon points, in metres.
    public static func haversine(_ lat1: Double, _ lon1: Double,
                                 _ lat2: Double, _ lon2: Double) -> Double {
        let p1 = lat1 * .pi / 180
        let p2 = lat2 * .pi / 180
        let dp = (lat2 - lat1) * .pi / 180
        let dl = (lon2 - lon1) * .pi / 180
        let a = sin(dp / 2) * sin(dp / 2)
            + cos(p1) * cos(p2) * sin(dl / 2) * sin(dl / 2)
        return 2 * earthRadiusM * asin(min(1.0, a.squareRoot()))
    }

    /// The point `distanceM` away from a start point along a compass `bearing`.
    ///
    /// Inverse of `haversine`, used to walk a synthetic track for the cruise HUD
    /// demo. Spherical, so it drifts from a real geoid over long distances —
    /// irrelevant for the few kilometres a demo covers.
    public static func offset(lat: Double, lon: Double,
                              distanceM: Double, bearing: Double) -> (lat: Double, lon: Double) {
        let angular = distanceM / earthRadiusM
        let b = bearing * .pi / 180
        let p1 = lat * .pi / 180
        let l1 = lon * .pi / 180

        let p2 = asin(sin(p1) * cos(angular) + cos(p1) * sin(angular) * cos(b))
        let l2 = l1 + atan2(sin(b) * sin(angular) * cos(p1),
                            cos(angular) - sin(p1) * sin(p2))
        // Keep longitude in -180...180 so a track crossing the date line stays
        // usable rather than producing coordinates no geocoder will accept.
        let normalized = (l2 * 180 / .pi).truncatingRemainder(dividingBy: 360)
        let lon2 = normalized > 180 ? normalized - 360
            : (normalized < -180 ? normalized + 360 : normalized)
        return (p2 * 180 / .pi, lon2)
    }
}
