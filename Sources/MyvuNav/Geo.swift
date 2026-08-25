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
}
