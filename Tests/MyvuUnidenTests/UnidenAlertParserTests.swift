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
        XCTAssertEqual(UnidenAlertGate.decision(hasHits: false, changed: true,
                                                lastSentAt: t0, now: t0),
                       .clear)
    }

    func testFirstHitSendsImmediately() {
        XCTAssertEqual(UnidenAlertGate.decision(hasHits: true, changed: true,
                                                lastSentAt: nil, now: t0),
                       .sendNow)
    }

    func testUnchangedReadingIsHeldNoMatterHowLongItHasBeen() {
        XCTAssertEqual(UnidenAlertGate.decision(hasHits: true, changed: false,
                                                lastSentAt: t0, now: t0),
                       .hold)
        let muchLater = t0.addingTimeInterval(600)
        XCTAssertEqual(UnidenAlertGate.decision(hasHits: true, changed: false,
                                                lastSentAt: t0, now: muchLater),
                       .hold)
    }

    func testChangeInsideTheFloorCoalescesInsteadOfDropping() {
        let now = t0.addingTimeInterval(0.5)
        XCTAssertEqual(
            UnidenAlertGate.decision(hasHits: true, changed: true,
                                     lastSentAt: t0, now: now),
            .wait(UnidenAlertGate.minInterval - 0.5))
    }

    func testChangeAfterTheFloorSendsImmediately() {
        let now = t0.addingTimeInterval(UnidenAlertGate.minInterval)
        XCTAssertEqual(
            UnidenAlertGate.decision(hasHits: true, changed: true,
                                     lastSentAt: t0, now: now),
            .sendNow)
    }

    func testFloorIsShortEnoughToTrackAClosingAlert() {
        XCTAssertLessThanOrEqual(UnidenAlertGate.minInterval, 2)
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

    func testCameraIdentityFollowsTheDistance() {
        let far = UnidenEtcParser.poiAlerts(from: "12.6&REDLIGHT,900,0&0")
        let near = UnidenEtcParser.poiAlerts(from: "12.6&REDLIGHT,250,0&0")
        XCTAssertNotEqual(UnidenAlertCard.identity(for: far),
                          UnidenAlertCard.identity(for: near))
        XCTAssertEqual(UnidenAlertCard.identity(for: near),
                       UnidenAlertCard.identity(
                           for: UnidenEtcParser.poiAlerts(from: "12.6&REDLIGHT,250,0&0")))
    }

    func testSpeedCameraIdentityFollowsTheDistance() {
        let far = UnidenEtcParser.poiAlerts(from: "12.6&SPEEDCAM,800,45&0")
        let near = UnidenEtcParser.poiAlerts(from: "12.6&SPEEDCAM,400,45&0")
        XCTAssertNotEqual(UnidenAlertCard.identity(for: far),
                          UnidenAlertCard.identity(for: near))
    }

    func testRadarIdentityFollowsStrength() {
        let one = UnidenAlertParser.parse("1,0,KA,1,34.700,,F,1,0")
        let two = UnidenAlertParser.parse("1,0,KA,2,34.700,,F,1,0")
        XCTAssertNotEqual(UnidenAlertCard.identity(for: one),
                          UnidenAlertCard.identity(for: two))
    }

    func testIdentityIgnoresWhatTheCardNeverShows() {
        // Field 7 is mute state, field 8 rcv — neither reaches the banner.
        let notMuted = UnidenAlertParser.parse("1,0,KA,4,34.700,,F,1,0")
        let muted = UnidenAlertParser.parse("1,0,KA,4,34.700,,F,2,1")
        XCTAssertEqual(UnidenAlertCard.identity(for: notMuted),
                       UnidenAlertCard.identity(for: muted))
    }

    func testAutoMutedHitAlertsOnceAcrossStrengthChanges() {
        let weak = UnidenAlertParser.parse("1,0,K,1,24.150,,F,4,0")
        let strong = UnidenAlertParser.parse("1,0,K,6,24.152,,F,4,0")
        XCTAssertTrue(weak[0].isAutoMuted)
        // The card still reads differently — only the re-alert decision holds.
        XCTAssertNotEqual(UnidenAlertCard.identity(for: weak),
                          UnidenAlertCard.identity(for: strong))
        XCTAssertEqual(UnidenAlertCard.notifyIdentity(for: weak),
                       UnidenAlertCard.notifyIdentity(for: strong))
    }

    func testLiveHitJoiningAnAutoMutedOneStillAlerts() {
        let muted = UnidenAlertParser.parse("1,0,K,3,24.150,,F,4,0")
        let joined = UnidenAlertParser.parse(
            "1,0,K,3,24.150,,F,4,0&1,1,KA,5,34.700,,F,1,0")
        XCTAssertNotEqual(UnidenAlertCard.notifyIdentity(for: muted),
                          UnidenAlertCard.notifyIdentity(for: joined))
        // Mixed set: back to the full reading, so strength keeps it moving.
        let louder = UnidenAlertParser.parse(
            "1,0,K,3,24.150,,F,4,0&1,1,KA,7,34.700,,F,1,0")
        XCTAssertNotEqual(UnidenAlertCard.notifyIdentity(for: joined),
                          UnidenAlertCard.notifyIdentity(for: louder))
    }

    func testAutoMutedBandLeavingOrJoiningAlertsAgain() {
        let front = UnidenAlertParser.parse("1,0,K,3,24.150,,F,4,0")
        let frontAndRear = UnidenAlertParser.parse(
            "1,0,K,3,24.150,,F,4,0&1,1,X,2,10.525,,R,4,0")
        XCTAssertNotEqual(UnidenAlertCard.notifyIdentity(for: front),
                          UnidenAlertCard.notifyIdentity(for: frontAndRear))
    }

    func testHandStoredMuteMemoryStillAlertsNormally() {
        // mute_type 3 is Mute Memory, not Auto Mute Memory.
        let one = UnidenAlertParser.parse("1,0,K,1,24.150,,F,3,0")
        let two = UnidenAlertParser.parse("1,0,K,5,24.150,,F,3,0")
        XCTAssertFalse(one[0].isAutoMuted)
        XCTAssertNotEqual(UnidenAlertCard.notifyIdentity(for: one),
                          UnidenAlertCard.notifyIdentity(for: two))
    }

    func testIdentityFollowsASecondHitJoining() {
        let alone = UnidenEtcParser.poiAlerts(from: "12.6&REDLIGHT,250,0&0")
        let joined = alone + UnidenAlertParser.parse("1,0,KA,4,34.700,,F,1,0")
        XCTAssertNotEqual(UnidenAlertCard.identity(for: alone),
                          UnidenAlertCard.identity(for: joined))
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

final class UnidenPoiEncounterTests: XCTestCase {
    private func speedCam(_ feet: Int, limit: Int = 45) -> [UnidenAlert] {
        UnidenEtcParser.poiAlerts(from: "12.6&SPEEDCAM,\(feet),\(limit)&0")
    }

    private func redLight(_ feet: Int) -> [UnidenAlert] {
        UnidenEtcParser.poiAlerts(from: "12.6&REDLIGHT,\(feet),0&0")
    }

    func testSpeedCameraAlertsOnceForTheWholeApproach() {
        var enc = UnidenPoiEncounter()
        let first = enc.notifyIdentity(for: speedCam(900))
        for feet in [850, 800, 600, 400, 250, 100, 40] {
            XCTAssertEqual(enc.notifyIdentity(for: speedCam(feet)), first)
        }
    }

    func testRedLightCameraAlertsOnceForTheWholeApproach() {
        var enc = UnidenPoiEncounter()
        let first = enc.notifyIdentity(for: redLight(900))
        XCTAssertEqual(enc.notifyIdentity(for: redLight(300)), first)
        XCTAssertEqual(enc.notifyIdentity(for: redLight(120)), first)
    }

    func testRepeatedCallsWithTheSameHitsDoNotAdvanceThePass() {
        var enc = UnidenPoiEncounter()
        let a = enc.notifyIdentity(for: speedCam(500))
        let b = enc.notifyIdentity(for: speedCam(500))
        XCTAssertEqual(a, b)
    }

    func testPassingOneCameraAndLatchingTheNextAlertsAgain() {
        var enc = UnidenPoiEncounter()
        let approaching = enc.notifyIdentity(for: speedCam(400))
        XCTAssertEqual(enc.notifyIdentity(for: speedCam(80)), approaching)
        // Distance climbing back up is the detector switching to the next one.
        let next = enc.notifyIdentity(for: speedCam(1_500))
        XCTAssertNotEqual(next, approaching)
        XCTAssertEqual(enc.notifyIdentity(for: speedCam(900)), next)
    }

    func testJitterInsideTheResetMarginIsStillTheSamePass() {
        var enc = UnidenPoiEncounter()
        let first = enc.notifyIdentity(for: speedCam(600))
        XCTAssertEqual(enc.notifyIdentity(for: speedCam(500)), first)
        // Back up a little — GPS noise, not a new camera.
        XCTAssertEqual(enc.notifyIdentity(for: speedCam(700)), first)
    }

    func testDifferentCameraKindAlertsImmediately() {
        var enc = UnidenPoiEncounter()
        let cam = enc.notifyIdentity(for: speedCam(400))
        XCTAssertNotEqual(enc.notifyIdentity(for: redLight(400)), cam)
    }

    func testDifferentPostedLimitIsADifferentCamera() {
        var enc = UnidenPoiEncounter()
        let thirty = enc.notifyIdentity(for: speedCam(400, limit: 30))
        XCTAssertNotEqual(enc.notifyIdentity(for: speedCam(400, limit: 45)), thirty)
    }

    func testCameraDroppingOutAndComingBackAlertsAgain() {
        var enc = UnidenPoiEncounter()
        let first = enc.notifyIdentity(for: speedCam(500))
        _ = enc.notifyIdentity(for: [])
        XCTAssertNotEqual(enc.notifyIdentity(for: speedCam(500)), first)
    }

    func testResetMakesTheSameCameraAlertAgain() {
        var enc = UnidenPoiEncounter()
        let first = enc.notifyIdentity(for: speedCam(500))
        enc.reset()
        XCTAssertNotEqual(enc.notifyIdentity(for: speedCam(500)), first)
    }

    func testRadarHitBesideACameraStillAlertsOnItsOwnTerms() {
        var enc = UnidenPoiEncounter()
        let camOnly = enc.notifyIdentity(for: speedCam(600))
        let withKa = enc.notifyIdentity(
            for: speedCam(500) + UnidenAlertParser.parse("1,0,KA,3,34.700,,F,1,0"))
        XCTAssertNotEqual(withKa, camOnly)
        let louder = enc.notifyIdentity(
            for: speedCam(400) + UnidenAlertParser.parse("1,0,KA,6,34.700,,F,1,0"))
        XCTAssertNotEqual(louder, withKa)
        // The camera itself is still the same pass: strength falling back to
        // where it was returns the same identity, distance notwithstanding.
        XCTAssertEqual(
            enc.notifyIdentity(
                for: speedCam(200) + UnidenAlertParser.parse("1,0,KA,3,34.700,,F,1,0")),
            withKa)
    }

    func testNonCameraAlertsKeepTheirNormalIdentity() {
        var enc = UnidenPoiEncounter()
        let one = UnidenAlertParser.parse("1,0,KA,1,34.700,,F,1,0")
        let two = UnidenAlertParser.parse("1,0,KA,2,34.700,,F,1,0")
        XCTAssertEqual(enc.notifyIdentity(for: one),
                       UnidenAlertCard.notifyIdentity(for: one))
        XCTAssertNotEqual(enc.notifyIdentity(for: two),
                          UnidenAlertCard.notifyIdentity(for: one))
    }

    func testUserMarkStillCountsDown() {
        var enc = UnidenPoiEncounter()
        let far = UnidenEtcParser.poiAlerts(from: "12.6&USERMARK,900,0&0")
        let near = UnidenEtcParser.poiAlerts(from: "12.6&USERMARK,300,0&0")
        XCTAssertFalse(far[0].isCameraPoi)
        XCTAssertNotEqual(enc.notifyIdentity(for: near),
                          enc.notifyIdentity(for: far))
    }

    func testTheCardItselfStillReadsTheCurrentDistance() {
        // Only the re-alert decision is collapsed; a card that does get pushed
        // must never show a stale number.
        XCTAssertEqual(UnidenAlertCard.body(for: speedCam(250, limit: 30)),
                       "250 ft · limit 30 mph")
        XCTAssertNotEqual(UnidenAlertCard.identity(for: speedCam(900)),
                          UnidenAlertCard.identity(for: speedCam(250)))
    }
}
