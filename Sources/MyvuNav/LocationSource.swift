import Foundation

/// One position fix.
public struct LocationFix: Equatable, Sendable {
    public let latitude: Double
    public let longitude: Double
    /// Metres per second, or -1 when unknown.
    public let speedMps: Double
    /// Degrees from north, or -1 when unknown.
    public let bearing: Double

    public init(latitude: Double, longitude: Double,
                speedMps: Double = -1, bearing: Double = -1) {
        self.latitude = latitude
        self.longitude = longitude
        self.speedMps = speedMps
        self.bearing = bearing
    }
}

/// A stream of position fixes.
///
/// Abstracted so `CoreLocation` stays swappable — useful for replaying a
/// recorded track in tests, or driving the HUD from an external GPS.
public protocol LocationSourceProviding: AnyObject {
    /// Begins delivering fixes at roughly 1Hz.
    func start(onFix: @escaping (LocationFix) -> Void,
               onUnavailable: @escaping (String) -> Void)

    func stop()
}
