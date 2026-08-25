import Foundation
import MyvuCore

enum BundledOtaPack {
    static let zipName = "ota_star-air_1.0.12.83_BIMA.zip"
    static let label = "BIMA + batt% v4 · 1.0.12.83"
    static let installedHint = "1.0.12.83 BIMA batt%"

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
        if let bundled = Bundle.main.url(forResource: "ota_star-air_1.0.12.83_BIMA",
                                         withExtension: "zip") {
            return bundled
        }
        throw MyvuError.notFound(
            "missing \(zipName). Copy it into Files → On My iPhone → MyvuDemo, or rebuild.")
    }
}
