import XCTest
@testable import MyvuCore

/// The protobuf reader parses data straight off a radio from a device we do not
/// control, so most of these tests are about NOT crashing on malformed input.
final class PbTests: XCTestCase {
    func testVarintAndBytesRoundTrip() {
        let msg = Pb.varintField(1, 300) + Pb.string(2, "hello") + Pb.varintField(3, 0)

        let f = Pb.parse(msg)
        XCTAssertEqual(Pb.firstVarint(f, 1, 999), 300)
        XCTAssertEqual(Pb.firstString(f, 2, "?"), "hello")
        XCTAssertEqual(Pb.firstVarint(f, 3, 999), 0)
    }

    func testRepeatedFieldsAreAllRetained() {
        // Needed for the AI mic stream, which sends many field-5 audio chunks.
        let msg = Pb.bytes(5, Data([1])) + Pb.bytes(5, Data([2])) + Pb.bytes(5, Data([3]))

        let all = Pb.all(Pb.parse(msg), 5)
        XCTAssertEqual(all.count, 3)
        XCTAssertEqual(all[1].asBytes, Data([2]))
    }

    func testLargeVarintsSurvive() {
        let big: UInt64 = 1_739_000_000_000 // epoch millis, as used in AUTH_SUCCESS
        XCTAssertEqual(Pb.firstVarint(Pb.parse(Pb.varintField(12, big)), 12, 0), big)
    }

    func testFixed32And64AreKeptAsRawBytesInsteadOfThrowing() {
        // Throwing here would take the connection down on any unexpected
        // inbound field.
        let fixed32 = Data([UInt8((1 << 3) | 5)]) + Data([1, 2, 3, 4])
        XCTAssertEqual(Pb.firstBytes(Pb.parse(fixed32), 1).count, 4)

        let fixed64 = Data([UInt8((2 << 3) | 1)]) + Data([1, 2, 3, 4, 5, 6, 7, 8])
        XCTAssertEqual(Pb.firstBytes(Pb.parse(fixed64), 2).count, 8)
    }

    func testGroupWireTypesStopTheParseCleanly() {
        // Wire type 3 (start group) means the buffer is almost certainly
        // misaligned. Return what we have.
        let msg = Pb.string(1, "kept") + Data([UInt8((2 << 3) | 3)]) + Pb.string(4, "dropped")

        let f = Pb.parse(msg)
        XCTAssertEqual(Pb.firstString(f, 1, "?"), "kept")
        XCTAssertNil(Pb.first(f, 4), "fields after a group marker are not decoded")
    }

    func testTruncatedLengthDelimitedFieldDoesNotOverrun() {
        // Claims 200 bytes but supplies 3.
        let msg = Data([UInt8((1 << 3) | 2), 200]) + Data([1, 2, 3])
        XCTAssertTrue(Pb.parse(msg).isEmpty)
    }

    func testTruncatedVarintDoesNotOverrun() {
        // 0x80 sets the continuation bit with nothing following it.
        XCTAssertTrue(Pb.parse(Data([UInt8((1 << 3) | 0), 0x80])).isEmpty)
    }

    func testRunawayContinuationBitsTerminate() {
        // Without a shift guard this would loop past the end of the buffer.
        var evil = Data([UInt8((1 << 3) | 0)])
        evil.append(Data(repeating: 0x80, count: 31))
        XCTAssertTrue(Pb.parse(evil).isEmpty)
    }

    func testEmptyInputYieldsEmptyMap() {
        XCTAssertTrue(Pb.parse(Data()).isEmpty)
    }

    func testAccessorsFallBackWhenTypeMismatches() {
        let f = Pb.parse(Pb.varintField(1, 5))
        // Field 1 is a varint; asking for bytes must return the default rather
        // than trapping at the call site.
        XCTAssertEqual(Pb.firstBytes(f, 1), Data())
        XCTAssertEqual(Pb.firstVarint(f, 99, 7), 7)
    }
}
