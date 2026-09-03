import Foundation
import MyvuCore

/// Polls Spotify for the current track, loads LRCLIB lyrics, and follows the
/// timed line on the glasses.
///
/// Two surfaces, picked by `useTeleprompter`: the native prompter app — the
/// whole song laid out, one line per paragraph, scrolled by `highlight_index`
/// as it plays — or a lens notification card carrying just the current line.
///
/// `highlight_index` counts lines as the LENS wrapped them, not the paragraphs
/// we wrote, so the glasses' `open_result` reply (a `TeleprompterLayout`) is
/// what turns "lyric line 12" into the index to send. Without that mapping a
/// wrapped line costs an extra step and the prompter runs away from the song.
///
/// Sync model (Spotify Web API is coarse / laggy):
/// - Poll playback every ~1.5s and snap `progressMs` from the response, dated
///   at request start (plus half RTT) so network delay does not pile on.
/// - Tick the lens every 100ms by interpolating from that anchor while playing.
/// - Apply a small positive offset — Spotify's `progress_ms` typically trails
///   the ear by ~0.5–1.5s.
@MainActor
final class SpotifyLyricsSession: ObservableObject {
    static let cardId = LensCards.lyricsNumericId
    private static let offsetKey = "lyricsSyncOffsetMs"
    private static let prompterKey = "lyricsUseTeleprompter"
    /// How far ahead of the true playback position we show the lyrics, in ms.
    /// Depends on the audio path (Bluetooth audio adds latency), so it is
    /// user-calibrated and persisted. Positive = lyrics appear earlier; raise it
    /// if the lyrics lag behind what you hear.
    @Published var syncOffsetMs: Int {
        didSet { UserDefaults.standard.set(syncOffsetMs, forKey: Self.offsetKey) }
    }
    /// Show the lyrics in the prompter app rather than on a notification card.
    /// The prompter is the nicer read — it keeps the surrounding lines on screen
    /// — but its `open_app` needs the classic-BT audio link up, so the card
    /// stays as the fallback when that gate is closed.
    @Published var useTeleprompter: Bool {
        didSet {
            guard useTeleprompter != oldValue else { return }
            UserDefaults.standard.set(useTeleprompter, forKey: Self.prompterKey)
            switchSurface()
        }
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
    private var lastPushedIndex: Int?
    /// The track whose lyrics are currently loaded into the prompter.
    private var promptedKey = ""
    private var promptTitle = Teleprompter.defaultTitle
    /// Earliest moment a highlight can land — see `pushPrompter`.
    private var promptReadyAt = Date.distantPast
    /// UTF-16 offset of each lyric line within the script we sent.
    private var lineOffsets: [Int] = []
    /// How the lens wrapped that script. Nil until the glasses answer.
    private var layout: TeleprompterLayout?
    /// Set once we have said the layout never arrived, so the warning is not
    /// re-stamped over every later status line.
    private var warnedNoLayout = false
    private var progressMs = 0
    private var progressAt = Date()
    private var isPlaying = false
    private var durationMs = 0

    init(auth: SpotifyAuth, client: MyvuClient) {
        self.auth = auth
        self.client = client
        self.syncOffsetMs = UserDefaults.standard.object(forKey: Self.offsetKey) as? Int ?? 0
        self.useTeleprompter =
            UserDefaults.standard.object(forKey: Self.prompterKey) as? Bool ?? true
    }

    func start() {
        guard !enabled else { return }
        enabled = true
        statusMessage = "Listening for Spotify…"
        resetSurface()
        client.inboundRouter.onTeleprompterLayout = { [weak self] layout in
            Task { @MainActor in self?.applyLayout(layout) }
        }
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
        lines = []
        cachedKey = ""
        client.inboundRouter.onTeleprompterLayout = nil
        resetSurface()
        statusMessage = "Lyrics off"
    }

    // MARK: - Surface

    /// Forgets what is on the lens so the next tick pushes afresh, and clears
    /// the card. The prompter app has no "close" message — it is left showing
    /// the last song until the wearer navigates away.
    private func resetSurface() {
        lastPushed = ""
        lastPushedIndex = nil
        promptedKey = ""
        promptReadyAt = .distantPast
        lineOffsets = []
        layout = nil
        warnedNoLayout = false
        client.sendAction(LensCards.buildDismiss(numericId: Self.cardId))
    }

    private func switchSurface() {
        resetSurface()
        guard enabled else { return }
        statusMessage = useTeleprompter ? "Lyrics in the prompter" : "Lyrics on a card"
        updateDisplay()
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
                        if !self.useTeleprompter {
                            self.pushCard(title: self.trackLabel, body: "(no lyrics found)")
                        }
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
        guard let index = LrcLib.index(atMs: elapsed, in: lines) else { return }
        // Only the line currently playing — no lookahead.
        let body = lines[index].text
        currentLine = body
        if useTeleprompter {
            pushPrompter(lyricIndex: index)
        } else if body != lastPushed {
            lastPushed = body
            pushCard(title: trackLabel, body: body)
        }
    }

    /// Loads the song into the prompter once, then just moves the highlight.
    private func pushPrompter(lyricIndex: Int) {
        if promptedKey != cachedKey {
            promptedKey = cachedKey
            promptTitle = Self.prompterTitle(for: trackLabel)
            lastPushedIndex = nil
            layout = nil
            warnedNoLayout = false
            // `openTeleprompter` is two messages ~400ms apart, and a highlight
            // that arrives before the text has landed is dropped — so hold the
            // highlights back until the content is in. The 100ms display loop
            // retries until then.
            promptReadyAt = Date().addingTimeInterval(Teleprompter.openToContentDelay + 0.6)
            let script = Self.buildScript(lines)
            lineOffsets = script.offsets
            client.openTeleprompter(script.text, title: promptTitle)
        }
        guard Date() >= promptReadyAt else { return }
        if layout == nil, !warnedNoLayout, Date() > promptReadyAt.addingTimeInterval(3) {
            warnedNoLayout = true
            statusMessage = "Prompter did not report its layout — scrolling may drift"
        }
        let target = lensIndex(forLyric: lyricIndex)
        guard target != lastPushedIndex else { return }
        lastPushedIndex = target
        client.teleprompterHighlight(index: target, title: promptTitle)
    }

    /// The lens line to highlight for a lyric line.
    ///
    /// Falls back to the lyric's own number until the glasses report their
    /// layout — the old behaviour, which drifts ahead as soon as a lyric wraps,
    /// but better than freezing the prompter on line one.
    private func lensIndex(forLyric index: Int) -> Int {
        guard let layout, index < lineOffsets.count,
              let mapped = layout.index(forOffset: lineOffsets[index])
        else { return index }
        return mapped
    }

    /// The script as the prompter gets it, plus where each lyric line starts in
    /// it. Blank lines split paragraphs on the device, hence the double newline.
    private static func buildScript(_ lines: [LyricLine]) -> (text: String, offsets: [Int]) {
        var text = ""
        var offsets: [Int] = []
        for (i, line) in lines.enumerated() {
            if i > 0 { text += "\n\n" }
            offsets.append(text.utf16.count)
            text += line.text
        }
        return (text, offsets)
    }

    private func applyLayout(_ incoming: TeleprompterLayout) {
        guard useTeleprompter, enabled,
              incoming.fileKey == Teleprompter.fileKey(for: promptTitle)
        else { return }
        layout = incoming
        warnedNoLayout = false
        // The index we last sent was computed without the layout, so re-send.
        lastPushedIndex = nil
        statusMessage = "Prompter ready (\(incoming.lines.count) lens lines)"
        updateDisplay()
    }

    /// The prompter keys a document by its title (`fileKey` is "1/" + title), so
    /// a per-track title keeps a new song out of the last one's document.
    private static func prompterTitle(for label: String) -> String {
        let cleaned = label.components(separatedBy: .newlines).joined(separator: " ")
            .replacingOccurrences(of: "/", with: "-")
            .trimmingCharacters(in: .whitespaces)
        return cleaned.isEmpty ? "Lyrics" : String(cleaned.prefix(40))
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
