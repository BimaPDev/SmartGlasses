import Foundation
import MyvuAI

/// Answers a question via the Claude Messages API.
///
/// Sample code, not part of the SDK. Non-streaming on purpose: the glasses' flow
/// needs the whole answer up front, because playback is bracketed by code:6
/// playState 1 and 2 — there is nothing useful to do with partial tokens.
final class ClaudeLanguageModel: LanguageModel {
    private static let endpoint = URL(string: "https://api.anthropic.com/v1/messages")!
    private static let apiVersion = "2023-06-01"
    private static let model = "claude-haiku-4-5-20251001"
    private static let maxTokens = 1024
    private static let timeout: TimeInterval = 30

    /// Answers are spoken aloud on a pair of glasses, so length and formatting
    /// matter more than usual — markdown, lists and emoji are read out as
    /// literal junk.
    static let defaultSystemPrompt = """
    You are a voice assistant built into a pair of AR glasses. Answer in one or \
    two short sentences that sound natural read aloud. No markdown, no lists, no \
    code blocks, no emoji. If you do not know something, say so briefly rather \
    than guessing.
    """

    private let apiKey: String
    private let systemPrompt: String

    init(apiKey: String, systemPrompt: String = defaultSystemPrompt) {
        self.apiKey = apiKey
        self.systemPrompt = systemPrompt.trimmingCharacters(in: .whitespacesAndNewlines)
            .isEmpty ? ClaudeLanguageModel.defaultSystemPrompt : systemPrompt
    }

    var isReady: Bool { !apiKey.trimmingCharacters(in: .whitespaces).isEmpty }

    func reply(to question: String) async throws -> String {
        guard isReady else {
            throw DemoError("no Claude API key set")
        }

        var request = URLRequest(url: ClaudeLanguageModel.endpoint,
                                 timeoutInterval: ClaudeLanguageModel.timeout)
        request.httpMethod = "POST"
        request.setValue("application/json", forHTTPHeaderField: "content-type")
        request.setValue(apiKey, forHTTPHeaderField: "x-api-key")
        request.setValue(ClaudeLanguageModel.apiVersion, forHTTPHeaderField: "anthropic-version")
        request.httpBody = try JSONSerialization.data(withJSONObject: [
            "model": ClaudeLanguageModel.model,
            "max_tokens": ClaudeLanguageModel.maxTokens,
            "system": systemPrompt,
            "messages": [["role": "user", "content": question]],
        ])

        let (data, response) = try await URLSession.shared.data(for: request)
        let json = try JSONSerialization.jsonObject(with: data) as? [String: Any]
        if let http = response as? HTTPURLResponse, http.statusCode >= 400 {
            let message = (json?["error"] as? [String: Any])?["message"] as? String
            throw DemoError("Claude returned \(http.statusCode): "
                + (message ?? String(decoding: data.prefix(200), as: UTF8.self)))
        }

        // The answer lives in content[] as one or more text blocks.
        let blocks = json?["content"] as? [[String: Any]] ?? []
        let text = blocks
            .filter { $0["type"] as? String == "text" }
            .compactMap { $0["text"] as? String }
            .joined()
            .trimmingCharacters(in: .whitespacesAndNewlines)
        guard !text.isEmpty else { throw DemoError("Claude returned an empty answer") }
        return text
    }
}
