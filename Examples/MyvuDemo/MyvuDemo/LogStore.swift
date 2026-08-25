import Foundation
import MyvuCore

/// A bounded in-memory log, shown on the Log tab.
///
/// The SDK is chatty at trace level and runs on its own queue, so lines are
/// buffered here and published to SwiftUI on the main actor in batches rather
/// than one `objectWillChange` per line.
final class LogStore: ObservableObject, MyvuLogger {
    static let shared = LogStore()

    struct Line: Identifiable {
        let id = UUID()
        let at = Date()
        let level: LogLevel
        let text: String
    }

    /// Enough to cover a whole connect-and-pair sequence at trace level,
    /// including the per-packet wire log (every BLE write and notification is
    /// one line there, so a handshake alone runs to a few hundred).
    private static let capacity = 5000
    /// Coalescing window for UI updates.
    private static let flushInterval: TimeInterval = 0.2

    @Published private(set) var lines: [Line] = []

    private var pending: [Line] = []
    private let lock = NSLock()
    private var flushScheduled = false

    private init() {}

    func log(level: LogLevel, message: String, error: Error?) {
        let text = error.map { "\(message): \($0.localizedDescription)" } ?? message
        let line = Line(level: level, text: text)
        // Also to stdout: with the app launched over `devicectl ... --console`
        // this puts the whole trace on a development machine, where a hex dump
        // is readable, instead of only on the phone's screen.
        print("[\(level)] \(text)")

        lock.lock()
        pending.append(line)
        let needsFlush = !flushScheduled
        flushScheduled = true
        lock.unlock()

        guard needsFlush else { return }
        DispatchQueue.main.asyncAfter(deadline: .now() + LogStore.flushInterval) { [weak self] in
            self?.flush()
        }
    }

    func clear() {
        lock.lock()
        pending.removeAll()
        lock.unlock()
        lines.removeAll()
    }

    /// The whole buffer as one document, for the share sheet.
    ///
    /// Timestamped to the millisecond: packet ORDER is already implied by the
    /// line order, but the gaps between them are what identify a timeout or a
    /// heartbeat interval when a capture is read back later.
    var text: String {
        let stamp = DateFormatter()
        stamp.dateFormat = "HH:mm:ss.SSS"
        return lines
            .map { "\(stamp.string(from: $0.at)) [\($0.level)] \($0.text)" }
            .joined(separator: "\n")
    }

    private func flush() {
        lock.lock()
        let batch = pending
        pending.removeAll()
        flushScheduled = false
        lock.unlock()

        guard !batch.isEmpty else { return }
        lines.append(contentsOf: batch)
        if lines.count > LogStore.capacity {
            lines.removeFirst(lines.count - LogStore.capacity)
        }
    }
}
