import Foundation
import MyvuCore

/// Collects the glasses' microphone stream.
///
/// The glasses capture audio themselves and push it to the phone as a run of
/// code:109 (`CODE_RECORD_DATA_TRANS`) messages, carried in protobuf field 5 of
/// the StMessage envelope (the same slot `StarryNetMessage.setData` uses).
///
/// Format, taken from the official app's OpusDecoder: Opus, 16 kHz, mono, with
/// frames arriving at one of four discrete sizes (40, 83, 120, 240 bytes).
///
/// This type only accumulates frames; decoding happens elsewhere, so capture can
/// be verified on its own.
public final class GlassesMicStream {
    /// Field 5 of the StMessage envelope carries the binary payload.
    private static let fieldAudio = 5
    /// Guards against unbounded growth if an utterance never ends.
    /// ~40s at 20ms per frame.
    private static let maxFrames = 2000
    /// Frame sizes the device actually emits, per the app's `OpusDecoder`.
    /// Only used to report what was seen; nothing is rejected on size.
    public static let knownFrameSizes: Set<Int> = [40, 83, 120, 240]

    private var frames: [Data] = []
    private(set) public var isCapturing = false
    /// The frames extracted from the most recent payload.
    private(set) public var justAdded: [Data] = []
    /// Payloads whose length framing did not parse.
    private(set) public var malformedCount = 0
    /// code:109 messages whose field 5 could not be read at all.
    private(set) public var rejectedCount = 0
    /// Distinct frame sizes seen, to learn what the device really sends.
    private(set) public var observedSizes: Set<Int> = []

    public init() {}

    public var frameCount: Int { frames.count }
    /// The Opus frames captured so far, oldest first.
    public var captured: [Data] { frames }

    /// Begins a new utterance, discarding anything previously buffered.
    public func start() {
        frames.removeAll()
        justAdded.removeAll()
        malformedCount = 0
        rejectedCount = 0
        observedSizes.removeAll()
        isCapturing = true
    }

    public func stop() {
        isCapturing = false
    }

    /// Offers a code:109 relay body. Returns true if it contained audio.
    ///
    /// Safe to call when not capturing — the glasses stream whenever they are
    /// listening, which is not always when we want to record.
    @discardableResult
    public func offer(_ relayBody: Data) -> Bool {
        guard let field5 = Self.extractAudio(relayBody) else {
            // The caller already identified this as code:109, so failing here
            // means field 5 is not where we think the audio lives.
            rejectedCount += 1
            return false
        }
        guard isCapturing else { return true } // recognised, deliberately discarded

        // field 5 is NOT a raw Opus frame: it is one or more Opus frames each
        // prefixed with a 2-byte big-endian length, matching the official
        // encoder's pack format (OpusCodec byteList2ByteArr). Feeding the whole
        // blob — length bytes included — to a decoder corrupts every frame and
        // produces speech-shaped gibberish. Strip the prefixes here.
        justAdded.removeAll()
        var i = field5.startIndex
        while i + 2 <= field5.endIndex {
            let len = Int(field5[i]) << 8 | Int(field5[i + 1])
            i += 2
            guard len > 0, i + len <= field5.endIndex else {
                // Not the framing we expect. Record it rather than guessing.
                malformedCount += 1
                break
            }
            let frame = Data(field5[i ..< i + len])
            i += len

            guard frames.count < GlassesMicStream.maxFrames else {
                SdkLog.warn("glasses mic buffer full (\(GlassesMicStream.maxFrames)) -- stopping")
                isCapturing = false
                break
            }
            observedSizes.insert(frame.count)
            frames.append(frame)
            justAdded.append(frame)
        }
        return true
    }

    /// Pulls field 5 out of the StMessage envelope, or nil if absent.
    static func extractAudio(_ relayBody: Data) -> Data? {
        // Pb.parse is lenient by design, so inbound radio noise yields an empty
        // field set rather than throwing.
        let audio = Pb.firstBytes(Pb.parse(relayBody), fieldAudio)
        return audio.isEmpty ? nil : audio
    }
}
