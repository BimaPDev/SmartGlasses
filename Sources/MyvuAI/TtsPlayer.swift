import AVFoundation
import Foundation
import MyvuCore

/// Speaks the assistant's answer with `AVSpeechSynthesizer`.
///
/// The completion callback is what gates the protocol: the glasses expect
/// code:6 playState:1 → audio → code:6 playState:2, so playback finishing has to
/// be observable rather than guessed at with a timer. That is why `speak` only
/// returns from the synthesizer's own delegate.
///
/// Audio routes wherever the system sends it. With the glasses connected as an
/// A2DP sink that is their speaker, which is what the real app does. Forcing the
/// route explicitly is deliberately not attempted — it fights the glasses' own
/// audio focus.
public final class TtsPlayer: NSObject, TtsEngine, @unchecked Sendable {
    /// AVSpeechSynthesizer is not Sendable, but every call into it here is made
    /// from the AI scheduler and its delegate callbacks are serialised by
    /// AVFoundation, so the unchecked conformance holds.
    nonisolated(unsafe) private let synthesizer = AVSpeechSynthesizer()
    private let voiceLanguage: String
    /// Resumed from the delegate. Guarded by `lock` because the delegate lands
    /// on the main queue while `speak` may be awaited from anywhere.
    private var pending: CheckedContinuation<Bool, Never>?
    private let lock = NSLock()

    /// - Parameter language: BCP-47 tag for the voice, e.g. `"en-US"`. Defaults
    ///   to the device's own language.
    public init(language: String = AVSpeechSynthesisVoice.currentLanguageCode()) {
        self.voiceLanguage = language
        super.init()
        synthesizer.delegate = self
    }

    /// Puts the audio session into a playback state.
    ///
    /// Without this the utterance is synthesised and silently discarded when the
    /// app's session is in a recording or ambient category.
    public func prepare() {
        #if os(iOS)
            do {
                let session = AVAudioSession.sharedInstance()
                // .voicePrompt keeps the answer at prompt level over other audio
                // rather than interrupting it outright.
                try session.setCategory(.playback, mode: .voicePrompt,
                                        options: [.duckOthers])
                try session.setActive(true)
            } catch {
                SdkLog.warn("could not activate the audio session: \(error.localizedDescription)")
            }
        #endif
    }

    /// - Returns: true if the text was spoken to completion.
    public func speak(_ text: String) async -> Bool {
        await withCheckedContinuation { continuation in
            // A previous utterance still waiting would never be resumed once
            // this one replaces it.
            resume(with: false)
            lock.lock()
            pending = continuation
            lock.unlock()

            let utterance = AVSpeechUtterance(string: text)
            utterance.voice = AVSpeechSynthesisVoice(language: voiceLanguage)
            synthesizer.speak(utterance)
        }
    }

    public func shutdown() {
        synthesizer.stopSpeaking(at: .immediate)
        resume(with: false)
        #if os(iOS)
            try? AVAudioSession.sharedInstance().setActive(false,
                                                           options: .notifyOthersOnDeactivation)
        #endif
    }

    private func resume(with success: Bool) {
        lock.lock()
        let continuation = pending
        pending = nil
        lock.unlock()
        continuation?.resume(returning: success)
    }
}

extension TtsPlayer: AVSpeechSynthesizerDelegate {
    public func speechSynthesizer(_ synthesizer: AVSpeechSynthesizer,
                                  didFinish utterance: AVSpeechUtterance) {
        resume(with: true)
    }

    public func speechSynthesizer(_ synthesizer: AVSpeechSynthesizer,
                                  didCancel utterance: AVSpeechUtterance) {
        resume(with: false)
    }
}
