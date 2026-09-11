import Foundation
import MyvuCore

enum BundledOtaPack {
    // 1.0.11.53-based. The device runs 1.0.11.53; the pack declares 1.0.11.99 so the
    // OTA is seen as newer. The previous 12.83 BIMA pack is NOT for this device.
    static let zipName = "ota_star-air_1.0.11.99_BIGCLOCK.zip"
    static let label = "Big clock 48px · 1.0.11.53"
    static let installedHint = "1.0.11.99 BIGCLOCK"

    static func load() throws -> [OtaFile] {
        let url = try locate()
        return try AirOta.files(fromZip: Data(contentsOf: url))
    }

    static func locate() throws -> URL {
        let docs = FileManager.default.urls(for: .documentDirectory,
                                            in: .userDomainMask).first
        if let docs {
            let dropped = docs.appendingPathComponent(zipName)
            if FileManager.default.fileExists(atPath: dropped.path) { return dropped }
        }
        if let bundled = Bundle.main.url(forResource: "ota_star-air_1.0.11.99_BIGCLOCK",
                                         withExtension: "zip") {
            return bundled
        }
        throw MyvuError.notFound(
            "missing \(zipName). Copy it into Files → On My iPhone → MyvuDemo, or rebuild.")
    }
}
