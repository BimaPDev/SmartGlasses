import Foundation
@testable import MyvuCore

/// Real captured handshake bytes, taken verbatim from the Android SDK's test
/// fixtures, which in turn came from `btcsnoop_hci_full_session.log` (handle
/// 0x0023, the internal/link channel).
///
/// Using identical ground truth means the Swift, Java and Python codecs are all
/// validated against the same wire bytes.
enum CapturedFrames {
    /// phone: FAST_CTR init
    static let f479 = Hex.decode("000006110100")

    /// phone: version negotiation JSON
    static let f480 = Hex.decode(
        "01007b2269223a22376361333735643039346631222c2276223a332c2265223a"
            + "352c226d223a3531322c2262223a322c2263223a2239393939227d")

    /// glasses: version reply JSON (negotiates e=1 → AES/CBC)
    static let f483 = Hex.decode(
        "000009117b2269223a22324336463445303044433437222c2276223a342c2265"
            + "223a312c226d223a3531322c2262223a327d")

    /// phone: WRITE_SWITCH_KEY carrying the P-256 SPKI public key
    static let f484 = Hex.decode(
        "000002100a060e6b2f8a5c83100b1a650a5b3059301306072a8648ce3d020106"
            + "082a8648ce3d0301070342000440620bda2512a57f5716887ed299beea0f02c3"
            + "9675cd831d64ceb27dab9ae52eaea1b6c4dc7999906767a68ffe3b6d9eb95244"
            + "48053341f62f7e9ede5458a2b812067ca375d094f1")

    /// The phone's MAC in this capture.
    static let phoneMac = Hex.decode("7ca375d094f1")

    /// `dealDeviceId(phoneMac)`, as it appears on the wire.
    static let phoneDeviceId = Hex.decode("0e6b2f8a5c83")
}

/// Reads JSON in tests without caring about key order.
enum TestJson {
    static func object(_ text: String) -> [String: Any] {
        guard let data = text.data(using: .utf8),
              let obj = try? JSONSerialization.jsonObject(with: data) as? [String: Any]
        else { return [:] }
        return obj
    }

    static func nested(_ dict: [String: Any], _ key: String) -> [String: Any] {
        dict[key] as? [String: Any] ?? [:]
    }

    static func array(_ dict: [String: Any], _ key: String) -> [Any] {
        dict[key] as? [Any] ?? []
    }

    static func string(_ dict: [String: Any], _ key: String) -> String? {
        dict[key] as? String
    }

    static func int(_ dict: [String: Any], _ key: String) -> Int? {
        (dict[key] as? NSNumber)?.intValue
    }

    static func double(_ dict: [String: Any], _ key: String) -> Double? {
        (dict[key] as? NSNumber)?.doubleValue
    }

    static func bool(_ dict: [String: Any], _ key: String) -> Bool? {
        (dict[key] as? NSNumber)?.boolValue
    }
}
