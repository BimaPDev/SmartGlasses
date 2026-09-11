import CoreLocation
import Foundation
import MyvuCore
import UserNotifications

/// Place-triggered lists: arrive somewhere, and the phone pushes the list that
/// belongs there onto the lens.
///
/// This needs **no firmware change**. The glasses are a display and the phone is the
/// brain — weather, translation text, dock order and notifications are all already
/// phone-driven (see `Reverse/firmware/analysis/domain_routing/DOMAIN_ROUTING.md`).
/// So a "todo app on the glasses" is the expensive way to get this; pushing text to a
/// surface that already exists is the cheap way, and it works today.

// MARK: - Model

struct PlaceList: Codable, Identifiable, Equatable {
    enum Surface: String, Codable, CaseIterable, Identifiable {
        /// `SHOW_NOTIFICATION`. Works over BLE alone, so it is the reliable choice.
        case card
        /// Paginated document with per-paragraph addressing and swipe up/down on the
        /// glasses — the better experience for a long list. Per `PROTOCOL.md` it shows
        /// "Please Connect to the mobile first" until the HFP + RFCOMM audio link is
        /// up, so it is *not* reliable on BLE alone.
        case teleprompter

        var id: String { rawValue }
        var label: String { self == .card ? "Notification card" : "Teleprompter" }
        var caveat: String {
            self == .card ? "Works over BLE alone. Short text."
                          : "Scrollable, but needs the audio link — falls back to a card."
        }
    }

    var id = UUID()
    var name = "Gym"
    var latitude = 0.0
    var longitude = 0.0
    /// iOS will not reliably monitor regions much below ~100 m.
    var radiusMeters = 150.0
    var items: [String] = []
    var surface: Surface = .card
    var enabled = true

    var coordinate: CLLocationCoordinate2D {
        CLLocationCoordinate2D(latitude: latitude, longitude: longitude)
    }

    var hasLocation: Bool { latitude != 0 || longitude != 0 }

    /// What actually goes on the lens. Numbered so a glance tells you where you are.
    func renderedBody() -> String {
        items.enumerated()
             .map { "\($0.offset + 1). \($0.element)" }
             .joined(separator: "\n")
    }
}

// MARK: - Store

@MainActor
final class PlaceListStore: ObservableObject {
    @Published var lists: [PlaceList] = [] { didSet { save() } }
    @Published private(set) var lastPush = ""

    private let key = "placeLists.v1"

    init() { load() }

    private func load() {
        guard let data = UserDefaults.standard.data(forKey: key),
              let decoded = try? JSONDecoder().decode([PlaceList].self, from: data)
        else { return }
        lists = decoded
    }

    private func save() {
        guard let data = try? JSONEncoder().encode(lists) else { return }
        UserDefaults.standard.set(data, forKey: key)
    }

    func add(_ list: PlaceList) { lists.append(list) }

    func update(_ list: PlaceList) {
        guard let i = lists.firstIndex(where: { $0.id == list.id }) else { return }
        lists[i] = list
    }

    func delete(at offsets: IndexSet) { lists.remove(atOffsets: offsets) }

    func note(_ s: String) { lastPush = s }
}

// MARK: - Pushing to the lens

@MainActor
enum PlaceListPush {

    /// Sends one list to the glasses on its chosen surface.
    ///
    /// The teleprompter is attempted optimistically because there is no reliable way
    /// to ask whether the audio link is up — `openTeleprompter` simply shows a
    /// "connect your phone" card when it is not. So a card is also sent as a floor,
    /// which is the difference between "nothing appeared" and "something appeared".
    @discardableResult
    static func send(_ list: PlaceList, to glasses: MyvuGlasses, ready: Bool) -> String {
        guard ready else {
            fallbackBanner(list, why: "glasses not connected")
            return "glasses not connected — posted a phone banner instead"
        }
        guard !list.items.isEmpty else { return "\(list.name): list is empty, nothing sent" }

        let body = list.renderedBody()
        switch list.surface {
        case .card:
            glasses.showNotification(title: list.name, body: body)
            return "\(list.name): card pushed (\(list.items.count) items)"
        case .teleprompter:
            glasses.openTeleprompter(body, title: list.name)
            // Floor, per the doc comment above.
            glasses.showNotification(title: list.name, body: body)
            return "\(list.name): teleprompter + card pushed (\(list.items.count) items)"
        }
    }

    /// When the glasses cannot be reached, tell the wearer on the phone rather than
    /// failing silently — a geofence that quietly does nothing is worse than no
    /// geofence, because it is indistinguishable from one that never fired.
    static func fallbackBanner(_ list: PlaceList, why: String) {
        let content = UNMutableNotificationContent()
        content.title = "\(list.name) — \(why)"
        content.body = list.renderedBody()
        content.sound = nil
        UNUserNotificationCenter.current().add(
            UNNotificationRequest(identifier: "placelist-\(list.id)",
                                  content: content, trigger: nil))
    }
}

// MARK: - Geofencing

/// Region monitoring over the store's lists.
///
/// Region monitoring is one of the few iOS APIs that relaunches a terminated app, so
/// this keeps working when the app is not on screen. Two real limits are worth
/// knowing before relying on it:
///
///  - iOS monitors at most **20 regions per app**, so the list is capped.
///  - Entry can fire while the app is in the background with BLE disconnected. A
///    reconnect is attempted, but if it does not complete the push degrades to a
///    phone banner rather than being dropped.
@MainActor
final class PlaceMonitor: NSObject, ObservableObject {
    @Published private(set) var authorization: CLAuthorizationStatus = .notDetermined
    @Published private(set) var monitoredCount = 0
    @Published private(set) var lastEvent = ""

    static let maxRegions = 20

    private let manager = CLLocationManager()
    private weak var store: PlaceListStore?
    /// Supplied by the view layer so this type never reaches into the glasses model.
    private var deliver: ((PlaceList) -> String)?

    override init() {
        super.init()
        manager.delegate = self
        manager.allowsBackgroundLocationUpdates = false
        authorization = manager.authorizationStatus
    }

    func configure(store: PlaceListStore, deliver: @escaping (PlaceList) -> String) {
        self.store = store
        self.deliver = deliver
    }

    /// Region monitoring needs **Always**; When-In-Use is not enough once the app
    /// leaves the screen, which is exactly when arriving somewhere happens.
    func requestAuthorization() {
        manager.requestAlwaysAuthorization()
    }

    func currentLocation() -> CLLocationCoordinate2D? {
        manager.location?.coordinate
    }

    /// Rebuilds the monitored set from the store. Cheap enough to call on any change.
    func refresh() {
        for region in manager.monitoredRegions { manager.stopMonitoring(for: region) }

        guard CLLocationManager.isMonitoringAvailable(for: CLCircularRegion.self) else {
            lastEvent = "region monitoring unavailable on this device"
            monitoredCount = 0
            return
        }

        let wanted = (store?.lists ?? [])
            .filter { $0.enabled && $0.hasLocation && !$0.items.isEmpty }
            .prefix(Self.maxRegions)

        for list in wanted {
            let region = CLCircularRegion(center: list.coordinate,
                                          radius: list.radiusMeters,
                                          identifier: list.id.uuidString)
            region.notifyOnEntry = true
            region.notifyOnExit = false
            manager.startMonitoring(for: region)
        }
        monitoredCount = wanted.count

        let total = (store?.lists ?? []).filter { $0.enabled && $0.hasLocation }.count
        if total > Self.maxRegions {
            lastEvent = "monitoring \(Self.maxRegions) of \(total) — iOS caps regions at 20"
        }
    }

    fileprivate func handleEntry(_ identifier: String) {
        guard let id = UUID(uuidString: identifier),
              let list = store?.lists.first(where: { $0.id == id })
        else { return }

        let result = deliver?(list) ?? "no delivery handler"
        lastEvent = "entered \(list.name) — \(result)"
        store?.note(lastEvent)
        LogStore.shared.log(level: .info, message: "[PlaceList] \(lastEvent)", error: nil)
    }
}

extension PlaceMonitor: CLLocationManagerDelegate {
    /// The iOS 14+ callback. Its predecessor
    /// (`locationManager(_:didChangeAuthorization:)`) is deprecated and is not a
    /// reliable place to start monitoring — and this is the callback that runs the
    /// moment Always is granted, so getting it wrong means regions are never armed.
    nonisolated func locationManagerDidChangeAuthorization(_ manager: CLLocationManager) {
        let status = manager.authorizationStatus
        Task { @MainActor in
            self.authorization = status
            if status == .authorizedAlways { self.refresh() }
        }
    }

    nonisolated func locationManager(_ manager: CLLocationManager,
                                     didEnterRegion region: CLRegion) {
        Task { @MainActor in self.handleEntry(region.identifier) }
    }

    nonisolated func locationManager(_ manager: CLLocationManager,
                                     monitoringDidFailFor region: CLRegion?,
                                     withError error: Error) {
        Task { @MainActor in
            self.lastEvent = "monitoring failed: \(error.localizedDescription)"
        }
    }
}
