import XCTest
@testable import MyvuCore

/// The glasses parse these payloads with Gson against fixed bean classes, so the
/// exact key names matter more than they look. Several are easy to "correct"
/// while porting and thereby break silently — these tests pin them down.
final class JsonShapeTests: XCTestCase {
    /// REGRESSION (from the Android SDK): passing the platform's own
    /// pipe-delimited notification key as the id made the glasses REBOOT on
    /// every mirrored notification. The only accepted format is
    /// `phone-<packageName>-<numericId>`.
    func testNotificationIdUsesTheCapturedFormat() {
        XCTAssertEqual(
            Notifications.notificationId(packageName: "com.android.settings",
                                         numericId: 17_301_632),
            "phone-com.android.settings-17301632")
    }

    func testNotificationIdNeverContainsPipes() {
        let entry = Notifications.entry(packageName: "com.whatsapp", numericId: 42,
                                        title: "Title", content: "Body",
                                        appName: "WhatsApp", postTime: 1_784_488_002_000,
                                        canReply: false)
        let id = TestJson.string(TestJson.object(entry.serialized()), "id")
        XCTAssertEqual(id, "phone-com.whatsapp-42")
        XCTAssertEqual(id?.contains("|"), false, "a pipe in the id crashes the glasses")
    }

    func testNotificationTextIsSanitisedAndBounded() {
        let huge = String(repeating: "x", count: 2000)
        let entry = TestJson.object(
            Notifications.entry(packageName: "com.example", numericId: 1,
                                title: "Multi\nline\ttitle", content: huge,
                                appName: "Example", postTime: 1, canReply: false)
                .serialized())

        XCTAssertEqual(TestJson.string(entry, "title")?.contains("\n"), false,
                       "newlines must not reach the lens renderer")
        XCTAssertLessThanOrEqual(TestJson.string(entry, "content")?.count ?? 0, 500,
                                 "oversized content must be truncated")
    }

    func testNotificationKeepsTheCrateTimeTypo() {
        let action = TestJson.object(
            AppLayer.buildNotificationAction(title: "Title", content: "Body"))
        let entries = TestJson.array(TestJson.nested(action, "data"), "data")
        let entry = entries.first as? [String: Any] ?? [:]

        // ArNotificationModel.crateTime — the misspelling is the device's, and
        // "fixing" it to createTime means the field silently never binds.
        XCTAssertNotNil(entry["crateTime"], "crateTime is the real (misspelled) field name")
        XCTAssertNil(entry["createTime"])
    }

    func testNotificationHasTheFullEnvelope() {
        let action = TestJson.object(
            AppLayer.buildNotificationAction(title: "Hello", content: "World"))

        XCTAssertEqual(TestJson.string(action, "action"), "notification")
        let data = TestJson.nested(action, "data")
        XCTAssertEqual(TestJson.string(data, "notificationAction"), "SHOW_NOTIFICATION")

        // data.data is an ARRAY of notifications, not a single object.
        let entry = TestJson.array(data, "data").first as? [String: Any] ?? [:]
        XCTAssertEqual(TestJson.string(entry, "title"), "Hello")
        XCTAssertEqual(TestJson.string(entry, "content"), "World")
        XCTAssertEqual(TestJson.string(entry, "appName"), "")
        XCTAssertEqual(TestJson.string(entry, "type"), "MSG_TYPE_NORMAL")
        XCTAssertEqual(TestJson.bool(entry, "canReply"), false)
        // extra is a JSON *string*, not an object.
        XCTAssertEqual(TestJson.string(entry, "extra"), "{}")
    }

    // MARK: - Text-message card

    /// The whole point of `buildMessage`: `packageName` is what the firmware's
    /// icon table keys on, so a test text must claim to come from Messages or it
    /// renders with the generic icon and proves nothing.
    func testTextMessageClaimsTheMessagesBundleId() {
        let action = TestJson.object(
            Notifications.buildMessage(sender: "Alex", text: "on my way"))
        let data = TestJson.nested(action, "data")
        XCTAssertEqual(TestJson.string(data, "notificationAction"), "SHOW_NOTIFICATION")

        let entry = TestJson.array(data, "data").first as? [String: Any] ?? [:]
        XCTAssertEqual(TestJson.string(entry, "packageName"), "com.apple.MobileSMS")
        XCTAssertEqual(TestJson.string(entry, "appName"), "Messages")
        XCTAssertEqual(TestJson.string(entry, "title"), "Alex")
        XCTAssertEqual(TestJson.string(entry, "content"), "on my way")
        XCTAssertEqual(TestJson.string(entry, "sender"), "Alex")
        // A one-to-one text, so the SMS sub-kind and no group.
        XCTAssertEqual(TestJson.string(entry, "msgType"), "Im:phone")
        XCTAssertNil(entry["groupName"])
        XCTAssertEqual(TestJson.string(entry, "id")?.hasPrefix("phone-com.apple.MobileSMS-"),
                       true)
    }

    func testGroupTextCarriesTheGroupNameAndChatKind() {
        let entry = TestJson.array(
            TestJson.nested(TestJson.object(
                Notifications.buildMessage(sender: "Alex", text: "hi",
                                           group: "Climbing")), "data"),
            "data").first as? [String: Any] ?? [:]
        XCTAssertEqual(TestJson.string(entry, "groupName"), "Climbing")
        XCTAssertEqual(TestJson.string(entry, "msgType"), "Im:im")
    }

    /// `type` on a card is NOT a `reminderOpenState` key. Sending `MSG_TYPE_IM`
    /// here hits `[%s] invalid normal msg type` in `createNormalMsg`, so the
    /// default stays on the value the firmware validates.
    func testCardTypeDefaultsToNormalNotTheFilterCategory() {
        let entry = TestJson.array(
            TestJson.nested(TestJson.object(
                Notifications.buildMessage(sender: "A", text: "b")), "data"),
            "data").first as? [String: Any] ?? [:]
        XCTAssertEqual(TestJson.string(entry, "type"), "MSG_TYPE_NORMAL")
        XCTAssertFalse(Notifications.allTypes.contains(Notifications.typeNormal))
        XCTAssertFalse(Notifications.allTypes.contains(Notifications.typeMissedCall))
    }

    /// The IM extras are Gson-optional: a plain card must not grow keys it never
    /// had, because the glasses were built against payloads where an unknown
    /// field is absent rather than null.
    func testPlainCardStillOmitsTheImExtras() {
        let entry = TestJson.object(
            Notifications.entry(packageName: "com.example", numericId: 1,
                                title: "T", content: "C", appName: "E",
                                postTime: 1, canReply: false).serialized())
        XCTAssertNil(entry["sender"])
        XCTAssertNil(entry["groupName"])
        XCTAssertNil(entry["msgType"])
        XCTAssertEqual(TestJson.string(entry, "type"), "MSG_TYPE_NORMAL")
    }

    // MARK: - ANCS link

    func testAncsActionsRideTheNotificationEnvelope() {
        for sub in [Notifications.connectAncs, Notifications.disconnectAncs,
                    Notifications.queryAncsState] {
            let action = TestJson.object(Notifications.buildAncs(sub))
            XCTAssertEqual(TestJson.string(action, "action"), "notification")
            XCTAssertEqual(TestJson.string(TestJson.nested(action, "data"),
                                           "notificationAction"), sub)
        }
    }

    func testSyncReminderConfigUsesGsonFieldNames() {
        let action = TestJson.object(Notifications.buildSyncConfig(enabled: true))
        XCTAssertEqual(TestJson.string(action, "action"), "notification")
        let data = TestJson.nested(action, "data")
        XCTAssertEqual(TestJson.string(data, "notificationAction"),
                       "SYNC_SMART_REMINDER_CONFIG")
        let cfg = TestJson.nested(data, "data")
        XCTAssertEqual(TestJson.bool(cfg, "notificationControlState"), true)
        XCTAssertEqual(TestJson.bool(cfg, "callNotificationState"), true)
        let types = cfg["reminderOpenState"] as? [String: Any] ?? [:]
        XCTAssertEqual(TestJson.bool(types, "MSG_TYPE_IM"), true)
        XCTAssertNil(cfg["createTime"])
        XCTAssertNotNil(cfg["notificationDisplayTime"])
    }

    /// REGRESSION: `notificationControlState` gates a card pushed over
    /// StarryNet, but `AncsManager` checks `iosNotificationState` before it will
    /// accept anything from iOS at all. Sending only the former is why a test
    /// card rendered while real texts never arrived.
    func testSyncConfigCarriesTheIosAncsGate() {
        let cfg = TestJson.nested(TestJson.nested(TestJson.object(
            Notifications.buildSyncConfig(enabled: true)), "data"), "data")
        XCTAssertEqual(TestJson.bool(cfg, "iosNotificationState"), true)
        XCTAssertEqual(TestJson.bool(cfg, "iosUsingTurnOffNotification"), false)
    }

    /// Turning mirroring off must close the iOS gate too — otherwise the filter
    /// says off while ANCS stays armed.
    func testDisablingMirroringAlsoClosesTheIosGate() {
        let cfg = TestJson.nested(TestJson.nested(TestJson.object(
            Notifications.buildSyncConfig(enabled: false)), "data"), "data")
        XCTAssertEqual(TestJson.bool(cfg, "notificationControlState"), false)
        XCTAssertEqual(TestJson.bool(cfg, "iosNotificationState"), false)
    }

    func testMutingOneCategoryStillSendsTheWholeFilter() {
        let action = TestJson.object(
            Notifications.buildSyncConfig(enabled: true,
                                          types: [Notifications.typeWeather: false],
                                          calls: false))
        let cfg = TestJson.nested(TestJson.nested(action, "data"), "data")
        XCTAssertEqual(TestJson.bool(cfg, "callNotificationState"), false)
        let types = cfg["reminderOpenState"] as? [String: Any] ?? [:]
        // A category the firmware never hears about is a category it cannot
        // honour, so every key ships on every push — muted or not.
        XCTAssertEqual(types.count, Notifications.allTypes.count)
        XCTAssertEqual(TestJson.bool(types, Notifications.typeWeather), false)
        XCTAssertEqual(TestJson.bool(types, Notifications.typeIm), true)
    }

    func testSmartReminderCarriesTheScreenSwitchesUnderTheirGsonNames() {
        let action = TestJson.object(
            Notifications.buildSyncConfig(enabled: true, dismissMs: 15_000,
                                          announce: true, brightenScreen: false))
        let cfg = TestJson.nested(TestJson.nested(action, "data"), "data")
        // "Announce Notifications" and "Automatically light up screen".
        XCTAssertEqual(TestJson.bool(cfg, "notificationBroadcast"), true)
        XCTAssertEqual(TestJson.bool(cfg, "notificationBrightenScreen"), false)
        XCTAssertEqual(TestJson.int(cfg, "notificationDisplayTime"), 15_000)
        XCTAssertEqual(TestJson.int(cfg, "notificationBroadcastPauseType"),
                       Notifications.defaultBroadcastPauseType)
    }

    func testBroadcastPauseTypeIsItsOwnSubActionNotTheWholeConfig() {
        let action = TestJson.object(Notifications.buildBroadcastPauseType(1))
        XCTAssertEqual(TestJson.string(action, "action"), "notification")
        let data = TestJson.nested(action, "data")
        XCTAssertEqual(TestJson.string(data, "notificationAction"),
                       "SYNC_CONFIG_BROADCAST_PAUSE_TYPE")
        let payload = TestJson.nested(data, "data")
        XCTAssertEqual(TestJson.int(payload, "notificationBroadcastPauseType"), 1)
        // Sending the whole config here would clobber the other switches.
        XCTAssertEqual(payload.count, 1)
    }

    func testStMessageEnvelopeCarriesBothPackagesAndAnId() {
        // {2:src, 3:dst, 4:json, 6:msgId} — verify the packages appear and the
        // body is embedded verbatim.
        let body = AppLayer().buildSendActionBody(#"{"action":"ping"}"#)

        // Scanned as text as well as decoded, because the router finds inbound
        // JSON by scanning bodies of exactly this shape.
        XCTAssertTrue(body.scannableText.contains("com.upuphone.star.launcher"))
        XCTAssertTrue(body.scannableText.contains(#"{"action":"ping"}"#))

        let fields = Pb.parse(body)
        XCTAssertEqual(Pb.firstString(fields, 2), AppLayer.pkgLauncher)
        XCTAssertEqual(Pb.firstString(fields, 3), AppLayer.pkgLauncher)
        XCTAssertEqual(Pb.firstString(fields, 4), #"{"action":"ping"}"#)
    }

    func testAppMsgIdAdvancesPerMessage() {
        // The glasses treat a repeated app msgId as a duplicate.
        let layer = AppLayer()
        let a = layer.buildSendActionBody("{}")
        let b = layer.buildSendActionBody("{}")
        XCTAssertNotEqual(a, b, "consecutive StMessages must not be byte-identical")
        XCTAssertEqual(layer.lastAppMsgId, 5002)
    }

    func testAppMsgIdIsPerInstanceNotStatic() {
        // A reconnect builds a fresh AppLayer; its counter must restart rather
        // than carrying over from the previous session.
        func firstId(of layer: AppLayer) -> Int {
            _ = layer.buildSendActionBody("{}")
            return layer.lastAppMsgId
        }
        XCTAssertEqual(firstId(of: AppLayer()), 5001)
        XCTAssertEqual(firstId(of: AppLayer()), 5001)
    }

    /// The ordered writer exists so payloads are reproducible and assertable;
    /// `JSONSerialization` would reorder or alphabetise these keys.
    func testOrderedWriterPreservesInsertionOrderAndOrgJsonNumberStyle() {
        var o = JsonObject()
        o.put("z", 1)
        o.put("a", "two")
        o.put("m", 3.5)
        o.put("w", 4.0)
        XCTAssertEqual(o.serialized(), #"{"z":1,"a":"two","m":3.5,"w":4}"#)
    }

    func testOrderedWriterEscapesControlCharacters() {
        var o = JsonObject()
        o.put("k", "line\nbreak\t\"quoted\"")
        XCTAssertEqual(o.serialized(), #"{"k":"line\nbreak\t\"quoted\""}"#)
    }

    func testPutIfPresentOmitsNilRatherThanWritingNull() {
        var o = JsonObject()
        o.putIfPresent("kept", 1)
        o.putIfPresent("dropped", Int?.none)
        XCTAssertEqual(o.serialized(), #"{"kept":1}"#)
    }
}
