import XCTest
@testable import MyvuCore

/// The advert a real XGA010C broadcasts, captured from a device scan.
///
/// It carries NO local name and NO service UUIDs — only this manufacturer data,
/// which is why discovery has to key off it. The long form is the advert and the
/// scan response as CoreBluetooth concatenates them.
final class AdvertisementMatchTests: XCTestCase {
    private let advertOnly = Hex.decode("d10b03000100021003caf0feb190d30400052001a0100002")
    private let withScanResponse = Hex.decode(
        "d10b03000100021003caf0feb190d30400052001a0100002"
            + "d20b13094d59565520304633350f001601")

    func testMatchesOnCompanyIdBeforeTheScanResponseArrives() {
        XCTAssertTrue(BleCentral.isMyvuManufacturerData(advertOnly))
    }

    func testMatchesTheConcatenatedForm() {
        XCTAssertTrue(BleCentral.isMyvuManufacturerData(withScanResponse))
    }

    func testExtractsTheDisplayName() {
        XCTAssertEqual(BleCentral.embeddedName(in: withScanResponse), "MYVU 0F35")
    }

    /// The advert half has no name in it; discovery must still not crash or
    /// invent one.
    func testNoNameBeforeTheScanResponse() {
        XCTAssertNil(BleCentral.embeddedName(in: advertOnly))
    }

    /// Company IDs from other vendors seen in the same scan must not match.
    func testIgnoresOtherVendors() {
        // Samsung TV (0x0075) and a JBL headset, both real captures.
        XCTAssertFalse(BleCentral.isMyvuManufacturerData(
            Hex.decode("7500420401017e641cb0b5a11b661cb0b5a11a01000000000000")))
        XCTAssertFalse(BleCentral.isMyvuManufacturerData(Hex.decode("d006010a7e947a9834060b020200")))
    }

    func testShortAndEmptyDataAreRejected() {
        XCTAssertFalse(BleCentral.isMyvuManufacturerData(Data()))
        XCTAssertFalse(BleCentral.isMyvuManufacturerData(Data([0xd1])))
    }
}
