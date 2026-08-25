import XCTest
@testable import MyvuAI

final class VoiceActivityTests: XCTestCase {
    /// Runs `count` chunks at one level and returns the last event.
    @discardableResult
    private func feed(_ vad: inout VoiceActivity, level: Double, count: Int,
                      startingAt t: Double = 0,
                      step: Double = 0.02) -> VoiceActivity.Event {
        var event = VoiceActivity.Event.quiet
        for i in 0 ..< count {
            event = vad.consume(energy: level, now: t + Double(i) * step)
        }
        return event
    }

    func testAQuietRoomProducesNoSpeech() {
        var vad = VoiceActivity()
        XCTAssertEqual(feed(&vad, level: 5, count: 50), .quiet)
        XCTAssertFalse(vad.speechStarted)
    }

    func testSpeechAfterCalibrationIsDetected() {
        var vad = VoiceActivity()
        feed(&vad, level: 10, count: VoiceActivity.calibrationChunks)
        XCTAssertEqual(vad.consume(energy: 4000, now: 1), .speechStarted)
        XCTAssertEqual(vad.consume(energy: 4000, now: 1.02), .speech)
    }

    /// A fixed threshold fires before anyone speaks, because the absolute level
    /// depends on the microphone, its gain and the room.
    func testTheThresholdRisesWithTheNoiseFloor() {
        var vad = VoiceActivity()
        feed(&vad, level: 60, count: VoiceActivity.calibrationChunks)
        XCTAssertEqual(vad.noiseFloor, 60, accuracy: 1)
        XCTAssertEqual(vad.threshold, 60 * VoiceActivity.speechOverNoise, accuracy: 1)
        // Loud room, so this is background, not speech.
        XCTAssertEqual(vad.consume(energy: 150, now: 1), .quiet)
    }

    func testTheThresholdNeverFallsBelowTheFloorConstant() {
        // In a silent room the ratio alone would put the bar at almost zero and
        // every breath would read as speech.
        var vad = VoiceActivity()
        feed(&vad, level: 1, count: VoiceActivity.calibrationChunks)
        XCTAssertEqual(vad.threshold, VoiceActivity.speechEnergy, accuracy: 0.001)
    }

    /// REGRESSION: averaging every early chunk unconditionally meant that
    /// talking straight after the button press folded the speech itself into the
    /// "noise floor", and the threshold then sat above the speaker's own level
    /// for the rest of the turn — speech was never detected at all.
    func testSpeakingImmediatelyStillRegistersAsSpeech() {
        var vad = VoiceActivity()
        var events: [VoiceActivity.Event] = []
        for i in 0 ..< 10 {
            events.append(vad.consume(energy: 5000, now: Double(i) * 0.02))
        }
        XCTAssertTrue(events.contains(.speechStarted))
        XCTAssertLessThan(vad.noiseFloor, 100, "loud chunks must not become the floor")
    }

    func testOneLoudChunkDuringCalibrationIsNotSpeech() {
        // A pop or a breath is a single chunk; a word is a run of them.
        var vad = VoiceActivity()
        XCTAssertEqual(vad.consume(energy: 5000, now: 0), .quiet)
        XCTAssertEqual(vad.consume(energy: 4, now: 0.02), .quiet)
        XCTAssertFalse(vad.speechStarted)
    }

    func testSilenceAfterSpeechEndsTheUtterance() {
        var vad = VoiceActivity()
        feed(&vad, level: 10, count: VoiceActivity.calibrationChunks)
        XCTAssertEqual(vad.consume(energy: 4000, now: 1), .speechStarted)

        // Still inside the hold: not over yet.
        XCTAssertEqual(vad.consume(energy: 1, now: 1 + VoiceActivity.silenceHold - 0.1), .quiet)
        XCTAssertEqual(vad.consume(energy: 1, now: 1 + VoiceActivity.silenceHold + 0.1),
                       .speechEnded)
    }

    func testSilenceBeforeAnySpeechDoesNotEndAnything() {
        // Otherwise the utterance would "end" before it began, on the very
        // silence the calibration is measuring.
        var vad = VoiceActivity()
        XCTAssertEqual(feed(&vad, level: 1, count: 200, step: 0.1), .quiet)
    }

    func testTheEndIsReportedOnlyOnce() {
        var vad = VoiceActivity()
        feed(&vad, level: 10, count: VoiceActivity.calibrationChunks)
        _ = vad.consume(energy: 4000, now: 1)
        XCTAssertEqual(vad.consume(energy: 1, now: 3), .speechEnded)
        XCTAssertEqual(vad.consume(energy: 1, now: 4), .quiet)
        XCTAssertEqual(vad.consume(energy: 9000, now: 5), .quiet)
    }

    // MARK: - Energy

    func testEnergyIsTheMeanAbsoluteSampleValue() {
        // Two 16-bit little-endian samples: +1000 and -1000.
        var pcm = Data()
        pcm.append(contentsOf: [0xE8, 0x03])
        pcm.append(contentsOf: [0x18, 0xFC])
        XCTAssertEqual(VoiceActivity.energy(pcm), 1000, accuracy: 0.5)
    }

    func testEnergyOfSilenceIsZero() {
        XCTAssertEqual(VoiceActivity.energy(Data(repeating: 0, count: 512)), 0)
        XCTAssertEqual(VoiceActivity.energy(Data()), 0)
        XCTAssertEqual(VoiceActivity.energy(Data([0x01])), 0, "a half sample is no sample")
    }
}
