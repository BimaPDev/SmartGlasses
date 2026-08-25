import XCTest
@testable import MyvuAI
@testable import MyvuCore

/// The AI protocol's shapes are easy to get subtly wrong and the failures are
/// opaque — "service error" on the lens, or a session that dies mid-answer.
/// These pin the details that carry meaning.
final class AiProtocolTests: XCTestCase {
    private func parse(_ json: String) -> JsonReader {
        guard let r = JsonReader(parsing: json) else {
            XCTFail("not parseable: \(json)")
            return JsonReader(raw: [:])
        }
        return r
    }

    func testSessionAckCarriesSuccessAndSessionId() {
        let m = parse(AiProtocol.sessionAck(sessionId: "sess-1"))
        XCTAssertEqual(m.optInt("code", -1), 4)

        let p = m.optObject("payload")
        XCTAssertEqual(p?.optBool("success", false), true)
        XCTAssertEqual(p?.optBool("hasNetwork", false), true)
        XCTAssertEqual(p?.optString("sessionId"), "sess-1")
    }

    func testVadStartAndEndDifferOnlyByType() {
        let start = parse(AiProtocol.vadStart(sessionId: "s"))
        let end = parse(AiProtocol.vadEnd(sessionId: "s"))
        XCTAssertEqual(start.optInt("code", -1), 104)
        XCTAssertEqual(start.optObject("payload")?.optInt("type", -1), 1)
        XCTAssertEqual(end.optObject("payload")?.optInt("type", -1), 2)
    }

    func testAsrPartialAndFinalUseTypeZeroAndOne() {
        let partial = parse(AiProtocol.asrResult(sessionId: "s", text: "how is", isFinal: false))
        let final = parse(AiProtocol.asrResult(sessionId: "s", text: "how is the weather",
                                               isFinal: true))

        XCTAssertEqual(partial.optInt("code", -1), 101)
        XCTAssertEqual(partial.optObject("payload")?.optInt("type", -1), 0)
        XCTAssertEqual(final.optObject("payload")?.optInt("type", -1), 1)
        XCTAssertEqual(final.optObject("payload")?.optString("text"), "how is the weather")
        XCTAssertEqual(final.optObject("payload")?.optBool("isOfflineResult", true), false)
    }

    /// code:106's payload is a BARE INT, unlike every other message here, which
    /// wraps an object. Sending `{"state":7}` instead is silently ignored.
    func testVrStatePayloadIsABareInt() {
        let m = parse(AiProtocol.vrState(AiProtocol.vrProcession))
        XCTAssertEqual(m.optInt("code", -1), 106)
        XCTAssertEqual(m.optInt("payload", -1), 7)
        XCTAssertNil(m.optObject("payload"))
    }

    func testChatQueryOpensTheLlmSceneWithTheQuestion() {
        let message = parse(AiProtocol.chatQuery(sessionId: "sess-1", query: "Will it rain?"))
        XCTAssertEqual(message.optInt("code", -1), 102)

        let payload = message.optObject("payload")
        XCTAssertEqual(payload?.optString("sessionId"), "sess-1")
        XCTAssertEqual(payload?.optObject("header")?.optString("namespace"), "llm")
        XCTAssertEqual(payload?.optObject("payload")?.optString("query"), "Will it rain?")
        // Only the cloud NLU can set this; guessing it wedges the session.
        XCTAssertEqual(payload?.optObject("payload")?.optBool("isNextRecorded", true), false)
    }

    func testChatAnswerCarriesStreamingAndFinalStatus() {
        let streaming = parse(AiProtocol.chatAnswer(sessionId: "sess-1", answer: "It is sunny.",
                                                    baseStatus: 1))
        let complete = parse(AiProtocol.chatAnswer(sessionId: "sess-1", answer: "It is sunny.",
                                                   baseStatus: 2))

        XCTAssertEqual(streaming.optInt("code", -1), 122)
        XCTAssertEqual(streaming.optObject("payload")?.optString("answer"), "It is sunny.")
        XCTAssertEqual(streaming.optObject("payload")?.optString("sessionId"), "sess-1")
        XCTAssertEqual(streaming.optObject("payload")?.optInt("base_status", -1), 1)
        XCTAssertEqual(complete.optObject("payload")?.optInt("base_status", -1), 2)
    }

    /// The card scene needs these flags configured or a follow-up answer crashes
    /// the glasses' ChatGPT scene.
    func testAssistantConfigEnablesTheCardAndContinuousDialogue() {
        let message = parse(AiProtocol.assistantConfig())
        XCTAssertEqual(message.optInt("code", -1), 2)

        let p = message.optObject("payload")
        XCTAssertEqual(p?.optBool("isChatGptCardDisplayEnable", false), true)
        XCTAssertEqual(p?.optBool("isContinuousDialogueEnable", false), true)
        XCTAssertEqual(p?.optBool("isAsrResultScreenEnable", false), true)
    }

    /// The id here is the EMPTY STRING, not the session id.
    func testPlayStateUsesAnEmptyId() {
        let p = parse(AiProtocol.playState(AiProtocol.playStateStart)).optObject("payload")
        XCTAssertEqual(p?.optString("id", "missing"), "")
        XCTAssertEqual(p?.optInt("playState", -1), 1)

        XCTAssertEqual(parse(AiProtocol.playState(AiProtocol.playStateEnd))
            .optObject("payload")?.optInt("playState", -1), 2)
    }

    func testEndTurnUsesControlFour() {
        let m = parse(AiProtocol.endTurn())
        XCTAssertEqual(m.optInt("code", -1), 107)
        XCTAssertEqual(m.optObject("payload")?.optInt("control", -1), 4)
        XCTAssertEqual(m.optObject("payload")?.optBool("isOffline", true), false)
    }

    func testConstantsMatchTheDeviceEnums() {
        // From the decompiled app's CmdCode / VrState.
        XCTAssertEqual(AiProtocol.codeStartVrReq, 3)
        XCTAssertEqual(AiProtocol.codeVoiceWakeupVrReq, 7)
        XCTAssertEqual(AiProtocol.vrClose, 0)
        XCTAssertEqual(AiProtocol.vrProcession, 7)
        // The LLM card scene.
        XCTAssertEqual(AiProtocol.codeAssistantConfig, 2)
        XCTAssertEqual(AiProtocol.codeVui, 102)
        XCTAssertEqual(AiProtocol.codeChatGptResponse, 122)
        // The listening timeout we are racing against.
        XCTAssertEqual(AiProtocol.listeningTimeout, 8)
    }

    func testEveryMessageIsAddressedToTheAssistantPackage() {
        XCTAssertEqual(AiProtocol.pkg, "com.upuphone.ai.assistant")
    }
}
