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
    public static func candidates() -> [Attempt] {
        var out: [Attempt] = []

        // Run 3. Runs 1 and 2 invented message names and got nothing. These use the
        // ACTUAL message-type enum recovered from the firmware at 0x191640-0x191964,
        // and the domain-namespace strings from DomainRuntime at 0x192144-0x192264.
        //
        // Dispatch path, from DomainRuntime.cpp log strings:
        //   NLU_RESULT -> "parse succeed. Domain Namespace %s" -> findDomain -> startDomain
        // Namespaces present: freechat, INNER_STKS, application, VSP_ERROR, alarm,
        //                     todo, systemsetting.

        // A. Let the glasses' own NLU classify plain text. If NLU runs on-device this is
        //    the least assumption-laden route: no envelope to guess beyond the text.
        for phrase in ["open my todo list", "show my schedule", "what are my tasks"] {
            out.append(Attempt(
                label: "SYS_TEXT_TO_NLU \"\(phrase)\"",
                json: #"{"action":"SYS_TEXT_TO_NLU","data":{"text":"\#(phrase)"}}"#,
                target: Pkg.assistant,
                rationale: "SYS_TEXT_TO_NLU is a real message type (0x1918a4); routing text through NLU is how a domain normally starts"))
        }

        // B. Inject a pre-classified NLU result naming the domain, bypassing NLU.
        for ns in ["todo", "alarm"] {          // alarm included as a CONTROL: a namespace
            out.append(Attempt(                 // we have no reason to think is special
                label: "NLU_RESULT domain=\(ns)",
                json: #"{"action":"NLU_RESULT","data":{"domain":"\#(ns)","namespace":"\#(ns)","intent":"","slots":{}}}"#,
                target: Pkg.assistant,
                rationale: "NLU_RESULT (0x1918e4) is parsed for a Domain Namespace, then findDomain runs"))
        }

        // C. The connect-data path, using its real field names (connectData/connectType
        //    at 0x19161c/0x191628) — the same route the WeChat contact list uses.
        out.append(Attempt(
            label: "SYS_CONNECT_DATA connectType=todo",
            json: #"""
            {"action":"SYS_CONNECT_DATA","data":{"connectType":"todo","connectData":            "{\"list\":[{\"id\":1,\"title\":\"Lunch with Alex\",\"done\":false}]}"}}
            """#,
            target: Pkg.assistant,
            rationale: "CONNECT_DATA->connectData is parsed for a Domain Namespace too (0x192588)"))

        out.append(Attempt(
            label: "SYNC_SEND_CONNECT_DATA connectType=todo",
            json: #"""
            {"action":"SYNC_SEND_CONNECT_DATA","data":{"connectType":"todo","connectData":            "{\"list\":[{\"id\":1,\"title\":\"Lunch with Alex\",\"done\":false}]}"}}
            """#,
            target: Pkg.assistant,
            rationale: "SYNC_SEND_CONNECT_DATA (0x191964) is the sync variant of the same path"))

        // D. Same NLU_RESULT, addressed to the launcher instead — cheap way to test
        //    whether addressing or shape is the blocker.
        out.append(Attempt(
            label: "NLU_RESULT domain=todo -> launcher",
            json: #"{"action":"NLU_RESULT","data":{"domain":"todo","namespace":"todo","intent":"","slots":{}}}"#,
            target: Pkg.launcher,
            rationale: "isolates addressing from shape: identical payload, different target"))

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
            glasses.client.sendRaw(c.json, targetPkg: c.target, sourcePkg: Pkg.launcher)
            try? await Task.sleep(nanoseconds: UInt64(gapSeconds * 1_000_000_000))
        }

        onLine("")
        let seen = await box.all()
        onLine("TodoProbe done. \(seen.count) inbound message(s) captured.")
        if seen.isEmpty {
            onLine("NOTHING came back. That is a real result: either the domain needs a "
                 + "different message, or it is unreachable on this build.")
        }
        return seen
    }

    private actor Collector {
        private var lines: [String] = []
        func append(_ s: String) { lines.append(s) }
        func mark(_ s: String) { lines.append("--- sent: \(s)") }
        func all() -> [String] { lines }
    }
}
