import Combine
import Foundation
import MyvuAI
import MyvuCore
import MyvuNav
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

    /// Persisted so the next launch reconnects without a scan. iOS never
    /// exposes a peripheral's MAC, so this identifier is the only durable handle
    /// on a specific pair of glasses.
    @AppStorage("lastGlassesId") private var lastGlassesId = ""
    /// The iPhone's classic-Bluetooth name the glasses scan for (IOS_CONNECT_BT).
    /// iOS 16+ hides the real name from apps, so it is user-set and persisted.
    @AppStorage("iosBtName") var iosBtName = "Testing1"
    /// Auto-bring-up the classic-BT audio link once BLE is ready.
    @AppStorage("iosBtAutoConnect") var iosBtAutoConnect = true

    let glasses = MyvuGlasses()
    let spotifyAuth = SpotifyAuth()
    let spotifyLyrics: SpotifyLyricsSession

    private(set) var assistant: AiSession?
    private(set) var lensScript: LensScript?
    private var weather: WeatherSync?
    private var nav: NavSession?
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
    }

    private func observe() {
        streams.append(Task { [weak self] in
            guard let self else { return }
            for await state in glasses.states() {
                self.state = state
                if state == .ready {
                    self.info = self.glasses.glassesInfo
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
    }

    func stopNavigation() {
        nav?.stop()
        nav = nil
        navigating = false
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
