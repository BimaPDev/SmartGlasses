import Foundation
import MyvuCore

/// The AI assistant, driven by the GLASSES' microphone.
///
/// The glasses record audio themselves and stream it to the phone as code:109
/// Opus packets; the phone is expected to recognise it and send captions back.
/// That is why there is no `SFSpeechRecognizer` here — the audio is not ours to
/// begin with, and it arrives as an encoded stream rather than a live input.
///
/// THE ORDER BELOW IS THE PROTOCOL. The glasses run real timers:
///   code:4            immediately, before any slow work (arms an 8s timeout)
///   code:104 type:1   on speech onset — the only thing that clears it
///   code:104 type:2   when the audio stops
///   code:101 type:0   growing partials, so the caption builds instead of flashing
///   code:101 type:1   final caption
///   code:106 (7)      VR_PROCESSION, AFTER the caption or the glasses drop it
///   code:102 → 122/1 → 122/2 → 6/1 → speech → 6/2 → 107
///
/// THREADING: conversation state lives on a private serial queue; decoding runs
/// on its own queue because audio arrives faster than realtime and must never
/// block the connection queue. Recognition, the language model and speech run as
/// async work and hop back.
public final class AiSession: MyvuClientObserver {
    /// Give up if the glasses never send anything loud enough to be speech.
    private static let noSpeechTimeout: TimeInterval = 10
    /// Hard cap on one utterance, in case the stream never goes quiet.
    private static let maxUtterance: TimeInterval = 20
    /// Spacing for the simulated growing caption (recognizers return text at once).
    private static let captionWord: TimeInterval = 0.18
    /// The same physical press arrives more than once; ignore the echo.
    private static let duplicateTrigger: TimeInterval = 1.5
    private static let maxTurns = 10

    /// `control:0` is the button RELEASE / page close.
    private static let controlRelease = 0

    private static let stopPhrases: Set<String> = [
        "stop", "goodbye", "good bye", "bye", "exit", "quit",
        "that's all", "thats all", "that is all", "never mind", "nevermind",
        "thank you", "thanks", "cancel", "end",
    ]

    /// Sends an action with explicit routing packages.
    public typealias Sender = (_ actionJson: String, _ targetPkg: String,
                               _ sourcePkg: String) -> Void

    // MARK: - Collaborators

    private let scheduler: Scheduler
    private let send: Sender
    private let client: MyvuClient?
    private let stt: SpeechToText?
    private let llm: LanguageModel?
    private let tts: TtsEngine
    private let decoder: OpusDecoding?

    /// Decoding is off the connection queue: audio arrives faster than realtime.
    private let audioQueue = Scheduler(label: "dev.myvu.ai.audio")
    /// Mic and decoder state, confined to `audioQueue`.
    private let mic = GlassesMicStream()
    private var vad = VoiceActivity()
    private var pcm = Data()
    private var decoding = false

    // MARK: - Conversation state, confined to `scheduler`

    private var active = false
    private var sessionId = ""
    private var turnCount = 0
    private var stopRequested = false
    private var lastTriggerAt = Date.distantPast
    /// True for a typed ask: no follow-up listening turn after the answer.
    private var textMode = false
    private var work: Task<Void, Never>?

    private let silenceTimer = TimerSlot()
    private let utteranceCapTimer = TimerSlot()
    private let captionTimer = TimerSlot()

    /// Whether a spoken answer is followed by another listening turn.
    ///
    /// OFF by default, and that is a protocol limitation rather than caution.
    /// The official app does not decide when to keep listening — its cloud NLU
    /// does, via an `isNextRecorded` flag carried in each answer. An SDK calling
    /// a plain LLM never receives that flag, so continuing is a guess, and a
    /// forced turn the glasses were never told to expect is what wedges them
    /// (turns 1-2 complete, turn 3 hangs). In the captured traffic the official
    /// app itself runs only 1-2 turns per conversation.
    ///
    /// Enable it to experiment if that signal ever becomes available.
    public var spokenFollowUpTurns = false

    /// The wearer's "Voice Assistant" switches, resent as the capability block
    /// at the start of every conversation. Set it from the settings screen so a
    /// conversation does not re-enable something the wearer turned off.
    public var preferences = AiProtocol.AssistantPreferences.default

    /// Drives the assistant over a `MyvuClient`.
    ///
    /// - Parameters:
    ///   - stt: speech recognizer; `isReady == false` disables the voice path.
    ///   - llm: answer generator; `isReady == false` disables answering.
    ///   - tts: speech output, or nil for the platform `TtsPlayer`.
    ///   - decoder: Opus decoder for the glasses' stream. iOS ships none, so
    ///     without one the voice path is unavailable and only `ask(_:)` works.
    public convenience init(client: MyvuClient, stt: SpeechToText?, llm: LanguageModel?,
                            tts: TtsEngine? = nil, decoder: OpusDecoding? = nil) {
        self.init(scheduler: Scheduler(label: "dev.myvu.ai"),
                  send: { [weak client] json, target, source in
                      client?.sendAction(json, targetPkg: target, sourcePkg: source)
                  },
                  client: client, stt: stt, llm: llm, tts: tts, decoder: decoder)
    }

    /// Low-level form, for tests and for hosts that do not use `MyvuClient`.
    public init(scheduler: Scheduler, send: @escaping Sender, client: MyvuClient? = nil,
                stt: SpeechToText?, llm: LanguageModel?, tts: TtsEngine? = nil,
                decoder: OpusDecoding? = nil) {
        self.scheduler = scheduler
        self.send = send
        self.client = client
        self.stt = stt
        self.llm = llm
        self.tts = tts ?? TtsPlayer()
        self.decoder = decoder
    }

    public var isActive: Bool { scheduler.sync { active } }

    // MARK: - Attach

    /// Begins listening for AI triggers and glasses-mic audio on the bound
    /// client. Only valid when constructed with a `MyvuClient`.
    public func attach() {
        guard let client else {
            SdkLog.warn("attach() needs the MyvuClient initialiser")
            return
        }
        client.addObserver(self, queue: scheduler.queue)
        client.audioFrameHandler = { [weak self] body in self?.onAudioFrame(body) }
        if decoder == nil {
            SdkLog.warn("no Opus decoder supplied -- the glasses' microphone cannot be "
                + "decoded, so only ask(_:) will work")
        }
    }

    /// Stops receiving triggers and audio; does not end an in-flight turn.
    public func detach() {
        client?.removeObserver(self)
        client?.audioFrameHandler = nil
    }

    // MARK: - Observer

    public func myvuClient(_ client: MyvuClient, didReceive event: GlassesEvent) {
        guard case .aiTrigger(let code, let payload) = event else { return }
        // control:0 is the button RELEASE / page close. It arrives moments after
        // the press and must NOT abort a turn in flight — it only marks the
        // conversation to end at the next turn boundary.
        if payload?.optInt("control", 1) == AiSession.controlRelease {
            onPageClosed()
        } else {
            onTrigger(code)
        }
    }

    // MARK: - Triggers

    /// The AI button (code:3) or wake word (code:7). Safe from any thread.
    public func onTrigger(_ triggerCode: Int) {
        scheduler.run { [weak self] in
            guard let self else { return }
            let now = Date()
            guard now.timeIntervalSince(self.lastTriggerAt) >= AiSession.duplicateTrigger else {
                SdkLog.trace("AI trigger ignored -- duplicate of the last press")
                return
            }
            self.lastTriggerAt = now

            // A genuinely new press always wins: our view of the session goes
            // stale whenever the user quits the AI page on the glasses, and
            // ignoring the press leaves the assistant dead until a reconnect.
            if self.active {
                SdkLog.log("AI: new press while a turn was open -- restarting")
                self.abandon()
            }
            self.begin(triggerCode: triggerCode)
        }
    }

    /// The glasses reported the AI page closing (`control:0`).
    public func onPageClosed() {
        scheduler.run { [weak self] in
            guard let self, self.active else { return }
            self.stopRequested = true
            SdkLog.trace("AI page closed -- will end after this turn")
        }
    }

    public func stop() {
        scheduler.run { [weak self] in self?.finish() }
    }

    public func shutdown() {
        stop()
        scheduler.run { [weak self] in self?.tts.shutdown() }
    }

    // MARK: - Audio

    /// Offers a code:109 relay body.
    ///
    /// Called on the connection queue at a high rate, so it does nothing but
    /// hand the bytes to the audio queue.
    public func onAudioFrame(_ relayBody: Data) {
        audioQueue.post { [weak self] in self?.consumeFrame(relayBody) }
    }

    /// Runs on the audio queue, which owns the mic buffer and the decoder.
    private func consumeFrame(_ relayBody: Data) {
        guard mic.offer(relayBody), mic.isCapturing, decoding else { return }
        guard let decoder else { return }

        // A payload can carry more than one Opus frame; decode every one.
        for frame in mic.justAdded {
            guard decoding else { return }
            guard let chunk = try? decoder.decode(frame: frame), !chunk.isEmpty else {
                continue
            }
            pcm.append(chunk)

            let now = Date().timeIntervalSinceReferenceDate
            switch vad.consume(energy: VoiceActivity.energy(chunk), now: now) {
            case .speechStarted:
                scheduler.run { [weak self] in self?.onSpeechStarted() }
            case .speechEnded:
                decoding = false
                scheduler.run { [weak self] in self?.endUtterance() }
            case .speech, .quiet:
                break
            }
        }
    }

    private func onSpeechStarted() {
        guard active else { return }
        // Speech arrived, so the no-speech timer must go: left armed, it chops
        // any utterance still running at the 10s mark. The 20s cap still bounds
        // the turn.
        silenceTimer.cancel()
        // The only message that clears the glasses' 8s timeout.
        emit(AiProtocol.vadStart(sessionId: sessionId))
        SdkLog.log("AI: speech detected")
    }

    // MARK: - Turns

    private func begin(triggerCode: Int) {
        active = true
        stopRequested = false
        textMode = false
        turnCount = 0
        // Configure the glasses' assistant (continuous dialogue, ChatGPT card)
        // before the first frame — the config is what the card scene needs.
        emit(AiProtocol.assistantConfig(preferences))
        tts.prepare()

        guard decoder != nil else {
            SdkLog.warn("AI: no Opus decoder, so the glasses' microphone cannot be read")
            finish()
            return
        }
        startListening(why: triggerCode == AiProtocol.codeStartVrReq ? "button" : "wake word")
    }

    private func startListening(why: String) {
        sessionId = UUID().uuidString
        audioQueue.run { [weak self] in
            guard let self else { return }
            self.decoder?.reset()
            self.mic.start()
            self.vad = VoiceActivity()
            self.pcm = Data()
            // Capture opens only once the decoder is live: frames offered while
            // it was still starting were queued and then dropped, losing the
            // start of the utterance and pushing the calibration window into the
            // speech that followed.
            self.decoding = true
        }

        // Must be first: this ack is what stops the glasses showing "service
        // error", and it arms their 8s listening timeout.
        emit(AiProtocol.sessionAck(sessionId: sessionId))
        SdkLog.log("AI listening (\(why))")

        // If nothing loud enough to be speech ever arrives, give up rather than
        // listen forever — the glasses stream silence indefinitely.
        silenceTimer.schedule(on: scheduler, after: AiSession.noSpeechTimeout) { [weak self] in
            self?.endUtterance()
        }
        utteranceCapTimer.schedule(on: scheduler, after: AiSession.maxUtterance) { [weak self] in
            SdkLog.log("AI: utterance hit the length cap")
            self?.endUtterance()
        }
    }

    /// The audio went quiet: recognise what the decoder has produced.
    private func endUtterance() {
        guard active else { return }
        silenceTimer.cancel()
        utteranceCapTimer.cancel()

        audioQueue.run { [weak self] in
            guard let self else { return }
            guard self.mic.isCapturing else { return }
            self.mic.stop()
            self.decoding = false

            let captured = self.pcm
            let heard = self.vad.speechStarted
            let diagnostics = String(format: "%d frames in (%d unreadable, %d malformed), "
                + "sizes %@, %d bytes decoded, peak energy %.0f vs threshold %.0f",
                self.mic.frameCount, self.mic.rejectedCount, self.mic.malformedCount,
                self.mic.observedSizes.sorted().description, captured.count,
                self.vad.peakEnergy, self.vad.threshold)

            self.scheduler.run { [weak self] in
                self?.onUtteranceCaptured(pcm: captured, heardSpeech: heard,
                                          diagnostics: diagnostics)
            }
        }
    }

    private func onUtteranceCaptured(pcm: Data, heardSpeech: Bool, diagnostics: String) {
        guard active else { return }
        guard heardSpeech else {
            // Say WHY: whether audio arrived, whether it decoded, and how loud
            // it got. Those numbers separate "mic silent" from "decode broken"
            // from "threshold too high".
            SdkLog.warn("AI: no speech heard -- \(diagnostics)")
            finish()
            return
        }
        emit(AiProtocol.vadEnd(sessionId: sessionId))

        guard !pcm.isEmpty, let decoder else {
            SdkLog.log("AI: no audio decoded -- ending")
            finish()
            return
        }
        SdkLog.log("captured \(pcm.count / 2) samples "
            + "(\(pcm.count / 2 * 1000 / max(1, decoder.sampleRate))ms @ "
            + "\(decoder.sampleRate)Hz)")
        transcribe(pcm: pcm, sampleRate: decoder.sampleRate, channels: decoder.channels)
    }

    private func transcribe(pcm: Data, sampleRate: Int, channels: Int) {
        guard let stt, stt.isReady else {
            SdkLog.warn("no speech-to-text engine ready -- speech cannot be transcribed")
            finish()
            return
        }
        work = Task { [weak self] in
            guard let self else { return }
            do {
                let text = try await stt.transcribe(pcm: pcm, sampleRate: sampleRate,
                                                    channels: channels)
                guard !Task.isCancelled else { return }
                self.scheduler.run { self.onTranscript(text) }
            } catch {
                guard !Task.isCancelled else { return }
                SdkLog.error("could not transcribe the glasses audio", error)
                self.scheduler.run { self.finish() }
            }
        }
    }

    private func onTranscript(_ text: String?) {
        guard active else { return }
        let trimmed = text?.trimmingCharacters(in: .whitespacesAndNewlines) ?? ""
        guard !trimmed.isEmpty else {
            SdkLog.log("AI: nothing understood -- ending the conversation")
            finish()
            return
        }
        if AiSession.isStopPhrase(trimmed) {
            SdkLog.log("AI: stop phrase heard (\"\(trimmed)\")")
            finish()
            return
        }
        SdkLog.log("AI heard: \(trimmed)")
        sendGrowingCaption(trimmed, wordIndex: 0)
    }

    /// Builds the caption up word by word.
    ///
    /// Recognizers return the whole sentence at once, but the glasses expect a
    /// series of growing partials — sending it as one partial makes the caption
    /// flash and vanish.
    private func sendGrowingCaption(_ text: String, wordIndex: Int) {
        guard active else { return }
        let words = text.split(whereSeparator: { $0.isWhitespace })

        guard wordIndex < words.count else {
            emit(AiProtocol.asrResult(sessionId: sessionId, text: text, isFinal: true))
            // VR_PROCESSION only AFTER the final caption, or the glasses drop
            // the caption frames entirely.
            emit(AiProtocol.vrState(AiProtocol.vrProcession))
            // Open the LLM scene EVERY turn: the capture shows the official app
            // sends a fresh 102 per sessionId, follow-ups included.
            emit(AiProtocol.chatQuery(sessionId: sessionId, query: text))
            ask(question: text)
            return
        }

        let partial = words[0 ... wordIndex].joined(separator: " ")
        emit(AiProtocol.asrResult(sessionId: sessionId, text: partial, isFinal: false))

        captionTimer.schedule(on: scheduler, after: AiSession.captionWord) { [weak self] in
            self?.sendGrowingCaption(text, wordIndex: wordIndex + 1)
        }
    }

    private func ask(question: String) {
        guard let llm, llm.isReady else {
            SdkLog.warn("no language model ready -- cannot answer")
            finish()
            return
        }
        work = Task { [weak self] in
            guard let self else { return }
            do {
                let answer = try await llm.reply(to: question)
                guard !Task.isCancelled else { return }
                await self.deliver(answer)
            } catch {
                guard !Task.isCancelled else { return }
                SdkLog.error("language model request failed", error)
                self.scheduler.run { self.finish() }
            }
        }
    }

    private func deliver(_ answer: String) async {
        guard isActive else { return }
        SdkLog.log("AI answer: \(answer)")

        scheduler.run { [weak self] in
            guard let self else { return }
            // Commit the answer into the LLM card scene opened by chatQuery:
            // status 1 then the final status 2.
            self.emit(AiProtocol.chatAnswer(sessionId: self.sessionId, answer: answer,
                                            baseStatus: 1))
            self.emit(AiProtocol.chatAnswer(sessionId: self.sessionId, answer: answer,
                                            baseStatus: 2))
            // playState:1 = TTS started. A capture of the official app shows it
            // uses ONLY code 6 for play state here — it does NOT send the 106 VR
            // TTS states (3/4), and those extra frames wedge the glasses on a
            // follow-up.
            self.emit(AiProtocol.playState(AiProtocol.playStateStart))
        }

        // Gated on real completion, never a timer: the glasses expect
        // playState:2 when the speech has actually finished.
        let spoken = await tts.speak(answer)

        scheduler.run { [weak self] in
            guard let self else { return }
            self.emit(AiProtocol.playState(AiProtocol.playStateEnd))
            self.emit(AiProtocol.endTurn())
            if !spoken { SdkLog.warn("the answer could not be spoken aloud") }
            // A typed question is always one-shot; spoken follow-ups are opt-in.
            if self.textMode || !self.spokenFollowUpTurns {
                self.finish()
            } else {
                self.nextTurn()
            }
        }
    }

    /// Answers a TYPED question, bypassing the microphone entirely.
    ///
    /// Reuses the whole answer path — caption, card, speech, end — so the
    /// glasses show and speak the reply just as they would for a voice query,
    /// but there is no follow-up listening turn afterwards. This is also the
    /// only path available without an Opus decoder.
    public func ask(_ question: String) {
        let trimmed = question.trimmingCharacters(in: .whitespacesAndNewlines)
        guard !trimmed.isEmpty else { return }

        scheduler.run { [weak self] in
            guard let self else { return }
            if self.active { self.abandon() }
            self.active = true
            self.stopRequested = false
            self.textMode = true
            self.turnCount = 0
            self.emit(AiProtocol.assistantConfig(self.preferences))
            self.tts.prepare()
            self.sessionId = UUID().uuidString

            // Bring the glasses' AI page up and show the question as the
            // caption, open the LLM card scene, then hand off to the shared
            // answer path.
            self.emit(AiProtocol.sessionAck(sessionId: self.sessionId))
            self.emit(AiProtocol.asrResult(sessionId: self.sessionId, text: trimmed,
                                           isFinal: true))
            self.emit(AiProtocol.vrState(AiProtocol.vrProcession))
            self.emit(AiProtocol.chatQuery(sessionId: self.sessionId, query: trimmed))
            SdkLog.log("AI (typed): \(trimmed)")
            self.ask(question: trimmed)
        }
    }

    /// Starts a follow-up turn rather than closing the session.
    ///
    /// VR_CLOSE quits the AI page outright, so sending it after every answer
    /// makes the page vanish as soon as the reply finishes. It belongs only at
    /// the end of the whole conversation.
    private func nextTurn() {
        guard active else { return }
        if stopRequested {
            SdkLog.log("AI: page was closed -- ending the conversation")
            finish()
            return
        }
        turnCount += 1
        guard turnCount < AiSession.maxTurns else {
            SdkLog.log("AI: conversation limit reached")
            finish()
            return
        }
        // startListening mints a fresh sessionId and re-sends the code-4 ack,
        // which is exactly how the official app opens each follow-up (a new
        // sessionId per turn). Nothing else belongs here — in particular NOT
        // VR_MULTI_WAKEUP, which the official app never sends.
        startListening(why: "follow-up \(turnCount + 1)")
    }

    // MARK: - End

    /// Ends the conversation and returns the glasses to idle.
    private func finish() {
        guard active else { return }
        teardown()
        emit(AiProtocol.vrState(AiProtocol.vrClose))
        SdkLog.trace("AI conversation ended")
    }

    /// Drops local state without messaging the glasses (they have moved on).
    private func abandon() {
        teardown()
    }

    private func teardown() {
        active = false
        stopRequested = false
        work?.cancel()
        work = nil
        silenceTimer.cancel()
        utteranceCapTimer.cancel()
        captionTimer.cancel()
        audioQueue.run { [weak self] in
            guard let self else { return }
            self.mic.stop()
            self.decoding = false
            self.decoder?.reset()
        }
    }

    static func isStopPhrase(_ text: String) -> Bool {
        let cleaned = text.lowercased()
            .filter { !".!?,".contains($0) }
            .trimmingCharacters(in: .whitespaces)
        return stopPhrases.contains(cleaned)
    }

    /// All AI messages are sourced from and addressed to the assistant package.
    private func emit(_ actionJson: String) {
        send(actionJson, AiProtocol.pkg, AiProtocol.pkg)
    }
}
