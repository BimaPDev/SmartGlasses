import Foundation

/// Supplies the init-burst capture. Override via `MyvuConfig.initBurstSource` to
/// replay a capture of your own.
public protocol InitBurstSource {
    func loadText() throws -> String
}

/// Reads the capture bundled with the SDK.
public struct BundledInitBurstSource: InitBurstSource {
    public init() {}

    public func loadText() throws -> String {
        guard let url = Bundle.module.url(forResource: "captured_init", withExtension: "txt") else {
            throw MyvuError.initBurstUnavailable("captured_init.txt missing from the SDK bundle")
        }
        return try String(contentsOf: url, encoding: .utf8)
    }
}

/// The captured init burst.
///
/// WHY THIS EXISTS: the glasses' relay dispatcher does not fully wake up until
/// it has seen this opening run of app messages. Without the burst, later
/// messages are silently dropped — no ACK, no visible effect — even though the
/// channel is connected and the ability handshake succeeded.
///
/// Two transformations are applied to the capture:
///  1. `msgId`s are renumbered into a fresh 1..N sequence. The glasses track the
///     last received sequence number (0 on a fresh connect) and discard the
///     capture's stale high ids as out-of-order.
///  2. Messages replaying stale state are dropped — `SyncOffSetTime` carries an
///     old wall clock (it would set the glasses' clock backwards) and
///     `sync_clone_data` an old settings snapshot; both fight the live defaults
///     applied right after connect.
public enum InitBurst {
    /// One replayable message: the relay body plus the routing fields to reuse.
    public struct Entry {
        public let frame: String
        public let msgBody: Data
        public let needCallback: Int
        public let category: Int
        public let appUniteCode: Int

        public var bodyText: String { msgBody.scannableText }
    }

    /// Parses the capture and returns only the messages that should be replayed:
    /// data frames whose body is not stale state.
    public static func load(_ text: String) -> [Entry] {
        var out: [Entry] = []
        for rawLine in text.split(separator: "\n", omittingEmptySubsequences: false) {
            let line = rawLine.trimmingCharacters(in: .whitespacesAndNewlines)
            if line.isEmpty || line.hasPrefix("#") { continue }

            let parts = line.split(separator: "\t", omittingEmptySubsequences: false)
            if parts.count < 3 { continue }
            let frame = String(parts[0])
            let content = Hex.decode(String(parts[2]))

            // Skip non-data frames (the capture contains one ACK); we ACK the
            // glasses' live messages dynamically instead of replaying that one.
            guard let m = Relay.parseFrame(content), m.msgType == MsgType.send else { continue }

            let bodyText = m.msgBody.scannableText
            if bodyText.contains("SyncOffSetTime") || bodyText.contains("sync_clone_data") {
                continue
            }
            out.append(Entry(frame: frame, msgBody: m.msgBody, needCallback: m.needCallback,
                             category: m.category, appUniteCode: m.appUniteCode))
        }
        return out
    }
}
