import Foundation

/// Teleprompter ("tici").
///
/// Opening it takes TWO messages ~400ms apart — an `open_app` scene launch, then
/// the content — both sent with `sourcePkg = com.upuphone.ar.tici` rather than
/// the launcher. The gap is load-bearing: the content message is dropped if the
/// app has not finished coming up.
///
/// Note the nesting: several fields here are JSON encoded as a STRING inside the
/// outer JSON (`ext` and `value`), not as nested objects. Sending them as
/// objects silently fails to bind on the device.
public enum Teleprompter {
    public static let openToContentDelay: TimeInterval = 0.4
    public static let defaultTitle = "Prompter"

    public static func fileKey(for title: String) -> String {
        "1/" + title
    }

    /// Message 1: launch the teleprompter app with the document's metadata.
    public static func buildOpen(text: String, title: String = defaultTitle,
                                 msgId: String = UUID().uuidString) -> String {
        var ext = JsonObject()
        ext.put("blockNotification", true)
        ext.put("currentPage", 0)
        ext.put("fileKey", fileKey(for: title))
        ext.put("msgId", msgId)
        ext.put("nextTotalParagraphSize", 0)
        ext.put("paragraphIndex", 0)
        ext.put("prevTotalParagraphSize", 0)
        ext.put("screenLocation", 0)
        ext.put("sourceByteSize", Data(text.utf8).count)
        ext.put("sourceTextOffset", 0)
        ext.put("ticiMode", 0)
        ext.put("ticiSpeed", 10000)
        ext.put("totalPage", 1)
        ext.put("totalPart", 1)
        // Matches Java's String.length(), i.e. UTF-16 code units.
        ext.put("totalTextLength", text.utf16.count)
        ext.put("version", 2)

        var data = JsonObject()
        data.put("launchMode", "scene")
        data.put("action", "open_app")
        data.put("pkg", AppLayer.pkgTici)
        data.put("app_name", AppLayer.pkgTici)
        // ext is a JSON STRING, not an object.
        data.put("ext", ext.serialized())

        var out = JsonObject()
        out.put("action", "app")
        out.put("data", data)
        return out.serialized()
    }

    /// Message 2: the actual script text.
    public static func buildContent(text: String, title: String = defaultTitle,
                                    msgId: String = UUID().uuidString) -> String {
        var content = JsonObject()
        content.put("currentPage", 0)
        content.put("fileKey", fileKey(for: title))
        content.put("msgId", msgId)
        content.put("part", 0)
        content.put("sourceText", text)

        var data = JsonObject()
        data.put("action", "send_content")
        // value is a JSON STRING, not an object.
        data.put("value", content.serialized())

        var out = JsonObject()
        out.put("action", "tici")
        out.put("data", data)
        return out.serialized()
    }

    /// Scrolls/highlights the prompter to a paragraph index.
    public static func buildHighlight(index: Int, title: String = defaultTitle) -> String {
        var value = JsonObject()
        value.put("index", index)
        value.put("fileKey", fileKey(for: title))

        var data = JsonObject()
        data.put("action", "highlight_index")
        data.put("value", value.serialized())

        var out = JsonObject()
        out.put("action", "tici")
        out.put("data", data)
        return out.serialized()
    }
}

/// Builds "phonepad" (trackpad) messages — the phone acting as a remote touchpad
/// for the glasses' launcher, letting you navigate the lens UI by touch.
///
/// Every event is JSON wrapped as `{"action":"phonepad","data":{…}}` and sent to
/// the launcher. Taps are click/doubleClick/longPress; a swipe is `gestureMode`
/// whose `actionType` is the direction code.
public enum Trackpad {
    // Swipe directions are Android KeyEvent codes — the values the glasses
    // expect. They are part of the wire protocol, not a platform detail, so they
    // stay as-is on iOS.
    public static let swipeUp = 19
    public static let swipeDown = 20
    public static let swipeLeft = 21
    public static let swipeRight = 22

    /// Signals the glasses to enter phone-pad mode. Sent when the pad opens.
    public static func start(nowMs: Int64 = Session.nowMillis()) -> String {
        simple("start", nowMs)
    }

    /// Leaves phone-pad mode. Sent when the pad closes.
    public static func stop(nowMs: Int64 = Session.nowMillis()) -> String {
        simple("stop", nowMs)
    }

    public static func click(nowMs: Int64 = Session.nowMillis()) -> String {
        simple("click", nowMs)
    }

    public static func doubleClick(nowMs: Int64 = Session.nowMillis()) -> String {
        simple("doubleClick", nowMs)
    }

    public static func longPress(nowMs: Int64 = Session.nowMillis()) -> String {
        simple("longPress", nowMs)
    }

    public static func swipe(direction: Int, startX: Double, startY: Double,
                             endX: Double, endY: Double, speedX: Double, speedY: Double,
                             nowMs: Int64 = Session.nowMillis()) -> String {
        var data = JsonObject()
        data.put("action", "gestureMode")
        data.put("actionType", direction)
        data.put("startX", startX)
        data.put("startY", startY)
        data.put("endX", endX)
        data.put("endY", endY)
        data.put("speedX", speedX)
        data.put("speedY", speedY)
        data.put("time", nowMs)
        return wrap(data)
    }

    private static func simple(_ action: String, _ nowMs: Int64) -> String {
        var data = JsonObject()
        data.put("action", action)
        data.put("time", nowMs)
        return wrap(data)
    }

    private static func wrap(_ data: JsonObject) -> String {
        var out = JsonObject()
        out.put("action", "phonepad")
        out.put("data", data)
        return out.serialized()
    }
}
