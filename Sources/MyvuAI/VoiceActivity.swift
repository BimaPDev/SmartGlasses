import Foundation
import MyvuCore

/// Finds the start and end of an utterance from decoded audio energy.
///
/// The glasses stream CONTINUOUSLY once the assistant is open — silence included
/// — so the packet stream carries no end-of-speech signal, and there is no gap
/// to detect. The official app runs a native VAD over the decoded PCM
/// (VadDetector, 512-byte chunks, 600ms pause); this is the same idea with a
/// plain energy measure, which needs no model and no dependency.
///
/// Kept apart from `AiSession` so the thresholding can be tested against
/// synthetic audio rather than a pair of glasses.
public struct VoiceActivity {
    /// What a chunk of audio was judged to be.
    public enum Event: Equatable {
        /// Still measuring the room, or quiet.
        case quiet
        /// The first speech of this utterance — send VAD start.
        case speechStarted
        /// Speech continuing.
        case speech
        /// Quiet for long enough after real speech: the utterance is over.
        case speechEnded
    }

    /// Mean sample amplitude above which a chunk counts as speech, before any
    /// noise calibration.
    public static let speechEnergy = 80.0
    /// Speech must exceed the measured noise floor by this factor.
    ///
    /// A fixed threshold fires before anyone speaks, because the absolute level
    /// depends on the microphone, its gain and the room. Calibrating against the
    /// first moments of each utterance adapts to all three.
    public static let speechOverNoise = 3.5
    /// Chunks sampled at the start of listening to establish the noise floor.
    public static let calibrationChunks = 12
    /// Consecutive speech-level chunks during calibration that count as speech.
    /// One loud chunk could be a pop or a breath; a run of them is a word.
    public static let calibrationLoudStreak = 3
    /// How long the audio must stay quiet before the utterance is considered
    /// over. The official app's VadDetector uses 600ms; a little more is used
    /// here because this is a plain energy threshold rather than their native
    /// VAD, and cutting someone off mid-sentence is worse than waiting.
    public static let silenceHold: TimeInterval = 0.9

    private(set) public var threshold = VoiceActivity.speechEnergy
    private(set) public var noiseFloor = 0.0
    private(set) public var peakEnergy = 0.0
    private(set) public var speechStarted = false

    private var noiseChunks = 0
    private var loudStreak = 0
    private var lastSpeechAt = 0.0
    private var ended = false

    public init() {}

    /// Feeds one decoded chunk.
    ///
    /// - Parameter now: monotonic seconds, injected so the silence hold can be
    ///   tested without sleeping.
    public mutating func consume(energy level: Double, now: TimeInterval) -> Event {
        peakEnergy = max(peakEnergy, level)
        guard !ended else { return .quiet }

        // Spend the first chunks learning the room, then set the bar relative to
        // it — but learn only from QUIET chunks. Averaging every early chunk
        // unconditionally means that talking straight after the button press
        // folds the speech itself into the "noise floor", and the threshold
        // (3.5x that) then sits above the speaker's own level for the rest of
        // the turn: speech is never detected.
        if noiseChunks < VoiceActivity.calibrationChunks {
            if level < threshold {
                loudStreak = 0
                noiseChunks += 1
                noiseFloor = ((noiseFloor * Double(noiseChunks - 1)) + level) / Double(noiseChunks)
                threshold = max(VoiceActivity.speechEnergy,
                                noiseFloor * VoiceActivity.speechOverNoise)
                if noiseChunks == VoiceActivity.calibrationChunks {
                    SdkLog.trace(String(format: "AI: noise floor %.0f, speech threshold %.0f",
                                        noiseFloor, threshold))
                }
                return .quiet
            }
            // Speech-level audio while still calibrating: not the room. Wait for
            // a sustained run, then stop calibrating and let the detection below
            // fire on this chunk.
            loudStreak += 1
            if loudStreak < VoiceActivity.calibrationLoudStreak { return .quiet }
            noiseChunks = VoiceActivity.calibrationChunks
            SdkLog.trace(String(format: "AI: speech before calibration finished -- "
                + "floor %.0f, threshold %.0f", noiseFloor, threshold))
        }

        if level >= threshold {
            lastSpeechAt = now
            if !speechStarted {
                speechStarted = true
                return .speechStarted
            }
            return .speech
        }

        if speechStarted, now - lastSpeechAt > VoiceActivity.silenceHold {
            ended = true
            return .speechEnded
        }
        return .quiet
    }

    /// Mean amplitude of a 16-bit little-endian PCM chunk.
    ///
    /// The same measure the Python client used to find the end of an utterance.
    /// Cruder than the native VAD the official app runs, but it needs no model.
    public static func energy(_ pcm: Data) -> Double {
        guard pcm.count >= 2 else { return 0 }
        var sum = 0.0
        let samples = pcm.count / 2
        pcm.withUnsafeBytes { raw in
            for i in 0 ..< samples {
                let lo = UInt16(raw[i * 2])
                let hi = UInt16(raw[i * 2 + 1])
                sum += Double(abs(Int(Int16(bitPattern: lo | (hi << 8)))))
            }
        }
        return sum / Double(samples)
    }
}
