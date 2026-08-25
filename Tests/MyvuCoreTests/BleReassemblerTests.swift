import CoreBluetooth
import XCTest
@testable import MyvuCore

final class BleReassemblerTests: XCTestCase {
    private func text(_ d: Data?) -> String? {
        guard let d else { return nil }
        return String(data: d, encoding: .utf8)
    }

    func testFragmentsAreJoinedInSequenceOrder() {
        let r = BleReassembler()
        r.start(frameCount: 3, pkgType: 16)

        XCTAssertNil(r.add(seq: 1, payload: Data("aaa".utf8)))
        XCTAssertNil(r.add(seq: 2, payload: Data("bbb".utf8)))
        XCTAssertEqual(text(r.add(seq: 3, payload: Data("ccc".utf8))), "aaabbbccc")
    }

    func testOutOfOrderFragmentsStillJoinCorrectly() {
        // BLE delivery order is not guaranteed, so ordering must come from the
        // sequence number rather than arrival order.
        let r = BleReassembler()
        r.start(frameCount: 3, pkgType: 16)

        XCTAssertNil(r.add(seq: 3, payload: Data("ccc".utf8)))
        XCTAssertNil(r.add(seq: 1, payload: Data("aaa".utf8)))
        XCTAssertEqual(text(r.add(seq: 2, payload: Data("bbb".utf8))), "aaabbbccc")
    }

    func testMixCtrHeaderPrecedesFragments() {
        let r = BleReassembler()
        r.start(frameCount: 2, pkgType: 0, header: Data("HEAD".utf8))

        XCTAssertNil(r.add(seq: 1, payload: Data("one".utf8)))
        XCTAssertEqual(text(r.add(seq: 2, payload: Data("two".utf8))), "HEADonetwo")
    }

    func testActiveFlagTracksAMessageInFlight() {
        // The DMTU deferral in BleMessageChannel keys off this: chunk size must
        // not change mid-message.
        let r = BleReassembler()
        XCTAssertFalse(r.isActive)

        r.start(frameCount: 2, pkgType: 16)
        XCTAssertTrue(r.isActive)
        _ = r.add(seq: 1, payload: Data([1]))
        XCTAssertTrue(r.isActive)
        _ = r.add(seq: 2, payload: Data([2]))
        XCTAssertFalse(r.isActive)
    }

    func testResetClearsPartialState() {
        let r = BleReassembler()
        r.start(frameCount: 2, pkgType: 16)
        _ = r.add(seq: 1, payload: Data("stale".utf8))
        r.reset()

        r.start(frameCount: 1, pkgType: 0)
        XCTAssertEqual(text(r.add(seq: 1, payload: Data("fresh".utf8))), "fresh")
    }

    func testPkgTypeSurvivesUntilDelivery() {
        let r = BleReassembler()
        r.start(frameCount: 1, pkgType: 17)
        XCTAssertEqual(r.pkgType, 17)
        _ = r.add(seq: 1, payload: Data([1]))
        XCTAssertEqual(r.pkgType, 17, "pkgType must still be readable on completion")
    }

    func testUuidHelperMatchesTheAppsFormat() {
        XCTAssertEqual(Uuids.fullString(3025), "00000bd1-0000-1000-8000-00805f9b34fb")
        XCTAssertEqual(Uuids.fullString(0x2020), "00002020-0000-1000-8000-00805f9b34fb")
        XCTAssertEqual(Uuids.fullString(0x2021), "00002021-0000-1000-8000-00805f9b34fb")
        XCTAssertEqual(Uuids.fullString(0x2022), "00002022-0000-1000-8000-00805f9b34fb")
    }

    /// `CBUUID` compares equal across its short and full forms, which is what
    /// lets characteristic matching work regardless of how CoreBluetooth reports
    /// a discovered UUID.
    func testCbuuidMatchesAcrossShortAndFullForms() {
        XCTAssertEqual(Uuids.airInternal, CBUUID(string: Uuids.fullString(0x2020)))
        XCTAssertEqual(Uuids.service, CBUUID(string: Uuids.fullString(3025)))
    }

    func testChannelSetsArePrioritisedAirThenV2() {
        XCTAssertEqual(Uuids.channelSets.count, 2)
        XCTAssertEqual(Uuids.channelSets[0].internalChar, Uuids.airInternal)
        XCTAssertEqual(Uuids.channelSets[0].externalChar, Uuids.airExternal)
        XCTAssertEqual(Uuids.channelSets[0].urgentChar, Uuids.airUrgent)
        // The urgent characteristic is always internal+2 within a family.
        XCTAssertEqual(Uuids.channelSets[1].urgentChar, Uuids.make(0x2012))
    }
}
