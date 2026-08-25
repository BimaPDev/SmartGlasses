import XCTest
@testable import MyvuAI
@testable import MyvuCore

final class GlassesMicStreamTests: XCTestCase {
    /// Field 5 of the StMessage envelope, holding length-prefixed Opus frames.
    private func body(frames: [Data]) -> Data {
        var packed = Data()
        for f in frames {
            packed.append(UInt8(f.count >> 8))
            packed.append(UInt8(f.count & 0xFF))
            packed.append(f)
        }
        return Pb.bytes(5, packed)
    }

    private func frame(_ byte: UInt8, size: Int) -> Data {
        Data(repeating: byte, count: size)
    }

    func testLengthPrefixesAreStripped() {
        // Feeding the whole blob to a decoder — length bytes included —
        // corrupts every frame and produces speech-shaped gibberish.
        let mic = GlassesMicStream()
        mic.start()
        XCTAssertTrue(mic.offer(body(frames: [frame(1, size: 40), frame(2, size: 83)])))

        XCTAssertEqual(mic.frameCount, 2)
        XCTAssertEqual(mic.captured[0], frame(1, size: 40))
        XCTAssertEqual(mic.captured[1], frame(2, size: 83))
        XCTAssertEqual(mic.observedSizes, [40, 83])
    }

    func testOnePayloadCanCarrySeveralFrames() {
        let mic = GlassesMicStream()
        mic.start()
        mic.offer(body(frames: [frame(1, size: 40), frame(2, size: 40), frame(3, size: 40)]))
        XCTAssertEqual(mic.justAdded.count, 3, "justAdded holds only the newest payload")

        mic.offer(body(frames: [frame(4, size: 40)]))
        XCTAssertEqual(mic.justAdded.count, 1)
        XCTAssertEqual(mic.frameCount, 4)
    }

    func testFramesAreDiscardedWhileNotCapturing() {
        // The glasses stream whenever they are listening, which is not always
        // when we want to record.
        let mic = GlassesMicStream()
        XCTAssertTrue(mic.offer(body(frames: [frame(1, size: 40)])),
                      "still recognised as audio")
        XCTAssertEqual(mic.frameCount, 0)
    }

    func testStartDiscardsAPreviousUtterance() {
        let mic = GlassesMicStream()
        mic.start()
        mic.offer(body(frames: [frame(1, size: 40)]))
        mic.start()
        XCTAssertEqual(mic.frameCount, 0)
        XCTAssertTrue(mic.observedSizes.isEmpty)
    }

    func testABodyWithoutFieldFiveIsRejected() {
        let mic = GlassesMicStream()
        mic.start()
        // Field 4 is the JSON slot, not the audio slot.
        XCTAssertFalse(mic.offer(Pb.string(4, #"{"code":109}"#)))
        XCTAssertEqual(mic.rejectedCount, 1)
        XCTAssertEqual(mic.frameCount, 0)
    }

    func testAnImpossibleLengthPrefixIsCountedNotDecoded() {
        // Claiming more bytes than remain means the framing is not what we
        // think; capturing the truncated tail would feed the decoder garbage.
        let mic = GlassesMicStream()
        mic.start()
        var packed = Data([0xFF, 0xFF])
        packed.append(Data(repeating: 7, count: 10))
        mic.offer(Pb.bytes(5, packed))

        XCTAssertEqual(mic.frameCount, 0)
        XCTAssertEqual(mic.malformedCount, 1)
    }

    func testFramesAlreadyTakenSurviveAMalformedTail() {
        let mic = GlassesMicStream()
        mic.start()
        var packed = Data()
        packed.append(contentsOf: [0, 40])
        packed.append(frame(1, size: 40))
        packed.append(contentsOf: [0xFF, 0xFF]) // a length that cannot be satisfied
        mic.offer(Pb.bytes(5, packed))

        XCTAssertEqual(mic.frameCount, 1)
        XCTAssertEqual(mic.malformedCount, 1)
    }

    func testGarbageNeverThrows() {
        // Inbound radio data: a malformed frame must never propagate.
        let mic = GlassesMicStream()
        mic.start()
        XCTAssertFalse(mic.offer(Data([0xFF, 0xFE, 0x03, 0x00, 0x99])))
        XCTAssertFalse(mic.offer(Data()))
    }
}
