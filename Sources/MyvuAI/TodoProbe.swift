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

        // 1. open_app against the assistant, naming the domain in `ext`.
        //    Mirrors NavCommands.openApp, which IS confirmed for navigation.
        for domain in ["todo", "schedule"] {
            out.append(Attempt(
                label: "open_app ext.domain=\(domain)",
                json: """
                {"action":"app","data":{"launchMode":"scene","action":"open_app",\
                "pkg":"\(Pkg.assistant)","show_status_bar":false,\
                "ext":"{\\"domain\\":\\"\(domain)\\"}","app_name":"\(domain.capitalized)"}}
                """,
                rationale: "open_app is confirmed for com.upuphone.ar.navi.glass; the assistant may accept a domain selector in ext"))
        }

        // 2. Direct domain intents, using the intent names found in the binary.
        //    TodoDomain.cpp logs "[%s] TODO_QUERTY_LIST" etc, so these tokens are real —
        //    the JSON wrapper around them is the guess.
        let intents = ["TODO_QUERTY_LIST", "TODO_CREATE_LIST", "SCHEDULE_LIST", "SCHEDULE_VIEW"]
        for intent in intents {
            out.append(Attempt(
                label: "bare intent \(intent)",
                json: """
                {"action":"assistant","data":{"action":"\(intent)","list":[]}}
                """,
                rationale: "intent tokens are verbatim from TodoDomain.cpp / ScheduleDomain.cpp"))
        }

        // 3. A populated todo list. If the domain opens on data arrival (like the contact
        //    list, which is populated by the phone), this is the shape most likely to work.
        out.append(Attempt(
            label: "TODO_CREATE_LIST with items",
            json: """
            {"action":"assistant","data":{"action":"TODO_CREATE_LIST","list":[\
            {"id":1,"title":"Lunch with Alex","done":false},\
            {"id":2,"title":"Vendor timeline alignment","done":false}]}}
            """,
            rationale: "the contact list is phone-populated via onConnectDataMessage; todo parses phone JSON too ('parse todo data fail')"))

        // 4. Same, wrapped the way the contact list is delivered.
        out.append(Attempt(
            label: "connect-data wrapper",
            json: """
            {"action":"connect_data","data":{"type":"TODO_CREATE_LIST","list":[\
            {"id":1,"title":"Lunch with Alex","done":false}]}}
            """,
            rationale: "PhonePage logs 'phone contact list json data: %s' from onConnectDataMessage; todo may share that path"))

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
            onLine("[\(i + 1)/\(candidates().count)] -> \(c.label)")
            onLine("     why: \(c.rationale)")
            onLine("     \(c.json)")
            glasses.sendRaw(c.json)
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
