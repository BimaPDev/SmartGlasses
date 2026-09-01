import Foundation

/// The notification action family.
///
/// Envelope:
/// `{"action":"notification","data":{"notificationAction":<SUB>,"data":<payload>}}`
public enum Notifications {
    public static let show = "SHOW_NOTIFICATION"
    public static let dismiss = "DISMISS_NOTIFICATION"
    /// Master switch the official app stores as `notification_enable_key`.
    /// Without this the firmware drops ANCS with
    /// `ios notification not enabled, pls open in MYVU app`.
    public static let syncConfig = "SYNC_SMART_REMINDER_CONFIG"

    /// Category keys in `NotificationConfig.reminderOpenState`. Texts/iMessage
    /// land as `MSG_TYPE_IM` after ANCS maps `com.apple.MobileSMS`.
    public static let typeIm = "MSG_TYPE_IM"
    public static let typeReminder = "MSG_TYPE_REMINDER"
    public static let typeTaxi = "MSG_TYPE_TAXI"
    public static let typeFlight = "MSG_TYPE_FLIGHT"
    public static let typeTakeout = "MSG_TYPE_TAKEOUT"
    public static let typeExpress = "MSG_TYPE_EXPRESS"
    public static let typeWeather = "MSG_TYPE_WEATHER"

    /// Every key `reminderOpenState` understands, in the order the official app
    /// lists them. `MSG_TYPE_NORMAL` is deliberately absent: that is the type on
    /// an individual pushed card, not a category the filter knows about.
    public static let allTypes = [typeIm, typeReminder, typeTaxi, typeFlight,
                                  typeTakeout, typeExpress, typeWeather]

    /// Longest title/content we will send. The glasses render on a small lens and
    /// have shown themselves to be fragile about malformed notification
    /// payloads, so oversized text is truncated rather than trusted to their
    /// renderer.
    static let maxTitle = 100
    static let maxContent = 500

    private static func envelope(_ subAction: String, _ payload: JsonValue) -> String {
        var data = JsonObject()
        data.put("notificationAction", subAction)
        data.put("data", payload)
        var out = JsonObject()
        out.put("action", "notification")
        out.put("data", data)
        return out.serialized()
    }

    /// Builds the notification id in the ONLY format the glasses accept:
    /// `phone-<packageName>-<numericId>`, confirmed from a captured DISMISS
    /// payload (`phone-com.android.settings-17301632`).
    ///
    /// This matters more than it looks. On Android, passing the platform's own
    /// pipe-delimited notification key here made the glasses REBOOT on every
    /// mirrored notification. Keep this format; never substitute a platform key,
    /// and on iOS never pass a raw `UNNotificationRequest.identifier`, which is
    /// an arbitrary string.
    public static func notificationId(packageName: String, numericId: Int) -> String {
        "phone-\(packageName)-\(numericId)"
    }

    /// Trims and strips control characters that could confuse their parser.
    static func sanitize(_ s: String?, max: Int) -> String {
        guard let s else { return "" }
        var out = ""
        for c in s.unicodeScalars {
            if out.count >= max { break }
            // Keep newlines out too: the lens renders a single flowed block.
            if c == "\n" || c == "\r" || c == "\t" {
                out.append(" ")
            } else if c.value >= 0x20 {
                out.unicodeScalars.append(c)
            }
        }
        return out.trimmingCharacters(in: .whitespaces)
    }

    /// One notification entry (ArNotificationModel).
    ///
    /// The id MUST come from `notificationId` — see the warning there.
    public static func entry(packageName: String, numericId: Int, title: String,
                             content: String, appName: String, postTime: Int64,
                             canReply: Bool) -> JsonObject {
        var out = JsonObject()
        out.put("appName", sanitize(appName, max: maxTitle))
        out.put("title", sanitize(title, max: maxTitle))
        out.put("content", sanitize(content, max: maxContent))
        out.put("canReply", canReply)
        out.put("type", "MSG_TYPE_NORMAL")
        out.put("id", notificationId(packageName: packageName, numericId: numericId))
        out.put("packageName", packageName)
        // "crateTime" is the device's own misspelling. Correcting it to
        // createTime means the field silently never binds.
        out.put("crateTime", postTime)
        out.put("extra", "{}")
        return out
    }

    /// `data.data` is an ARRAY, so several notifications can be pushed at once.
    public static func buildShow(entries: [JsonObject]) -> String {
        envelope(show, .array(entries.map { .object($0) }))
    }

    public static func buildShow(title: String, content: String,
                                 nowMs: Int64 = Session.nowMillis()) -> String {
        // Synthetic numeric id, so the wire format matches a real
        // notification's.
        let numericId = Int(nowMs / 1000) & 0x7FFF_FFFF
        return buildShow(entries: [entry(packageName: AppLayer.pkgSelf,
                                         numericId: numericId,
                                         title: title, content: content,
                                         appName: AppLayer.defaultAppName,
                                         postTime: nowMs, canReply: false)])
    }

    /// Dismisses previously shown notifications by id.
    public static func buildDismiss(ids: [String]) -> String {
        var payload = JsonObject()
        payload.put("type", 0)
        payload.put("ids", .array(ids.map { .string($0) }))
        return envelope(dismiss, .object(payload))
    }

    /// Gson field names from `NotificationConfig` (no `@SerializedName`).
    /// This is JSON on `action: notification`, not the protobuf notify path.
    ///
    /// - Parameter types: per-category switches keyed by the `MSG_TYPE_*`
    ///   constants. Every key in `allTypes` is always written, because the
    ///   firmware reads `reminderOpenState` as a whole object; categories left
    ///   out of this map are sent as on.
    public static func buildSyncConfig(enabled: Bool,
                                       types: [String: Bool] = [:],
                                       calls: Bool = true,
                                       dismissMs: Int64 = 10_000) -> String {
        var openState = JsonObject()
        for type in allTypes {
            openState.put(type, types[type] ?? true)
        }

        var cfg = JsonObject()
        cfg.put("notificationControlState", enabled)
        cfg.put("reminderScenesControlState", true)
        cfg.put("reminderOpenState", openState)
        cfg.put("notificationDisplayTime", dismissMs)
        cfg.put("notificationBroadcast", false)
        cfg.put("notificationBrightenScreen", true)
        cfg.put("callNotificationState", calls)
        cfg.put("scheduleDisplayTime", 30_000)
        cfg.put("notificationBroadcastPauseType", 2)
        return envelope(syncConfig, .object(cfg))
    }
}
