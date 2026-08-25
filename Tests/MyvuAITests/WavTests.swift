import XCTest
@testable import MyvuAI

final class WavTests: XCTestCase {
    private let pcm = Data(repeating: 0x11, count: 640)

    private func read32(_ data: Data, at offset: Int) -> Int {
        Int(data[offset]) | Int(data[offset + 1]) << 8
            | Int(data[offset + 2]) << 16 | Int(data[offset + 3]) << 24
    }

    private func read16(_ data: Data, at offset: Int) -> Int {
        Int(data[offset]) | Int(data[offset + 1]) << 8
    }

    private func ascii(_ data: Data, at offset: Int) -> String {
        String(decoding: data[offset ..< offset + 4], as: UTF8.self)
    }

    func testTheHeaderIs44BytesAheadOfTheSamples() {
        let wav = Wav.encode(pcm: pcm)
        XCTAssertEqual(wav.count, 44 + pcm.count)
        XCTAssertEqual(ascii(wav, at: 0), "RIFF")
        XCTAssertEqual(ascii(wav, at: 8), "WAVE")
        XCTAssertEqual(ascii(wav, at: 12), "fmt ")
        XCTAssertEqual(ascii(wav, at: 36), "data")
    }

    func testTheSizesAreConsistentWithThePayload() {
        // A wrong RIFF size makes some decoders read past the end or truncate.
        let wav = Wav.encode(pcm: pcm)
        XCTAssertEqual(read32(wav, at: 4), 36 + pcm.count)
        XCTAssertEqual(read32(wav, at: 40), pcm.count)
    }

    func testTheFormatBlockDescribes16BitPcm() {
        let wav = Wav.encode(pcm: pcm, sampleRate: 16000, channels: 1)
        XCTAssertEqual(read32(wav, at: 16), 16, "PCM header length")
        XCTAssertEqual(read16(wav, at: 20), 1, "format tag: PCM")
        XCTAssertEqual(read16(wav, at: 22), 1, "channels")
        XCTAssertEqual(read32(wav, at: 24), 16000)
        XCTAssertEqual(read32(wav, at: 28), 32000, "byte rate")
        XCTAssertEqual(read16(wav, at: 32), 2, "block align")
        XCTAssertEqual(read16(wav, at: 34), 16, "bits per sample")
    }

    /// Declaring the wrong rate stretches the audio, and recognizers transcribe
    /// the result as something else entirely rather than failing.
    func testTheDeclaredRateIsWhateverTheCallerPassed() {
        let wav = Wav.encode(pcm: pcm, sampleRate: 48000, channels: 2)
        XCTAssertEqual(read32(wav, at: 24), 48000)
        XCTAssertEqual(read16(wav, at: 22), 2)
        XCTAssertEqual(read32(wav, at: 28), 48000 * 2 * 2)
        XCTAssertEqual(read16(wav, at: 32), 4)
    }

    func testTheSamplesFollowTheHeaderUntouched() {
        let wav = Wav.encode(pcm: pcm)
        XCTAssertEqual(wav.suffix(pcm.count), pcm)
    }

    func testAnEmptyBufferStillProducesAValidHeader() {
        let wav = Wav.encode(pcm: Data())
        XCTAssertEqual(wav.count, 44)
        XCTAssertEqual(read32(wav, at: 40), 0)
    }
}
