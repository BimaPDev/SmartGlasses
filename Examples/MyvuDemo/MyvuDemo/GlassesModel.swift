import Combine
import Foundation
import MyvuAI
import MyvuCore
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
    /// The most recent inbound objects, newest last — a rough activity monitor.
    @Published private(set) var recentInbound: [String] = []
    /// Last file the glasses finished pushing (HUD screenshot, glass log).
    @Published private(set) var lastReceivedFile: URL?
    @Published private(set) var lastReceivedLabel = ""
    @Published private(set) var firmwareBusy = false
    @Published private(set) var firmwareFraction = 0.0
    @Published private(set) var firmwareStatus = ""
    @Published private(set) var renameStatus = ""
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
    @AppStorage("iosBtAutoConnect") var iosBtAutoConnect = true
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
    /// Scan and connect the Uniden radar once GPS holds at 10 mph.
    @AppStorage("autoUnidenWhileDriving") var autoUnidenWhileDriving = false
    /// Last Uniden peripheral iOS identifier, so a later drive can skip the scan.
    @AppStorage("lastUnidenId") private var lastUnidenId = ""

    let glasses = MyvuGlasses()
    let alerts = PhoneAlerts()
    let contacts = ContactsAccess()
    let spotifyAuth = SpotifyAuth()
    let spotifyLyrics: SpotifyLyricsSession

    /// Alerts the wearer as the glasses' battery falls past each threshold.
    private let batteryAlerts = BatteryMonitor()

    private(set) var assistant: AiSession?
    private(set) var lensScript: LensScript?
    private var weather: WeatherSync?
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
        observe()
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
                    if self.phoneNotifications { self.pushNotificationConfig() }
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

    private func pushNotificationConfig() {
        guard isReady else { return }
        let types = Dictionary(uniqueKeysWithValues:
            Notifications.allTypes.map { ($0, isNotificationType($0)) })
        glasses.enablePhoneNotifications(phoneNotificationsRaw, types: types,
                                         calls: phoneNotificationCallsRaw)
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

    /// Manual scan/connect. Phone notification permission is requested here so
    /// a later GATT hit can raise a banner without a silent drop.
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
        switch UnidenAlertGate.decision(hasHits: !hits.isEmpty,
                                       lastSentAt: lastUnidenSendAt,
                                       now: Date()) {
        case .clear:
            unidenFlushTask?.cancel()
            unidenFlushTask = nil
            lastUnidenSendAt = nil
            lastUnidenIdentity = ""
            unidenLastAlert = ""
            clearUnidenCard()
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
        lastUnidenSendAt = Date()
        let title = UnidenAlertCard.title(for: hits)
        let body = UnidenAlertCard.body(for: hits)
        unidenLastAlert = "\(title) · \(body)"
        pushUnidenCard(title: title, body: body)
        let identity = hits.map { "\($0.type)|\($0.rawValue)|\($0.direction)" }
            .joined(separator: "&")
        guard identity != lastUnidenIdentity else { return }
        lastUnidenIdentity = identity
        alerts.post(title: title, body: body, id: "uniden-radar")
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
