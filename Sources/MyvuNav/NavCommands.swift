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
