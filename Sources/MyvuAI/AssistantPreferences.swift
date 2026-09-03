import Foundation
import MyvuCore

/// Pushing the "Voice Assistant" screen's switches without a conversation.
///
/// `AiSession` sends `assistantConfig` at the start of every turn, but the
/// settings screen has to reach the glasses when nobody is talking — and the
/// per-switch code-111 messages are what the glasses' own settings page reads
/// back. Both go to the assistant package, not the launcher.
public extension MyvuClient {
    /// Sends the whole screen: the capability block, then one message per
    /// switch, in the order the official app lists them.
    func sendAssistantPreferences(_ prefs: AiProtocol.AssistantPreferences) {
        sendAssistantConfig(prefs)
        for message in AiProtocol.assistantSettings(prefs) {
            sendAssistant(message)
        }
    }

    /// Sends only the code-2 capability block. Every switch is in it, so this
    /// is what a conversation starting now would read.
    func sendAssistantConfig(_ prefs: AiProtocol.AssistantPreferences) {
        sendAssistant(AiProtocol.assistantConfig(prefs))
    }

    /// Sends one switch, for a toggle the wearer just flipped.
    func sendAssistantSetting(_ type: String, on: Bool, value: Int = 0) {
        sendAssistant(AiProtocol.assistantSetting(type, on: on, value: value))
    }

    private func sendAssistant(_ json: String) {
        sendAction(json, targetPkg: AiProtocol.pkg, sourcePkg: AiProtocol.pkg)
    }
}
