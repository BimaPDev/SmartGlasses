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
    /// Sets the read-aloud pause gesture on its own. See `buildBroadcastPauseType`.
    public static let syncBroadcastPauseType = "SYNC_CONFIG_BROADCAST_PAUSE_TYPE"

    /// The ANCS link itself, as opposed to the filter `syncConfig` applies to
    /// what comes over it. All three are in the firmware's `notificationAction`
    /// switch beside `SHOW_NOTIFICATION` (literals at file `0x18df18`,
    /// `0x18df88`, `0x18dfa0` in 1.0.12.83), so they are reachable over BLE.
    ///
    /// On iOS this is the difference between "the glasses are allowed to show
    /// texts" and "the glasses are actually subscribed to the phone's
    /// Notification Source". `syncConfig` alone only sets the former.
    public static let connectAncs = "CONNECT_ANCS_SERVICE"
    public static let disconnectAncs = "DISCONNECT_ANCS_SERVICE"
    public static let queryAncsState = "QUERY_ANCS_SERVICE_STATE"

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

    /// Card types — the `type` field on one pushed entry. A different namespace
    /// from `allTypes` above, and the firmware keeps them in a different string
    /// block: the seven filter categories sit at `0x18d740`-`0x18d7b0`, these
    /// two at `0x18dde4` and `0x18de74`. `SmartLifeAdapter::createNormalMsg`
    /// validates this field — `[%s] invalid normal msg type` at `0x18d974` —
    /// so do not invent values here.
    public static let typeNormal = "MSG_TYPE_NORMAL"
    public static let typeMissedCall = "MSG_TYPE_MISSEDCALL"

    /// `msgType`, the IM sub-kind, from the same field list.
    /// `Im:phone` at `0x18d924` is an SMS; `Im:im` at `0x18d908` is a chat app.
    public static let imKindSms = "Im:phone"
    public static let imKindChat = "Im:im"

    /// Bundle ids the firmware's own table maps to a built-in icon, so a pushed
    /// card gets the right glyph with no patching. `AncsManager` (`0x18ece4`)
    /// holds the iOS side of the table; the ids below are read straight out of
    /// it at `0x18f0bc`-`0x18f274` in 1.0.12.83.
    ///
    /// This is why a test card should carry a REAL bundle id rather than
    /// `AppLayer.pkgSelf`: an unknown package falls through to the generic icon,
    /// which is exactly the difference between "a card" and "a text message".
    public enum Pkg {
        /// -> `smartlife_notification_ios_sms_icon`
        public static let messages = "com.apple.MobileSMS"
        /// -> `smartlife_notification_ios_calendar_icon`
        public static let calendar = "com.apple.mobilecal"
        /// -> `smartlife_notification_ios_weather_icon`
        public static let weather = "com.apple.weather"
        public static let whatsapp = "net.whatsapp.WhatsApp"
        public static let telegram = "ph.telegra.Telegraph"
        public static let messenger = "com.facebook.Messenger"
        public static let instagram = "com.burbn.instagram"
        public static let line = "jp.naver.line"
        public static let wechat = "com.tencent.xin"
    }

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
    /// - Parameters:
    ///   - type: one of the card types above, NOT a `reminderOpenState` key.
    ///   - sender / groupName / msgType: the IM extras `createNormalMsg` parses
    ///     (`0x18d8f0`-`0x18d924`). Left off the wire when nil, Gson-style, so a
    ///     plain card is byte-identical to what this built before they existed.
    public static func entry(packageName: String, numericId: Int, title: String,
                             content: String, appName: String, postTime: Int64,
                             canReply: Bool,
                             type: String = typeNormal,
                             sender: String? = nil,
                             groupName: String? = nil,
                             msgType: String? = nil) -> JsonObject {
        var out = JsonObject()
        out.put("appName", sanitize(appName, max: maxTitle))
        out.put("title", sanitize(title, max: maxTitle))
        out.put("content", sanitize(content, max: maxContent))
        out.put("canReply", canReply)
        out.put("type", type)
        out.put("id", notificationId(packageName: packageName, numericId: numericId))
        out.put("packageName", packageName)
        out.putIfPresent("sender", sender.map { sanitize($0, max: maxTitle) })
        out.putIfPresent("groupName", groupName.map { sanitize($0, max: maxTitle) })
        out.putIfPresent("msgType", msgType)
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

    /// Builds one card shaped like an incoming text message.
    ///
    /// The only thing separating this from `buildShow` is that it names a real
    /// sending app. `packageName` is what the firmware's icon table keys on
    /// (`NormalManager::filterNotification` `0x18e240`, `AncsManager`
    /// `0x18ece4`), so `com.apple.MobileSMS` is what puts the Messages glyph on
    /// the card instead of the fallback.
    ///
    /// Note what this is NOT: it does not read your Messages, and it is not
    /// mirroring. iOS gives no third-party app access to another app's
    /// notifications — real texts reach the lens over ANCS, between the glasses
    /// and iOS directly (see `buildSyncConfig` and `buildAncs`). This pushes one
    /// card that *looks* like a text, which is what you want to check rendering,
    /// wording and dwell time without waiting for someone to message you.
    ///
    /// - Parameters:
    ///   - sender: shown as the card title, the way Messages shows a name.
    ///   - text: the message body.
    ///   - group: set for a group thread; nil for a one-to-one.
    ///   - canReply: advertises a reply affordance. Replying needs an inbound
    ///     path this SDK does not implement, so it defaults to false.
    public static func buildMessage(sender: String, text: String,
                                    group: String? = nil,
                                    packageName: String = Pkg.messages,
                                    appName: String = "Messages",
                                    canReply: Bool = false,
                                    type: String = typeNormal,
                                    nowMs: Int64 = Session.nowMillis()) -> String {
        let numericId = Int(nowMs / 1000) & 0x7FFF_FFFF
        return buildShow(entries: [entry(packageName: packageName,
                                         numericId: numericId,
                                         title: sender,
                                         content: text,
                                         appName: appName,
                                         postTime: nowMs,
                                         canReply: canReply,
                                         type: type,
                                         sender: sender,
                                         groupName: group,
                                         msgType: group == nil
                                             ? imKindSms : imKindChat)])
    }

    /// Connects, disconnects or queries the glasses' ANCS client.
    ///
    /// `[TESTED]` on 1.0.11.53. An empty `data` object is accepted — the query
    /// answered in 167 ms and the connect was acked:
    ///
    /// ```
    /// -> {"action":"notification","data":{"notificationAction":"QUERY_ANCS_SERVICE_STATE","data":{}}}
    /// <- {"action":"QUERY_ANCS_SERVICE_STATE","value":{"state":"CONNECTED"}}
    /// ```
    ///
    /// Note the reply does NOT come back inside a `notification` envelope: it
    /// arrives as a top-level action named after the query, with the answer
    /// under `value.state`. See `ancsState()`.
    public static func buildAncs(_ subAction: String) -> String {
        envelope(subAction, .object(JsonObject()))
    }

    /// `value.state` in a `QUERY_ANCS_SERVICE_STATE` reply. Only `CONNECTED` is
    /// confirmed from hardware; the disconnected spelling has not been observed,
    /// so callers should compare against `connected` rather than guess at its
    /// opposite.
    public static let ancsStateConnected = "CONNECTED"

    /// Pulls `value.state` out of a reply, or nil if this is not one.
    public static func ancsState(from reply: JsonReader) -> String? {
        guard reply.optString("action") == queryAncsState else { return nil }
        return reply.optObject("value")?.optString("state")
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
    /// - Parameters:
    ///   - types: per-category switches keyed by the `MSG_TYPE_*` constants.
    ///     Every key in `allTypes` is always written, because the firmware reads
    ///     `reminderOpenState` as a whole object; categories left out of this
    ///     map are sent as on.
    ///   - announce: read the card aloud on the glasses ("Announce
    ///     Notifications"). `notificationBroadcast` on the wire.
    ///   - brightenScreen: wake the lens when a card arrives.
    ///   - dismissMs: how long a card stays up.
    ///   - scheduleMs: how long a calendar card stays up.
    ///   - broadcastPauseType: which gesture stops a reading in progress; 2 is
    ///     the power button, the value the official app ships.
    public static func buildSyncConfig(enabled: Bool,
                                       types: [String: Bool] = [:],
                                       calls: Bool = true,
                                       dismissMs: Int64 = 10_000,
                                       announce: Bool = false,
                                       brightenScreen: Bool = true,
                                       scenes: Bool = true,
                                       scheduleMs: Int = 30_000,
                                       broadcastPauseType: Int = defaultBroadcastPauseType,
                                       iosEnabled: Bool? = nil,
                                       iosMuteWhileUsingPhone: Bool = false)
        -> String {
        var openState = JsonObject()
        for type in allTypes {
            openState.put(type, types[type] ?? true)
        }

        var cfg = JsonObject()
        cfg.put("notificationControlState", enabled)
        cfg.put("reminderScenesControlState", scenes)
        cfg.put("reminderOpenState", openState)
        cfg.put("notificationDisplayTime", dismissMs)
        cfg.put("notificationBroadcast", announce)
        cfg.put("notificationBrightenScreen", brightenScreen)
        cfg.put("callNotificationState", calls)
        cfg.put("scheduleDisplayTime", scheduleMs)
        cfg.put("notificationBroadcastPauseType", broadcastPauseType)

        // The iOS-only half of the gate. `notificationControlState` above is
        // what `SmartLifePresenter` reads for a card pushed over StarryNet;
        // `AncsManager` checks THESE before it will even accept a notification
        // from iOS, and refuses with
        //   `[%s] ios notification not enabled, pls open in MYVU app`  (0x1a09e0)
        // Both keys sit directly after the seven `MSG_TYPE_*` filter keys in the
        // same `NotificationConfig` string block (`0x19f440` / `0x19f458` in
        // 1.0.11.53), which is why they are written here and not in their own
        // action.
        //
        // Defaulting `iosEnabled` to `enabled` keeps the two halves in step: a
        // caller that turns mirroring on has never meant "on, but not for iOS".
        cfg.put("iosNotificationState", iosEnabled ?? enabled)
        cfg.put("iosUsingTurnOffNotification", iosMuteWhileUsingPhone)
        return envelope(syncConfig, .object(cfg))
    }

    /// Which gesture pauses a reading in progress. The official app only ever
    /// sends 2 (the power button, which is what its own UI text promises).
    public static let defaultBroadcastPauseType = 2

    /// The card display times the official app offers, in milliseconds.
    public static let dismissChoicesMs: [Int64] = [5_000, 10_000, 15_000, 30_000]

    /// Changes ONLY the broadcast-pause gesture.
    ///
    /// Its own sub-action, because `SuperNotificationManager.K` sends it alone
    /// rather than through the whole-config push — the other fields would be
    /// clobbered by a full `buildSyncConfig` built from stale state.
    public static func buildBroadcastPauseType(_ type: Int) -> String {
        var payload = JsonObject()
        payload.put("notificationBroadcastPauseType", type)
        return envelope(syncBroadcastPauseType, .object(payload))
    }
}
