import SwiftUI

struct AssistantView: View {
    @EnvironmentObject private var model: GlassesModel

    // Stored in UserDefaults for brevity. A shipping app should use the
    // keychain — this is a demo, and these are real credentials.
    @AppStorage("groqKey") private var groqKey = ""
    @AppStorage("claudeKey") private var claudeKey = ""
    @State private var running = false
    @State private var question = ""

    var body: some View {
        NavigationStack {
            Form {
                Section { StatusBadge(state: model.state) }

                Section {
                    SecureField("Groq API key (Whisper)", text: $groqKey)
                    SecureField("Anthropic API key (Claude)", text: $claudeKey)
                } header: {
                    Text("Engines")
                } footer: {
                    Text("The SDK ships no cloud clients and no keys. These two adapters "
                        + "are sample code; any SpeechToText / LanguageModel works.")
                }

                Section {
                    Button(running ? "Stop the assistant" : "Start the assistant") {
                        if running {
                            model.stopAssistant()
                        } else {
                            // No Opus decoder is passed: iOS ships none, so the
                            // glasses' microphone cannot be decoded here. Typed
                            // questions still use the full on-glasses flow.
                            model.startAssistant(groqKey: groqKey, claudeKey: claudeKey,
                                                 decoder: nil)
                        }
                        running.toggle()
                    }
                } header: {
                    Text("Session")
                } footer: {
                    Text("With an Opus decoder supplied, the glasses' AI button starts a "
                        + "spoken turn. Without one, only the typed path below works — see "
                        + "the README on wiring up libopus.")
                }
                .requiresSession(model.isReady)

                Section("Ask") {
                    TextField("Type a question", text: $question)
                        .onSubmit(ask)
                    Button("Ask", action: ask)
                        .disabled(question.trimmingCharacters(in: .whitespaces).isEmpty
                            || !running)
                }
                .requiresSession(model.isReady)

                Section("Recent inbound") {
                    if model.recentInbound.isEmpty {
                        Text("Nothing yet.")
                            .foregroundStyle(.secondary)
                    }
                    ForEach(model.recentInbound.suffix(8).reversed(), id: \.self) { raw in
                        Text(raw)
                            .font(.system(.caption2, design: .monospaced))
                            .lineLimit(3)
                    }
                }
            }
            .navigationTitle("Assistant")
        }
    }

    private func ask() {
        let text = question.trimmingCharacters(in: .whitespaces)
        guard !text.isEmpty else { return }
        model.assistant?.ask(text)
        question = ""
    }
}
