import Foundation
import MyvuCore

/// AR navigation HUD frames, ported from the phone app's
/// `com.upuphone.ar.navi.lite` NotifyUtils / ProtocolUtils.
///
/// The glasses render the overlay themselves from structured data — we launch
/// the nav app and then stream `navi_info` frames at ~1Hz.
///
/// IMPORTANT: none of this works until the phone answers the glasses' launch-app
/// request (type:11 → type:12) — see `InboundRouter`. Without that ack the nav
/// app ignores every frame and re-asks forever.
///
/// The short keys are the app's own:
///   ic  maneuver icon        pd   total route distance (m)
///   prd remaining distance   prt  remaining time (s)
///   nrn next road name       nrd  distance to the next turn (m)
///   ns  speed text           rdd  distance ridden (m)
///   gs  GPS fix (1 = ok)     hsr  road class
///   bts auto-brightness      ack  epoch millis
public enum NavCommands {
    /// ROUTING IS NOT UNIFORM ACROSS THESE MESSAGES, and getting it wrong makes
    /// navigation silently do nothing:
    ///
    ///  - open/start are `open_app` requests, so they go to the LAUNCHER — it is
    ///    the launcher that opens apps. Addressing them to the nav app itself
    ///    means nothing acts on them.
    ///  - navi_info/navi_event are HUD data, so they go to the nav app directly.
    ///
    /// Both are always SOURCED from the phone-side nav package.
    public static let sourcePkg = AppLayer.pkgNavPhone
    /// Target for `buildOpen`/`buildStart`.
    public static let launchTargetPkg = AppLayer.pkgLauncher
    /// Target for `buildNaviInfo`/`buildEvent`/`buildStop`.
    public static let frameTargetPkg = AppLayer.pkgNavGlass

    /// One HUD frame's worth of data. Grouped because `navi_info` and the
    /// initial `navi_start` carry the same fields under the same short keys.
    public struct Frame {
        public var ic: Int
        public var pathDistanceM: Int
        public var remainingM: Int
        public var remainingS: Int
        public var nextRoadName: String
        public var nextRoadDistanceM: Int
        /// Speed as TEXT — the glasses' bean types this as a string.
        public var speed: String
        public var rideDistanceM: Int
        /// 1 when the phone has a usable fix.
        public var gpsStatus: Int
        public var roadClass: Int

        public init(ic: Int = IcMap.defaultIc, pathDistanceM: Int = 0, remainingM: Int = 0,
                    remainingS: Int = 0, nextRoadName: String = "",
                    nextRoadDistanceM: Int = 0, speed: String = "0",
                    rideDistanceM: Int = 0, gpsStatus: Int = 1, roadClass: Int = 0) {
            self.ic = ic
            self.pathDistanceM = pathDistanceM
            self.remainingM = remainingM
            self.remainingS = remainingS
            self.nextRoadName = nextRoadName
            self.nextRoadDistanceM = nextRoadDistanceM
            self.speed = speed
            self.rideDistanceM = rideDistanceM
            self.gpsStatus = gpsStatus
            self.roadClass = roadClass
        }
    }

    /// Launches the AR nav app with no initial data.
    public static func buildOpen() -> String {
        openApp(ext: "")
    }

    /// Launches the HUD AND starts navigation in one go — the phone-initiated
    /// path (`NaviFragment.openAndStartGlass`). The ext carries the initial
    /// pre-nav frame as a JSON string, without the `identity` wrapper that
    /// `navi_info` uses. The glasses reply `navi_start_rsp`; after that, stream
    /// `navi_info` frames.
    public static func buildStart(_ frame: Frame, naviMode: Int = 0, displayPos: Int = 0,
                                  maskMsg: Bool = false, brightness: Bool = false,
                                  nowMs: Int64 = Session.nowMillis()) -> String {
        var ext = JsonObject()
        ext.put("naviMode", naviMode)
        ext.put("displayPos", displayPos)
        ext.put("maskMsg", maskMsg ? 1 : 0)
        ext.put("brightness", brightness ? 1 : 0)
        putFrame(frame, into: &ext)
        ext.put("ack", nowMs)
        return openApp(ext: ext.serialized())
    }

    private static func openApp(ext: String) -> String {
        var data = JsonObject()
        data.put("launchMode", "scene")
        data.put("action", "open_app")
        data.put("pkg", AppLayer.pkgNavGlass)
        data.put("show_status_bar", false)
        // ext is a JSON STRING (empty when just opening).
        data.put("ext", ext)
        data.put("app_name", "Navigation")

        var out = JsonObject()
        out.put("action", "app")
        out.put("data", data)
        return out.serialized()
    }

    /// One turn-by-turn frame. Sent nav-phone → nav-glasses, not via the launcher.
    public static func buildNaviInfo(_ frame: Frame, brightness: Int = 0,
                                     nowMs: Int64 = Session.nowMillis()) -> String {
        var out = JsonObject()
        out.put("identity", "navi_info")
        putFrame(frame, into: &out)
        out.put("bts", brightness)
        out.put("ack", nowMs)
        return out.serialized()
    }

    /// e.g. `event = "navi_stop"` to end navigation on the glasses.
    public static func buildEvent(_ event: String, naviMode: Int = 0,
                                  nowMs: Int64 = Session.nowMillis()) -> String {
        var out = JsonObject()
        out.put("identity", "navi_event")
        out.put("naviMode", naviMode)
        out.put("data", event)
        out.put("ack", nowMs)
        return out.serialized()
    }

    public static func buildStop(nowMs: Int64 = Session.nowMillis()) -> String {
        buildEvent("navi_stop", naviMode: 0, nowMs: nowMs)
    }

    /// Epoch millis shifted so a 24-hour clock renders the 12-hour HOUR.
    ///
    /// The nav page's clock is `%02d:%02d` with no am/pm string anywhere in the
    /// firmware, so 13:45 cannot be made to print "1:45 PM". What it CAN print
    /// is "01:45" — by being handed a timestamp 12 hours earlier. The glasses
    /// draw whatever hour they are given; only the number is a lie.
    ///
    /// WHETHER THIS REACHES THE CLOCK IS UNPROVEN. `NaviMileageAndTimeWidget`
    /// draws the time, but nothing in the decompilation ties it to `ack` rather
    /// than the device RTC — and `ack` may equally be a freshness stamp, in
    /// which case a 12-hour-old value gets the whole frame dropped. Send it,
    /// look at the lens, revert if the HUD goes stale.
    ///
    /// The shift is whole hours, so minutes stay honest.
    public static func twelveHourAck(nowMs: Int64 = Session.nowMillis(),
                                     calendar: Calendar = .current) -> Int64 {
        let hour = calendar.component(.hour, from: Date(timeIntervalSince1970:
            Double(nowMs) / 1000))
        // Noon and midnight both read as 12 on a 12-hour face, so a bare
        // `hour % 12` would print midnight as "00" and noon as "00".
        let shown = hour % 12 == 0 ? 12 : hour % 12
        return nowMs - Int64(hour - shown) * 3_600_000
    }

    /// Lights up `NaviDriveSpeedView` — the round speed bubble the nav page
    /// normally uses for speed-camera zones, and the only numeric speed display
    /// on that page (`ns` in `navi_info` draws nothing).
    ///
    /// THE SHAPE HERE IS INFERRED, NOT CAPTURED. The firmware's handler
    /// references `cameraIntervalInfo`, then `intervalCameraInfo`, then errors
    /// with "array_item is null" before reading `carEnterCameraStatus` and
    /// `cameraSpeed` — which reads as an array of items nested under an outer
    /// object. Which of the two names is the wrapper and which is the array is
    /// genuinely unclear from strings alone, so the array is published under
    /// both; a JSON parser ignores the key it does not want.
    ///
    /// - Parameter speed: the number to draw. The widget's unit label is a
    ///   hardcoded `km/h` that no message can change.
    /// - Parameter entering: `carEnterCameraStatus` — 1 shows the bubble, 0 is
    ///   the "left the zone" state used to clear it.
    public static func buildCameraSpeed(_ speed: Int, entering: Bool = true,
                                        nowMs: Int64 = Session.nowMillis()) -> String {
        var item = JsonObject()
        item.put("carEnterCameraStatus", entering ? 1 : 0)
        item.put("cameraSpeed", speed)

        let array = JsonValue.array([.object(item)])
        var inner = JsonObject()
        inner.put("intervalCameraInfo", array)

        var out = JsonObject()
        out.put("identity", "interval_camera_info")
        out.put("cameraIntervalInfo", .object(inner))
        out.put("intervalCameraInfo", array)
        out.put("ack", nowMs)
        return out.serialized()
    }

    /// A frame for the CRUISE HUD — current road and speed with no destination.
    ///
    /// The nav page has no route-less mode of its own, so this is a normal
    /// `navi_info` frame with the route fields zeroed: the road and speed go in
    /// the only free-text slot there is (`nrn`, nominally "next road"), and the
    /// maneuver arrow is forced straight ahead because there is no turn to
    /// describe.
    ///
    /// UNITS: `ns` must be KM/H here. `NaviDriveSpeedView` draws a hardcoded
    /// `km/h` label (there is no `mph` string anywhere in the firmware), so
    /// sending mph would render a correct number under a wrong unit.
    ///
    /// `speedMph` is deliberately routed into `nrd`, the maneuver-distance slot.
    /// That slot is the only LARGE numeral the page draws, and with no route
    /// there is no maneuver to describe — so it holds the speed instead. The
    /// page appends its own `m` to whatever goes there and no message can stop
    /// it, so the number reads correctly under a unit that does not apply.
    public static func cruiseFrame(roadName: String, speedKmh: Int, speedMph: Int,
                                   tripDistanceM: Int, hasFix: Bool) -> Frame {
        Frame(ic: IcMap.defaultIc,
              pathDistanceM: 0,
              remainingM: 0,
              remainingS: 0,
              nextRoadName: roadName,
              nextRoadDistanceM: speedMph,
              speed: String(speedKmh),
              rideDistanceM: tripDistanceM,
              gpsStatus: hasFix ? 1 : 0)
    }

    /// Key order is load-bearing only insofar as it matches the captured frames;
    /// keeping one writer means `navi_info` and `navi_start` cannot drift apart.
    private static func putFrame(_ f: Frame, into json: inout JsonObject) {
        json.put("ic", f.ic)
        json.put("pd", f.pathDistanceM)
        json.put("prd", f.remainingM)
        json.put("prt", f.remainingS)
        json.put("nrn", f.nextRoadName)
        json.put("nrd", f.nextRoadDistanceM)
        json.put("ns", f.speed)
        json.put("rdd", f.rideDistanceM)
        json.put("gs", f.gpsStatus)
        json.put("hsr", f.roadClass)
    }
}
