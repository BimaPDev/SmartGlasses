import Foundation

/// Step-count / health sync for the idle-lens **Steps** standby widget.
///
/// The widget only shows something when the phone feeds it, exactly like the
/// weather panel. The mechanism the firmware exposes is:
///
/// 1. When the Steps widget is on screen the glasses ask the phone to refresh by
///    sending `{"action":"syncSport"}` (firmware string, `MessageModel.cpp`; the
///    launcher logs `no step count widget, ignore syncSportInfo` when the widget
///    is absent, so the request only fires while it is showing).
/// 2. The phone replies with a health payload that the firmware parses in
///    `StandByWidget::handleHealthMsg`, reading an **`errorCode`** and a
///    **`stepCount`** (from the TRACE `handleHealthMsg failed, errorCode is %d,
///    stepCount is %d`).
///
/// This mirrors `Weather` one-for-one — glasses ask `syncWeather`, phone pushes
/// `weather`; glasses ask `syncSport`, phone pushes the payload below.
///
/// WIRE FORMAT — CONFIRMED vs. RECONSTRUCTED
/// -----------------------------------------
/// Confirmed from `platform_tester.bin` (Star Air 1.0.12.83):
///   - the outbound request action is `syncSport`;
///   - the reply is parsed by `handleHealthMsg`, which reads `errorCode` and
///     `stepCount`.
/// Reconstructed (no packet capture available, cannot be verified on hardware
/// from the strings alone):
///   - the reply's TOP-LEVEL `action` token. `sport` is the confirmed
///     MessageModel token in the same cluster, so it is used here; if a capture
///     shows the health handler keys off a different token, change
///     ``replyAction`` — it is the single point that needs editing.
///   - whether the fields sit directly under `data` (the `Weather` convention,
///     used here) or under a nested `data.value`.
public enum Health {
    /// Top-level action of the push we send. See the reconstruction note above:
    /// this is the one token to change if a capture disagrees.
    public static let replyAction = "sport"

    /// The glasses ask for a refresh with `{"action":"syncSport"}`. Answered by
    /// this SDK; the request only fires while the Steps widget is on screen.
    public static let syncRequestAction = "syncSport"

    /// `errorCode == 0` is success; the firmware TRACE only logs non-zero codes
    /// as failures, so anything else suppresses the update on the lens.
    public static let successCode = 0

    /// A step reading to push to the glasses.
    public struct Reading: Equatable, Sendable {
        /// Steps so far today, as the phone's health store reports them.
        public var stepCount: Int
        /// 0 for a good reading. Non-zero tells the lens the phone could not
        /// produce a count (e.g. health access denied), matching the firmware's
        /// `errorCode` check.
        public var errorCode: Int

        public init(stepCount: Int, errorCode: Int = Health.successCode) {
            self.stepCount = stepCount
            self.errorCode = errorCode
        }
    }

    /// Builds `{"action":"sport","data":{"errorCode":0,"stepCount":N}}`.
    public static func build(_ r: Reading) -> String {
        var data = JsonObject()
        data.put("errorCode", r.errorCode)
        data.put("stepCount", r.stepCount)

        var out = JsonObject()
        out.put("action", replyAction)
        out.put("data", data)
        return out.serialized()
    }

    /// True when the glasses are asking us to push a fresh step count.
    public static func isSyncRequest(_ message: JsonReader) -> Bool {
        message.optString("action") == syncRequestAction
    }
}
