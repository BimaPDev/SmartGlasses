import Foundation
import MyvuCore

/// The AI-assistant wire protocol (`com.xjsd.ai.assistant.protocol`).
///
/// Every message is `{"code":N,"payload":…}`, sourced from AND addressed to
/// `com.upuphone.ai.assistant`.
///
/// THE TIMING RULES ARE LOAD-BEARING. The glasses run their own state machine
/// with real timeouts, and violating the order below makes the session die
/// mid-answer or show "service error":
///
///  1. `startVrRes` (4) must be sent IMMEDIATELY on the button press, before any
///     slow work. It arms an 8s listening timeout on the glasses.
///  2. Only VAD start (104 type:1) clears that timeout — so it must be fired
///     from speech onset, not after speech recognition returns.
///  3. `vrProcession` (106 payload 7) must come AFTER the final caption
///     (101 type:1), never before, or the glasses drop the caption frames.
///  4. Open the LLM scene with 102, commit the answer with 122 status 1 then 2,
///     and bracket phone-side speech with 6 playState:1 then playState:2.
public enum AiProtocol {
    public static let pkg = AppLayer.pkgAi

    // MARK: - Codes (the app's CmdCode)

    /// phone → glasses: capability flags.
    public static let codeAssistantConfig = 2
    /// glasses → phone: button.
    public static let codeStartVrReq = 3
    /// phone → glasses: session ack.
    public static let codeStartVrRes = 4
    /// phone → glasses: play state.
    public static let codeTtsPlayRes = 6
    /// glasses → phone: wake word.
    public static let codeVoiceWakeupVrReq = 7
    /// phone → glasses: caption.
    public static let codeAsrTrans = 101
    /// phone → glasses: open the LLM scene.
    public static let codeVui = 102
    /// phone → glasses: speech bounds.
    public static let codeVadEvent = 104
    /// phone → glasses: VrState.
    public static let codeSyncVrState = 106
    /// phone → glasses: end of turn.
    public static let codeHotWordManager = 107
    /// glasses → phone: mic audio.
    public static let codeRecordDataTrans = 109
    /// phone → glasses: answer text.
    public static let codeChatGptResponse = 122

    // MARK: - VrState values

    public static let vrClose = 0
    /// Turn boundary: sent between answers, just before listening again.
    public static let vrMultiWakeup = 1
    public static let vrTtsPlayStart = 3
    public static let vrTtsPlayEnd = 4
    public static let vrProcession = 7
    public static let vrListeningTimeout = 8

    // MARK: - TTS play states

    public static let playStateStart = 1
    public static let playStateEnd = 2

    /// The glasses' own listening timeout, armed by code:4.
    public static let listeningTimeout: TimeInterval = 8

    /// Tells the glasses which assistant capabilities are on — crucially
    /// `isContinuousDialogueEnable` (multi-turn) and `isChatGptCardDisplayEnable`,
    /// without which the glasses' ChatGPT card scene is never configured for
    /// follow-ups and crashes when a second answer is appended.
    ///
    /// Field names and values are taken verbatim from a capture of the official
    /// app, which sends this once and the glasses retain it. We send it at the
    /// start of each conversation, which is harmless to repeat.
    public static func assistantConfig() -> String {
        var p = JsonObject()
        p.put("hasWakeupVoicePrint", false)
        p.put("isAsrResultScreenEnable", true)
        p.put("isChatGptCardDisplayEnable", true)
        p.put("isChatGptTTSPlayEnable", true)
        p.put("isContinuousDialogueEnable", true)
        p.put("isLowPowerWakeupEnable", true)
        p.put("isLowPowerWakeupScreenOffEnable", true)
        p.put("isNetworkAvailable", true)
        p.put("isWakeupVoiceRecording", false)
        p.put("ttsTimbreValue", 0)
        return message(codeAssistantConfig, p)
    }

    /// The message the glasses wait for after the AI button. Without it they
    /// show "service error". Send it before any slow work.
    public static func sessionAck(sessionId: String) -> String {
        var p = JsonObject()
        p.put("hasNetwork", true)
        // The literal string the real app sends ("wakeup succeeded").
        p.put("message", "唤醒成功")
        p.put("sessionId", sessionId)
        p.put("success", true)
        return message(codeStartVrRes, p)
    }

    /// 104 type:1 — speech detected. The ONLY thing that clears the 8s timeout.
    public static func vadStart(sessionId: String) -> String {
        vadEvent(type: 1, sessionId: sessionId)
    }

    /// 104 type:2 — end of speech.
    public static func vadEnd(sessionId: String) -> String {
        vadEvent(type: 2, sessionId: sessionId)
    }

    private static func vadEvent(type: Int, sessionId: String) -> String {
        var p = JsonObject()
        p.put("type", type)
        p.put("sessionId", sessionId)
        return message(codeVadEvent, p)
    }

    /// A caption frame. Partials (`isFinal == false`) must GROW — the glasses
    /// render a building caption, and sending the whole sentence as one partial
    /// makes it flash and vanish.
    public static func asrResult(sessionId: String, text: String, isFinal: Bool) -> String {
        var p = JsonObject()
        p.put("id", sessionId)
        p.put("isOfflineResult", false)
        p.put("text", text)
        p.put("type", isFinal ? 1 : 0)
        return message(codeAsrTrans, p)
    }

    /// Opens the LLM answer scene for the recognized question.
    public static func chatQuery(sessionId: String, query: String) -> String {
        var header = JsonObject()
        header.put("name", "default")
        header.put("namespace", "llm")
        header.put("specialCmdInChatGptScene", false)

        var metadata = JsonObject()
        metadata.put("msgId", "")

        var innerUtterance = JsonObject()
        innerUtterance.put("speech", "")
        innerUtterance.put("screen", "")
        innerUtterance.put("id", "")

        var payload = JsonObject()
        payload.put("isSoundOpened", true)
        payload.put("query", query)
        // The cloud NLU sets this to keep the mic open; an SDK calling a plain
        // LLM never learns when to, so it is always false. See
        // AiSession.spokenFollowUpTurns.
        payload.put("isNextRecorded", false)
        payload.put("utterance", innerUtterance)

        var emptyUtterance = JsonObject()
        emptyUtterance.put("id", "")
        emptyUtterance.put("screen", "")
        emptyUtterance.put("speech", "")

        var p = JsonObject()
        p.put("header", header)
        p.put("metadata", metadata)
        p.put("payload", payload)
        p.put("source", 0)
        p.put("utterance", emptyUtterance)
        p.put("sessionId", sessionId)
        return message(codeVui, p)
    }

    /// Commits answer text to the LLM scene; status 1 precedes final status 2.
    public static func chatAnswer(sessionId: String, answer: String,
                                  baseStatus: Int) -> String {
        var p = JsonObject()
        p.put("answer", answer)
        p.put("base_status", baseStatus)
        p.put("isCmd", false)
        p.put("sessionId", sessionId)
        p.put("version_code", "")
        return message(codeChatGptResponse, p)
    }

    /// Playback state. Note `id` is the empty string, not a session id.
    public static func playState(_ state: Int) -> String {
        var p = JsonObject()
        p.put("id", "")
        p.put("isContinuous", false)
        p.put("isMulti", false)
        p.put("isWakeup", false)
        p.put("playState", state)
        return message(codeTtsPlayRes, p)
    }

    /// 106 — payload is a BARE INT, not an object.
    public static func vrState(_ state: Int) -> String {
        var out = JsonObject()
        out.put("code", codeSyncVrState)
        out.put("payload", state)
        return out.serialized()
    }

    /// 107 — ends the turn.
    public static func endTurn() -> String {
        var p = JsonObject()
        p.put("control", 4)
        p.put("isOffline", false)
        return message(codeHotWordManager, p)
    }

    private static func message(_ code: Int, _ payload: JsonObject) -> String {
        var out = JsonObject()
        out.put("code", code)
        out.put("payload", payload)
        return out.serialized()
    }
}
