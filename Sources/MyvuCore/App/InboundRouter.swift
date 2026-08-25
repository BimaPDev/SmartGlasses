import Foundation

/// Handles messages the glasses send US.
///
/// Several glasses-side features do not work at all unless the phone answers a
/// request first — most importantly the launch-app handshake, without which the
/// navigation app ignores every frame we stream and re-asks forever.
///
/// Relay bodies are protobuf with JSON embedded inside, so rather than decode
/// the envelope precisely we scan for balanced `{…}` runs.
public final class InboundRouter {
    /// Sends an action with explicit routing packages.
    public typealias Sender = (_ actionJson: String, _ targetPkg: String,
                               _ sourcePkg: String) -> Void

    private let send: Sender

    /// Fired when the glasses' AI button or wake word triggers.
    public var onAiTrigger: ((_ code: Int, _ payload: JsonReader?) -> Void)?
    /// Fired when the glasses ask for a fresh weather push.
    public var onWeatherRequested: (() -> Void)?
    /// Fired for inbound `air_ota` sub-actions (firmware update).
    public var onAirOta: ((_ subAction: String, _ value: String) -> Void)?

    public init(send: @escaping Sender) {
        self.send = send
    }

    /// Inspects one inbound relay body and answers anything that needs
    /// answering.
    public func handle(body: String) {
        for candidate in InboundRouter.findJsonObjects(body) {
            guard let obj = JsonReader(parsing: candidate) else { continue }
            checkLaunchAppRequest(obj)
            checkTimeSyncRequest(obj)
            checkWeatherRequest(obj)
            checkAiTrigger(obj)
            checkAirOta(obj)
        }
    }

    /// Answers the RunAsOne "open StarryNet app" request.
    ///
    /// Opening e.g. the nav app on the glasses makes them ask the phone to
    /// launch a companion service via `{"type":11,…}`. A real phone replies
    /// type:12 with success. We cannot start their service, but the glasses only
    /// need the ack — we stream the actual data ourselves — and WITHOUT it the
    /// glasses' app never proceeds and re-sends the request indefinitely.
    private func checkLaunchAppRequest(_ msg: JsonReader) {
        guard msg.optInt("type", -1) == 11 else { return }
        guard let data = msg.optObject("data") else { return }
        let appId = data.optString("appId")
        guard !appId.isEmpty else { return }

        var response = JsonObject()
        var payload = JsonObject()
        payload.put("appId", appId)
        payload.put("code", 200)
        payload.put("menuId", data.optString("menuId"))
        payload.put("requestId", data.optString("requestId"))
        payload.put("success", true)
        response.put("type", 12)
        response.put("data", payload)

        SdkLog.log("glasses asked to launch \(appId) -- acking type:12")
        // Must go out on the interconnect inner channel, not the launcher.
        send(response.serialized(), AppLayer.pkgInterconnect, AppLayer.pkgInterconnect)
    }

    /// The glasses ask for wall-clock time by sending `SyncOffSetTime` with no
    /// `syncTimeData`. Messages that already carry it are time payloads
    /// (possibly our own), so answering those would loop.
    private func checkTimeSyncRequest(_ msg: JsonReader) {
        guard ClockSync.isRequest(msg) else { return }
        SdkLog.log("glasses requested a time sync -- replying")
        send(ClockSync.build(), AppLayer.pkgLauncher, AppLayer.pkgLauncher)
    }

    private func checkWeatherRequest(_ msg: JsonReader) {
        guard Weather.isSyncRequest(msg) else { return }
        SdkLog.log("<- the glasses asked for weather")
        onWeatherRequested?()
    }

    private func checkAirOta(_ msg: JsonReader) {
        guard let parsed = AirOta.parseInbound(msg) else { return }
        onAirOta?(parsed.subAction, parsed.value)
    }

    /// AI assistant triggers: code 3 is the hardware button, code 7 the wake
    /// word.
    private func checkAiTrigger(_ msg: JsonReader) {
        guard msg.has("code") else { return }
        let code = msg.optInt("code", -1)
        guard code == 3 || code == 7 else { return }

        SdkLog.log("AI trigger: code=\(code)\(code == 3 ? " (button)" : " (wake word)")")
        onAiTrigger?(code, msg.optObject("payload"))
    }

    /// Balanced-brace scan for embedded `{…}` objects, handling nesting.
    public static func findJsonObjects(_ s: String) -> [String] {
        var out: [String] = []
        var depth = 0
        var start: String.Index?
        var i = s.startIndex
        while i < s.endIndex {
            let c = s[i]
            if c == "{" {
                if depth == 0 { start = i }
                depth += 1
            } else if c == "}", depth > 0 {
                depth -= 1
                if depth == 0, let from = start {
                    out.append(String(s[from ... i]))
                }
            }
            i = s.index(after: i)
        }
        return out
    }

    /// True if this object is an AI button/wake-word trigger, which is
    /// dispatched from `onAiTrigger` rather than as a generic event.
    public static func isAiTriggerObject(_ candidate: String) -> Bool {
        guard let o = JsonReader(parsing: candidate) else { return false }
        let code = o.optInt("code", -1)
        return code == 3 || code == 7
    }

    public static func isAirOtaObject(_ candidate: String) -> Bool {
        guard let o = JsonReader(parsing: candidate) else { return false }
        return o.optString("action") == AirOta.action
    }
}
