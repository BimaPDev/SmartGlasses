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

    // Deliberately absent: a code:102 builder. Sending one without the code:2
    // preamble crashes the lvgl_ui thread. If a VUI message is ever needed here,
    // drive it through AiSession, which does the configuration first.

    // MARK: - Candidates

    public static func candidates() -> [Attempt] {
        var out: [Attempt] = []
        let sid = "probe-\(Int(Date().timeIntervalSince1970))"
        let env = domainEnvelope(namespace: "todo", intent: "TODO_QUERTY_LIST",
                                 text: "open my todo list")

        // NO code:102 CONTROL. Run 5 used one and it CRASHED THE GLASSES: a BusFault
        // in the lvgl_ui thread ~2s after the send (dump 09-11 12:38:14, PC
        // 0x2C67F10C). PROTOCOL.md line 313 says why, and said so before the probe
        // was written: "code:2 must enable isChatGptCardDisplayEnable and
        // isContinuousDialogueEnable or the scene is never configured". AiSession
        // sends assistantConfig BEFORE chatQuery; the probe sent code:102 raw, so
        // the LLM card scene was opened unconfigured.
        //
        // Liveness is now proven by `ancsState()` in run(), which returns an actual
        // reply, instead of by a command that opens a scene. A control must be safe
        // and must round-trip; that one was neither.

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

    /// Confirms the glasses are alive AND answering, by a query with a known reply.
    ///
    /// This is the control. It has to be something that round-trips, because the
    /// question "did nothing come back because the domain ignored us, or because the
    /// device is dead?" is precisely what four silent runs could not answer — and
    /// run 5 answered wrongly, having crashed the device with its own control.
    static func alive(_ glasses: MyvuGlasses) async -> Bool {
        (try? await glasses.ancsState(timeout: 4)) != nil
    }

    /// Sends each candidate with a pause between, checking liveness around every one.
    ///
    /// **Stops at the first candidate that kills the device.** Run 5 crashed on its
    /// control and then fired seven more payloads into a rebooting device, producing
    /// eight identical "(nothing)" lines from a single cause — which reads like eight
    /// independent negative results and is worth nothing.
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
        onLine("TodoProbe run 6 — \(all.count) candidates on the code:103 business-data")
        onLine("carrier. No code:102 anywhere: run 5's control was a code:102 and it")
        onLine("CRASHED the glasses (BusFault in lvgl_ui, 2s in), which is why all eight")
        onLine("of its candidates read '(nothing)' — one cause, not eight results.")
        onLine("")

        onLine("[control] checking the glasses answer at all…")
        guard await alive(glasses) else {
            onLine("     ** NO REPLY — stopping before sending anything. **")
            onLine("     The glasses are not answering queries. Reconnect (and power-cycle")
            onLine("     them if run 5 left them wedged), then run this again. Nothing")
            onLine("     below would have been interpretable.")
            return await box.all()
        }
        onLine("     ok — glasses answered. Proceeding.")

        for (i, c) in all.enumerated() {
            onLine("")
            onLine("[\(i + 1)/\(all.count)] \(c.label)")
            onLine("     why: \(c.rationale)")
            onLine("     -> \(c.target)")
            onLine("     \(c.json)")

            let before = await box.count()
            glasses.client.sendRaw(c.json, targetPkg: c.target, sourcePkg: Pkg.assistant)
            try? await Task.sleep(nanoseconds: UInt64(gapSeconds * 1_000_000_000))
            let after = await box.count()

            onLine(after > before
                   ? "     ** \(after - before) message(s) came back after this one **"
                   : "     (no reply)")

            // Liveness after every send, so a crash is attributed to the payload that
            // caused it rather than smeared across the rest of the run.
            if await alive(glasses) {
                onLine("     (still alive)")
            } else {
                onLine("     ** THE GLASSES STOPPED ANSWERING AFTER THIS PAYLOAD. **")
                onLine("     Stopping. Treat this candidate as the suspect and pull the")
                onLine("     crash dump before running anything else.")
                break
            }
        }

        onLine("")
        let seen = await box.all()
        onLine("TodoProbe done. \(seen.count) inbound message(s) captured.")
        if seen.isEmpty {
            onLine("No domain reaction, but the control passed and the device stayed up —")
            onLine("so this IS a real negative for these seven shapes, unlike run 5.")
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
