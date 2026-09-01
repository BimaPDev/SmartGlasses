import Foundation

/// The glasses' battery, as they report it.
public struct GlassesBattery: Equatable, Sendable {
    /// 0–100.
    public let percent: Int
    public let isCharging: Bool

    public init(percent: Int, isCharging: Bool) {
        self.percent = percent
        self.isCharging = isCharging
    }
}

/// Reads the glasses' unsolicited battery pushes.
///
/// The glasses send these themselves — there is nothing to poll and no request
/// to make. Recovered from `GlassHelper` / `SuperMessageManger`, which parse
/// `sync_glass_battery_info` into a `GlassBatteryInfo(battery, isCharging)`.
///
/// `value` is a JSON *STRING*, not a nested object — the same trap as
/// `Teleprompter.ext`. An object is accepted too, so a firmware that tightens
/// this up later does not silently stop reporting.
public enum BatteryFeed {
    public static let action = "sync_glass_battery_info"

    /// Nil for anything that is not a battery push.
    public static func parse(_ msg: JsonReader) -> GlassesBattery? {
        guard msg.optString("action") == action else { return nil }
        let inner: JsonReader?
        if let object = msg.optObject("value") {
            inner = object
        } else {
            inner = JsonReader(parsing: msg.optString("value"))
        }
        guard let inner, inner.has("battery") else { return nil }
        let percent = inner.optInt("battery", -1)
        guard (0 ... 100).contains(percent) else { return nil }
        // Kotlin's `isCharging` serialises under its own field name; older
        // captures use `charging`, so both are accepted.
        let charging = inner.optBool("isCharging", inner.optBool("charging", false))
        return GlassesBattery(percent: percent, isCharging: charging)
    }
}

/// Fires once each time the glasses' battery falls THROUGH a threshold.
///
/// Level-triggered alerting would repeat for every push below the mark, and the
/// glasses push often, so this is edge-triggered: a threshold arms only after
/// the battery climbs back above it. `hysteresis` is what stops a reading that
/// dithers across the boundary (20, 21, 20, 21…) from alerting twice.
///
/// Deliberately quiet in three cases:
///  - CHARGING. The battery passing 50% on the way up is not news.
///  - The FIRST reading. Connecting at 8% has crossed nothing; announcing 10%
///    and 20% for a battery that was already there is noise.
///  - Several thresholds crossed between two pushes. Only the lowest is
///    reported — two banners for one drop is worse than one banner.
///
/// The 15% and 5% warnings the glasses draw on the lens themselves are separate
/// and cannot be turned off from here; these thresholds sit around them.
public final class BatteryMonitor {
    public static let defaultThresholds = [80, 50, 40, 20, 10]

    /// Points below which the battery is worth mentioning, high to low.
    public let thresholds: [Int]
    /// How far the battery must climb back above a threshold to re-arm it.
    public let hysteresis: Int

    private var armed: Set<Int> = []

    public init(thresholds: [Int] = BatteryMonitor.defaultThresholds,
                hysteresis: Int = 3) {
        self.thresholds = thresholds.sorted(by: >)
        self.hysteresis = hysteresis
    }

    /// Feeds one reading. Returns the threshold to announce, or nil.
    @discardableResult
    public func update(_ battery: GlassesBattery) -> Int? {
        // Arming happens even while charging: that is how a threshold comes
        // back after a top-up.
        for threshold in thresholds where battery.percent >= threshold + hysteresis {
            armed.insert(threshold)
        }
        guard !battery.isCharging else { return nil }

        let crossed = thresholds.filter { armed.contains($0) && battery.percent <= $0 }
        guard let announce = crossed.min() else { return nil }
        // Disarm every threshold passed, not just the announced one, or the
        // next push would report the ones this drop skipped over.
        for threshold in crossed { armed.remove(threshold) }
        return announce
    }

    /// Feeds a reading known at connect time (the pairing `DeviceInfo`) without
    /// alerting on it — it arms the thresholds above the current level so the
    /// next real drop is the first thing announced.
    public func seed(percent: Int) {
        update(GlassesBattery(percent: percent, isCharging: true))
    }

    /// Parses an inbound relay object and feeds it. Nil unless it was a battery
    /// push that crossed a threshold.
    public func handle(inbound msg: JsonReader) -> (threshold: Int, battery: GlassesBattery)? {
        guard let battery = BatteryFeed.parse(msg) else { return nil }
        guard let threshold = update(battery) else { return nil }
        return (threshold, battery)
    }
}
