import XCTest
@testable import MyvuAI
@testable import MyvuCore

/// Turns each Opus "frame" into PCM whose amplitude is the frame's first byte,
/// so a test can script loudness without any audio.
private final class FakeDecoder: OpusDecoding {
    let sampleRate = 16000
    let channels = 1
    private(set) var resets = 0

    func decode(frame: Data) throws -> Data {
        let amplitude = Int16(frame.first ?? 0) * 40
        var pcm = Data()
        // 320 samples is 20ms at 16 kHz, the glasses' frame length.
        for _ in 0 ..< 320 {
            pcm.append(UInt8(truncatingIfNeeded: amplitude))
            pcm.append(UInt8(truncatingIfNeeded: amplitude >> 8))
        }
        return pcm
    }

    func reset() { resets += 1 }
}

private final class FakeStt: SpeechToText, @unchecked Sendable {
    var isReady = true
    var result: String? = "how is the weather"
    var error: Error?
    private(set) var calls = 0

    func transcribe(pcm: Data, sampleRate: Int, channels: Int) async throws -> String? {
        calls += 1
        if let error { throw error }
        return result
    }
}

private final class FakeLlm: LanguageModel, @unchecked Sendable {
    var isReady = true
    var answer = "It is sunny."
    var error: Error?
    private(set) var questions: [String] = []

    func reply(to question: String) async throws -> String {
        questions.append(question)
        if let error { throw error }
        return answer
    }
}

private final class FakeTts: TtsEngine, @unchecked Sendable {
    var succeeds = true
    private(set) var spoken: [String] = []
    private(set) var prepared = 0

    func prepare() { prepared += 1 }

    func speak(_ text: String) async -> Bool {
        spoken.append(text)
        return succeeds
    }

    func shutdown() {}
}

/// Records the code of every AI message the session sends.
private final class SentAi: @unchecked Sendable {
    private let lock = NSLock()
    private var items: [JsonReader] = []

    func record(_ json: String) {
        guard let r = JsonReader(parsing: json) else { return }
        lock.withLock { items.append(r) }
    }

    var all: [JsonReader] { lock.withLock { items } }
    var codes: [Int] { all.map { $0.optInt("code", -1) } }

    func first(code: Int) -> JsonReader? { all.first { $0.optInt("code", -1) == code } }
    func payloads(code: Int) -> [JsonReader] {
        all.filter { $0.optInt("code", -1) == code }.compactMap { $0.optObject("payload") }
    }
}

final class AiSessionTests: XCTestCase {
    private var scheduler: Scheduler!
    private var sent: SentAi!
    private var stt: FakeStt!
    private var llm: FakeLlm!
    private var tts: FakeTts!
    private var decoder: FakeDecoder!

    override func setUp() {
        super.setUp()
        scheduler = Scheduler(label: "test.ai")
        sent = SentAi()
        stt = FakeStt()
        llm = FakeLlm()
        tts = FakeTts()
        decoder = FakeDecoder()
    }

    private func makeSession() -> AiSession {
        AiSession(scheduler: scheduler,
                  send: { [sent] json, _, _ in sent!.record(json) },
                  stt: stt, llm: llm, tts: tts, decoder: decoder)
    }

    /// A code:109 relay body carrying one length-prefixed frame whose loudness
    /// is `level`.
    private func audio(level: UInt8) -> Data {
        let frame = Data(repeating: level, count: 40)
        var packed = Data([UInt8(frame.count >> 8), UInt8(frame.count & 0xFF)])
        packed.append(frame)
        return Pb.bytes(5, packed)
    }

    /// Speaks: quiet chunks to calibrate, then loud ones, then silence.
    ///
    /// The silence is delivered as real elapsed time because the session's VAD
    /// clock is wall time; the hold is under a second, so this stays quick.
    private func speak(to session: AiSession, quiet: Int = 14, loud: Int = 10) {
        for _ in 0 ..< quiet { session.onAudioFrame(audio(level: 0)) }
        for _ in 0 ..< loud { session.onAudioFrame(audio(level: 60)) }
        Thread.sleep(forTimeInterval: VoiceActivity.silenceHold + 0.1)
        for _ in 0 ..< 3 { session.onAudioFrame(audio(level: 0)) }
    }

    private struct Timeout: Error {}

    private func wait(until condition: @escaping () -> Bool, what: String,
                      file: StaticString = #filePath, line: UInt = #line) throws {
        let deadline = Date().addingTimeInterval(3)
        while !condition(), Date() < deadline {
            RunLoop.current.run(until: Date().addingTimeInterval(0.01))
        }
        guard condition() else {
            XCTFail("timed out waiting for \(what); codes so far: \(sent.codes)",
                    file: file, line: line)
            throw Timeout()
        }
    }

    private func waitForClose(file: StaticString = #filePath, line: UInt = #line) throws {
        try wait(until: { [sent] in
            sent!.all.contains { $0.optInt("code", -1) == AiProtocol.codeSyncVrState
                && $0.optInt("payload", -1) == AiProtocol.vrClose
            }
        }, what: "the conversation to close", file: file, line: line)
    }

    // MARK: - Ordering

    /// The glasses arm an 8s timeout on the button press, and only the session
    /// ack stops them showing "service error".
    func testTheSessionAckIsSentBeforeAnythingSlow() throws {
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}

        // Config first (the card scene needs it), then the ack. Nothing else
        // yet: no audio has arrived.
        XCTAssertEqual(sent.codes, [AiProtocol.codeAssistantConfig, AiProtocol.codeStartVrRes])
        XCTAssertTrue(session.isActive)
    }

    func testAFullVoiceTurnFollowsTheProtocolOrder() throws {
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        speak(to: session)
        try waitForClose()

        let codes = sent.codes
        // The order that matters, in the order the glasses require it.
        let expected = [
            AiProtocol.codeAssistantConfig,
            AiProtocol.codeStartVrRes,
            AiProtocol.codeVadEvent, // type 1, speech onset
            AiProtocol.codeVadEvent, // type 2, speech over
        ]
        XCTAssertEqual(Array(codes.prefix(4)), expected)

        // Captions, then VR_PROCESSION, then the LLM scene, then the answer.
        let caption = try XCTUnwrap(codes.lastIndex(of: AiProtocol.codeAsrTrans))
        let procession = try XCTUnwrap(codes.firstIndex(of: AiProtocol.codeSyncVrState))
        let scene = try XCTUnwrap(codes.firstIndex(of: AiProtocol.codeVui))
        let answer = try XCTUnwrap(codes.firstIndex(of: AiProtocol.codeChatGptResponse))
        XCTAssertLessThan(caption, procession, "VR_PROCESSION after the final caption")
        XCTAssertLessThan(procession, scene)
        XCTAssertLessThan(scene, answer)
    }

    /// REGRESSION: VR_PROCESSION before the final caption makes the glasses drop
    /// the caption frames entirely.
    func testVrProcessionNeverPrecedesTheFinalCaption() throws {
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        speak(to: session)
        try waitForClose()

        let finalCaption = sent.all.firstIndex {
            $0.optInt("code", -1) == AiProtocol.codeAsrTrans
                && $0.optObject("payload")?.optInt("type", 0) == 1
        }
        let procession = sent.all.firstIndex {
            $0.optInt("code", -1) == AiProtocol.codeSyncVrState
                && $0.optInt("payload", -1) == AiProtocol.vrProcession
        }
        XCTAssertNotNil(procession)
        XCTAssertLessThan(try XCTUnwrap(finalCaption), try XCTUnwrap(procession))
    }

    func testTheCaptionGrowsWordByWord() throws {
        stt.result = "how is the weather"
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        speak(to: session)
        try waitForClose()

        let captions = sent.payloads(code: AiProtocol.codeAsrTrans)
        let partials = captions.filter { $0.optInt("type", 0) == 0 }.map { $0.optString("text") }
        // Sending the whole sentence as one partial makes the caption flash and
        // vanish, so each frame must extend the last.
        XCTAssertEqual(partials, ["how", "how is", "how is the", "how is the weather"])
        XCTAssertEqual(captions.last?.optInt("type", 0), 1)
        XCTAssertEqual(captions.last?.optString("text"), "how is the weather")
    }

    func testTheAnswerIsCommittedThenSpokenThenClosed() throws {
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        speak(to: session)
        try waitForClose()

        XCTAssertEqual(llm.questions, ["how is the weather"])
        XCTAssertEqual(tts.spoken, ["It is sunny."])

        let statuses = sent.payloads(code: AiProtocol.codeChatGptResponse)
            .map { $0.optInt("base_status", -1) }
        XCTAssertEqual(statuses, [1, 2])

        let playStates = sent.payloads(code: AiProtocol.codeTtsPlayRes)
            .map { $0.optInt("playState", -1) }
        XCTAssertEqual(playStates, [AiProtocol.playStateStart, AiProtocol.playStateEnd])
        XCTAssertEqual(sent.codes.suffix(2),
                       [AiProtocol.codeHotWordManager, AiProtocol.codeSyncVrState])
    }

    /// The glasses never told us to keep listening — that signal only comes from
    /// the official cloud NLU — so one trigger is one turn.
    func testASpokenAnswerDoesNotStartAnotherTurnByDefault() throws {
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        speak(to: session)
        try waitForClose()

        XCTAssertEqual(sent.codes.filter { $0 == AiProtocol.codeStartVrRes }.count, 1)
        XCTAssertFalse(session.isActive)
    }

    // MARK: - Failure paths

    func testSilenceEndsTheConversationWithoutCallingTheEngines() throws {
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        // Quiet throughout: the room, never a voice.
        for _ in 0 ..< 40 { session.onAudioFrame(audio(level: 0)) }
        scheduler.sync {}

        XCTAssertEqual(stt.calls, 0)
        XCTAssertFalse(sent.codes.contains(AiProtocol.codeVadEvent),
                       "no VAD frames without speech")
    }

    func testNothingUnderstoodEndsTheConversation() throws {
        stt.result = "   "
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        speak(to: session)
        try waitForClose()

        XCTAssertTrue(llm.questions.isEmpty)
        XCTAssertFalse(session.isActive)
    }

    func testAStopPhraseEndsTheConversationWithoutAsking() throws {
        stt.result = "Goodbye."
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        speak(to: session)
        try waitForClose()

        XCTAssertTrue(llm.questions.isEmpty, "a stop phrase is not a question")
    }

    func testStopPhrasesIgnorePunctuationAndCase() {
        XCTAssertTrue(AiSession.isStopPhrase("Stop."))
        XCTAssertTrue(AiSession.isStopPhrase("never mind"))
        XCTAssertTrue(AiSession.isStopPhrase("THANKS!"))
        XCTAssertFalse(AiSession.isStopPhrase("stop the music"))
    }

    func testALanguageModelFailureClosesCleanly() throws {
        llm.error = MyvuError.notFound("no credit")
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        speak(to: session)
        try waitForClose()

        XCTAssertTrue(tts.spoken.isEmpty)
        XCTAssertFalse(session.isActive)
    }

    func testAnUnreadyEngineDoesNotStrandTheGlasses() throws {
        // Left open, the assistant page sits waiting until the user quits it.
        stt.isReady = false
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        speak(to: session)
        try waitForClose()
    }

    // MARK: - Triggers

    func testTheSamePressArrivingTwiceIsIgnored() {
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}

        XCTAssertEqual(sent.codes.filter { $0 == AiProtocol.codeStartVrRes }.count, 1)
    }

    /// The page-close notification arrives moments after the press and must not
    /// abort the turn it belongs to.
    func testAPageCloseDoesNotAbortTheTurnInFlight() throws {
        let session = makeSession()
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}
        session.onPageClosed()
        scheduler.sync {}

        XCTAssertTrue(session.isActive)
        speak(to: session)
        try waitForClose()
        XCTAssertEqual(tts.spoken, ["It is sunny."], "the answer still ran to completion")
    }

    // MARK: - Typed questions

    func testATypedQuestionUsesTheWholeAnswerPathWithoutTheMicrophone() throws {
        let session = makeSession()
        session.ask("Will it rain?")
        try wait(until: { [tts] in !tts!.spoken.isEmpty }, what: "the answer to be spoken")
        try waitForClose()

        XCTAssertEqual(llm.questions, ["Will it rain?"])
        // The question is shown as a final caption straight away — there is no
        // recognition to build up.
        let captions = sent.payloads(code: AiProtocol.codeAsrTrans)
        XCTAssertEqual(captions.count, 1)
        XCTAssertEqual(captions.first?.optInt("type", -1), 1)
        XCTAssertEqual(captions.first?.optString("text"), "Will it rain?")
        XCTAssertNotNil(sent.first(code: AiProtocol.codeVui))
    }

    func testAnEmptyTypedQuestionDoesNothing() {
        let session = makeSession()
        session.ask("   ")
        scheduler.sync {}
        XCTAssertTrue(sent.all.isEmpty)
    }

    /// Without a decoder the glasses' microphone cannot be read at all, so the
    /// session must fail fast rather than listen to silence for 10 seconds.
    func testWithoutADecoderTheVoicePathEndsImmediately() throws {
        let session = AiSession(scheduler: scheduler,
                                send: { [sent] json, _, _ in sent!.record(json) },
                                stt: stt, llm: llm, tts: tts, decoder: nil)
        session.onTrigger(AiProtocol.codeStartVrReq)
        scheduler.sync {}

        XCTAssertFalse(session.isActive)
        XCTAssertFalse(sent.codes.contains(AiProtocol.codeStartVrRes))
    }

    func testTypedQuestionsStillWorkWithoutADecoder() throws {
        let session = AiSession(scheduler: scheduler,
                                send: { [sent] json, _, _ in sent!.record(json) },
                                stt: stt, llm: llm, tts: tts, decoder: nil)
        session.ask("Will it rain?")
        try wait(until: { [tts] in !tts!.spoken.isEmpty }, what: "the answer to be spoken")
    }
}
