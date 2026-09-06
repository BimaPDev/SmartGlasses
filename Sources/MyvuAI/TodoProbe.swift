import Foundation
import MyvuCore

/// Experiment: can the phone open the glasses' built-in Todo / Schedule domains?
///
/// **This is a probe, not a feature.** The glasses definitely contain `TodoDomainView`
/// and `ScheduleDomainView` (see `Reverse/firmware/analysis/todo_schedule/`), with
/// intents `TODO_CREATE_LIST`, `TODO_UPDATE_SELECT`, `SCHEDULE_LIST` and so on, plus
/// checked/unchecked icons. What is **not** known is the message that opens one.
///
/// So this sends a ladder of candidate messages and logs everything that comes back.
/// Every payload below is a **guess** built from the shapes this repo has confirmed for
/// other features; none is a documented protocol. Read the log, not the return value.
///
/// Requires no firmware modification — the domains are already compiled into the glasses.
public struct TodoProbe {

    public struct Attempt: Sendable {
        public let label: String
        public let json: String
        /// Which glasses-side package the message is addressed to. Run 1 sent everything
        /// to the launcher (the SDK default) and got no reaction — the inbound telemetry
        /// showed messages are addressed package-to-package, and the todo domain lives in
        /// the assistant, so the launcher would simply have dropped them.
        public let target: String
        /// Why this shape is plausible — so a reader can judge it rather than trust it.
        public let rationale: String
    }

    /// Package names lifted verbatim from the firmware string table.
    public enum Pkg {
        public static let assistant = "com.upuphone.ai.assistant"
        public static let launcher  = "com.upuphone.star.launcher"
        public static let phone     = "com.upuphone.ai.phone"
    }

    // MARK: - Candidate payloads

    /// Ladder of guesses, cheapest/most-likely first.
    /// A VUI (code 102) message with a chosen Domain Namespace.
    ///
    /// This is the shape `AiProtocol.chatQuery` already uses to open the LLM scene, with
    /// `header.namespace` swapped. That field is what DomainRuntime logs as
    /// "Domain Namespace %s" before calling findDomain, and the namespaces in the binary
    /// (0x192144-0x192264) are its legal values: freechat, INNER_STKS, application,
    /// VSP_ERROR, alarm, todo, systemsetting.
    static func vui(namespace: String, name: String = "default",
                    query: String = "", sessionId: String) -> String {
        """
        {"code":102,"payload":{        "header":{"name":"\(name)","namespace":"\(namespace)","specialCmdInChatGptScene":false},        "metadata":{"msgId":""},        "payload":{"isSoundOpened":true,"query":"\(query)","isNextRecorded":false,        "utterance":{"speech":"","screen":"","id":""}},        "source":0,        "utterance":{"id":"","screen":"","speech":""},        "sessionId":"\(sessionId)"}}
        """
    }

    public static func candidates() -> [Attempt] {
        var out: [Attempt] = []
        let sid = "probe-\(Int(Date().timeIntervalSince1970))"

        // Run 4. Runs 1-3 used {"action":...} via the LAUNCHER protocol; the assistant
        // speaks com.xjsd.ai.assistant.protocol with {"code":N,"payload":...}, sourced
        // from AND addressed to com.upuphone.ai.assistant. So nothing before now even
        // reached its handler.
        //
        // These are code-102 VUI messages — the exact shape that already opens the LLM
        // scene — with header.namespace swapped to a namespace taken from the binary.

        // CONTROL FIRST: "llm" is the namespace the SDK already uses successfully. If this
        // draws no reaction, the transport or session is wrong and nothing below means
        // anything.
        out.append(Attempt(
            label: "CONTROL vui namespace=llm (known-good)",
            json: vui(namespace: "llm", query: "hello", sessionId: sid),
            target: Pkg.assistant,
            rationale: "AiProtocol.chatQuery uses exactly this and it works — proves the channel"))

        for ns in ["todo", "schedule", "alarm", "systemsetting"] {
            out.append(Attempt(
                label: "vui namespace=\(ns)",
                json: vui(namespace: ns, sessionId: sid),
                target: Pkg.assistant,
                rationale: "header.namespace is what DomainRuntime reads as 'Domain Namespace'"))
        }

        // Namespace with an intent-ish name, in case findDomain keys on both fields.
        out.append(Attempt(
            label: "vui namespace=todo name=TODO_QUERTY_LIST",
            json: vui(namespace: "todo", name: "TODO_QUERTY_LIST", sessionId: sid),
            target: Pkg.assistant,
            rationale: "header.name may select the intent within the domain"))

        return out
    }

    // MARK: - Runner

    /// Sends each candidate with a pause between, while logging every inbound message.
    ///
    /// - Parameters:
    ///   - glasses: a connected `MyvuGlasses`.
    ///   - gapSeconds: seconds to wait after each send, so a reply can be attributed.
    ///   - onLine: receives human-readable log lines (send markers and raw inbound).
    /// - Returns: every inbound string seen during the run, in order.
    @discardableResult
    public static func run(on glasses: MyvuGlasses,
                           gapSeconds: Double = 3,
                           onLine: @escaping @Sendable (String) -> Void) async -> [String] {

        let box = Collector()

        // Watch everything the glasses say for the whole run.
        let watcher = Task {
            for await raw in glasses.rawInbound() {
                await box.append(raw)
                await box.countInbound()
                onLine("  <- \(raw)")
            }
        }
        defer { watcher.cancel() }

        onLine("TodoProbe: \(candidates().count) candidates. "
             + "Every payload is a GUESS; watch the <- lines for any reaction.")
        onLine("No firmware change is involved — the domains are already on the device.")

        for (i, c) in candidates().enumerated() {
            await box.mark(c.label)
            onLine("")
            onLine("[\(i + 1)/\(candidates().count)] \(c.label)")
            onLine("     why: \(c.rationale)")
            onLine("     -> \(c.target)")
            onLine("     \(c.json)")
                        // AssistantPreferences.sendAssistant uses the assistant as BOTH source and
            // target; run 3 sourced from the launcher, which may be why it was ignored.
            let src = (c.target == Pkg.assistant) ? Pkg.assistant : Pkg.launcher
            glasses.client.sendRaw(c.json, targetPkg: c.target, sourcePkg: src)
            try? await Task.sleep(nanoseconds: UInt64(gapSeconds * 1_000_000_000))
        }

        onLine("")
        let seen = await box.all()
        let n = await box.inboundCount()
        onLine("TodoProbe done. \(n) inbound message(s) captured.")
        if n == 0 {
            onLine("NOTHING came back. That is a real result: either the domain needs a "
                 + "different message, or it is unreachable on this build.")
        }
        return seen
    }

    private actor Collector {
        private var lines: [String] = []
        func append(_ s: String) { lines.append(s) }
        private var inbound = 0
        func mark(_ s: String) { lines.append("--- sent: \(s)") }
        func countInbound() { inbound += 1 }
        func all() -> [String] { lines }
        func inboundCount() -> Int { inbound }
    }
}
