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

    /// Scrolls/highlights the prompter to a RENDERED-LINE index.
    ///
    /// Not a paragraph index: see `TeleprompterLayout`.
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

    // MARK: - Layout reply

    /// Actions the glasses answer `open_app` with. The version depends on the
    /// firmware; the three differ only in how they encode the line table.
    private static let openResultActions: Set<String> = [
        "open_result", "open_result_v2", "open_result_v3",
    ]

    /// Parses the glasses' reply to `buildOpen` into a line table.
    ///
    /// Returns nil for anything that is not an open reply, so it is safe to
    /// call on every inbound object.
    public static func parseOpenResult(_ msg: JsonReader) -> TeleprompterLayout? {
        guard msg.optString("action") == "tici",
              let data = msg.optObject("data"),
              openResultActions.contains(data.optString("action"))
        else { return nil }
        // value is a JSON STRING, matching the outbound direction.
        guard let value = JsonReader(parsing: data.optString("value")) else { return nil }
        guard let lines = parseParagraphIndexes(value.opt("paragraphIndexes")),
              !lines.isEmpty
        else { return nil }
        return TeleprompterLayout(fileKey: value.optString("fileKey"),
                                  msgId: value.optString("msgId"),
                                  lines: lines)
    }

    /// Three encodings across the reply versions: objects (`open_result`),
    /// `[start, end]` pairs (v2), and a flat list of boundaries where each entry
    /// closes the previous line (v3).
    private static func parseParagraphIndexes(_ raw: Any?) -> [TeleprompterLayout.Line]? {
        if let objects = raw as? [[String: Any]] {
            return objects.compactMap { item in
                guard let start = (item["start"] as? NSNumber)?.intValue,
                      let end = (item["end"] as? NSNumber)?.intValue
                else { return nil }
                return TeleprompterLayout.Line(start: start, end: end)
            }
        }
        if let pairs = raw as? [[NSNumber]] {
            return pairs.compactMap { pair in
                guard pair.count >= 2 else { return nil }
                return TeleprompterLayout.Line(start: pair[0].intValue, end: pair[1].intValue)
            }
        }
        if let bounds = raw as? [NSNumber], bounds.count >= 2 {
            return (1 ..< bounds.count).map {
                TeleprompterLayout.Line(start: bounds[$0 - 1].intValue,
                                        end: bounds[$0].intValue)
            }
        }
        return nil
    }
}

/// Where every rendered line of the script begins and ends on the lens, as
/// UTF-16 offsets into the text we sent.
///
/// The LENS decides where the text wraps, so `highlight_index` counts rendered
/// lines, not the paragraphs the phone wrote. A phone that assumes one paragraph
/// = one line scrolls too far on every step — the error compounding with each
/// line that wrapped. The glasses report the real table once, in their reply to
/// `open_app`; `Teleprompter.parseOpenResult` reads it and `index(forOffset:)`
/// turns a position in the script into the index to highlight.
public struct TeleprompterLayout: Equatable, Sendable {
    public struct Line: Equatable, Sendable {
        public let start: Int
        public let end: Int

        public init(start: Int, end: Int) {
            self.start = start
            self.end = end
        }
    }

    public let fileKey: String
    public let msgId: String
    public let lines: [Line]

    public init(fileKey: String, msgId: String, lines: [Line]) {
        self.fileKey = fileKey
        self.msgId = msgId
        self.lines = lines
    }

    /// The line holding a UTF-16 offset into the script.
    ///
    /// An offset past the end clamps to the last line rather than returning nil:
    /// the tail of a script can fall outside the table (a trailing newline is in
    /// no line), and stopping the scroll there is worse than holding the end.
    public func index(forOffset offset: Int) -> Int? {
        guard !lines.isEmpty else { return nil }
        if let hit = lines.firstIndex(where: { offset >= $0.start && offset < $0.end }) {
            return hit
        }
        if offset >= lines[lines.count - 1].end { return lines.count - 1 }
        return nil
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
