import Foundation

/// Notification cards on the lens — the iOS-usable surface when glasses apps
/// (`tici`, navigation) refuse to launch without a classic-BT audio link.
///
/// Re-showing the same numeric id updates the card in place on the glasses
/// (same wire format as a fresh SHOW); dismiss clears it.
public enum LensCards {
    /// Stable id for the live script / guidance card so Next does not stack
    /// a new card every tap.
    public static let scriptNumericId = 7_010_001
    public static let guideNumericId = 7_010_002

    public static func buildShow(title: String, body: String, numericId: Int,
                                 nowMs: Int64 = Session.nowMillis()) -> String {
        Notifications.buildShow(entries: [
            Notifications.entry(packageName: AppLayer.pkgSelf,
                                numericId: numericId,
                                title: title,
                                content: body,
                                appName: AppLayer.defaultAppName,
                                postTime: nowMs,
                                canReply: false),
        ])
    }

    public static func buildDismiss(numericId: Int) -> String {
        Notifications.buildDismiss(ids: [
            Notifications.notificationId(packageName: AppLayer.pkgSelf,
                                         numericId: numericId),
        ])
    }
}

/// Drives a multi-paragraph script on the lens via `LensCards` — a substitute
/// for the teleprompter app when `open_app` is gated.
///
/// Split on blank lines (paragraphs); single newlines stay inside one card.
public final class LensScript {
    public private(set) var paragraphs: [String] = []
    public private(set) var index = 0
    public private(set) var title: String

    private let send: (String) -> Void

    public init(title: String = "Script", send: @escaping (String) -> Void) {
        self.title = title
        self.send = send
    }

    public convenience init(client: MyvuClient, title: String = "Script") {
        self.init(title: title) { [weak client] json in
            client?.sendAction(json)
        }
    }

    public var count: Int { paragraphs.count }
    public var isEmpty: Bool { paragraphs.isEmpty }

    /// Loads text, shows paragraph 0 (or clears if empty).
    public func load(_ text: String, title: String? = nil) {
        if let title { self.title = title }
        paragraphs = Self.splitParagraphs(text)
        index = 0
        showCurrent()
    }

    public func next() {
        guard !paragraphs.isEmpty, index + 1 < paragraphs.count else { return }
        index += 1
        showCurrent()
    }

    public func previous() {
        guard !paragraphs.isEmpty, index > 0 else { return }
        index -= 1
        showCurrent()
    }

    public func clear() {
        paragraphs = []
        index = 0
        send(LensCards.buildDismiss(numericId: LensCards.scriptNumericId))
    }

    public func showCurrent() {
        guard !paragraphs.isEmpty else {
            clear()
            return
        }
        let progress = "\(index + 1)/\(paragraphs.count)"
        let heading = title.isEmpty ? progress : "\(title) · \(progress)"
        send(LensCards.buildShow(title: heading,
                                 body: paragraphs[index],
                                 numericId: LensCards.scriptNumericId))
    }

    /// Blank-line separated paragraphs; trims empties.
    public static func splitParagraphs(_ text: String) -> [String] {
        let normalized = text
            .replacingOccurrences(of: "\r\n", with: "\n")
            .replacingOccurrences(of: "\r", with: "\n")
        return normalized
            .components(separatedBy: "\n\n")
            .map { $0.trimmingCharacters(in: .whitespacesAndNewlines) }
            .filter { !$0.isEmpty }
    }
}
