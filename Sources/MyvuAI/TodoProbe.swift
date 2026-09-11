import Foundation
import MyvuCore

/// Experiment: can the phone open the glasses' built-in Todo / Schedule domains?
///
/// **This is a probe, not a feature.** The glasses definitely contain `TodoDomainView`
/// and `ScheduleDomainView`, with intents `TODO_CREATE_LIST`, `TODO_UPDATE_SELECT`,
/// `SCHEDULE_LIST` and so on, plus checked/unchecked icons. What is **not** known is
/// the message that opens one. Requires no firmware modification.
///
/// ## Why runs 1-4 produced nothing
///
/// They sent `code:102` (VUI) and got silence, and that silence was misread as "the
/// domain is unreachable". It was not. `DomainRuntime` takes domain requests through
/// two paths, and **neither of them is `code:102`**:
///
/// ```
/// [%s] NLU_RESULT->data parse succeed. Domain Namespace %s
/// [%s] CONNECT_DATA->connectData parse succeed. Domain Namespace %s
/// ```
///
/// The messages never reached the matcher, which is exactly why the failure was
/// silent rather than an error. **Absence of a reply was evidence about the channel,
/// not about the domain.** See `Reverse/firmware/analysis/domain_routing/`.
///
/// ## What run 5 is built from
///
/// Every field name below was read out of 1.0.11.53, with its offset, rather than
/// invented:
///
/// | Evidence | Offset |
/// |---|---|
/// | Namespace table: freechat, INNER_STKS, application, VSP_ERROR, alarm, **todo**, systemsetting | `0x192144` |
/// | A complete worked envelope, valid JSON | `0x192664` |
/// | Enum `SETTING NAVIGATE WECHAT ALARM SCHEDULE TODO` | `0x176cd8` |
/// | NLU fields: `clientinfo` `recordresult` `nluResult` `requestsource` `intentGroup` | `0x191db8` |
/// | Connect fields: `connectData` `connectType` `guideWord` | `0x19161c` |
/// | `businessData.dataType: %d` — logged as an INT, beside `findDomain` | `0x1922a4` |
///
/// These are still **hypotheses about how the fields compose**. The individual names
/// are facts; the arrangement is not. Read the log, not the return value.
public struct TodoProbe {

    public struct Attempt: Sendable {
        public let label: String
        public let json: String
        /// Which glasses-side package the message is addressed to.
        public let target: String
        /// Why this shape is plausible, with the evidence — so a reader can judge it
        /// rather than trust it.
        public let rationale: String
    }

    /// Package names lifted verbatim from the firmware string table.
    public enum Pkg {
        public static let assistant = "com.upuphone.ai.assistant"
        public static let launcher  = "com.upuphone.star.launcher"
    }

    /// Codes from `AiProtocol` / `PhoneContacts`. 103 is the business-data carrier
    /// already proven to work for the Phone page.
    static let codeVui = 102
    static let codeBusinessData = 103
    static let codeAsrTrans = 101

    // MARK: - Envelope builders

    /// The inner object from the firmware's own template at `0x192664`, with the
    /// namespace and intent swapped. Shape is copied exactly, including
    /// `specialCmdInChatGptScene`, which is present in the original.
    static func domainEnvelope(namespace: String, intent: String, text: String) -> String {
        "{\"header\":{\"namespace\":\"\(namespace)\",\"specialCmdInChatGptScene\":false},"
      + "\"payload\":{\"data\":{\"intent\":\"\(intent)\"},\"text\":\"\(text)\"}}"
    }

    /// `{"code":103,"payload":{"data":…,"dataType":…}}` — the wrapper
    /// `PhoneContacts` documents from `Communicator.b(103, BusinessData(type, data))`.
    static func businessData(dataType: String, data: String) -> String {
        "{\"code\":\(codeBusinessData),\"payload\":{\"data\":\(data),"
      + "\"dataType\":\"\(dataType)\"}}"
    }

    /// VUI, kept only as the control.
    static func vui(namespace: String, query: String, sessionId: String) -> String {
        let header = "{\"name\":\"default\",\"namespace\":\"\(namespace)\","
                   + "\"specialCmdInChatGptScene\":false}"
        let inner  = "{\"speech\":\"\",\"screen\":\"\",\"id\":\"\"}"
        let pl     = "{\"isSoundOpened\":true,\"query\":\"\(query)\","
                   + "\"isNextRecorded\":false,\"utterance\":\(inner)}"
        return "{\"code\":\(codeVui),\"payload\":{\"header\":\(header),"
             + "\"metadata\":{\"msgId\":\"\"},\"payload\":\(pl),\"source\":0,"
             + "\"utterance\":{\"id\":\"\",\"screen\":\"\",\"speech\":\"\"},"
             + "\"sessionId\":\"\(sessionId)\"}}"
    }

    // MARK: - Candidates

    public static func candidates() -> [Attempt] {
        var out: [Attempt] = []
        let sid = "probe-\(Int(Date().timeIntervalSince1970))"
        let env = domainEnvelope(namespace: "todo", intent: "TODO_QUERTY_LIST",
                                 text: "open my todo list")

        // 1. CONTROL. This is what the SDK already uses successfully to open the LLM
        //    scene. If THIS draws no reaction, the link or session is wrong and
        //    nothing below means anything. Runs 1-4 had no control, which is why
        //    four silent runs taught us nothing.
        out.append(Attempt(
            label: "CONTROL — vui code:102 namespace=llm (known-good)",
            json: vui(namespace: "llm", query: "hello", sessionId: sid),
            target: Pkg.assistant,
            rationale: "AiProtocol.chatQuery uses exactly this and it works — proves the channel is live"))

        // 2. businessData carrying the firmware's own envelope under `nluResult`.
        //    The log reads "NLU_RESULT->data", so NLU_RESULT is the message and its
        //    payload member is what gets parsed for the namespace.
        out.append(Attempt(
            label: "businessData dataType=NLU_RESULT, data=domain envelope",
            json: businessData(dataType: "NLU_RESULT", data: env),
            target: Pkg.assistant,
            rationale: "DomainRuntime logs NLU_RESULT->data parse succeed. Domain Namespace %s (0x1924e8)"))

        // 3. Same, but with the NLU field names that sit together at 0x191db8.
        out.append(Attempt(
            label: "businessData dataType=NLU_RESULT, nluResult wrapper",
            json: businessData(dataType: "NLU_RESULT",
                               data: "{\"nluResult\":\(env),\"requestsource\":\"phone\","
                                   + "\"intentGroup\":\"INTENTGROUP_TOPLEVEL\"}"),
            target: Pkg.assistant,
            rationale: "clientinfo/recordresult/nluResult/requestsource/intentGroup are one pool at 0x191db8"))

        // 4. The CONNECT_DATA path, with the three field names found together.
        out.append(Attempt(
            label: "businessData dataType=CONNECT_DATA, connectData wrapper",
            json: businessData(dataType: "CONNECT_DATA",
                               data: "{\"connectData\":\(env),\"connectType\":0,"
                                   + "\"guideWord\":\"\"}"),
            target: Pkg.assistant,
            rationale: "CONNECT_DATA->connectData parse succeed (0x192588); fields at 0x19161c"))

        // 5. dataType=TODO, from the contiguous enum right after the page registry.
        //    SETTING NAVIGATE WECHAT ALARM SCHEDULE TODO — the same shape as the
        //    PHONE dataType that PhoneContacts proves works.
        out.append(Attempt(
            label: "businessData dataType=TODO",
            json: businessData(dataType: "TODO",
                               data: "{\"type\":1,\"todoList\":[{\"content\":\"probe item\",\"done\":false}]}"),
            target: Pkg.assistant,
            rationale: "TODO is a member of the enum at 0x176d08, same pool as WECHAT/ALARM/SCHEDULE"))

        // 6. Same channel, Schedule — a second domain, so a reaction here separates
        //    "this envelope works" from "todo specifically is special".
        out.append(Attempt(
            label: "businessData dataType=SCHEDULE",
            json: businessData(dataType: "SCHEDULE", data: "{\"type\":1,\"scheduleList\":[]}"),
            target: Pkg.assistant,
            rationale: "SCHEDULE sits beside TODO at 0x176cfc; ScheduleDomainView exists"))

        // 7. Feed the NLU text and let the vendor's own pipeline route it. If
        //    SYS_TEXT_TO_NLU (0x1918a4) is reachable this is the cheapest door of
        //    all, because the firmware builds the NLU result itself.
        out.append(Attempt(
            label: "asrTrans code:101 — let the device's own NLU route it",
            json: "{\"code\":\(codeAsrTrans),\"payload\":{\"text\":\"open my todo list\","
                + "\"isLast\":true,\"sessionId\":\"\(sid)\"}}",
            target: Pkg.assistant,
            rationale: "SYS_TEXT_TO_NLU exists at 0x1918a4; routing text is what the NLU is for"))

        // 8. NEGATIVE CONTROL. A namespace that is NOT in the table at 0x192144. If
        //    this draws the same reaction as a real namespace, then whatever we are
        //    seeing is not domain matching and every positive above is worthless.
        out.append(Attempt(
            label: "NEG CONTROL — businessData dataType=NOT_A_REAL_TYPE",
            json: businessData(dataType: "NOT_A_REAL_TYPE", data: "{\"x\":1}"),
            target: Pkg.assistant,
            rationale: "must NOT behave like the real ones; if it does, we are misreading the result"))

        return out
    }

    // MARK: - Runner

    /// Sends each candidate with a pause between, while logging every inbound message.
    @discardableResult
    public static func run(on glasses: MyvuGlasses,
                           gapSeconds: Double = 3,
                           onLine: @escaping @Sendable (String) -> Void) async -> [String] {

        let box = Collector()

        let watcher = Task {
            for await raw in glasses.rawInbound() {
                await box.append(raw)
                onLine("  <- \(raw)")
            }
        }
        defer { watcher.cancel() }

        let all = candidates()
        onLine("TodoProbe run 5 — \(all.count) candidates on the code:103 business-data")
        onLine("carrier. Runs 1-4 used code:102, which DomainRuntime does not listen to.")
        onLine("Field names are read from the firmware; how they compose is the guess.")
        onLine("Watch the <- lines. Candidate 1 is a known-good control, 8 is a negative.")

        for (i, c) in all.enumerated() {
            onLine("")
            onLine("[\(i + 1)/\(all.count)] \(c.label)")
            onLine("     why: \(c.rationale)")
            onLine("     -> \(c.target)")
            onLine("     \(c.json)")

            // The assistant is both source and target; sourcing from the launcher is
            // one of the things that may have made run 3 a no-op.
            let before = await box.count()
            glasses.client.sendRaw(c.json, targetPkg: c.target, sourcePkg: Pkg.assistant)
            try? await Task.sleep(nanoseconds: UInt64(gapSeconds * 1_000_000_000))
            let after = await box.count()

            // Attribute per candidate, so one reaction in eight is visible rather
            // than drowned in a single end-of-run total.
            onLine(after > before
                   ? "     ** \(after - before) message(s) came back after this one **"
                   : "     (nothing)")
        }

        onLine("")
        let seen = await box.all()
        // Count only what the glasses actually sent. An earlier version counted its
        // own "--- sent:" markers and reported "8 inbound captured" when the true
        // figure was zero.
        onLine("TodoProbe done. \(seen.count) inbound message(s) captured.")
        if seen.isEmpty {
            onLine("NOTHING came back — INCLUDING THE CONTROL. That means the link or "
                 + "session is wrong, and says nothing about any domain. Fix the "
                 + "control before reading anything into candidates 2-7.")
        }
        return seen
    }

    private actor Collector {
        private var lines: [String] = []
        func append(_ s: String) { lines.append(s) }
        func all() -> [String] { lines }
        func count() -> Int { lines.count }
    }
}
