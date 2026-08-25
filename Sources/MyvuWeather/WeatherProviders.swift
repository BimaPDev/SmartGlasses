import CoreLocation
import Foundation
import MyvuCore

/// The device's own position, via CoreLocation.
///
/// Requests a SINGLE coarse fix rather than continuous updates: weather refreshes
/// every 30 minutes, so a live GPS subscription would cost battery for nothing.
/// `kCLLocationAccuracyReduced` is deliberate too — it is enough for a city-level
/// forecast, and it lets the app work with "precise location" turned off.
///
/// Your app must carry `NSLocationWhenInUseUsageDescription` in Info.plist and
/// request authorisation; this provider will ask once if the status is still
/// undetermined.
public final class DeviceWeatherLocation: NSObject, WeatherLocationProviding {
    private let manager = CLLocationManager()
    private let geocoder = CLGeocoder()
    /// Whether to reverse-geocode the fix into a name for the lens.
    private let resolvePlaceName: Bool

    private var continuation: CheckedContinuation<CLLocation, Error>?

    public init(resolvePlaceName: Bool = true) {
        self.resolvePlaceName = resolvePlaceName
        super.init()
        manager.delegate = self
        manager.desiredAccuracy = kCLLocationAccuracyReduced
    }

    public func requestFix() async throws -> WeatherFix {
        let location = try await withCheckedThrowingContinuation { (c: CheckedContinuation<CLLocation, Error>) in
            // A second in-flight request would strand the first continuation.
            if let pending = continuation {
                continuation = nil
                pending.resume(throwing: MyvuError.notFound("superseded by a newer request"))
            }
            continuation = c

            switch manager.authorizationStatus {
            case .notDetermined:
                manager.requestWhenInUseAuthorization()
            case .denied, .restricted:
                finish(.failure(MyvuError.notFound(
                    "location access is denied, so the weather panel cannot be filled")))
                return
            default:
                break
            }
            manager.requestLocation()
        }

        return WeatherFix(latitude: location.coordinate.latitude,
                          longitude: location.coordinate.longitude,
                          areaName: resolvePlaceName ? await placeName(for: location) : nil)
    }

    public func cancel() {
        finish(.failure(MyvuError.notFound("the location request was cancelled")))
    }

    /// Best-effort: a nameless reading still renders, so a geocoder failure is
    /// not worth failing the round over.
    private func placeName(for location: CLLocation) async -> String? {
        guard let marks = try? await geocoder.reverseGeocodeLocation(location) else {
            return nil
        }
        let mark = marks.first
        return mark?.locality ?? mark?.subAdministrativeArea ?? mark?.administrativeArea
    }

    private func finish(_ result: Result<CLLocation, Error>) {
        guard let c = continuation else { return }
        continuation = nil
        c.resume(with: result)
    }
}

extension DeviceWeatherLocation: CLLocationManagerDelegate {
    public func locationManager(_ manager: CLLocationManager,
                                didUpdateLocations locations: [CLLocation]) {
        guard let location = locations.last else { return }
        finish(.success(location))
    }

    public func locationManager(_ manager: CLLocationManager, didFailWithError error: Error) {
        finish(.failure(error))
    }

    public func locationManagerDidChangeAuthorization(_ manager: CLLocationManager) {
        // The first request lands here rather than at requestLocation, because
        // authorisation had not been decided yet.
        guard continuation != nil else { return }
        switch manager.authorizationStatus {
        case .authorizedAlways, .authorizedWhenInUse:
            manager.requestLocation()
        case .denied, .restricted:
            finish(.failure(MyvuError.notFound("location access was denied")))
        default:
            break
        }
    }
}

/// A named place, geocoded once and then cached.
///
/// Takes anything `OpenMeteo.resolve` accepts: a place name ("Dar es Salaam") or
/// literal `"lat,lon"`. Needs no permissions.
public final class PlaceWeatherLocation: WeatherLocationProviding {
    private let place: String
    private var cached: WeatherFix?

    public init(_ place: String) {
        self.place = place
    }

    public func requestFix() async throws -> WeatherFix {
        if let cached { return cached }
        let resolved = try await OpenMeteo.resolve(place)
        let fix = WeatherFix(latitude: resolved.latitude, longitude: resolved.longitude,
                             areaName: resolved.name)
        cached = fix
        return fix
    }
}
