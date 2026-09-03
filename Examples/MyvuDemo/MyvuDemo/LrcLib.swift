import Foundation

/// Timed lyric line from an LRC payload (LRCLIB / similar).
struct LyricLine: Equatable, Sendable {
    let timeMs: Int
    let text: String
}

enum LrcLib {
    private static let base = URL(string: "https://lrclib.net/api")!

    struct TrackQuery: Equatable, Sendable {
        let title: String
        let artist: String
        let album: String?
        /// Whole seconds — LRCLIB matches better with duration.
        let durationSeconds: Int?
    }

    /// Fetches synced lyrics; falls back to plain text split into fake lines.
    static func lyrics(for track: TrackQuery) async throws -> [LyricLine] {
        if let synced = try await fetchSynced(track) { return synced }
        if let blob = try await searchPlain(track), !blob.isEmpty {
            let parsed = parseLRC(blob)
            if !parsed.isEmpty { return parsed }
            return spread(blob, durationSeconds: track.durationSeconds)
        }
        throw URLError(.fileDoesNotExist)
    }

    /// Spreads untimed plain lyrics across the track's real duration rather than
    /// a flat 4s/line. Still approximate (songs aren't evenly timed), but it at
    /// least keeps the lyrics running for the whole song instead of racing ahead
    /// or trailing off. Only synced LRC lyrics are truly line-accurate.
    private static func spread(_ text: String, durationSeconds: Int?) -> [LyricLine] {
        let raw = text.components(separatedBy: .newlines)
            .map { $0.trimmingCharacters(in: .whitespacesAndNewlines) }
            .filter { !$0.isEmpty }
        guard !raw.isEmpty else { return [] }
        let durMs = (durationSeconds ?? 0) * 1_000
        guard durMs > 0, raw.count > 1 else {
            return raw.enumerated().map { LyricLine(timeMs: $0.offset * 4_000, text: $0.element) }
        }
        // Reserve a short lead-in; distribute the rest evenly across the song.
        let leadInMs = 2_000
        let span = max(0, durMs - leadInMs)
        return raw.enumerated().map { i, line in
            LyricLine(timeMs: leadInMs + Int(Double(i) / Double(raw.count) * Double(span)),
                      text: line)
        }
    }

    /// Index of the line playing at a playback position.
    static func index(atMs ms: Int, in lines: [LyricLine]) -> Int? {
        guard !lines.isEmpty else { return nil }
        var idx = 0
        for (i, line) in lines.enumerated() {
            if line.timeMs <= ms { idx = i } else { break }
        }
        return idx
    }

    /// Current (and optional next) line for a playback position.
    static func line(atMs ms: Int, in lines: [LyricLine]) -> (current: LyricLine, next: LyricLine?)? {
        guard let idx = index(atMs: ms, in: lines) else { return nil }
        return (lines[idx], idx + 1 < lines.count ? lines[idx + 1] : nil)
    }

    // MARK: - Network

    private static func fetchSynced(_ track: TrackQuery) async throws -> [LyricLine]? {
        var components = URLComponents(url: base.appendingPathComponent("get"),
                                       resolvingAgainstBaseURL: false)!
        var items = [
            URLQueryItem(name: "artist_name", value: track.artist),
            URLQueryItem(name: "track_name", value: track.title),
        ]
        if let album = track.album, !album.isEmpty {
            items.append(URLQueryItem(name: "album_name", value: album))
        }
        if let duration = track.durationSeconds {
            items.append(URLQueryItem(name: "duration", value: String(duration)))
        }
        components.queryItems = items

        guard let url = components.url else { return nil }
        var request = URLRequest(url: url)
        request.setValue("MyvuDemo/1.0 (lyrics)", forHTTPHeaderField: "User-Agent")

        let (data, response) = try await URLSession.shared.data(for: request)
        guard let http = response as? HTTPURLResponse else { return nil }
        if http.statusCode == 404 { return nil }
        guard http.statusCode == 200 else { return nil }
        guard let json = try JSONSerialization.jsonObject(with: data) as? [String: Any] else {
            return nil
        }
        if let synced = json["syncedLyrics"] as? String, !synced.isEmpty {
            let lines = parseLRC(synced)
            if !lines.isEmpty { return lines }
        }
        if let plain = json["plainLyrics"] as? String, !plain.isEmpty {
            return spread(plain, durationSeconds: track.durationSeconds)
        }
        return nil
    }

    private static func searchPlain(_ track: TrackQuery) async throws -> String? {
        var components = URLComponents(url: base.appendingPathComponent("search"),
                                       resolvingAgainstBaseURL: false)!
        components.queryItems = [
            URLQueryItem(name: "track_name", value: track.title),
            URLQueryItem(name: "artist_name", value: track.artist),
        ]
        guard let url = components.url else { return nil }
        var request = URLRequest(url: url)
        request.setValue("MyvuDemo/1.0 (lyrics)", forHTTPHeaderField: "User-Agent")
        let (data, response) = try await URLSession.shared.data(for: request)
        guard let http = response as? HTTPURLResponse, http.statusCode == 200 else { return nil }
        guard let arr = try JSONSerialization.jsonObject(with: data) as? [[String: Any]],
              !arr.isEmpty else { return nil }

        // Prefer a hit with synced lyrics and the closest duration.
        let target = track.durationSeconds ?? 0
        let ranked = arr.sorted { a, b in
            let aSync = (a["syncedLyrics"] as? String)?.isEmpty == false
            let bSync = (b["syncedLyrics"] as? String)?.isEmpty == false
            if aSync != bSync { return aSync && !bSync }
            let aDur = a["duration"] as? Int ?? 0
            let bDur = b["duration"] as? Int ?? 0
            return abs(aDur - target) < abs(bDur - target)
        }
        guard let best = ranked.first else { return nil }
        if let id = best["id"] as? Int {
            return try await fetchById(id)
        }
        if let synced = best["syncedLyrics"] as? String, !synced.isEmpty { return synced }
        return best["plainLyrics"] as? String
    }

    private static func fetchById(_ id: Int) async throws -> String? {
        let url = base.appendingPathComponent("get").appendingPathComponent(String(id))
        var request = URLRequest(url: url)
        request.setValue("MyvuDemo/1.0 (lyrics)", forHTTPHeaderField: "User-Agent")
        let (data, response) = try await URLSession.shared.data(for: request)
        guard let http = response as? HTTPURLResponse, http.statusCode == 200 else { return nil }
        guard let json = try JSONSerialization.jsonObject(with: data) as? [String: Any] else {
            return nil
        }
        if let synced = json["syncedLyrics"] as? String, !synced.isEmpty { return synced }
        return json["plainLyrics"] as? String
    }

    /// Parses `[mm:ss.xx]text` / `[mm:ss]text` lines.
    static func parseLRC(_ lrc: String) -> [LyricLine] {
        let pattern = try! NSRegularExpression(
            pattern: #"\[(\d{1,2}):(\d{2})(?:\.(\d{1,3}))?\]\s*(.*)"#)
        var lines: [LyricLine] = []
        for raw in lrc.components(separatedBy: .newlines) {
            let range = NSRange(raw.startIndex..., in: raw)
            guard let match = pattern.firstMatch(in: raw, range: range) else { continue }
            func group(_ i: Int) -> String {
                guard let r = Range(match.range(at: i), in: raw) else { return "" }
                return String(raw[r])
            }
            let minutes = Int(group(1)) ?? 0
            let seconds = Int(group(2)) ?? 0
            let frac = group(3)
            let fracMs: Int
            if frac.isEmpty {
                fracMs = 0
            } else if frac.count == 1 {
                fracMs = (Int(frac) ?? 0) * 100
            } else if frac.count == 2 {
                fracMs = (Int(frac) ?? 0) * 10
            } else {
                fracMs = Int(frac.prefix(3)) ?? 0
            }
            let text = group(4).trimmingCharacters(in: .whitespacesAndNewlines)
            guard !text.isEmpty else { continue }
            lines.append(LyricLine(timeMs: (minutes * 60 + seconds) * 1_000 + fracMs,
                                   text: text))
        }
        return lines.sorted { $0.timeMs < $1.timeMs }
    }
}
