import Foundation
import MyvuCore

/// The firmware images bundled with this app, as a list rather than one hardcoded pack.
///
/// Both are built from **1.0.11.53**, which is what these glasses run. A pack built for
/// a different base (the old `1.0.12.83_BIMA` one) is not interchangeable and is no
/// longer shipped here.
///
/// Downgrades are fine: `AirOta.files(fromZip:)` only unpacks, and nothing on this path
/// compares versions — which is why Stock can be flashed back over Big clock even
/// though it declares a lower number.
struct OtaPack: Identifiable, Hashable {
    let id: String
    let resource: String          // bundle resource name, without ".zip"
    let label: String
    let detail: String
    /// True for the unmodified image. Used to present it as the safe one.
    let isStock: Bool

    var zipName: String { resource + ".zip" }
}

enum BundledOtaPack {

    static let bigClock = OtaPack(
        id: "bigclock",
        resource: "ota_star-air_1.0.11.99_BIGCLOCK",
        label: "Big clock 48px",
        detail: "Standby clock 14px → 48px with tabular digits. "
              + "NOTE: the clock overflows its circular widget and shows as \"3:0\" — "
              + "the font is right, the container is too small. 28 gates pass.",
        isStock: false)

    static let stock = OtaPack(
        id: "stock",
        resource: "ota_star-air_1.0.11.53_STOCK",
        label: "Stock 1.0.11.53",
        detail: "Unmodified factory image, byte-identical to the OTA it came from. "
              + "Flash this to undo any patch and get a readable clock back.",
        isStock: true)

    static let noRings = OtaPack(
        id: "norings",
        resource: "ota_star-air_1.0.11.98_NORINGS",
        label: "No rings",
        detail: "Stock clock, but the circular ring around each standby tile is gone. "
              + "ONE byte: border_opa 92 -> 0 at 0x61b7f8. Opacity rather than width, "
              + "so no geometry moves. 14 gates pass.",
        isStock: false)

    /// Stock first: it is the one to reach for when something is wrong.
    static let all: [OtaPack] = [stock, noRings, bigClock]

    static func load(_ pack: OtaPack) throws -> [OtaFile] {
        try AirOta.files(fromZip: Data(contentsOf: locate(pack)))
    }

    /// Documents wins over the bundle, so a pack can be dropped in via Files without
    /// rebuilding the app.
    static func locate(_ pack: OtaPack) throws -> URL {
        let docs = FileManager.default.urls(for: .documentDirectory,
                                            in: .userDomainMask).first
        if let docs {
            let dropped = docs.appendingPathComponent(pack.zipName)
            if FileManager.default.fileExists(atPath: dropped.path) { return dropped }
        }
        if let bundled = Bundle.main.url(forResource: pack.resource, withExtension: "zip") {
            return bundled
        }
        throw MyvuError.notFound(
            "missing \(pack.zipName). Copy it into Files → On My iPhone → MyvuDemo, "
          + "or rebuild the app.")
    }
}
