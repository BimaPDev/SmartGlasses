import Foundation

/// The StMessage envelope and the action-JSON builders.
///
/// Wire shape: `{"action":"<name>","data":{…}}` as a JSON string, wrapped in a
/// protobuf envelope `{2:srcPkg, 3:dstPkg, 4:json, 6:appMsgId}`. The glasses
/// parse the JSON with Gson against fixed bean classes, so key names are
/// load-bearing — including the misspelled `crateTime`, which is theirs.
public final class AppLayer {
    public static let pkgLauncher = "com.upuphone.star.launcher"
    /// The launcher's international build. The captured init burst sources its
    /// `system`/`system_account`/`system_glass_active` messages from HERE rather
    /// than from `pkgLauncher`, so anything replaying those must match it.
    public static let pkgLauncherIntl = "com.upuphone.star.launcher.intl"
    public static let pkgTici = "com.upuphone.ar.tici"
    public static let pkgAi = "com.upuphone.ai.assistant"
    public static let pkgNavGlass = "com.upuphone.ar.navi.glass"
    public static let pkgNavPhone = "com.upuphone.ar.navi.lite"
    public static let pkgInterconnect = "com.upuphone.xr.interconnect"
    /// Our own bundle identity, as it appears in notification payloads.
    public static let pkgSelf = "dev.myvu.sdk"

    /// The app name the glasses show beside a notification. Empty hides the
    /// source label on the lens (stock SDK used "ARIA").
    public static let defaultAppName = ""

    /// The counter is per-instance, not static: the glasses treat a repeated id
    /// as a duplicate, and a static counter would leak across reconnects.
    /// Starts at 5000 so the first message sent is 5001.
    private var appMsgId = 5000

    public init() {}

    /// StMessage envelope: `{2:src, 3:dst, 4:json, 6:id}`.
    public func buildSendActionBody(_ actionJson: String,
                                   targetPkg: String = AppLayer.pkgLauncher,
                                   sourcePkg: String = AppLayer.pkgLauncher) -> Data {
        appMsgId += 1
        var body = Pb.string(2, sourcePkg)
        body += Pb.string(3, targetPkg)
        body += Pb.string(4, actionJson)
        body += Pb.varintField(6, UInt64(appMsgId))
        return body
    }

    public var lastAppMsgId: Int { appMsgId }

    // MARK: - Action builders

    public static func buildNotificationAction(title: String, content: String,
                                               appName: String = defaultAppName,
                                               nowMs: Int64 = Session.nowMillis()) -> String {
        var entry = JsonObject()
        entry.put("appName", appName)
        entry.put("title", title)
        entry.put("content", content)
        entry.put("canReply", false)
        entry.put("type", "MSG_TYPE_NORMAL")
        entry.put("id", "phone-android-\(nowMs / 1000)")
        entry.put("packageName", pkgSelf)
        // "crateTime" is the device's own misspelling (ArNotificationModel);
        // correcting it to createTime means the field silently never binds.
        entry.put("crateTime", nowMs)
        entry.put("extra", "{}")

        var data = JsonObject()
        data.put("notificationAction", "SHOW_NOTIFICATION")
        data.put("data", .array([.object(entry)]))

        var out = JsonObject()
        out.put("action", "notification")
        out.put("data", data)
        return out.serialized()
    }
}

/// Per-transport relay state.
///
/// Both the relay `msgId` sequence and the app `msgId` counter are
/// per-connection: the glasses track the last received sequence number and
/// discard anything that looks stale, so a reconnect MUST start from a fresh
/// instance rather than continuing the old numbering.
public final class RelaySession {
    public let seq = RelaySequencer()
    public let appLayer = AppLayer()

    /// Set the first time we answer an ability reply.
    ///
    /// The glasses send that reply MORE THAN ONCE (observed twice on BLE).
    /// Without this guard each copy triggers its own AUTH_SUCCESS and its own
    /// init burst, so two bursts interleave on one sequencer and the msgId run
    /// stops being the clean 1..N the glasses require.
    public var authConfirmed = false

    /// Set once the ability/AUTH_SUCCESS handshake and init burst have finished.
    public var ready = false

    public init() {}
}
