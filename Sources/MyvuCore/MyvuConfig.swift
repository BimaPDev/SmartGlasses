import Foundation

/// Coarse connection state, for the UI and the reconnect logic.
public enum ConnectionState: String, Sendable {
    case idle
    /// BLE scan, GATT connect, service discovery, subscriptions.
    case connecting
    /// Version negotiation and the ECDH bond on the link characteristic.
    case pairing
    /// RunAsOne ability/AUTH_SUCCESS handshake and the init burst.
    case session
    /// Handshake done, init burst sent: the app layer is live.
    case ready
    case failed
}

/// A glasses-initiated event.
///
/// Everything the glasses send that is not consumed internally (ACKs, audio
/// frames, protocol replies the SDK answers itself) is surfaced either as a
/// typed case here or — when the shape is not catalogued — as `.unknown`.
public enum GlassesEvent {
    /// The AI hardware button (code 3) or wake word (code 7) fired.
    ///
    /// A payload with `control:0` is the button RELEASE / page close: it arrives
    /// moments after the press and must not abort a conversation turn already in
    /// flight. Treat it as "end at the next turn boundary".
    case aiTrigger(code: Int, payload: JsonReader?)

    /// The glasses asked for a fresh weather push (`syncWeather`). They re-ask
    /// periodically and whenever their panel is opened.
    case weatherRequested

    /// A file the glasses finished pushing over ShareAbility (HUD screenshot,
    /// glass log). Written under `Documents/MyvuReceived/`.
    case fileReceived(url: URL, fileName: String, byteCount: Int)

    /// BLE firmware transfer / install progress. `fraction` is 0...1.
    case firmwareUpdateProgress(fraction: Double, message: String)

    /// Terminal firmware-update result. `romVersion` is set on success when the
    /// glasses report it.
    case firmwareUpdateFinished(success: Bool, romVersion: String, message: String)

    /// An inbound JSON object the SDK does not parse into a type. This is
    /// high-volume telemetry mixed with query replies; filter it yourself.
    case unknown(rawJson: String)
}

/// Immutable configuration for a `MyvuClient`.
///
/// The defaults reproduce the identity the protocol was reverse-engineered with;
/// the glasses accept them as-is, so most apps only ever need `MyvuConfig()`.
public struct MyvuConfig {
    public static let defaultDeviceName = "MyvuiOS"
    /// categoryId advertised during pairing and in every DeviceInfo.
    public static let defaultCategoryId = "9999"
    /// The identity advertised to the glasses.
    ///
    /// iOS never exposes the device's own Bluetooth MAC, so this stand-in is
    /// always used. That is not a compromise forced by iOS: Android has returned
    /// a fixed placeholder from `BluetoothAdapter.getAddress()` since Android 6,
    /// so the reference SDK also sends a synthetic value, and it is confirmed on
    /// hardware that the glasses accept it — they only use it to key the session.
    public static let defaultLocalIdentity = "AA:BB:CC:DD:EE:FF"

    /// Name the glasses display for this phone.
    public var deviceName: String
    /// categoryId used in the pairing version JSON and DeviceInfo.
    public var categoryId: String
    /// The identity advertised in place of a real MAC.
    public var localIdentity: String
    /// Init-burst capture; nil means the capture bundled with the SDK.
    public var initBurstSource: InitBurstSource?
    /// Reconnect automatically on link drops (exponential backoff 2s..60s).
    public var autoReconnect: Bool
    /// Push clock sync and baseline settings when a session becomes ready.
    public var applyDefaultSettings: Bool
    /// How long the scan runs before giving up on auto-search.
    public var scanTimeout: TimeInterval

    public init(deviceName: String = defaultDeviceName,
                categoryId: String = defaultCategoryId,
                localIdentity: String = defaultLocalIdentity,
                initBurstSource: InitBurstSource? = nil,
                autoReconnect: Bool = true,
                applyDefaultSettings: Bool = true,
                scanTimeout: TimeInterval = 12) {
        self.deviceName = deviceName
        self.categoryId = categoryId
        self.localIdentity = localIdentity
        self.initBurstSource = initBurstSource
        self.autoReconnect = autoReconnect
        self.applyDefaultSettings = applyDefaultSettings
        self.scanTimeout = scanTimeout
    }
}
