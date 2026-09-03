import Combine
import Foundation
import MyvuAI
import MyvuCore
import MyvuHealth
import MyvuNav
import MyvuUniden
import MyvuWeather
import SwiftUI
import UIKit

/// One `MyvuGlasses` for the whole app, with its streams republished as
/// `@Published` state for SwiftUI.
///
/// The SDK is deliberately not an `ObservableObject` itself — it has no opinion
/// about UI frameworks — so this adapter is where an app decides how much of the
/// connection to surface. It is also where the optional feature modules
/// (weather, navigation, assistant) get attached.
@MainActor
final class GlassesModel: ObservableObject {
    @Published private(set) var state: ConnectionState = .idle
    @Published private(set) var info: DeviceInfo?
    /// Set when a connect attempt fails, so the UI can say why.
    @Published var lastError: String?
    @Published private(set) var isConnecting = false
    @Published private(set) var navigating = false
    /// Cruise HUD state, for the line under the toggle.
    @Published private(set) var cruiseStatus: CruiseSession.Status = .off
    @Published private(set) var cruiseDemoRunning = false
    /// Uniden R-series radar (R4W etc.) — independent of the glasses link.
    @Published private(set) var unidenState: UnidenClient.State = .idle
    @Published private(set) var unidenDeviceName: String?
    @Published private(set) var unidenLastAlert = ""
    @Published var unidenError: String?
    /// Latest GPS speed from the Uniden drive watcher, for the status line.
    @Published private(set) var unidenDriveMph: Int?
    /// True while `WeatherSync` is attached (auto-starts on every ready session).
    @Published private(set) var weatherEnabled = false
    /// True while `HealthSync` is attached (auto-starts on every ready session).
    @Published private(set) var stepsEnabled = false
    /// The most recent inbound objects, newest last — a rough activity monitor.
    @Published private(set) var recentInbound: [String] = []
    /// Last file the glasses finished pushing (HUD screenshot, glass log).
    @Published private(set) var lastReceivedFile: URL?
    @Published private(set) var lastReceivedLabel = ""
    @Published private(set) var firmwareBusy = false
    @Published private(set) var firmwareFraction = 0.0
    @Published private(set) var firmwareStatus = ""
    @Published private(set) var renameStatus = ""
    /// Result of the last contact-list push to the glasses' Phone page.
    @Published private(set) var contactPushStatus = ""
    /// Last caller-ID lookup the glasses asked for, newest first — the visible
    /// proof that the answer went out.
    @Published private(set) var callerLookups: [String] = []
    /// Live battery, from the glasses' own pushes. `info.battery` is only the
    /// value captured at pairing and never moves.
    @Published private(set) var battery: GlassesBattery?

    /// Persisted so the next launch reconnects without a scan. iOS never
    /// exposes a peripheral's MAC, so this identifier is the only durable handle
    /// on a specific pair of glasses.
    @AppStorage("lastGlassesId") private var lastGlassesId = ""
    /// The iPhone's classic-Bluetooth name the glasses scan for (IOS_CONNECT_BT).
    /// iOS 16+ hides the real name from apps, so it is user-set and persisted.
    @AppStorage("iosBtName") var iosBtName = "Testing1"
    /// Auto-bring-up the classic-BT audio link once BLE is ready.
    ///
    /// OFF by default: it only buys the native teleprompter and navigation
    /// pages, and it costs glasses battery even when it never succeeds — every
    /// attempt is a classic-BT page scan, and the phone is undiscoverable
    /// unless the user is sitting on iOS's Bluetooth screen.
    @AppStorage("iosBtAutoConnect") var iosBtAutoConnect = false
    /// Show street + speed on the lens automatically while driving.
    @AppStorage("autoCruiseHud") var autoCruiseHud = false
    /// Which surface the cruise HUD draws on — `lensCard` or `hud`.
    @AppStorage("cruiseSurface") var cruiseSurfaceRaw = CruiseSession.Surface.lensCard.rawValue
    /// Mirror the iPhone's notifications onto the lens (ANCS).
    @AppStorage("phoneNotifications") private var phoneNotificationsRaw = false
    /// Categories the wearer has muted, comma-separated. Storing the muted ones
    /// rather than the enabled ones keeps "everything on" as the default.
    @AppStorage("phoneNotificationsMuted") private var mutedTypesRaw = ""
    /// Incoming calls are their own flag on the glasses, not a category.
    @AppStorage("phoneNotificationCalls") private var phoneNotificationCallsRaw = true
    /// Read each card aloud on the glasses ("Announce Notifications").
    @AppStorage("notificationAnnounce") private var notificationAnnounceRaw = false
    /// Wake the lens when a card arrives. On by default because that is what
    /// this app has always sent; the official app ships it off.
    @AppStorage("notificationBrighten") private var notificationBrightenRaw = true
    /// How long a card stays on the lens, in milliseconds.
    @AppStorage("notificationDismissMs") private var notificationDismissMsRaw = 10_000
    /// Stop mirroring while the phone is unlocked and in the wearer's hand.
    @AppStorage("notificationMuteWhileUsingPhone") private var muteWhileUsingPhoneRaw = false
    /// Scan and connect the Uniden radar once GPS holds at 10 mph.
    @AppStorage("autoUnidenWhileDriving") var autoUnidenWhileDriving = false
    /// Last Uniden peripheral iOS identifier, so a later drive can skip the scan.
    @AppStorage("lastUnidenId") private var lastUnidenId = ""

    let glasses = MyvuGlasses()
    /// The device-side preference screens ("Settings for Glasses", "Voice
    /// Assistant"). Kept apart from this model because none of it needs the
    /// connection bookkeeping here — it only needs somewhere durable to live.
    let settings: GlassesSettings
    let alerts = PhoneAlerts()
    let contacts = ContactsAccess()
    let spotifyAuth = SpotifyAuth()
    let spotifyLyrics: SpotifyLyricsSession

    /// Alerts the wearer as the glasses' battery falls past each threshold.
    private let batteryAlerts = BatteryMonitor()

    private(set) var assistant: AiSession?
    private(set) var lensScript: LensScript?
    private var weather: WeatherSync?
    private var health: HealthSync?
    private var nav: NavSession?
    private var cruise: CruiseSession?
    private var cruiseDemo: CruiseSession?
    private var cruiseDemoStop: Task<Void, Never>?
    private let uniden = UnidenClient()
    private var unidenDriveDetector: DriveDetector?
    private var lastUnidenAlerts: [UnidenAlert] = []
    private var lastUnidenIdentity = ""
    private var lastUnidenSendAt: Date?
    private var unidenFlushTask: Task<Void, Never>?
    /// Avoids restarting a BLE scan on every GPS tick after a miss.
    private var lastUnidenAutoAttempt: Date?
    /// Long enough to watch the card settle and pick up a street, short enough
    /// that a forgotten demo clears itself.
    private static let cruiseDemoSeconds = 90
    /// Set while tearing the link down on purpose, so the drop that follows is
    /// not reported as a surprise.
    private var userIsDisconnecting = false
    private var streams: [Task<Void, Never>] = []
    private var bag = Set<AnyCancellable>()

    var client: MyvuClient { glasses.client }
    var isReady: Bool { state == .ready }
    /// True when a previous session can be resumed without scanning.
    var hasKnownGlasses: Bool { UUID(uuidString: lastGlassesId) != nil }

    init() {
        spotifyLyrics = SpotifyLyricsSession(auth: spotifyAuth, client: glasses.client)
        settings = GlassesSettings(glasses: glasses)
        observe()
        settings.objectWillChange
            .receive(on: RunLoop.main)
            .sink { [weak self] _ in self?.objectWillChange.send() }
            .store(in: &bag)
        observeLockState()
        contacts.loadIndex()
        // Refresh at launch too: contacts change while the app is not running.
        Task { await contacts.rebuildIndex() }
        spotifyAuth.objectWillChange
            .receive(on: RunLoop.main)
            .sink { [weak self] _ in self?.objectWillChange.send() }
            .store(in: &bag)
        spotifyLyrics.objectWillChange
            .receive(on: RunLoop.main)
            .sink { [weak self] _ in self?.objectWillChange.send() }
            .store(in: &bag)
        alerts.objectWillChange
            .receive(on: RunLoop.main)
            .sink { [weak self] _ in self?.objectWillChange.send() }
            .store(in: &bag)
        contacts.objectWillChange
            .receive(on: RunLoop.main)
            .sink { [weak self] _ in self?.objectWillChange.send() }
            .store(in: &bag)
        // Watching for driving is independent of the glasses being connected,
        // so it resumes at launch rather than waiting for a session.
        observeUniden()
        startCruise()
        startUnidenDriveWatch()
    }

    private func observe() {
        streams.append(Task { [weak self] in
            guard let self else { return }
            for await state in glasses.states() {
                let wasReady = self.state == .ready
                self.state = state
                // Opens or closes the cruise HUD's write gate. On a reconnect
                // mid-drive this is what puts the card straight back up.
                self.syncCruiseGate()
                if wasReady, state != .ready { self.reportGlassesDropped() }
                if state == .ready {
                    // The glasses' notification filter is re-asserted on every
                    // session: it is not known to survive a power cycle, and a
                    // silent lens is indistinguishable from a quiet phone.
                    //
                    // ALWAYS, even when mirroring is off. The init burst replays
                    // a capture whose SYNC_SMART_REMINDER_CONFIG enables three
                    // categories and omits MSG_TYPE_IM; skipping our push leaves
                    // that stranger's filter in force instead of the wearer's.
                    self.pushNotificationConfig()
                    // After the SDK's init burst, which asserts wear detection,
                    // zen mode and the screen-off time with its own fixed
                    // values — so the wearer's choices land last and win.
                    self.settings.pushAll()
                    self.info = self.glasses.glassesInfo
                    // Arms the thresholds above wherever the battery is now, so
                    // reconnecting at 45% does not re-announce 80% and 50%.
                    if let level = self.glasses.glassesInfo?.battery {
                        self.batteryAlerts.seed(percent: level)
                    }
                    if let id = self.glasses.connectedGlassesId {
                        self.lastGlassesId = id.uuidString
                    }
                    // Weather panel is BLE-only and useful on iPhone immediately.
                    // Always (re)sync from the phone's current location on ready —
                    // reconnects would otherwise keep a stale reading until the
                    // 30-minute timer or a glasses syncWeather request.
                    self.startWeather()
                    self.refreshWeather()
                    // Steps widget: feed it from Apple Health so the lens shows
                    // the same count as the phone. Also BLE-only.
                    self.startHealth()

                    // BLE is up first (it wakes the glasses' classic radio and
                    // carries IOS_CONNECT_BT); now auto-bring-up the classic-BT
                    // audio link so the launcher gate clears and the native apps
                    // (teleprompter, navigation) open without any manual step.
                    if self.iosBtAutoConnect {
                        self.client.startIosBtKeepAlive(deviceName: self.iosBtName)
                    }
                    self.pushUnidenCardIfNeeded()
                }
            }
        })
        streams.append(Task { [weak self] in
            guard let self else { return }
            for await event in glasses.events() {
                switch event {
                case .unknown(let raw):
                    self.recentInbound.append(raw)
                    if self.recentInbound.count > 50 { self.recentInbound.removeFirst() }
                    self.checkBattery(raw)
                case .contactLookupRequested(let request):
                    self.answerCallerLookup(request)
                case .fileReceived(let url, let name, let bytes):
                    self.lastReceivedFile = url
                    self.lastReceivedLabel = "\(name) (\(bytes) bytes)"
                case .firmwareUpdateProgress(let fraction, let message):
                    self.firmwareBusy = true
                    self.firmwareFraction = fraction
                    self.firmwareStatus = message
                    UIApplication.shared.isIdleTimerDisabled = true
                case .firmwareUpdateFinished(let success, let rom, let message):
                    self.firmwareBusy = false
                    self.firmwareFraction = success ? 1 : self.firmwareFraction
                    if success {
                        let ver = rom.isEmpty ? BundledOtaPack.label : rom
                        self.firmwareStatus = "Installed \(ver). \(message)"
                    } else {
                        self.firmwareStatus = "Update failed: \(message)"
                    }
                    UIApplication.shared.isIdleTimerDisabled = false
                default:
                    break
                }
            }
        })
    }

    // MARK: - Connection

    /// Reconnects to the last-used glasses, or scans if there are none.
    func connect(scanning: Bool = false) async {
        guard !isConnecting else { return }
        isConnecting = true
        lastError = nil
        defer { isConnecting = false }

        let id = scanning ? nil : UUID(uuidString: lastGlassesId)
        do {
            try await glasses.connect(id: id)
            info = glasses.glassesInfo
        } catch {
            lastError = error.localizedDescription
        }
    }

    func disconnect() {
        userIsDisconnecting = true
        glasses.disconnect()
        info = nil
        firmwareBusy = false
        UIApplication.shared.isIdleTimerDisabled = false
    }

    /// Pushes the bundled 1.0.12.83 BIMA pack over BLE.
    func startFirmwareUpdate() {
        do {
            let files = try BundledOtaPack.load()
            firmwareBusy = true
            firmwareFraction = 0
            firmwareStatus = "Starting \(BundledOtaPack.label)…"
            UIApplication.shared.isIdleTimerDisabled = true
            glasses.startFirmwareUpdate(files: files)
        } catch {
            firmwareBusy = false
            firmwareStatus = error.localizedDescription
        }
    }

    func cancelFirmwareUpdate() {
        glasses.cancelFirmwareUpdate()
        firmwareBusy = false
        UIApplication.shared.isIdleTimerDisabled = false
        firmwareStatus = "Cancelled"
    }

    /// About's "Device name" is NV, not the OTA bins — `MYVU 0F35` survives a
    /// flash. This is the same `set_device_name` the official app uses to rename.
    var bimaDeviceName: String {
        if let current = info?.name, current.uppercased().hasPrefix("MYVU") {
            return "BIMA" + current.dropFirst(4)
        }
        let hex = (info?.btMac ?? "")
            .replacingOccurrences(of: ":", with: "")
            .replacingOccurrences(of: "-", with: "")
            .uppercased()
        let suffix = hex.count >= 4 ? String(hex.suffix(4)) : "0F35"
        return "BIMA \(suffix)"
    }

    func renameToBima() {
        let name = bimaDeviceName
        renameStatus = "Renaming to \(name)…"
        glasses.setDeviceName(name)
        Task {
            try? await Task.sleep(nanoseconds: 800_000_000)
            do {
                let reply = try await glasses.query("get_device_info", timeout: 8)
                let shown = Self.deviceName(from: reply) ?? "(no device_name in reply)"
                renameStatus = shown == name
                    ? "About name is now \(shown). Reopen About on the glasses."
                    : "Sent \(name). Glasses reported \(shown)."
            } catch {
                renameStatus = "Sent \(name). Reopen About on the glasses to confirm."
            }
        }
    }

    private static func deviceName(from reply: JsonReader) -> String? {
        func pull(_ obj: JsonReader) -> String? {
            let n = obj.optString("device_name")
            return n.isEmpty ? nil : n
        }
        if let data = reply.optObject("data") {
            if let value = data.optObject("value"), let n = pull(value) { return n }
            if let n = pull(data) { return n }
            let raw = data.optString("value")
            if let nested = JsonReader(parsing: raw), let n = pull(nested) { return n }
        }
        return pull(reply)
    }

    func forgetGlasses() {
        lastGlassesId = ""
    }

    /// Renames the glasses to anything. `renameToBima` is this with the name
    /// worked out for you; both write `set_device_name`, the same command the
    /// official app's "Name of Glasses" screen sends.
    func rename(to name: String) {
        let trimmed = name.trimmingCharacters(in: .whitespacesAndNewlines)
        guard !trimmed.isEmpty else { return }
        renameStatus = "Renaming to \(trimmed)…"
        glasses.setDeviceName(trimmed)
        Task {
            try? await Task.sleep(nanoseconds: 800_000_000)
            do {
                let reply = try await glasses.query("get_device_info", timeout: 8)
                let shown = Self.deviceName(from: reply) ?? "(no device_name in reply)"
                renameStatus = shown == trimmed
                    ? "About name is now \(shown). Reopen About on the glasses."
                    : "Sent \(trimmed). Glasses reported \(shown)."
            } catch {
                renameStatus = "Sent \(trimmed). Reopen About on the glasses to confirm."
            }
        }
    }

    /// Wipes the glasses (`do_recovery`) and drops the saved pairing, since the
    /// identifier will not survive the reset. Nothing on the glasses asks first.
    func factoryReset() {
        glasses.factoryReset()
        forgetGlasses()
        renameStatus = "Factory reset sent. The glasses reboot on their own."
    }

    // MARK: - Notifications

    /// Mirror the iPhone's notifications onto the lens.
    ///
    /// This only flips the glasses' own master switch (`SYNC_SMART_REMINDER_CONFIG`);
    /// the notifications themselves travel over ANCS, straight from iOS to the
    /// glasses, and need an ordinary Bluetooth pairing in Settings. Without the
    /// switch the firmware drops them and complains that notifications are not
    /// enabled in the MYVU app.
    var phoneNotifications: Bool {
        get { phoneNotificationsRaw }
        set {
            objectWillChange.send()
            phoneNotificationsRaw = newValue
            pushNotificationConfig()
        }
    }

    var phoneNotificationCalls: Bool {
        get { phoneNotificationCallsRaw }
        set {
            objectWillChange.send()
            phoneNotificationCallsRaw = newValue
            pushNotificationConfig()
        }
    }

    private var mutedTypes: Set<String> {
        get { Set(mutedTypesRaw.split(separator: ",").map(String.init)) }
        set { mutedTypesRaw = newValue.sorted().joined(separator: ",") }
    }

    func isNotificationType(_ type: String) -> Bool { !mutedTypes.contains(type) }

    func setNotificationType(_ type: String, on: Bool) {
        objectWillChange.send()
        var muted = mutedTypes
        if on { muted.remove(type) } else { muted.insert(type) }
        mutedTypes = muted
        pushNotificationConfig()
    }

    /// Read the card aloud on the glasses.
    var announceNotifications: Bool {
        get { notificationAnnounceRaw }
        set {
            objectWillChange.send()
            notificationAnnounceRaw = newValue
            pushNotificationConfig()
        }
    }

    /// Wake the lens when a card arrives.
    var brightenScreenForNotifications: Bool {
        get { notificationBrightenRaw }
        set {
            objectWillChange.send()
            notificationBrightenRaw = newValue
            pushNotificationConfig()
        }
    }

    /// How long a card stays up, in milliseconds.
    var notificationDismissMs: Int {
        get { notificationDismissMsRaw }
        set {
            objectWillChange.send()
            notificationDismissMsRaw = newValue
            pushNotificationConfig()
        }
    }

    /// Hold notifications back while the phone is unlocked and in use.
    ///
    /// iOS gives an app no way to see another app's notifications, so this
    /// cannot filter them one by one the way the Android app does — it flips
    /// the glasses' master switch instead, which is the only lever ANCS leaves.
    var muteWhileUsingPhone: Bool {
        get { muteWhileUsingPhoneRaw }
        set {
            objectWillChange.send()
            muteWhileUsingPhoneRaw = newValue
            pushNotificationConfig()
        }
    }

    /// True once the phone has locked at least once AND been unlocked since.
    ///
    /// A phone with no passcode never reports a lock, so this stays false and
    /// nothing is ever suppressed — which is exactly what the official app
    /// promises for that case.
    private var phoneHasLocked = false
    private var phoneUnlocked = false

    /// Watches the passcode-lock transitions that stand in for "using your
    /// phone". They keep arriving in the background, which matters: this app is
    /// alive there for BLE, and the wearer is not looking at it either way.
    private func observeLockState() {
        let center = NotificationCenter.default
        center.publisher(for: UIApplication.protectedDataWillBecomeUnavailableNotification)
            .sink { [weak self] _ in
                guard let self else { return }
                self.phoneHasLocked = true
                self.phoneUnlocked = false
                self.pushNotificationConfig()
            }
            .store(in: &bag)
        center.publisher(for: UIApplication.protectedDataDidBecomeAvailableNotification)
            .sink { [weak self] _ in
                guard let self else { return }
                // Unlocking is the one moment the address book is readable, so
                // it is when the caller index gets refreshed.
                Task { await self.contacts.rebuildIndex() }
                guard self.phoneHasLocked else { return }
                self.phoneUnlocked = true
                self.pushNotificationConfig()
            }
            .store(in: &bag)
    }

    /// Sends the whole filter, on or off. Sending it with
    /// `notificationControlState:false` is how mirroring gets DISABLED, so this
    /// must run even when the wearer has it switched off.
    private func pushNotificationConfig() {
        guard isReady else { return }
        let types = Dictionary(uniqueKeysWithValues:
            Notifications.allTypes.map { ($0, isNotificationType($0)) })
        let suppressed = muteWhileUsingPhoneRaw && phoneUnlocked
        glasses.enablePhoneNotifications(phoneNotificationsRaw && !suppressed,
                                         types: types,
                                         calls: phoneNotificationCallsRaw,
                                         announce: notificationAnnounceRaw,
                                         brightenScreen: notificationBrightenRaw,
                                         dismissMs: Int64(notificationDismissMsRaw))
    }

    /// Answers the glasses' "who is this number?" question.
    ///
    /// This is what puts a name on the incoming-call card. The glasses read the
    /// number off the classic-Bluetooth HFP link, which carries digits only, and
    /// iOS hands them no phonebook — so they ask the phone, and until something
    /// answers, the card says "Unknown".
    ///
    /// The card has TWO lines: `displayName` on top and `geo` — the
    /// region/carrier line the glasses ask for with `QUERY_CONTACT_ADDRESS` —
    /// underneath. That second line is the one that read "Unknown": iOS has no
    /// number-to-region database, so it went out empty and the lens filled the
    /// gap with a placeholder. The NUMBER goes there instead, which is the
    /// thing a wearer actually wants under a name.
    ///
    /// Only when a name was resolved, though. With no name the number is
    /// already the top line — `AirFunction.reply` falls back to it — and
    /// repeating it underneath just reads as a bug.
    ///
    /// Speed matters: the call card is already on the lens when this arrives.
    private func answerCallerLookup(_ request: AirFunction.Request) {
        guard contacts.isAuthorized else {
            client.failAirFunction(request, message: "no contacts permission")
            note(caller: request.phoneNumber, name: nil,
                 detail: "no contacts permission")
            return
        }
        Task {
            let name = await contacts.name(forPhoneNumber: request.phoneNumber)
            client.answerAirFunction(request, displayName: name,
                                     address: name == nil ? nil : request.phoneNumber)
            note(caller: request.phoneNumber, name: name, detail: nil)
        }
    }

    private func note(caller number: String, name: String?, detail: String?) {
        var outcome = detail ?? (name.map { "→ \($0)" } ?? "→ not in contacts")
        // A miss with the phone locked means something different from a miss
        // with it open, and only one of them is worth investigating.
        if detail == nil, name == nil, !UIApplication.shared.isProtectedDataAvailable {
            outcome += " (phone locked)"
        }
        callerLookups.insert("\(number) \(outcome)", at: 0)
        if callerLookups.count > 10 { callerLookups.removeLast() }
    }

    /// Pushes the address book to the glasses' Phone page (`PHONE_CONTACT_LIST`).
    ///
    /// One row per NUMBER, capped, because the list travels as a single JSON
    /// blob over BLE and the lens renders it as a scroll wheel.
    ///
    /// The official app only ever sends this mid-way through a voice
    /// call-request, so the page may want the assistant scene open first. The
    /// wire shape is recovered exactly; the timing is the unverified part.
    func sendContactsToGlasses(limit: Int = 100) {
        guard isReady else { return contactPushStatus = "Connect the glasses first." }
        guard contacts.isAuthorized else {
            return contactPushStatus = "Allow contacts above first."
        }
        contactPushStatus = "Reading the address book…"
        Task {
            let people = await contacts.allWithNumbers(limit: limit)
            guard !people.isEmpty else {
                contactPushStatus = "No contacts with a phone number."
                return
            }
            let entries = people.map {
                PhoneContacts.Entry(name: $0.name, phoneNumber: $0.number,
                                    contactId: $0.contactId, company: $0.company)
            }
            client.sendPhoneContacts(entries, limit: limit)
            contactPushStatus = "Sent \(entries.count) number"
                + (entries.count == 1 ? "" : "s")
                + " to the glasses' Phone page. Watch the Log tab for a reply."
        }
    }

    /// Puts one person from the address book on the lens.
    func showContact(_ person: ContactsAccess.Person) {
        glasses.showLensCard(title: person.name,
                             body: person.detail.isEmpty ? "No number saved" : person.detail,
                             numericId: LensCards.contactNumericId)
    }

    /// A drop the wearer did not ask for is worth a banner, because the glasses
    /// go quiet without saying so and the phone is usually in a pocket.
    private func reportGlassesDropped() {
        guard !userIsDisconnecting else { return userIsDisconnecting = false }
        guard UIApplication.shared.applicationState != .active else { return }
        alerts.post(title: "Glasses disconnected",
                    body: "The link to \(info?.name ?? "your glasses") dropped.",
                    id: "glasses-dropped")
    }

    /// One inbound object; only battery pushes get past the first line.
    private func checkBattery(_ raw: String) {
        guard let msg = JsonReader(parsing: raw),
              let level = BatteryFeed.parse(msg) else { return }
        battery = level
        guard let threshold = batteryAlerts.update(level) else { return }

        let name = info?.name ?? "Your glasses"
        // Below 20% the wearer needs to DO something; above it this is just a
        // heads-up, and reading like an emergency every time would train them
        // to ignore the one that matters.
        let body = threshold <= 20
            ? "\(name) is down to \(level.percent)% — worth charging now."
            : "\(name) is at \(level.percent)%."
        alerts.post(title: "Glasses battery \(threshold)%", body: body,
                    // Stable per threshold: a repeat replaces its predecessor
                    // in Notification Center instead of stacking.
                    id: "glasses-battery-\(threshold)")
    }

    // MARK: - Feature modules

    /// Keeps the glasses' weather panel fed and answers their refresh requests.
    /// Uses the iPhone's own location (`DeviceWeatherLocation`) + Open-Meteo.
    /// Temperatures follow the phone locale (°F in the US) so the lens matches
    /// Apple Weather's numbers — the wire has no unit flag.
    func startWeather() {
        if weather == nil {
            let sync = WeatherSync(client: client,
                                   location: DeviceWeatherLocation(),
                                   unit: .forCurrentLocale)
            sync.attach()
            weather = sync
        }
        weatherEnabled = true
    }

    func stopWeather() {
        weather?.detach()
        weather = nil
        weatherEnabled = false
    }

    /// Fetches from Open-Meteo at the phone's current fix and pushes now.
    func refreshWeather() {
        startWeather()
        weather?.refresh()
    }

    /// Keeps the glasses' Steps standby widget fed from Apple Health and answers
    /// their `syncSport` refresh requests, so the lens count matches the phone.
    /// Requires the HealthKit capability + `NSHealthShareUsageDescription`; a
    /// denied user simply reads as 0 steps.
    func startHealth() {
        if health == nil {
            let source = HealthKitStepSource()
            let sync = HealthSync(client: client, source: source)
            sync.attach()
            health = sync
            // Ask for read access once, then push a real count as soon as it is
            // granted rather than waiting for the next refresh tick.
            Task {
                try? await source.requestAuthorization()
                sync.refresh()
            }
        }
        stepsEnabled = true
    }

    func stopHealth() {
        health?.detach()
        health = nil
        stepsEnabled = false
    }

    /// Reads Apple Health now and pushes the count.
    func refreshHealth() {
        startHealth()
        health?.refresh()
    }

    func setSpotifyLyricsEnabled(_ on: Bool) {
        if on {
            guard spotifyAuth.isAuthorized else {
                spotifyLyrics.statusMessage = "Connect Spotify first"
                return
            }
            spotifyLyrics.start()
        } else {
            spotifyLyrics.stop()
        }
    }

    /// - Parameter decoder: an Opus decoder. iOS ships none, so without one the
    ///   glasses' microphone cannot be read and only typed questions work.
    func startAssistant(groqKey: String, claudeKey: String, decoder: OpusDecoding?) {
        stopAssistant()
        let session = AiSession(client: client,
                                stt: GroqSpeechToText(apiKey: groqKey),
                                llm: ClaudeLanguageModel(apiKey: claudeKey),
                                tts: nil, // the platform TtsPlayer
                                decoder: decoder)
        session.attach()
        assistant = session
    }

    func stopAssistant() {
        assistant?.detach()
        assistant?.shutdown()
        assistant = nil
    }

    // MARK: - Uniden radar

    /// Manual scan/connect. Radar hits themselves never raise a banner, but
    /// permission is still asked for here because this is the first screen most
    /// drivers touch, and a dropped link or a low battery mid-drive does.
    func connectUniden() {
        unidenError = nil
        alerts.request()
        let id = UUID(uuidString: lastUnidenId)
        uniden.connect(knownId: id)
    }

    func disconnectUniden() {
        uniden.disconnect()
    }

    func setAutoUnidenWhileDriving(_ on: Bool) {
        autoUnidenWhileDriving = on
        if on {
            alerts.request()
            startUnidenDriveWatch()
        } else {
            stopUnidenDriveWatch()
        }
    }

    private func observeUniden() {
        uniden.onStateChange = { [weak self] state, name, id in
            Task { @MainActor in
                guard let self else { return }
                self.unidenState = state
                self.unidenDeviceName = name
                if state == .connected, let id {
                    self.lastUnidenId = id.uuidString
                }
                if state == .idle {
                    self.clearUnidenCard()
                }
            }
        }
        uniden.onAlerts = { [weak self] hits in
            Task { @MainActor in self?.handleUnidenAlerts(hits) }
        }
        uniden.onError = { [weak self] message in
            Task { @MainActor in self?.unidenError = message }
        }
    }

    private func startUnidenDriveWatch() {
        guard autoUnidenWhileDriving, unidenDriveDetector == nil else { return }
        let detector = DriveDetector(
            scheduler: client.scheduler,
            location: CoreLocationSource(allowsBackgroundUpdates: true),
            // GPS 10 mph is the gate. CoreMotion often reads "walking" for a
            // phone on a seat or in a pocket and would block auto-connect.
            motion: NoMotionSource(),
            startSpeedMps: UnidenDrive.startSpeedMps,
            startHold: 2)
        detector.start(onUpdate: { [weak self] update in
            Task { @MainActor in
                guard let self else { return }
                if update.fix.speedMps >= 0 {
                    self.unidenDriveMph = Int((update.fix.speedMps * 2.236936294).rounded())
                }
                guard update.isDriving else { return }
                self.connectUnidenIfIdle()
            }
        }, onUnavailable: { [weak self] reason in
            Task { @MainActor in self?.unidenError = reason }
        })
        unidenDriveDetector = detector
    }

    private func stopUnidenDriveWatch() {
        unidenDriveDetector?.stop()
        unidenDriveDetector = nil
        unidenDriveMph = nil
    }

    private func connectUnidenIfIdle() {
        guard unidenState == .idle else { return }
        let now = Date()
        if let last = lastUnidenAutoAttempt, now.timeIntervalSince(last) < 20 { return }
        lastUnidenAutoAttempt = now
        connectUniden()
    }

    private func handleUnidenAlerts(_ hits: [UnidenAlert]) {
        lastUnidenAlerts = hits
        let changed = UnidenAlertCard.notifyIdentity(for: hits) != lastUnidenIdentity
        switch UnidenAlertGate.decision(hasHits: !hits.isEmpty,
                                       changed: changed,
                                       lastSentAt: lastUnidenSendAt,
                                       now: Date()) {
        case .clear:
            unidenFlushTask?.cancel()
            unidenFlushTask = nil
            lastUnidenSendAt = nil
            lastUnidenIdentity = ""
            unidenLastAlert = ""
            clearUnidenCard()
        case .hold:
            // Identical reading. Any flush already pending stays pending — it
            // will pick up whatever is current when it fires.
            break
        case .sendNow:
            unidenFlushTask?.cancel()
            unidenFlushTask = nil
            emitUnidenAlerts(hits)
        case .wait(let delay):
            scheduleUnidenFlush(after: delay)
        }
    }

    private func scheduleUnidenFlush(after delay: TimeInterval) {
        guard unidenFlushTask == nil else { return }
        unidenFlushTask = Task { [weak self] in
            let ns = UInt64(max(delay, 0) * 1_000_000_000)
            try? await Task.sleep(nanoseconds: ns)
            await MainActor.run {
                guard let self, !Task.isCancelled else { return }
                self.unidenFlushTask = nil
                guard !self.lastUnidenAlerts.isEmpty else { return }
                self.emitUnidenAlerts(self.lastUnidenAlerts)
            }
        }
    }

    private func emitUnidenAlerts(_ hits: [UnidenAlert]) {
        let title = UnidenAlertCard.title(for: hits)
        let body = UnidenAlertCard.body(for: hits)
        unidenLastAlert = "\(title) · \(body)"
        pushUnidenCard(title: title, body: body)
        // A deferred flush can land on a reading that has drifted back to what
        // was already sent, so the identity is re-checked here rather than
        // trusted from the gate. A radar hit raises no phone banner on purpose:
        // it belongs on the lens the driver is already looking through, and a
        // notification for something the glasses just showed is only noise. The
        // bookkeeping below still runs — it is what paces the lens card.
        let identity = UnidenAlertCard.notifyIdentity(for: hits)
        guard identity != lastUnidenIdentity else { return }
        lastUnidenIdentity = identity
        lastUnidenSendAt = Date()
    }

    private func pushUnidenCardIfNeeded() {
        guard !lastUnidenAlerts.isEmpty else { return }
        pushUnidenCard(title: UnidenAlertCard.title(for: lastUnidenAlerts),
                       body: UnidenAlertCard.body(for: lastUnidenAlerts))
    }

    private func pushUnidenCard(title: String, body: String) {
        guard isReady else { return }
        glasses.showLensCard(title: title, body: body,
                             numericId: LensCards.unidenAlertNumericId)
    }

    private func clearUnidenCard() {
        lastUnidenAlerts = []
        unidenLastAlert = ""
        guard isReady else { return }
        glasses.dismissLensCard(numericId: LensCards.unidenAlertNumericId)
    }

    // MARK: - Cruise HUD (auto street + speed while driving)

    /// Starts or stops watching for driving. The detector runs whenever this is
    /// on, glasses connected or not, so the card appears the moment they come
    /// back mid-drive.
    func setAutoCruiseHud(_ on: Bool) {
        autoCruiseHud = on
        if on {
            startCruise()
        } else {
            cruise?.stop()
            cruise = nil
            cruiseStatus = .off
        }
    }

    var cruiseSurface: CruiseSession.Surface {
        get { CruiseSession.Surface(rawValue: cruiseSurfaceRaw) ?? .lensCard }
        set {
            guard newValue != cruiseSurface else { return }
            cruiseSurfaceRaw = newValue.rawValue
            // The surface is fixed for a session's lifetime, so switching means
            // tearing the current one down (which clears whatever it drew).
            let demoWasRunning = cruiseDemoRunning
            cruise?.stop()
            cruise = nil
            cruiseStatus = .off
            // Flipping the picker mid-demo is the whole point of the demo, so
            // restart it on the new surface rather than dropping the preview.
            if demoWasRunning {
                startCruiseDemo()
            } else {
                startCruise()
            }
        }
    }

    private func startCruise() {
        guard autoCruiseHud, cruise == nil else { return }
        // Same background-updates requirement as turn-by-turn: without them the
        // detector dies at screen-lock, which is most of a drive.
        let detector = DriveDetector(
            scheduler: client.scheduler,
            location: CoreLocationSource(allowsBackgroundUpdates: true),
            motion: CoreMotionSource())
        let session = CruiseSession(client: client, detector: detector,
                                    surface: cruiseSurface)
        session.onStatus = { [weak self] status in
            Task { @MainActor in self?.cruiseStatus = status }
        }
        session.start()
        session.setCanSend(isReady && !navigating)
        cruise = session
    }

    /// The glasses can only be written to when the session is live and
    /// turn-by-turn is not already using the lens.
    private func syncCruiseGate() {
        cruise?.setCanSend(isReady && !navigating)
        cruiseDemo?.setCanSend(isReady && !navigating)
    }

    /// Runs the cruise HUD off a fake track so it can be seen — and the two
    /// surfaces compared — without driving.
    ///
    /// Deliberately the real pipeline: same detector, same geocode, same speed
    /// limit lookup, same renderer. Only the fixes are invented, and they start
    /// from the phone's actual position, so the street on the lens is the real
    /// one for where you are.
    func startCruiseDemo() {
        stopCruiseDemo()
        // The live session and the demo would otherwise both write the lens.
        cruise?.stop()
        cruise = nil

        let detector = DriveDetector(
            scheduler: client.scheduler,
            location: SimulatedLocationSource(origin: CoreLocationSource()),
            motion: SimulatedMotionSource(),
            // A demo nobody is willing to wait 8 seconds for is a demo nobody
            // runs; the real thresholds stay untouched.
            startHold: 2,
            stopHold: 3)
        let session = CruiseSession(client: client, detector: detector,
                                    surface: cruiseSurface)
        session.onStatus = { [weak self] status in
            Task { @MainActor in self?.cruiseStatus = status }
        }
        session.start()
        session.setCanSend(isReady && !navigating)
        cruiseDemo = session
        cruiseDemoRunning = true

        cruiseDemoStop = Task { [weak self] in
            try? await Task.sleep(nanoseconds: UInt64(Self.cruiseDemoSeconds) * 1_000_000_000)
            guard !Task.isCancelled else { return }
            await MainActor.run { self?.stopCruiseDemo() }
        }
    }

    func stopCruiseDemo() {
        cruiseDemoStop?.cancel()
        cruiseDemoStop = nil
        guard cruiseDemo != nil else { return }
        cruiseDemo?.stop()
        cruiseDemo = nil
        cruiseDemoRunning = false
        cruiseStatus = .off
        // Hand the lens back to the live watcher if the toggle is still on.
        startCruise()
    }

    func startNavigation(to destination: String) {
        stopNavigation()
        // Background updates, or guidance stops the moment the screen locks —
        // which on a navigation route is most of the time. Needs the Location
        // background mode and Always authorisation, both declared on the target.
        let source = CoreLocationSource(allowsBackgroundUpdates: true)
        // Default HUD (native navi app via open_app). Needs the classic-BT audio
        // link up (the "Auto-connect + keep alive" toggle) to clear the launcher
        // gate; with it connected the real turn-by-turn HUD is reachable.
        let session = NavSession(client: client, source: source, surface: .hud)
        session.start(destination)
        nav = session
        navigating = true
        syncCruiseGate()
    }

    func stopNavigation() {
        nav?.stop()
        nav = nil
        navigating = false
        syncCruiseGate()
    }

    // MARK: - Lens script (BLE teleprompter substitute)

    func loadLensScript(_ text: String, title: String) {
        let script = lensScript ?? LensScript(client: client)
        script.load(text, title: title)
        lensScript = script
    }

    func lensScriptNext() { lensScript?.next() }
    func lensScriptPrevious() { lensScript?.previous() }

    func clearLensScript() {
        lensScript?.clear()
        lensScript = nil
    }
}
