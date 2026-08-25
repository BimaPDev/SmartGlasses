import Foundation

/// Transcribes the glasses' captured microphone audio to text.
///
/// The SDK decodes the glasses' Opus stream to PCM and hands it here; supply an
/// engine backed by whatever recognizer you like (a cloud API, `SFSpeechRecognizer`,
/// etc.). The SDK itself ships no cloud clients and no API keys.
public protocol SpeechToText: AnyObject {
    /// False disables the voice path, e.g. when no API key is configured.
    var isReady: Bool { get }

    /// - Parameters:
    ///   - pcm: signed 16-bit little-endian PCM
    ///   - sampleRate: samples per second
    ///   - channels: 1 for mono
    /// - Returns: the recognized text, or nil/empty if nothing was understood.
    func transcribe(pcm: Data, sampleRate: Int, channels: Int) async throws -> String?
}

/// Produces an assistant answer for a recognized question.
///
/// Deliberately simple — one question in, one answer out — so any LLM backend
/// fits. Conversation history and system-prompt handling, if wanted, live inside
/// the implementation.
public protocol LanguageModel: AnyObject {
    /// False disables answering, e.g. when no API key is configured.
    var isReady: Bool { get }

    /// - Returns: the answer text to caption and speak on the glasses.
    func reply(to question: String) async throws -> String
}

/// Speaks the assistant's answer aloud.
///
/// The glasses' play-state protocol is gated on real speech completion, never on
/// a timer, which is why this is `async` and must not return until playback has
/// genuinely finished (or failed).
public protocol TtsEngine: AnyObject {
    /// Prepares the engine; may be called more than once.
    func prepare()

    /// - Returns: true if the text was spoken to completion.
    func speak(_ text: String) async -> Bool

    func shutdown()
}

/// Decodes the glasses' Opus frames to PCM.
///
/// iOS ships no Opus decoder, and pulling libopus into the package would make
/// every consumer carry a binary dependency for a feature most do not use. So
/// the decoder is injected: bring your own libopus wrapper (or any decoder) and
/// hand it to `AiSession`.
public protocol OpusDecoding: AnyObject {
    /// - Parameters:
    ///   - frame: one raw Opus frame as sent by the glasses
    /// - Returns: signed 16-bit little-endian PCM at `sampleRate`.
    func decode(frame: Data) throws -> Data

    var sampleRate: Int { get }
    var channels: Int { get }

    /// Resets decoder state between conversation turns.
    func reset()
}
