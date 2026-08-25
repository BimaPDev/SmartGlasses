import Foundation
import MyvuCore

/// Polls Spotify for the current track, loads LRCLIB lyrics, and pushes the
/// timed line onto the glasses as a lens notification card.
///
/// Sync model (Spotify Web API is coarse / laggy):
/// - Poll playback every ~1.5s and snap `progressMs` from the response, dated
///   at request start (plus half RTT) so network delay does not pile on.
/// - Tick the lens every 100ms by interpolating from that anchor while playing.
/// - Apply a small positive offset — Spotify's `progress_ms` typically trails
///   the ear by ~0.5–1.5s.
@MainActor
final class SpotifyLyricsSession: ObservableObject {
    static let cardId = 7_010_003
    private static let offsetKey = "lyricsSyncOffsetMs"
    /// How far ahead of the true playback position we show the lyrics, in ms.
    /// Depends on the audio path (Bluetooth audio adds latency), so it is
    /// user-calibrated and persisted. Positive = lyrics appear earlier; raise it
    /// if the lyrics lag behind what you hear.
    @Published var syncOffsetMs: Int {
        didSet { UserDefaults.standard.set(syncOffsetMs, forKey: Self.offsetKey) }
    }
    private static let pollIntervalNs: UInt64 = 1_500_000_000
    private static let displayIntervalNs: UInt64 = 100_000_000

    @Published private(set) var enabled = false
    @Published private(set) var trackLabel = ""
    @Published private(set) var currentLine = ""
    @Published var statusMessage = ""

    private let auth: SpotifyAuth
    private let client: MyvuClient
    private var pollLoop: Task<Void, Never>?
    private var displayLoop: Task<Void, Never>?
    private var lyricsTask: Task<Void, Never>?

    private var cachedKey = ""
    private var lines: [LyricLine] = []
    private var lastPushed = ""
    private var progressMs = 0
    private var progressAt = Date()
    private var isPlaying = false
    private var durationMs = 0

    init(auth: SpotifyAuth, client: MyvuClient) {
        self.auth = auth
        self.client = client
        self.syncOffsetMs = UserDefaults.standard.object(forKey: Self.offsetKey) as? Int ?? 0
    }

    func start() {
        guard !enabled else { return }
        enabled = true
        statusMessage = "Listening for Spotify…"
        pollLoop?.cancel()
        displayLoop?.cancel()

        pollLoop = Task { [weak self] in
            while let self, !Task.isCancelled, self.enabled {
                await self.pollSpotify()
                try? await Task.sleep(nanoseconds: Self.pollIntervalNs)
            }
        }
        displayLoop = Task { [weak self] in
            while let self, !Task.isCancelled, self.enabled {
                self.updateDisplay()
                try? await Task.sleep(nanoseconds: Self.displayIntervalNs)
            }
        }
    }

    func stop() {
        enabled = false
        pollLoop?.cancel()
        displayLoop?.cancel()
        lyricsTask?.cancel()
        pollLoop = nil
        displayLoop = nil
        lyricsTask = nil
        trackLabel = ""
        currentLine = ""
        lastPushed = ""
        lines = []
        cachedKey = ""
        client.sendAction(LensCards.buildDismiss(numericId: Self.cardId))
        statusMessage = "Lyrics off"
    }

    // MARK: - Spotify poll

    private func pollSpotify() async {
        do {
            let token = try await auth.validAccessToken()
            let started = Date()
            guard let playing = try await Self.fetchCurrentlyPlaying(token: token) else {
                statusMessage = "Nothing playing on Spotify"
                trackLabel = ""
                currentLine = ""
                isPlaying = false
                return
            }
            let rttMs = Int(Date().timeIntervalSince(started) * 1_000)
            // progress_ms is from roughly request time; advance by half RTT so we
            // are not systematically late by the whole round trip.
            let sampled = playing.progressMs + max(0, rttMs / 2)

            // Re-anchor ONLY on a seek/skip or a resume from pause. Between
            // those, the local wall-clock interpolation is accurate (audio plays
            // at 1x realtime), whereas Spotify's progress_ms systematically lags
            // — so blending toward it every poll is what drags the lyrics late.
            let delta = sampled - trueProgressMs()
            if !isPlaying || abs(delta) > 1_500 {
                progressMs = sampled
                progressAt = Date()
            }

            isPlaying = playing.isPlaying
            durationMs = playing.durationMs
            trackLabel = "\(playing.title) — \(playing.artist)"

            let key = "\(playing.title)|\(playing.artist)|\(playing.durationMs)"
            if key != cachedKey {
                cachedKey = key
                lines = []
                lastPushed = ""
                statusMessage = "Fetching lyrics…"
                let query = LrcLib.TrackQuery(
                    title: playing.title,
                    // LRCLIB matches primary artist better than "A, B, C".
                    artist: playing.primaryArtist,
                    album: playing.album,
                    durationSeconds: Int((Double(playing.durationMs) / 1_000.0).rounded())
                )
                lyricsTask?.cancel()
                lyricsTask = Task { [weak self] in
                    guard let self else { return }
                    do {
                        let fetched = try await LrcLib.lyrics(for: query)
                        guard !Task.isCancelled, self.cachedKey == key else { return }
                        self.lines = fetched
                        self.lastPushed = ""
                        self.statusMessage = fetched.contains(where: { $0.timeMs > 0 })
                            ? "Lyrics synced"
                            : "Untimed lyrics (approx.)"
                        self.updateDisplay()
                    } catch {
                        guard !Task.isCancelled, self.cachedKey == key else { return }
                        self.lines = []
                        self.statusMessage = "No lyrics for this track"
                        self.pushCard(title: self.trackLabel, body: "(no lyrics found)")
                    }
                }
            }
        } catch {
            statusMessage = error.localizedDescription
        }
    }

    // MARK: - Display clock

    /// The true playback position (no display offset) — used to compare against
    /// Spotify's poll.
    private func trueProgressMs() -> Int {
        var ms = progressMs
        if isPlaying {
            ms += Int(Date().timeIntervalSince(progressAt) * 1_000)
        }
        if durationMs > 0 { ms = min(ms, durationMs) }
        return max(0, ms)
    }

    /// Where on the lens we point the lyric clock: true position + the
    /// user-calibrated offset.
    private func displayProgressMs() -> Int {
        max(0, trueProgressMs() + syncOffsetMs)
    }

    private func updateDisplay() {
        guard !lines.isEmpty else { return }
        let elapsed = displayProgressMs()
        guard let hit = LrcLib.line(atMs: elapsed, in: lines) else { return }
        // Only the line currently playing — no lookahead.
        let body = hit.current.text
        currentLine = body
        if body != lastPushed {
            lastPushed = body
            pushCard(title: trackLabel, body: body)
        }
    }

    private func pushCard(title: String, body: String) {
        client.sendAction(LensCards.buildShow(title: title,
                                              body: body,
                                              numericId: Self.cardId))
    }

    // MARK: - Spotify Web API

    struct PlayingTrack: Equatable {
        let title: String
        let artist: String
        let primaryArtist: String
        let album: String?
        let durationMs: Int
        let progressMs: Int
        let isPlaying: Bool
    }

    static func fetchCurrentlyPlaying(token: String) async throws -> PlayingTrack? {
        var request = URLRequest(
            url: URL(string: "https://api.spotify.com/v1/me/player/currently-playing")!)
        request.setValue("Bearer \(token)", forHTTPHeaderField: "Authorization")
        request.cachePolicy = .reloadIgnoringLocalCacheData
        let (data, response) = try await URLSession.shared.data(for: request)
        guard let http = response as? HTTPURLResponse else { return nil }
        if http.statusCode == 204 { return nil }
        guard http.statusCode == 200 else {
            let body = String(data: data, encoding: .utf8) ?? ""
            throw NSError(domain: "Spotify", code: http.statusCode,
                          userInfo: [NSLocalizedDescriptionKey: "Spotify \(http.statusCode): \(body)"])
        }
        guard let json = try JSONSerialization.jsonObject(with: data) as? [String: Any],
              let item = json["item"] as? [String: Any],
              let title = item["name"] as? String
        else { return nil }

        let artists = (item["artists"] as? [[String: Any]]) ?? []
        let names = artists.compactMap { $0["name"] as? String }
        let primary = names.first ?? ""
        let artist = names.joined(separator: ", ")
        let album = (item["album"] as? [String: Any])?["name"] as? String
        let duration = item["duration_ms"] as? Int ?? 0
        let progress = json["progress_ms"] as? Int ?? 0
        let playing = json["is_playing"] as? Bool ?? false
        return PlayingTrack(title: title, artist: artist, primaryArtist: primary,
                            album: album, durationMs: duration, progressMs: progress,
                            isPlaying: playing)
    }
}
