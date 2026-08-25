import Foundation

/// The launcher "system" action family.
///
/// THERE ARE TWO PAYLOAD SHAPES and mixing them up is a silent no-op:
///
///  - FLAT — `{"action":"system","data":{"action":"set_volume","value":"7",…}}`
///    used by set_volume / set_brightness / toggle_wifi. Note that volume and
///    brightness send their value as a STRING.
///
///  - NESTED — `{"action":"system","data":{"action":"set_zen_mode",
///    "value":{"zen_mode":false}}}` used by the ControlUtils family, where the
///    value is an object whose single key repeats the setting name.
///
/// Both shapes are pinned by tests so a future cleanup cannot collapse them.
public enum SystemSettings {
    /// `{"action":"system","data":{"action":<a>, …extras}}`
    private static func system(_ subAction: String,
                               _ extras: (inout JsonObject) -> Void = { _ in }) -> String {
        var data = JsonObject()
        data.put("action", subAction)
        extras(&data)
        var env = JsonObject()
        env.put("action", "system")
        env.put("data", data)
        return env.serialized()
    }

    /// The NESTED form: value is an object keyed by the setting name.
    private static func nested(_ subAction: String, _ key: String,
                               _ value: JsonValue) -> String {
        system(subAction) { data in
            var wrapper = JsonObject()
            wrapper.put(key, value)
            data.put("value", wrapper)
        }
    }

    // MARK: - Flat-value form

    /// Volume 0–15. `streamType` 3 matches captured telemetry.
    public static func setVolume(_ value: Int, streamType: Int = 3) -> String {
        system("set_volume") { data in
            data.put("value", String(value)) // a string, not an int
            data.put("streamType", streamType)
            data.put("needReply", false)
        }
    }

    /// Screen brightness; observed range roughly 0–10.
    public static func setBrightness(_ value: Int) -> String {
        system("set_brightness") { data in
            data.put("value", String(value)) // a string, not an int
        }
    }

    /// Turns the glasses' own WiFi radio on/off. Boolean value, flat.
    public static func toggleWifi(_ enable: Bool) -> String {
        system("toggle_wifi") { data in
            data.put("value", enable)
        }
    }

    /// Retail/demo (shop) mode. Flat boolean — same shape as `toggleWifi`,
    /// recovered from `ControlUtils.S` in the official app. The in-app 5-tap
    /// About-glass easter egg only arms for Air Pro; the BLE command itself is
    /// not model-gated. This is not ADB/root.
    public static func setDemoMode(_ on: Bool) -> String {
        system("set_demo_mode") { data in
            data.put("value", on)
        }
    }

    // MARK: - Nested-value form

    public static func setLanguage(language: String, country: String) -> String {
        system("set_language") { data in
            var value = JsonObject()
            value.put("language", language)
            value.put("country", country)
            data.put("value", value)
        }
    }

    public static func setDeviceName(_ name: String) -> String {
        nested("set_device_name", "device_name", .string(name))
    }

    /// Display auto-off timeout, in seconds.
    public static func setScreenOffTime(_ seconds: Int) -> String {
        nested("set_screen_off_time", "screen_off_time", .int(Int64(seconds)))
    }

    /// Do-not-disturb.
    public static func setZenMode(_ on: Bool) -> String {
        nested("set_zen_mode", "zen_mode", .bool(on))
    }

    /// MYVU's stripped-back low-power HUD — NOT airplane mode. The official
    /// app's own confirm dialog warns that enabling it CLOSES ALL APPS.
    public static func setAirMode(_ on: Bool) -> String {
        nested("set_air_mode", "air_mode", .bool(on))
    }

    /// Auto on/off when the glasses are worn or removed.
    public static func setWearDetection(_ on: Bool) -> String {
        nested("set_wear_detection_mode", "wear_detection_mode", .bool(on))
    }

    public static func setMusicTpControl(_ on: Bool) -> String {
        nested("set_music_tp_control_mode", "music_tp_control_mode", .bool(on))
    }

    /// Field-of-view position of the idle standby widgets. Confirmed range 0–3.
    public static func setStandbyPosition(_ position: Int) -> String {
        nested("set_standby_position", "standby_position", .int(Int64(position)))
    }

    /// Field-of-view position type. The enum's meaning was never established.
    public static func setFovPosType(_ value: Int) -> String {
        nested("set_fov_pos_type", "fov_pos", .int(Int64(value)))
    }

    // MARK: - Queries

    /// Any no-argument "system" query, e.g. `get_device_info`, `get_language`,
    /// `get_brightness`, `request_wifi_list`, `request_phone_battery`.
    ///
    /// Replies are ASYNCHRONOUS — they arrive later as ordinary inbound relay
    /// messages, so there is no return value to wait on here.
    public static func query(_ subAction: String) -> String {
        system(subAction)
    }
}

/// Pull glasses-side logs. Outer action is `user_feedback`, not `system`.
///
/// Recovered from `SuperMessageManger.p` / `SuperAppDebugActivity.H0`. The JSON
/// only *asks* the glasses to start a transfer; the file rides StarryNet
/// ShareAbility and is saved under `Documents/MyvuReceived/`.
public enum GlassLog {
    /// Phone-side destination the official app used. The glasses treat it as
    /// the ShareAbility receive path; on iOS it is a label, not a real folder.
    public static let defaultFilePath = "/tmp/myvu-ulog/"

    public static func request(channel: String = "BLE",
                               filePath: String = defaultFilePath) -> String {
        var data = JsonObject()
        data.put("action", "get_glass_log")
        data.put("channel", channel)
        data.put("filePath", filePath)
        var env = JsonObject()
        env.put("action", "user_feedback")
        env.put("data", data)
        return env.serialized()
    }
}

/// Ask the glasses for a HUD screenshot.
///
/// Recovered from `GlassMessageHelper.d("screenshot","get_glass_screenshot",…)`.
/// `value` is a JSON *string* (serialised `GlassScreenshotReq`), not an object.
/// The image arrives over ShareAbility and is decoded to PNG under
/// `Documents/MyvuReceived/`. The JSON ack still arrives first.
public enum GlassScreenshot {
    public static func request(filePath: String? = nil,
                               useEncoding: Bool = true) -> String {
        var req = JsonObject()
        req.putIfPresent("filePath", filePath)
        req.put("useEncoding", useEncoding)
        var data = JsonObject()
        data.put("action", "get_glass_screenshot")
        data.put("value", req.serialized())
        var env = JsonObject()
        env.put("action", "screenshot")
        env.put("data", data)
        return env.serialized()
    }
}

/// Clock sync.
///
/// Bidirectional: the glasses also ASK for the time by sending a
/// `SyncOffSetTime` with no `syncTimeData` field, and expect the phone to answer
/// with one that has it.
public enum ClockSync {
    public static let action = "SyncOffSetTime"

    public static func build(nowMs: Int64 = Session.nowMillis(),
                             timeZone: TimeZone = .current) -> String {
        // secondsFromGMT(for:) already accounts for DST at this instant.
        let offsetMs = timeZone.secondsFromGMT(for: Date(timeIntervalSince1970:
            Double(nowMs) / 1000)) * 1000

        var data = JsonObject()
        // syncTimeData is a STRING on the wire, not a number.
        data.put("syncTimeData", String(nowMs))
        data.put("timeZoneOffSet", offsetMs)

        var out = JsonObject()
        out.put("action", action)
        out.put("data", data)
        return out.serialized()
    }

    /// True when an inbound `SyncOffSetTime` is a REQUEST (no `syncTimeData`)
    /// rather than the glasses reporting their own time. Answering a report
    /// would loop.
    public static func isRequest(_ message: JsonReader) -> Bool {
        guard message.optString("action") == action else { return false }
        guard let data = message.optObject("data") else { return true }
        return !data.has("syncTimeData")
    }
}
