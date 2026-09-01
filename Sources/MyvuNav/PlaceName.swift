import CoreLocation
import Foundation
import MyvuCore

/// The street and city at a fix.
public struct PlaceName: Equatable, Sendable {
    public let street: String?
    public let city: String?

    public init(street: String?, city: String?) {
        self.street = street
        self.city = city
    }
}

/// Turns a fix into a street and city for the cruise HUD.
public protocol PlaceNameProviding: Sendable {
    func placeName(lat: Double, lon: Double) async throws -> PlaceName
}

/// Apple's reverse geocoder — the same one the weather module uses, so the
/// cruise HUD adds no new third-party dependency and no extra API key.
///
/// Apple rate-limits reverse geocoding aggressively; `CruiseSession` is what
/// throttles the calls, and a throttled-out request just leaves the last known
/// street on the card.
public struct CoreLocationPlaceNames: PlaceNameProviding {
    public init() {}

    public func placeName(lat: Double, lon: Double) async throws -> PlaceName {
        let location = CLLocation(latitude: lat, longitude: lon)
        let placemarks = try await CLGeocoder().reverseGeocodeLocation(location)
        guard let p = placemarks.first else {
            throw MyvuError.notFound("no placemark at \(lat),\(lon)")
        }
        // `thoroughfare` is the street. `name` is deliberately not used as a
        // fallback: for an address it is the house number, which is noise on a
        // HUD read at 40 mph.
        let street = p.thoroughfare?.trimmingCharacters(in: .whitespaces)
        let city = (p.locality ?? p.subLocality)?.trimmingCharacters(in: .whitespaces)
        return PlaceName(street: street.flatMap { $0.isEmpty ? nil : $0 },
                         city: city.flatMap { $0.isEmpty ? nil : $0 })
    }
}
