import Foundation

/// One active radar/laser slot from the Uniden alert GATT notify.
public struct UnidenAlert: Equatable, Sendable {
    public let flag: String
    public let id: String
    public let type: String
    public let rssi: String
    public let rawValue: String
    public let info: String
    public let direction: String
    public let mute: String
    public let rcv: String

    public init(flag: String, id: String, type: String, rssi: String,
                rawValue: String, info: String, direction: String,
                mute: String, rcv: String) {
        self.flag = flag
        self.id = id
        self.type = type
        self.rssi = rssi
        self.rawValue = rawValue
        self.info = info
        self.direction = direction
        self.mute = mute
        self.rcv = rcv
    }

    public var directionLabel: String {
        switch direction.uppercased() {
        case "F": return "Front"
        case "R": return "Rear"
        case "S": return "Side"
        default: return ""
        }
    }

    /// Auto Mute Memory (`mute_type` 4): the detector recognised this hit as a
    /// stored false alarm and silenced it itself. Distinct from 3 (the same
    /// lockout stored by hand), 5 (K block) and 6 (Quiet Ride) — widen this to
    /// `["3", "4"]` to treat hand-stored mute memory the same way.
    public var isAutoMuted: Bool { mute == "4" }

    public var muteLabel: String {
        switch mute {
        case "1": return "Not Muted"
        case "2": return "Muted"
        case "3": return "Mute Memory"
        case "4": return "Auto Mute Memory"
        case "5": return "Blocked Mute"
        case "6": return "Quiet Ride Mute"
        default: return ""
        }
    }

    /// Frequency, Gatso, laser-gun name, or camera limit — not GHz for POI.
    public var frequencyLabel: String {
        if isPoi { return poiDetail }
        if type.compare("LASER", options: .caseInsensitive) == .orderedSame {
            return Self.laserGunNames[rawValue] ?? rawValue
        }
        if type.compare("RT3", options: .caseInsensitive) == .orderedSame
            || type.compare("RT4", options: .caseInsensitive) == .orderedSame {
            return "Gatso"
        }
        guard let hz = Double(rawValue) else { return rawValue }
        return String(format: "%.3f GHz", hz)
    }

    public var isPoi: Bool {
        switch type.uppercased() {
        case "SPEEDCAM", "REDLIGHT", "USERMARK": return true
        default: return false
        }
    }

    public var displayName: String {
        switch type.uppercased() {
        case "SPEEDCAM": return "Speed camera"
        case "REDLIGHT": return "Red light camera"
        case "USERMARK": return "User mark"
        default: return type
        }
    }

    /// Distance (and posted limit for speed cameras). Uniden's mph UI uses feet.
    public var poiDetail: String {
        var parts: [String] = []
        if !info.isEmpty { parts.append("\(info) ft") }
        if type.uppercased() == "SPEEDCAM", !rawValue.isEmpty, rawValue != "0" {
            parts.append("limit \(rawValue) mph")
        }
        return parts.joined(separator: " · ")
    }

    private static let laserGunNames: [String: String] = [
        "0": "Generic Laser",
        "1": "LTI20/20",
        "2": "Stalker",
        "3": "RIEGL",
        "4": "Laser Ally",
        "5": "Kustom",
        "6": "Atlanta",
        "7": "Laveg",
        "8": "SL700",
        "9": "SCS-102",
        "10": "TraffiPat",
        "11": "Truspeed S",
        "12": "Stealth",
        "13": "TruCam",
        "14": "XLR",
        "15": "DragonEye Compact",
        "16": "DragonEye Full-Size",
        "17": "PoliScan",
        "18": "Traffistar s350",
        "19": "Vitronic Poliscan",
    ]
}

/// UTF-8 `&` / comma parser for Uniden alert notifies. Idle `0&0&0&0` is empty.
public enum UnidenAlertParser {
    /// Advertised names the official app keeps: substring match on R4/R8/R9/AE903i.
    /// `R4W` matches `R4`.
    public static func matchesRadarName(_ name: String?) -> Bool {
        guard let name, !name.isEmpty else { return false }
        let upper = name.uppercased()
        return upper.contains("R4")
            || upper.contains("R8")
            || upper.contains("R9")
            || upper.contains("AE903I")
    }

    /// R9 / AE903i assign direction by slot index instead of field 6.
    public static func isI9(_ name: String?) -> Bool {
        guard let name else { return false }
        let upper = name.uppercased()
        return upper.contains("R9") || upper.contains("AE903I")
    }

    public static func parse(_ payload: String, isI9: Bool = false) -> [UnidenAlert] {
        if payload == "0&0&0&0" || payload == "0&0&0&0&0&0&0&0" { return [] }
        let slots = payload.split(separator: "&", omittingEmptySubsequences: false)
            .map(String.init)
        var alerts: [UnidenAlert] = []
        for (index, slot) in slots.enumerated() {
            guard !slot.isEmpty, slot != "0" else { continue }
            let fields = slot.split(separator: ",", omittingEmptySubsequences: false)
                .map(String.init)
            let flag = field(fields, 0)
            guard !flag.isEmpty, flag != "0" else { continue }
            let direction: String
            if isI9 {
                direction = i9Direction(slotIndex: index, fields: fields)
            } else {
                direction = field(fields, 6)
            }
            alerts.append(UnidenAlert(
                flag: flag,
                id: field(fields, 1),
                type: field(fields, 2),
                rssi: field(fields, 3),
                rawValue: field(fields, 4),
                info: field(fields, 5),
                direction: direction,
                mute: field(fields, 7),
                rcv: field(fields, 8)))
        }
        return alerts
    }

    private static func field(_ fields: [String], _ index: Int) -> String {
        index < fields.count ? fields[index] : ""
    }

    private static func i9Direction(slotIndex: Int, fields: [String]) -> String {
        switch slotIndex {
        case 1, 2, 3: return "F"
        case 5, 6, 7: return "R"
        default: return field(fields, 6)
        }
    }
}

/// ETC notify (`6c290d2e-…`): voltage, POI proximity, GPS. Speed/red-light
/// cameras are field 1 (`SPEEDCAM,distance,limit`), not the radar alert char.
public enum UnidenEtcParser {
    public static func poiAlerts(from payload: String) -> [UnidenAlert] {
        if payload == "0&0&0&0" || payload == "0&0&0&0&0&0&0&0" { return [] }
        let slots = payload.split(separator: "&", omittingEmptySubsequences: false)
            .map(String.init)
        guard slots.count > 1 else { return [] }
        let poi = slots[1]
        guard poi != "0", !poi.isEmpty else { return [] }
        let fields = poi.split(separator: ",", omittingEmptySubsequences: false)
            .map(String.init)
        let type = fields.first ?? ""
        let upper = type.uppercased()
        guard !type.isEmpty, upper != "0", upper != "NONE" else { return [] }
        let distance = fields.count > 1 ? fields[1] : ""
        let limit = fields.count > 2 ? fields[2] : ""
        return [UnidenAlert(flag: "1", id: "", type: type, rssi: "",
                            rawValue: limit, info: distance, direction: "",
                            mute: "", rcv: "")]
    }
}

/// Title/body for a glasses lens card or a phone banner.
public enum UnidenAlertCard {
    public static func title(for alerts: [UnidenAlert]) -> String {
        guard let first = alerts.first else { return "" }
        let head = first.isPoi ? first.displayName : "\(first.type) \(first.frequencyLabel)"
        if alerts.count > 1 {
            return "\(head) + \(alerts.count - 1)"
        }
        return head
    }

    public static func body(for alerts: [UnidenAlert]) -> String {
        guard let first = alerts.first else { return "" }
        if first.isPoi {
            var parts = [first.poiDetail].filter { !$0.isEmpty }
            for extra in alerts.dropFirst() {
                if extra.isPoi {
                    parts.append("\(extra.displayName) \(extra.poiDetail)")
                } else {
                    let dir = extra.directionLabel
                    let loc = dir.isEmpty ? extra.frequencyLabel : "\(extra.frequencyLabel) \(dir)"
                    parts.append("\(extra.type) \(loc) · strength \(extra.rssi)")
                }
            }
            return parts.joined(separator: " · ")
        }
        var parts = [strengthLine(direction: first.directionLabel, rssi: first.rssi)]
        for extra in alerts.dropFirst() {
            if extra.isPoi {
                parts.append("\(extra.displayName) \(extra.poiDetail)")
                continue
            }
            let dir = extra.directionLabel
            let loc = dir.isEmpty ? extra.frequencyLabel : "\(extra.frequencyLabel) \(dir)"
            parts.append("\(extra.type) \(loc) · strength \(extra.rssi)")
        }
        return parts.joined(separator: " · ")
    }

    /// The rendered card is the identity: if a single character of what the
    /// driver reads has changed — strength 1 to 2, 900 ft to 250 ft, a second
    /// hit joining the first — it is a different alert and earns a fresh
    /// banner. Anything the card does not show (mute state, slot id) does not.
    public static func identity(for alerts: [UnidenAlert]) -> String {
        "\(title(for: alerts))\n\(body(for: alerts))"
    }

    /// Identity for deciding whether to *re-alert*, which is the card identity
    /// except when the detector has already silenced everything on screen with
    /// Auto Mute Memory. A known false alarm earns exactly one banner per
    /// encounter: strength and the jittering frequency digit drop out, leaving
    /// the muted bands themselves, so nothing re-fires until a band joins or
    /// leaves — and a live hit landing alongside makes the set no longer all
    /// auto-muted, which alerts at once on the full reading.
    public static func notifyIdentity(for alerts: [UnidenAlert]) -> String {
        guard !alerts.isEmpty, alerts.allSatisfy(\.isAutoMuted) else {
            return identity(for: alerts)
        }
        let bands = alerts
            .map { "\($0.type)|\($0.direction)" }
            .sorted()
            .joined(separator: ",")
        return "auto-muted\n\(bands)"
    }

    private static func strengthLine(direction: String, rssi: String) -> String {
        if direction.isEmpty { return "strength \(rssi)" }
        return "\(direction) · strength \(rssi)"
    }
}

/// Auto-connect while driving uses 10 mph, independent of the cruise HUD.
public enum UnidenDrive {
    public static let startMph: Double = 10
    public static var startSpeedMps: Double { startMph * 1609.344 / 3600 }
}

/// Drives glasses/phone Uniden alerts off *change*, not off a clock: an alert
/// whose card text still reads the same is never re-sent, and one that reads
/// differently goes out as soon as `minInterval` allows.
///
/// The floor exists only because the detector notifies several times a second
/// on both characteristics and the reported frequency jitters in the last
/// digit; without it a parked KA hit could strobe the banner. Changes that land
/// inside the floor are not dropped — they coalesce and the newest one is sent
/// when it lifts, so the driver always ends up looking at current numbers.
public enum UnidenAlertGate {
    /// Shortest gap between two banners. A strength jump reaches the phone
    /// within this at worst.
    public static let minInterval: TimeInterval = 2

    public enum Decision: Equatable {
        case sendNow
        case wait(TimeInterval)
        /// Same reading as the one already on screen — leave it alone.
        case hold
        case clear
    }

    public static func decision(hasHits: Bool, changed: Bool,
                                lastSentAt: Date?, now: Date) -> Decision {
        guard hasHits else { return .clear }
        guard changed else { return .hold }
        guard let lastSentAt else { return .sendNow }
        let elapsed = now.timeIntervalSince(lastSentAt)
        if elapsed >= minInterval { return .sendNow }
        return .wait(minInterval - elapsed)
    }
}
