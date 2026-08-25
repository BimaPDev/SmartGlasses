import Foundation

/// Wraps raw PCM in a WAV container.
///
/// Speech APIs want a file, not a buffer, and this is the cheapest container
/// that carries the format with it. Lives in the SDK rather than in each
/// adapter because every `SpeechToText` implementation needs exactly this.
public enum Wav {
    /// The rate the glasses' Opus stream is nominally encoded at.
    public static let glassesSampleRate = 16000
    public static let glassesChannels = 1

    private static let headerSize = 44

    /// - Parameters:
    ///   - pcm: signed 16-bit little-endian samples
    ///   - sampleRate: the decoder's ACTUAL output rate. Declaring 16 kHz for
    ///     48 kHz audio stretches it to a third speed, which speech recognition
    ///     happily transcribes as something entirely different.
    public static func encode(pcm: Data, sampleRate: Int = glassesSampleRate,
                              channels: Int = glassesChannels) -> Data {
        let byteRate = sampleRate * channels * 2
        var out = Data(capacity: headerSize + pcm.count)

        out.append(contentsOf: Array("RIFF".utf8))
        out.append(le32(36 + pcm.count))
        out.append(contentsOf: Array("WAVE".utf8))

        out.append(contentsOf: Array("fmt ".utf8))
        out.append(le32(16)) // PCM header size
        out.append(le16(1)) // format: PCM
        out.append(le16(channels))
        out.append(le32(sampleRate))
        out.append(le32(byteRate))
        out.append(le16(channels * 2)) // block align
        out.append(le16(16)) // bits per sample

        out.append(contentsOf: Array("data".utf8))
        out.append(le32(pcm.count))
        out.append(pcm)
        return out
    }

    private static func le16(_ v: Int) -> Data {
        Data([UInt8(v & 0xFF), UInt8((v >> 8) & 0xFF)])
    }

    private static func le32(_ v: Int) -> Data {
        Data([UInt8(v & 0xFF), UInt8((v >> 8) & 0xFF),
              UInt8((v >> 16) & 0xFF), UInt8((v >> 24) & 0xFF)])
    }
}
