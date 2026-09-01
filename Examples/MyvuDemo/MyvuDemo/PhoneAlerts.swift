import Foundation
import UIKit
import UserNotifications

/// Answers `willPresent`, which is the only reason a banner appears while the
/// app is frontmost — without it iOS files the notification away silently.
///
/// Split out from `PhoneAlerts` and held in a `static` because the delegate
/// property is weak and iOS wants it installed before the app finishes
/// launching, which is earlier than any main-actor model exists.
final class AlertPresenter: NSObject, UNUserNotificationCenterDelegate {
    static let shared = AlertPresenter()

    static func install() {
        UNUserNotificationCenter.current().delegate = shared
    }

    func userNotificationCenter(
        _ center: UNUserNotificationCenter,
        willPresent notification: UNNotification,
        withCompletionHandler completionHandler: @escaping (UNNotificationPresentationOptions) -> Void
    ) {
        completionHandler([.banner, .list, .sound])
    }
}

/// The app's own iOS banners — the Notifications row on the app's page in
/// Settings.
///
/// Not to be confused with mirroring the phone's notifications onto the lens:
/// that runs over ANCS between the glasses and iOS directly, and an app has no
/// way to read other apps' notifications. This is the phone alerting you about
/// the one thing only this app knows: the glasses dropping off while you are
/// somewhere else.
@MainActor
final class PhoneAlerts: ObservableObject {
    @Published private(set) var status: UNAuthorizationStatus = .notDetermined
    /// What happened to the last banner, in words. A banner can be accepted by
    /// iOS and still never appear (a Focus, or banners switched off for the
    /// app), and those look identical to a bug from the outside.
    @Published private(set) var lastResult = ""

    private let center = UNUserNotificationCenter.current()

    var isAuthorized: Bool {
        status == .authorized || status == .provisional || status == .ephemeral
    }

    /// iOS only ever shows the permission sheet once. After a "no" the app can
    /// do nothing but send the user to Settings.
    var needsSettingsTrip: Bool { status == .denied }

    init() {
        refresh()
    }

    /// Re-reads the real state, which can change behind the app's back in
    /// Settings while it is backgrounded.
    func refresh() {
        Task {
            status = await center.notificationSettings().authorizationStatus
        }
    }

    func request() {
        guard status != .denied else { return openSettings() }
        Task {
            _ = try? await center.requestAuthorization(options: [.alert, .sound, .badge])
            refresh()
        }
    }

    func openSettings() {
        guard let url = URL(string: UIApplication.openSettingsURLString) else { return }
        UIApplication.shared.open(url)
    }

    func post(title: String, body: String, id: String = UUID().uuidString) {
        guard isAuthorized else {
            lastResult = "Alerts are not allowed for this app."
            return
        }
        let content = UNMutableNotificationContent()
        content.title = title
        content.body = body
        content.sound = .default

        Task {
            let request = UNNotificationRequest(identifier: id, content: content,
                                                trigger: nil)
            do {
                try await center.add(request)
            } catch {
                lastResult = "iOS refused it: \(error.localizedDescription)"
                return
            }
            lastResult = "Sent…"
            // Delivery is not instant, and asking too early reads as a drop.
            try? await Task.sleep(nanoseconds: 1_500_000_000)
            let delivered = await center.deliveredNotifications()
                .contains { $0.request.identifier == id }
            lastResult = Self.explain(delivered: delivered,
                                      settings: await center.notificationSettings())
        }
    }

    /// Turns "no banner appeared" into the specific reason, since iOS reports
    /// success either way.
    private static func explain(delivered: Bool,
                                settings: UNNotificationSettings) -> String {
        guard delivered else {
            return "iOS took it and then dropped it — nothing was delivered."
        }
        if settings.alertSetting != .enabled {
            return "Delivered, but banners are off for this app. "
                + "Settings > Notifications > MyvuDemo > Banners."
        }
        return "Delivered. If no banner appeared, a Focus or Do Not Disturb is "
            + "silencing it — it will be waiting in Notification Center."
    }
}
