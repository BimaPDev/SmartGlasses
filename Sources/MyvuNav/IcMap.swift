import Foundation

/// Maps an OSRM maneuver to the glasses' `ic` arrow-icon value.
///
/// THESE VALUES ARE PROVISIONAL AND LARGELY UNVERIFIED. The glasses' int → arrow
/// mapping is a HERE ManeuverAction-style enum that is not documented anywhere in
/// the decompiled app, and the Python client says the same. Only by putting each
/// value on the lens and looking at it can they be confirmed — that is what
/// `NavSession.sendCalibrationFrame` is for. Treat a wrong arrow as expected,
/// not as a bug in the routing code.
public enum IcMap {
    /// Straight ahead.
    public static let defaultIc = 1

    /// Keyed by OSRM `maneuver.modifier`.
    private static let byModifier: [String: Int] = [
        "straight": 1,
        "right": 2,
        "left": 3,
        "slight right": 4,
        "slight left": 5,
        "sharp right": 6,
        "sharp left": 7,
        "uturn": 8,
    ]

    /// Keyed by `maneuver.type`; takes priority over the modifier when present.
    private static let byType: [String: Int] = [
        "roundabout": 9,
        "rotary": 9,
        "roundabout turn": 9,
        "merge": 10,
        "on ramp": 11,
        "off ramp": 12,
        "fork": 13,
        "end of road": 14,
        "arrive": 15,
        "depart": 1,
    ]

    public static func forManeuver(type: String?, modifier: String?) -> Int {
        if let type, let ic = byType[type] { return ic }
        if let modifier, let ic = byModifier[modifier] { return ic }
        return defaultIc
    }

    /// Short cue for lens-card navigation (BLE-only), when the HUD icons are
    /// unreachable.
    public static func cue(type: String?, modifier: String?, ic: Int) -> String {
        if let type {
            switch type {
            case "arrive": return "Arrive"
            case "depart": return "Start"
            case "roundabout", "rotary", "roundabout turn": return "Roundabout"
            case "merge": return "Merge"
            case "on ramp": return "On-ramp"
            case "off ramp": return "Off-ramp"
            case "fork": return "Fork"
            case "end of road": return "End of road"
            case "uturn": return "U-turn"
            default: break
            }
        }
        if let modifier, !modifier.isEmpty {
            return modifier.split(separator: " ")
                .map { $0.prefix(1).uppercased() + $0.dropFirst() }
                .joined(separator: " ")
        }
        switch ic {
        case 2: return "Right"
        case 3: return "Left"
        case 4: return "Slight right"
        case 5: return "Slight left"
        case 6: return "Sharp right"
        case 7: return "Sharp left"
        case 8: return "U-turn"
        case 9: return "Roundabout"
        case 15: return "Arrive"
        default: return "Ahead"
        }
    }
}
