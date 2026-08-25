# MYVU Star Air (XGA010C) on iOS — Full Session Log

**Dates:** 2026-08-20 → 2026-08-21
**Device:** Meizu MYVU "Star Air", model **XGA010C**, advertised **MYVU 0F35**
**Phone:** iPhone (Bluetooth name **Testing1**) · **Mac** for tooling
**Headline result:** **These glasses now fully work on iOS** — teleprompter and
turn-by-turn navigation both run on the lens, via a protocol command
(`IOS_CONNECT_BT`) the SDK never implemented. Earlier in the session this was
(wrongly) concluded to be impossible on iOS; that conclusion was overturned.

**Device identity (confirmed over BLE + on the glasses' About screen):**

| Field | Value |
| --- | --- |
| Model / subModel | `Star Air` / `XGA010C` |
| Advertised name | `MYVU 0F35` |
| Bluetooth address | `2C:6F:4E:01:0F:35` |
| Serial number | `1001160244J0008Q` |
| Firmware (ROM) | `Flyme XR 1.0.12.88.20250217_Air_FR` |
| Build type | `user` (production; not rootable) |
| Encrypted device ID | `3207e755e085c6af233233bc504a78a9b0d1e4403a2453cc06fb81cd01aa461f` |
| — derivation | `sha256_hex("RhdNS` + backtick + `Z?" + serialNumber)` |

---

## Timeline of the whole session

### 1. Goal & first build
Build the SDK demo (`Examples/MyvuDemo`) to the iPhone and sniff the BLE traffic,
then get the glasses doing useful things (music, navigation, teleprompter).

Added raw wire logging to the SDK: every outbound write and inbound notification
logged as hex with a channel label (`Uuids.label`), trace on from launch, a
5000-line buffer, a timestamped share export, and stdout mirroring so
`devicectl … --console` streams the trace to the Mac.

### 2. The discovery bug (fixed)
The app couldn't find the glasses. They advertise **no local name and no service
UUIDs — only manufacturer data**:

```
mfg=d10b03000100021003caf0feb190d30400052001a0100002    (advert)
    d20b13094d59565520304633350f001601                  (scan response)
```

`d10b`/`d20b` = little-endian company IDs `0x0BD1`/`0x0BD2`; `4d5956552030463335`
= ASCII `MYVU 0F35`. The matcher only checked name/service UUID (all empty). Fixed
to match on the manufacturer-data company ID (`BleCentral.isMyvuManufacturerData`),
tested in `AdvertisementMatchTests`. After the fix: full connect → ECDH bond →
init burst → session ready, stable, 0 disconnects. App-layer traffic is plaintext.

### 3. What worked immediately over BLE
Notifications, brightness, volume, zen mode, screen timeout, **display language**
(`set_language`, switched the HUD to English — `en/US` and `zh/CN` are the
attested pairs), trackpad, clock sync, weather, device queries. All push to the
already-running launcher.

### 4. Navigation groundwork
- iOS exposes no way to read another app's live navigation (Live Activities /
  notifications / CarPlay are sandboxed) — mirroring Waze/Google/Apple Maps is
  impossible. Built `MapsLink` (in `MyvuNav`) to parse a shared maps link
  (Apple/Google/Waze formats + short-link redirects) into a destination for
  `NavSession.start`. 10 tests in `MapsLinkTests`; one caught a real
  out-of-range-coordinate bug.
- Added real `UIBackgroundModes` (`bluetooth-central` + `location`) via a proper
  `Info.plist` (the `INFOPLIST_KEY_` generated key is silently ignored) plus
  `CoreLocationSource(allowsBackgroundUpdates: true)`, so the app isn't SIGKILL'd
  when backgrounded.

### 5. The "Please connect to the mobile first" gate — long detour
Hit the lens gate that blocks the glasses' own apps (teleprompter `tici`,
navigation, music). Chased several wrong theories:

- **Account activation** — `system_glass_active` / `req_active_state` reply
  `value:false`; asserting `value:true` (four variants) was rejected. Led down a
  China-account / seller `代激活` / mitmproxy path. **This was a misdiagnosis.**
- The official **global iOS app** rejected the glasses (region/model mismatch) —
  a red herring layered on top.

Then the sibling reference repo (`Panny777/Meizu-Myvu-Client`) supplied the real
answer: **"Not account/server-gated … there is no DRM."** The gate is the absence
of a **classic-Bluetooth audio link (HFP/A2DP)**. Its author solved it on
Windows: pair the glasses as an audio device and the gate clears.

### 6. Firmware / OTA / host-access — all dead ends (documented)
- **OTA**: signed `checkV2` requests succeed (`code:0`) but return
  `existsUpdate:false` for every Air/XGA010C combination — no rollout, nothing to
  download. No static firmware URL; no public dump exists.
- **No host access**: USB-C is **charge-only** (nothing enumerates on the Mac in
  normal mode, MMI mode, or replug; the MMI self-test classifies the port as
  充电/Charging). No ADB, no developer options in the launcher, `buildType:user`
  (no root). **mtkclient** watched for a MediaTek BROM device (`0x0E8D`) across
  three attempts — nothing ever enumerated, proving the port carries no data
  lines. The only route to the image is a hardware eMMC teardown.
- The app is **Ijiami-DRM-packed** and Flutter-AOT, and the binding server
  traffic is **certificate-pinned**, so the activation/binding mechanism is not
  statically recoverable.

### 7. The breakthrough — iOS classic-BT via `IOS_CONNECT_BT`
Searching `starry_link_encrypt.proto` for a way to trigger the classic link
turned up **iOS-specific commands the SDK never implemented**:

```
IOS_CONNECT_BT = 32;
IOS_DISCONNECT_BT = 33;
BT_STATE_CHANGE = 34;
REQUEST_STATUS_BT = 35;
```

The iOS SDK's `LinkCommands` skips straight from 19 to 70 — commands 32–35 were
never ported. And the payload is defined:

```protobuf
message IOSConnectBt {
    string deviceName = 1;     // the PHONE's Bluetooth name to find & connect to
    bool   isFirstConnect = 2;
    int32  timeout = 3;
    int32  cycleCount = 4;
}
message BTConnectStatus { BTSTATUS btStatus = 1; }   // reply to cmd 34
```

**Why this is the iOS answer:** iOS apps cannot open a classic-BT connection
themselves, and iOS hides the phone's own BT MAC. `IOS_CONNECT_BT` flips the
roles — the phone sends the glasses its **Bluetooth NAME** over BLE, and the
**glasses** scan for and connect to the phone (HFP/A2DP). No MFi, no MAC needed.

`BTSTATUS` enum (from the proto): `0 DEFAULT, 1 BOND, 2 BONDING, 3 NOBOND,
4 CONNECTED_ACL, 5 CONNECTED_HFP, 6 CONNECTED_A2DP, 7 DISCONNECTED,
8 NO_CONNECTED_BT, 9 EXIST_CONNECTED_BT, 10 CONNECT_FAIL, 11 BOND_CANCEL_OR_TIMEOUT`.

### 8. Getting it to connect and hold
- First tries sent an **empty** payload → glasses replied `BT_STATE_CHANGE: 8`
  (NO_CONNECTED_BT). Then the wrong name (`UIDevice.current.name` = generic
  "iPhone") → still `8`. The phone's real classic-BT name is **`Testing1`**.
- With `deviceName=Testing1` and the phone discoverable (Settings → Bluetooth
  open), the state moved off 8 — a `7` (DISCONNECTED) appeared, proving a
  classic connection had actually formed and dropped.
- Added a **keepalive** (`startIosBtKeepAlive`): re-issues `IOS_CONNECT_BT`
  continuously — fast retry (2s) while down, gentle keepalive (6s,
  `isFirstConnect=false`) while up, and reconnects instantly on a drop, driven by
  the `BT_STATE_CHANGE` replies. State then held steadily at **9
  (EXIST_CONNECTED_BT)** — the link stopped dropping.

### 9. Confirmed working — teleprompter AND navigation on iOS
With the keepalive holding the classic link, the launcher gate cleared and
`open_app` went through:

```
Teleprompter:
-> open_app pkg=com.upuphone.ar.tici
<- glass_tici_started
-> send_content  ->  <- send_content_reply  ->  <- open_result_v2 {fileKey:"1/Script"}

Navigation:
-> open_app pkg=com.upuphone.ar.navi.glass
<- navi_start_rsp "1"          (glasses accepted nav start)
-> navi_info: ic:2, "College View Drive", next turn 26m …  (streaming HUD)
navigation started (hud): 3992m, 8 min, 11 steps
```

Both native apps run on the lens. **The device is fully usable on iOS.**

---

## Current state on the phone

The installed build has:
- `IOS_CONNECT_BT` (cmd 32) + `IOSConnectBt` payload, `BT_STATE_CHANGE` decoding,
  and the keepalive (`startIosBtKeepAlive` / `stopIosBtKeepAlive`).
- Demo **"Auto-connect + keep alive"** toggle (name defaults to `Testing1`).
- Teleprompter and Navigation on their **real** (default) implementations
  (`openTeleprompter`, nav `.hud`), not the notification-card substitutes.

**Usage:** connect → flip **Auto-connect + keep alive** ON → keep Settings →
Bluetooth open a moment so the glasses find the phone → teleprompter / navigation
open on the lens. The toggle does **not** persist across an app relaunch (an
auto-start-on-connect option was offered but not yet wired in).

---

## Key files touched this session

- `Sources/MyvuCore/Protocol/Link/LinkProtocol.swift` — added cmd 32/33/34/35/40.
- `Sources/MyvuCore/MyvuClient.swift` — `iosConnectBt`, `sendLinkCommand`,
  `startIosBtKeepAlive`/`stopIosBtKeepAlive`, `BT_STATE_CHANGE` decode.
- `Sources/MyvuCore/MyvuGlasses.swift` — facade for the above + `teleprompterContentOnly`.
- `Sources/MyvuCore/Transport/BLE/BleCentral.swift` — manufacturer-data matching.
- `Sources/MyvuNav/MapsLink.swift` (+ tests) — maps-link parsing.
- `Examples/MyvuDemo/…` — wire logging, background modes/`Info.plist`, iOS-BT
  section (name field, keepalive toggle, retry), teleprompter + nav reverted to
  defaults.
- `PROTOCOL.md`, `INVESTIGATION.md` — protocol notes (INVESTIGATION.md still
  contains the pre-breakthrough "iOS cannot" conclusion and needs updating).
- `Reverse/`, `Reference/` — decompiled apps, OTA probes, and the reference SDK /
  Python client that identified the classic-BT audio-link mechanism.

## Open items / TODO
1. **Update `INVESTIGATION.md` and `PROTOCOL.md`** — document `IOS_CONNECT_BT`
   and the working keepalive; retract the "iOS cannot provide the audio link"
   conclusion.
2. **Auto-start the keepalive on session-ready** so teleprompter/nav work on
   every connect without flipping the toggle.
3. **Fix the arrow-calibration button** — it sends `navi_info` without opening
   the nav app first, so it renders nothing; either open the nav app first or
   remove it in favour of real navigation.
4. Navigation frames only stream while moving (CoreLocation suppresses stationary
   updates) — a timer-based resend from the last fix is still open.
5. The init burst still replays a stranger's account ID (`1304198482`) from the
   original capture — cosmetic, but wrong.
