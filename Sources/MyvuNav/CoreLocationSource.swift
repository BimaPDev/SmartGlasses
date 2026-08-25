import CoreLocation
import Foundation
import MyvuCore

/// Live position from CoreLocation, for turn-by-turn.
///
/// Unlike the weather module's single coarse fix, navigation needs continuous
/// FULL-accuracy updates, so this asks for `kCLLocationAccuracyBestForNavigation`
/// and, on iOS, `activityType = .automotiveNavigation` so the system's own
/// filtering matches what we are doing.
///
/// Your app must carry `NSLocationWhenInUseUsageDescription` in Info.plist. To
/// keep navigating with the screen off, request Always authorisation, enable the
/// Location background mode, and set `allowsBackgroundUpdates`.
public final class CoreLocationSource: NSObject, LocationSourceProviding {
    private let manager = CLLocationManager()
    /// Set only while started, so a stray delegate callback after `stop` is
    /// simply ignored.
    private var onFix: ((LocationFix) -> Void)?
    private var onUnavailable: ((String) -> Void)?

    /// - Parameter allowsBackgroundUpdates: keep updates flowing when the app is
    ///   backgrounded. Requires Always authorisation and the Location background
    ///   mode; CoreLocation raises an exception if it is set without them.
    public init(allowsBackgroundUpdates: Bool = false) {
        super.init()
        manager.delegate = self
        manager.desiredAccuracy = kCLLocationAccuracyBestForNavigation
        // The HUD refreshes at ~1Hz; a distance filter would starve it while
        // stationary at a junction, which is exactly when the arrow matters.
        manager.distanceFilter = kCLDistanceFilterNone
        #if os(iOS)
            manager.activityType = .automotiveNavigation
            if allowsBackgroundUpdates {
                manager.allowsBackgroundLocationUpdates = true
                manager.pausesLocationUpdatesAutomatically = false
            }
        #endif
    }

    public func start(onFix: @escaping (LocationFix) -> Void,
                      onUnavailable: @escaping (String) -> Void) {
        self.onFix = onFix
        self.onUnavailable = onUnavailable

        switch manager.authorizationStatus {
        case .notDetermined:
            // Updates begin from the authorisation callback instead.
            manager.requestWhenInUseAuthorization()
        case .denied, .restricted:
            onUnavailable("location access is denied")
        default:
            manager.startUpdatingLocation()
        }
    }

    public func stop() {
        onFix = nil
        onUnavailable = nil
        manager.stopUpdatingLocation()
    }
}

extension CoreLocationSource: CLLocationManagerDelegate {
    public func locationManager(_ manager: CLLocationManager,
                                didUpdateLocations locations: [CLLocation]) {
        guard let onFix, let l = locations.last else { return }
        // CoreLocation reports a negative speed or course when it has none;
        // LocationFix uses the same -1 convention, so pass the absence through
        // rather than turning it into a real zero.
        onFix(LocationFix(latitude: l.coordinate.latitude,
                          longitude: l.coordinate.longitude,
                          speedMps: l.speed >= 0 ? l.speed : -1,
                          bearing: l.course >= 0 ? l.course : -1))
    }

    public func locationManager(_ manager: CLLocationManager, didFailWithError error: Error) {
        // A transient failure is normal indoors and CoreLocation keeps trying,
        // so this does not tear the session down.
        SdkLog.trace("location error: \(error.localizedDescription)")
    }

    public func locationManagerDidChangeAuthorization(_ manager: CLLocationManager) {
        guard onFix != nil else { return }
        switch manager.authorizationStatus {
        case .authorizedAlways, .authorizedWhenInUse:
            manager.startUpdatingLocation()
        case .denied, .restricted:
            onUnavailable?("location access was denied")
        default:
            break
        }
    }
}
