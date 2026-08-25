import Foundation

/// A point a weather reading should describe.
public struct WeatherFix: Equatable, Sendable {
    public let latitude: Double
    public let longitude: Double
    /// Shown on the lens; nil leaves the field off the wire entirely.
    public let areaName: String?

    public init(latitude: Double, longitude: Double, areaName: String?) {
        self.latitude = latitude
        self.longitude = longitude
        self.areaName = areaName
    }
}

/// Supplies the point a weather reading should describe.
///
/// `WeatherSync` bounds its own wait, so an implementation that never answers
/// only delays one round rather than wedging the refresh cycle.
public protocol WeatherLocationProviding: AnyObject {
    func requestFix() async throws -> WeatherFix

    /// Releases anything held for an in-flight request, e.g. GPS updates.
    func cancel()
}

public extension WeatherLocationProviding {
    func cancel() {}
}

/// A hard-coded point. Needs no permissions and no network.
public final class FixedWeatherLocation: WeatherLocationProviding {
    private let fix: WeatherFix

    public init(latitude: Double, longitude: Double, areaName: String?) {
        self.fix = WeatherFix(latitude: latitude, longitude: longitude, areaName: areaName)
    }

    public func requestFix() async throws -> WeatherFix { fix }
}
