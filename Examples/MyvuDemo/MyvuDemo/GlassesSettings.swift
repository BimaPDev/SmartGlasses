import Foundation
import MyvuAI
import MyvuCore
import SwiftUI

/// The wearer's device preferences — the official app's "Settings for Glasses"
/// and "Voice Assistant" screens.
///
/// The glasses do not report most of these back in a form worth parsing, so the
/// phone is the source of truth: everything is stored here and re-pushed on
/// every ready session. That also settles a conflict with the SDK's own init
/// burst, which asserts wear detection, zen mode and the screen-off time with
/// fixed values — `pushAll` runs after the burst, so the wearer's choice wins.
@MainActor
final class GlassesSettings: ObservableObject {
    private let glasses: MyvuGlasses

    init(glasses: MyvuGlasses) {
        self.glasses = glasses
    }

    // MARK: - Settings for Glasses

    /// Connect when the glasses are put on, disconnect when taken off.
    @AppStorage("glassWearDetection") var wearDetection = true { didSet {
        changed { $0.setWearDetection(wearDetection) } } }

    /// Follow sunrise/sunset instead of the brightness slider.
    @AppStorage("glassAutoBrightness") var autoBrightness = true { didSet {
        changed { $0.setAutoBrightness(autoBrightness) } } }

    /// Auto-lock, in seconds. The SDK's init burst asks for 10s; anything the
    /// wearer picks here replaces it once the session is ready.
    @AppStorage("glassScreenOffSeconds") var screenOffSeconds = 30 { didSet {
        changed { $0.setScreenOffTime(seconds: screenOffSeconds) } } }

    /// Do Not Disturb on the glasses. Silences the lens even when iOS is not
    /// in a Focus, so it is the first thing to check when nothing shows up.
    @AppStorage("glassZenMode") var zenMode = false { didSet {
        changed { $0.setZenMode(zenMode) } } }

    /// The glasses' own clicks and chimes. Not the media volume.
    @AppStorage("glassSoundEffects") var soundEffects = true { didSet {
        changed { $0.setSoundEffects(soundEffects) } } }

    /// Let the trackpad (and the ring) drive playback while the lens rests.
    @AppStorage("glassAudioDuringScreenRest") var audioDuringScreenRest = false { didSet {
        changed { $0.setMusicTpControl(audioDuringScreenRest) } } }

    /// HUD text size, 1–3.
    @AppStorage("glassFontSize") var fontSizeRaw = SystemSettings.FontSize.medium.rawValue {
        didSet { changed { $0.setFontSize(fontSize) } } }

    var fontSize: SystemSettings.FontSize {
        SystemSettings.FontSize(rawValue: fontSizeRaw) ?? .medium
    }

    /// BCP-47-ish `language-country`, the only two halves the wire carries.
    @AppStorage("glassLanguage") var languageTag = "en-US" { didSet {
        let (language, country) = Self.split(languageTag)
        changed { $0.setLanguage(language, country: country) }
    } }

    /// Where the idle widgets sit in the field of view, 0–3.
    @AppStorage("glassStandbyPosition") var standbyPosition = 0 { didSet {
        changed { $0.setStandbyPosition(standbyPosition) } } }

    /// The optional standby widgets the wearer kept, comma-separated. `time`
    /// and `aiBall` are not stored: the launcher fixes them at either end.
    @AppStorage("glassStandbyWidgets") private var standbyWidgetsRaw =
        "\(SystemSettings.StandbyWidgets.weatherSmall),\(SystemSettings.StandbyWidgets.weekday)"

    var standbyWidgets: [String] {
        get { standbyWidgetsRaw.split(separator: ",").map(String.init) }
        set {
            objectWillChange.send()
            standbyWidgetsRaw = newValue.joined(separator: ",")
            pushStandbyWidgets()
        }
    }

    func isStandbyWidget(_ name: String) -> Bool { standbyWidgets.contains(name) }

    func setStandbyWidget(_ name: String, on: Bool) {
        var chosen = standbyWidgets.filter { $0 != name }
        if on {
            // Keep the launcher's own order rather than tap order, so the row
            // does not reshuffle every time a widget is turned back on.
            chosen = SystemSettings.StandbyWidgets.optional.filter {
                $0 == name || chosen.contains($0)
            }
        }
        standbyWidgets = chosen
    }

    private func pushStandbyWidgets() {
        changed { $0.setStandbyWidgets(SystemSettings.StandbyWidgets.ordered(standbyWidgets)) }
    }

    /// Launcher dock order, `|`-separated exactly as the wire carries it.
    @AppStorage("glassDockItems") private var dockItemsRaw =
        GlassesSettings.defaultDock.joined(separator: "|")

    var dockItems: [String] {
        get { dockItemsRaw.split(separator: "|").map(String.init) }
        set {
            objectWillChange.send()
            dockItemsRaw = newValue.joined(separator: "|")
            changed { $0.setDockItems(newValue) }
        }
    }

    /// What the glasses show first. The launcher's own default order; the
    /// wearer can drag it, and anything they drop off the list simply stops
    /// appearing in the dock.
    static let defaultDock = [
        SystemSettings.GlassApps.navigation,
        SystemSettings.GlassApps.teleprompter,
        SystemSettings.GlassApps.translation,
        SystemSettings.GlassApps.transcribe,
        SystemSettings.GlassApps.musicPlayer,
        SystemSettings.GlassApps.settings,
    ]

    /// Which app a long press on the temple opens.
    @AppStorage("glassLongPressApp") var longPressApp = SystemSettings.GlassApps.recorder {
        didSet { changed { $0.setAppFastOpen(longPressApp) } } }

    // MARK: - Voice Assistant

    @AppStorage("aicyWakeWord") var wakeWord = true { didSet {
        pushAssistant(AiProtocol.SettingType.wakeWord, wakeWord) } }
    @AppStorage("aicyWakeWordScreenOff") var wakeWordScreenOff = false { didSet {
        pushAssistant(AiProtocol.SettingType.wakeWordScreenOff, wakeWordScreenOff) } }
    @AppStorage("aicyContinuousDialogue") var continuousDialogue = false { didSet {
        pushAssistant(AiProtocol.SettingType.continuousDialogue, continuousDialogue) } }
    @AppStorage("aicyShowWhatYouSaid") var showWhatYouSaid = false { didSet {
        pushAssistant(AiProtocol.SettingType.showWhatYouSaid, showWhatYouSaid) } }
    @AppStorage("aicySpeakReplies") var speakReplies = true { didSet {
        pushAssistant(AiProtocol.SettingType.speakReplies, speakReplies) } }
    @AppStorage("aicyShowReplyText") var showReplyText = true { didSet {
        pushAssistant(AiProtocol.SettingType.showReplyText, showReplyText) } }

    var assistantPreferences: AiProtocol.AssistantPreferences {
        AiProtocol.AssistantPreferences(wakeWord: wakeWord,
                                        wakeWordScreenOff: wakeWordScreenOff,
                                        continuousDialogue: continuousDialogue,
                                        showWhatYouSaid: showWhatYouSaid,
                                        speakReplies: speakReplies,
                                        showReplyText: showReplyText)
    }

    private func pushAssistant(_ type: String, _ on: Bool) {
        objectWillChange.send()
        guard glasses.state == .ready else { return }
        glasses.client.sendAssistantSetting(type, on: on)
        // The capability block carries every switch and is what a conversation
        // starting now would read, so it has to follow — the per-switch message
        // alone leaves it stale.
        glasses.client.sendAssistantConfig(assistantPreferences)
    }

    // MARK: - Pushing

    /// Re-asserts everything. Called on every ready session, because none of it
    /// is known to survive a power cycle.
    func pushAll() {
        guard glasses.state == .ready else { return }
        glasses.setWearDetection(wearDetection)
        glasses.setAutoBrightness(autoBrightness)
        glasses.setScreenOffTime(seconds: screenOffSeconds)
        glasses.setZenMode(zenMode)
        glasses.setSoundEffects(soundEffects)
        glasses.setMusicTpControl(audioDuringScreenRest)
        glasses.setFontSize(fontSize)
        let (language, country) = Self.split(languageTag)
        glasses.setLanguage(language, country: country)
        glasses.setStandbyPosition(standbyPosition)
        glasses.setStandbyWidgets(SystemSettings.StandbyWidgets.ordered(standbyWidgets))
        glasses.setDockItems(dockItems)
        glasses.setAppFastOpen(longPressApp)
        glasses.client.sendAssistantPreferences(assistantPreferences)
    }

    /// `@AppStorage` writes the value but does not tell SwiftUI, so every setter
    /// announces the change itself and then sends it on if the link is up.
    private func changed(_ send: (MyvuGlasses) -> Void) {
        objectWillChange.send()
        guard glasses.state == .ready else { return }
        send(glasses)
    }

    private static func split(_ tag: String) -> (language: String, country: String) {
        let parts = tag.split(separator: "-")
        guard parts.count == 2 else { return ("en", "US") }
        return (String(parts[0]), String(parts[1]))
    }

    /// The locale pairs the HUD is known to ship. `en/US` and `zh/CN` are the
    /// attested ones; the rest follow the same two-field shape.
    static let languages: [(tag: String, label: String)] = [
        ("en-US", "English (US)"),
        ("en-GB", "English (UK)"),
        ("zh-CN", "简体中文"),
        ("ja-JP", "日本語"),
        ("ko-KR", "한국어"),
        ("de-DE", "Deutsch"),
        ("fr-FR", "Français"),
        ("es-ES", "Español"),
    ]

    /// Wearer-facing names for the glasses' own packages.
    static func appLabel(_ packageName: String) -> String {
        switch packageName {
        case SystemSettings.GlassApps.teleprompter: return "Teleprompter"
        case SystemSettings.GlassApps.navigation: return "Navigation"
        case SystemSettings.GlassApps.translation: return "Translate"
        case SystemSettings.GlassApps.transcribe: return "Transcribe"
        case SystemSettings.GlassApps.recorder: return "Recorder"
        case SystemSettings.GlassApps.musicPlayer: return "Music"
        case SystemSettings.GlassApps.settings: return "Settings"
        case SystemSettings.GlassApps.universe: return "Vientiane"
        case SystemSettings.GlassApps.userGuide: return "Guide"
        case SystemSettings.GlassApps.ringManager: return "Ring"
        default: return packageName
        }
    }

    /// Every app the dock can hold, in the launcher's own order.
    static let allDockApps = [
        SystemSettings.GlassApps.navigation,
        SystemSettings.GlassApps.teleprompter,
        SystemSettings.GlassApps.translation,
        SystemSettings.GlassApps.transcribe,
        SystemSettings.GlassApps.recorder,
        SystemSettings.GlassApps.musicPlayer,
        SystemSettings.GlassApps.settings,
        SystemSettings.GlassApps.universe,
        SystemSettings.GlassApps.userGuide,
        SystemSettings.GlassApps.ringManager,
    ]

    static func standbyWidgetLabel(_ name: String) -> String {
        switch name {
        case SystemSettings.StandbyWidgets.weatherSmall: return "Weather (small)"
        case SystemSettings.StandbyWidgets.weatherLarge: return "Weather (large)"
        case SystemSettings.StandbyWidgets.steps: return "Steps"
        case SystemSettings.StandbyWidgets.weekday: return "Day of the week"
        default: return name
        }
    }

    static func screenOffLabel(_ seconds: Int) -> String {
        if seconds >= 3600 { return "\(seconds / 3600) hour" }
        if seconds >= 60 { return "\(seconds / 60) min" }
        return "\(seconds) sec"
    }
}
