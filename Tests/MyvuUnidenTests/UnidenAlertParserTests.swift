import XCTest
@testable import MyvuUniden

final class UnidenAlertParserTests: XCTestCase {
    func testIdleFourSlotsYieldsNoAlerts() {
        XCTAssertTrue(UnidenAlertParser.parse("0&0&0&0").isEmpty)
    }

    func testIdleEightSlotsYieldsNoAlerts() {
        XCTAssertTrue(UnidenAlertParser.parse("0&0&0&0&0&0&0&0").isEmpty)
    }

    func testSingleKaAlertKeepsCommaFields() {
        let alerts = UnidenAlertParser.parse("1,0,KA,4,34.700,,F,1,0")
        XCTAssertEqual(alerts.count, 1)
        let hit = alerts[0]
        XCTAssertEqual(hit.type, "KA")
        XCTAssertEqual(hit.rssi, "4")
        XCTAssertEqual(hit.rawValue, "34.700")
        XCTAssertEqual(hit.direction, "F")
        XCTAssertEqual(hit.mute, "1")
        XCTAssertEqual(hit.frequencyLabel, "34.700 GHz")
        XCTAssertEqual(hit.directionLabel, "Front")
        XCTAssertEqual(hit.muteLabel, "Not Muted")
    }

    func testEmptyAndZeroSlotsAreSkipped() {
        let alerts = UnidenAlertParser.parse("&0&1,a,K,3,24.150,,R,2,0&")
        XCTAssertEqual(alerts.map(\.type), ["K"])
        XCTAssertEqual(alerts[0].direction, "R")
        XCTAssertEqual(alerts[0].muteLabel, "Muted")
    }

    func testR4WNameMatchesRadarFilterAndIsNotI9() {
        XCTAssertTrue(UnidenAlertParser.matchesRadarName("R4W@ABCD"))
        XCTAssertTrue(UnidenAlertParser.matchesRadarName("r4w demo"))
        XCTAssertFalse(UnidenAlertParser.isI9("R4W@ABCD"))
        XCTAssertFalse(UnidenAlertParser.matchesRadarName("AirPods Pro"))
        XCTAssertFalse(UnidenAlertParser.matchesRadarName(nil))
    }

    func testR9AndAE903iAreI9() {
        XCTAssertTrue(UnidenAlertParser.isI9("R9@1234"))
        XCTAssertTrue(UnidenAlertParser.isI9("AE903i-front"))
        XCTAssertTrue(UnidenAlertParser.matchesRadarName("R9@1234"))
        XCTAssertTrue(UnidenAlertParser.matchesRadarName("AE903i"))
    }

    func testI9ForcesFrontOnSlots1to3() {
        let payload = "1,0,KA,4,34.7,,R,1,0&1,1,K,3,24.1,,R,1,0"
        let r4w = UnidenAlertParser.parse(payload, isI9: false)
        XCTAssertEqual(r4w.map(\.direction), ["R", "R"])

        let i9 = UnidenAlertParser.parse(payload, isI9: true)
        XCTAssertEqual(i9.map(\.direction), ["R", "F"])
    }

    func testLaserGunNameAndGatso() {
        let laser = UnidenAlertParser.parse("1,0,LASER,5,2,,F,1,0")[0]
        XCTAssertEqual(laser.frequencyLabel, "Stalker")

        let gatso = UnidenAlertParser.parse("1,0,RT3,4,0,,F,1,0")[0]
        XCTAssertEqual(gatso.frequencyLabel, "Gatso")
    }
}

final class UnidenAlertCardTests: XCTestCase {
    func testCardUsesFirstHitAndCountsTheRest() {
        let alerts = UnidenAlertParser.parse(
            "1,0,KA,4,34.700,,F,1,0&1,1,K,2,24.150,,R,1,0")
        XCTAssertEqual(UnidenAlertCard.title(for: alerts), "KA 34.700 GHz + 1")
        XCTAssertEqual(UnidenAlertCard.body(for: alerts),
                       "Front · strength 4 · K 24.150 GHz Rear · strength 2")
    }

    func testSingleLaserCard() {
        let alerts = UnidenAlertParser.parse("1,0,LASER,8,2,,F,1,0")
        XCTAssertEqual(UnidenAlertCard.title(for: alerts), "LASER Stalker")
        XCTAssertEqual(UnidenAlertCard.body(for: alerts), "Front · strength 8")
    }

    func testEmptyAlertsHaveNoCard() {
        XCTAssertTrue(UnidenAlertCard.title(for: []).isEmpty)
        XCTAssertTrue(UnidenAlertCard.body(for: []).isEmpty)
    }
}

final class UnidenDriveTests: XCTestCase {
    func testAutoConnectThresholdIsTenMph() {
        XCTAssertEqual(UnidenDrive.startMph, 10)
        XCTAssertEqual(UnidenDrive.startSpeedMps, 4.4704, accuracy: 0.001)
    }
}

final class UnidenAlertGateTests: XCTestCase {
    private let t0 = Date(timeIntervalSince1970: 1_000)

    func testEmptyClearsImmediately() {
        XCTAssertEqual(UnidenAlertGate.decision(hasHits: false, lastSentAt: t0, now: t0),
                       .clear)
    }

    func testFirstHitSendsImmediately() {
        XCTAssertEqual(UnidenAlertGate.decision(hasHits: true, lastSentAt: nil, now: t0),
                       .sendNow)
    }

    func testSecondHitWithinEightSecondsWaits() {
        let now = t0.addingTimeInterval(3)
        XCTAssertEqual(
            UnidenAlertGate.decision(hasHits: true, lastSentAt: t0, now: now),
            .wait(5))
    }

    func testHitAfterEightSecondsSends() {
        let now = t0.addingTimeInterval(8)
        XCTAssertEqual(
            UnidenAlertGate.decision(hasHits: true, lastSentAt: t0, now: now),
            .sendNow)
    }
}

final class UnidenUuidsTests: XCTestCase {
    func testAlertNotifyUuidMatchesReverse() {
        XCTAssertEqual(UnidenUuids.alertNotify.uuidString.lowercased(),
                       "6eb675ab-8bd1-1b9a-7444-621e52ec6823")
        XCTAssertEqual(UnidenUuids.dataService.uuidString.lowercased(),
                       "18424398-7cbc-11e9-8f9e-2a86e4085a59")
        XCTAssertEqual(UnidenUuids.etcNotify.uuidString.lowercased(),
                       "6c290d2e-1c03-aca1-ab48-a9b908bae79e")
    }
}

final class UnidenScanModeTests: XCTestCase {
    func testBackgroundScanFiltersToUnidenServices() {
        let uuids = UnidenScanMode.serviceFilter(backgrounded: true)
        XCTAssertEqual(uuids, [UnidenUuids.dataService, UnidenUuids.commandService])
    }

    func testForegroundScanIsUnfilteredSoTheAdvertisedNameCanMatch() {
        XCTAssertNil(UnidenScanMode.serviceFilter(backgrounded: false))
    }
}

final class UnidenEtcParserTests: XCTestCase {
    func testIdleEtcHasNoPoi() {
        XCTAssertTrue(UnidenEtcParser.poiAlerts(from: "12.6&0&0&0&0&0&0").isEmpty)
    }

    func testSpeedCameraIncludesDistanceAndLimit() {
        let hits = UnidenEtcParser.poiAlerts(
            from: "12.6&SPEEDCAM,800,45&N,32,10,C&0&0&0&0")
        XCTAssertEqual(hits.count, 1)
        XCTAssertEqual(hits[0].type, "SPEEDCAM")
        XCTAssertEqual(hits[0].info, "800")
        XCTAssertEqual(hits[0].rawValue, "45")
        XCTAssertEqual(UnidenAlertCard.title(for: hits), "Speed camera")
        XCTAssertEqual(UnidenAlertCard.body(for: hits), "800 ft · limit 45 mph")
    }

    func testRedLightCameraOmitsLimit() {
        let hits = UnidenEtcParser.poiAlerts(
            from: "12.6&REDLIGHT,250,0&N,32,10,C&0&0&0&0")
        XCTAssertEqual(UnidenAlertCard.title(for: hits), "Red light camera")
        XCTAssertEqual(UnidenAlertCard.body(for: hits), "250 ft")
    }

    func testNoneAndEmptyPoiAreIgnored() {
        XCTAssertTrue(UnidenEtcParser.poiAlerts(from: "12.6&NONE,0,0&0").isEmpty)
        XCTAssertTrue(UnidenEtcParser.poiAlerts(from: "0&0&0&0").isEmpty)
    }

    func testPoiPlusRadarCardKeepsBoth() {
        let poi = UnidenEtcParser.poiAlerts(from: "12.6&SPEEDCAM,400,30&0")
        let radar = UnidenAlertParser.parse("1,0,KA,4,34.700,,F,1,0")
        let combined = poi + radar
        XCTAssertEqual(UnidenAlertCard.title(for: combined), "Speed camera + 1")
    }
}
