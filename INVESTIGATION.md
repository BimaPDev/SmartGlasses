# MYVU Star Air (XGA010C) — iOS Investigation & Findings

**Date:** 2026-08-20 / 21
**Device:** Meizu MYVU "Star Air", model **XGA010C**, advertised name **MYVU 0F35**
**Phone:** iPhone 14 Pro Max (iOS), plus a Mac for tooling
**Goal (as it started):** build the SDK demo to the phone, sniff the BLE traffic,
and get the glasses doing useful things (music, navigation, teleprompter).

**Device identity (confirmed over BLE + on the glasses' own About screen):**

| Field | Value |
| --- | --- |
| Model / subModel | `Star Air` / `XGA010C` |
| Advertised name | `MYVU 0F35` |
| Bluetooth address | `2C:6F:4E:01:0F:35` |
| Serial number | `1001160244J0008Q` |
| Firmware (ROM) | `Flyme XR 1.0.12.88.20250217_Air_FR` |
| Build type | `user` (production; not rootable) |
| Encrypted device ID | `3207e755e085c6af233233bc504a78a9b0d1e4403a2453cc06fb81cd01aa461f` |
| — derivation | `sha256_hex("RhdNS` + "`" + `Z?" + serialNumber)` |

---

## TL;DR — the bottom line

- The glasses **work**, are **hardware-healthy** (MMI self-test all pass), and are
  **not account-locked**. There is **no DRM / activation gate** — the
  `system_account` / `system_glass_active` messages are **analytics only**.
- The **"Please connect to the mobile first"** lens message is **not** activation.
  It is the absence of a **classic-Bluetooth audio link (HFP/A2DP)**. The glasses
  refuse to launch their own apps (teleprompter `tici`, navigation, music) until a
  phone holds an HFP/A2DP connection to them.
- **iOS cannot provide that link for this non-MFi model.** Not via the SDK, not via
  the official iOS app (which rejects the XGA010C), not via Settings. It is an iOS
  platform limitation, not a fixable bug.
- **What works on iOS (BLE-only):** notifications, brightness, volume, zen mode,
  display language, trackpad, clock, weather, device queries.
- **What is blocked on iOS:** anything that launches a glasses app — teleprompter,
  navigation HUD, music.
- **The device works fully on Android / Windows**, which *can* make the phone the
  classic-BT master and connect by MAC (HFP + A2DP + relay) exactly as the official
  app does. **No account needed there.**

---

## 1. Tooling added to the SDK

To see what the glasses actually send, raw wire logging was added:

- `BleWriteQueue.drain()` — logs every outbound write (`-> external NN B <hex>`).
- `BleTransport didUpdateValueFor` — logs every inbound notification (`<- internal …`).
- `Uuids.label(_:)` — names channels (internal `0x2020`, external `0x2021`,
  urgent `0x2022`) instead of bare 16-bit hex.
- Demo: trace on from launch, 5000-line buffer, timestamped share export, and the
  whole log mirrored to stdout so `devicectl … --console` streams it to the Mac.

The app was built and installed to the device with:

```
xcodebuild -project Examples/MyvuDemo/MyvuDemo.xcodeproj -scheme MyvuDemo \
  -destination 'id=<device-udid>' -configuration Debug \
  DEVELOPMENT_TEAM=264YPMKQC6 -allowProvisioningUpdates build
xcrun devicectl device install app --device <ecid> <MyvuDemo.app>
xcrun devicectl device process launch --device <ecid> --console dev.myvu.demo
```

---

## 2. The discovery bug (fixed)

The app couldn't find the glasses because **they advertise no local name and no
service UUIDs — only manufacturer data**:

```
mfg=d10b03000100021003caf0feb190d30400052001a0100002    (advert)
    d20b13094d59565520304633350f001601                  (scan response)
```

- `d10b` / `d20b` = little-endian company IDs `0x0BD1` / `0x0BD2` (same `0x0bdx`
  family as the GATT service).
- `4d5956552030463335` = ASCII `MYVU 0F35`, living in the scan-response half.

The scan matcher only checked local name / `peripheral.name` / service UUIDs — all
empty — so it discarded them. **Fix:** match on the manufacturer-data company ID,
with the `MYVU` ASCII marker as a second signal (`BleCentral.isMyvuManufacturerData`
+ `embeddedName`). A filtered `scanForPeripherals(withServices:)` can *never* find
these glasses. Documented in `PROTOCOL.md`; tested in `AdvertisementMatchTests`.

After the fix: full connect → ECDH bond → init burst → `BLE session ready`, stable
link, 0 disconnects. App-layer traffic is **plaintext** (crypto only wraps the
pairing bond), so the JSON/protobuf relay frames are directly readable in a capture.

---

## 3. What works over BLE (confirmed on hardware)

- **Notifications** — `{"action":"notification",…}` renders a card on the lens.
- **Brightness / volume / zen mode / screen timeout** — all apply.
- **Display language** — `set_language` switches the whole HUD locale. Confirmed:
  `{"language":"zh","country":"CN"}` → sent `en`/`US` → `{"language":"en","country":"US"}`,
  and MyvuOS strings render in English afterward. `en`/`US` and `zh`/`CN` are the two
  attested pairs.
- **Trackpad** (`phonepad`), **clock sync**, **weather**, **device queries**.

These all push to the **already-running launcher**, which is why they work without
the audio link.

---

## 4. Navigation — link handoff + background modes

- iOS exposes **no way to read another app's live navigation** (Live Activities,
  notifications, CarPlay templates are all sandboxed). Mirroring Waze/Google/Apple
  Maps is impossible on iOS.
- Built `MapsLink` (in `MyvuNav`) instead: paste a share link from Apple/Google/Waze
  → parse coordinates (or a place name for Nominatim) → `NavSession.start()`. Handles
  each app's format and short-link redirects. Tested in `MapsLinkTests` (10 tests;
  one caught a real out-of-range-coordinate bug).
- Added real `UIBackgroundModes` (`bluetooth-central` + `location`) via a proper
  `Info.plist` (the `INFOPLIST_KEY_UIBackgroundModes` generated key is silently
  ignored), plus `CoreLocationSource(allowsBackgroundUpdates: true)`. Without these
  the app is SIGKILL'd on backgrounding and navigation dies at screen-lock.
- **Note:** navigation frames stream only while moving (CoreLocation suppresses
  stationary updates) — a timer-based resend from the last fix is still an open TODO.
- **But navigation is gated** — see §6. `open_app` for `com.upuphone.ar.navi.glass`
  is refused until the audio link exists.

---

## 5. The activation red herring (my misdiagnosis, corrected)

For a long stretch this was misread as an **account-activation** problem, because:

- The init burst carries `system_glass_active` / `req_active_state`, and the glasses
  reply `value:false`.
- Asserting `value:true` (four variants, real accountId, correct source package)
  was **rejected** — the glasses kept answering `false`.
- The official global app rejected the glasses: *"Please use the mainland Chinese
  version of glasses with the MYVU App."*

This led down a long path (China-account theory, seller `代激活`, mitmproxy). **It
was wrong.** See §6 for what the messages actually are.

Notable byproduct: the init burst hardcodes account ID **`1304198482`** — a stranger's
account from the original reverse-engineering capture. Harmless, but wrong, and it's
replayed on every connect.

---

## 6. The REAL root cause — the classic-Bluetooth audio link

The sibling reference repo (`Panny777/Meizu-Myvu-Client`, Python/Windows) had already
solved this and states it flatly:

> **"Not account/server-gated. No server/cloud/token calls exist in the connect
> path; the account/active-state messages are analytics only."**
>
> "bypasses any account, license, or DRM system (**there isn't one**)."

**"Please connect to the mobile first" = the glasses have no classic-BT audio
(HFP/A2DP) connection.** Confirmed on their hardware: `tici` (teleprompter) while
BLE-only pops the message; with **HFP + relay** up, `tici` opens for real.

### How the real app does it (`BrEdrMasterManager.connectBrEdr()`)

1. **BLE connects first**, waking the glasses' classic radio.
2. Glasses sync a **fresh random RFCOMM UUID** to the phone over BLE
   (`CMD_SPP_SERVER_UUID_SYNC = 70`).
3. The **phone, as BR/EDR master, connects to the glasses' MAC**: **HFP**, **A2DP**,
   and the **relay channel** (at that UUID).
4. Once HFP + relay are up, the gate clears and the launcher opens its apps.

Key detail: the phone **pages the glasses by MAC address** — the glasses never answer
a classic inquiry scan. Android does this with `connectBrEdr()`; Windows with WinRT
RFCOMM-by-UUID; there's also a minimal HFP AG responder (`hfp.py`) that just replays
the captured AT-command responses (`AT+BRSF=767` → `+BRSF: 3943` → `OK`). Classic-BT
bonding is **non-persistent** — it re-pairs from scratch every session, so the audio
link must be **live during use**.

### Why iOS specifically cannot do this

- iOS gives apps **no API to open a classic-BT connection to an arbitrary device by
  MAC**. The only classic path is **ExternalAccessory — MFi-only**. The XGA010C is
  **not MFi** (same reason the relay channel is unreachable on iOS).
- The glasses **don't answer a classic inquiry**, so they never appear in iOS
  **Settings → Bluetooth** for manual audio pairing. (Windows' "Add device" wizard
  bridges BLE→classic-audio with system access; iOS has no equivalent for a non-MFi
  device.)
- Classic bonding is non-persistent, so you can't "pre-pair" on Android and then use
  iOS — the audio link has to be present the whole time.

**This is also why the official iOS app rejected the glasses** — that app targets
MFi/newer models (StarV Air2); it can't drive an XGA010C either.

---

## 7. Firmware — can it be obtained? (No, currently)

Investigated exhaustively via `Reverse/` (two decompiled app versions + FINDINGS docs):

- **OTA API** (`POST {sArOta}/client/v1/arupgrade/checkV2`, HMAC-signed, key
  `wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI=`) — our real deviceId/serial produces
  valid signed requests (`code:0`), but **`existsUpdate:false` for every environment,
  deviceType, and version**. A garbage deviceType and the known-good `View` type
  return byte-identical `false` → **no active rollout for Air/XGA010C**. Nothing to
  download; the firmware only appears in `packLink`/`packLink2` during an active
  rollout matched to the device. (`Reverse/tools/probe_real.py`, `watch_ota.py`.)
- **No static firmware URL** in the app; the "download URL" the other session found
  is the **companion APK**, not firmware.
- **No public dump** exists for XGA010C (searched EN + CN).
- **No host access:** USB-C is **charge-only** (nothing enumerates on the Mac across
  normal mode, MMI mode, or replug; MMI test classifies the port as 充电/Charging).
  No ADB. No developer options in the launcher (Settings → About shows only Factory
  reset). `buildType: user` → no root.
- **MediaTek BROM check:** installed `mtkclient`, watched for VID `0x0E8D` while
  attempting BROM entry (button-hold + plug) three times (60/90/120s, empty USB bus).
  **Nothing enumerated** — the port carries no data lines. Non-invasive route dead.
- The **app is Ijiami-DRM-packed** (`ijiami.dat` 19MB + `ijiami.ajm` 8.5MB; single
  loader DEX), so the binding/HTTP client is not statically readable; Flutter is AOT
  (strings only); binding server traffic is **certificate-pinned**. Four locked boxes.
- Only remaining route to the image is **hardware teardown** (eMMC ISP/chip-off) —
  expert microsoldering, brick risk, and it wouldn't unlock anything anyway.

---

## 8. Recommendations

1. **Use an Android phone.** Pair the glasses as a **Bluetooth audio device**
   (Settings → Bluetooth). ⚠️ It must pair as **audio**, not a bare "Other device" —
   generic pairing **reboot-loops** the glasses; if that happens, turn Bluetooth off
   and let them settle. Once connected as audio, the gate clears and
   teleprompter / navigation / music work — via the official app **or** the Android
   reference SDK (`Reference/Meizu-Myvu-SDK/`). **No account required.**
2. **Or a Windows PC** with `Reference/Meizu-Myvu-Client` — the confirmed-working
   path from the reference author ("Settings → Add device" pairs them as audio).
3. **On iOS**, accept the BLE-only feature set (notifications/settings/language/
   trackpad). The app-launch features are not reachable on iOS for this model.
4. **Firmware:** run `Reverse/tools/watch_ota.py` to catch a `packLink` if/when
   Meizu ships an XGA010C rollout — the only way the image becomes downloadable.

### iPhone-usable path (BLE lens cards)

Stock teleprompter / nav HUD / music stay gated on iOS. The demo and SDK now
ship substitutes that work over BLE alone:

- **`LensScript` / `LensCards`** — paragraph script on notification cards
  (Controls → Script).
- **`NavSession(surface: .lensCard)`** — turn-by-turn as updating lens cards
  (Navigate tab). Includes a heartbeat so stationary CoreLocation pauses do not
  leave a stale cue.
- Weather auto-starts when the BLE session becomes ready.

Rebuild/install `MyvuDemo` on the phone to exercise these.

---

## 9. Repository artifacts produced this session

- `Examples/MyvuDemo/…` — wire logging, language buttons, maps-link paste, background
  modes, `Info.plist`, content-only teleprompter button, experiment controls.
- `Sources/MyvuNav/MapsLink.swift` + `Tests/MyvuNavTests/MapsLinkTests.swift`
- `Tests/MyvuCoreTests/AdvertisementMatchTests.swift`
- `PROTOCOL.md` — advertisement format, display-language, `open_app` activation-gate
  (later understood as the audio-link gate), USB/dev-mode dead-ends.
- `Captures/session-2026-08-20-connect.log` — full connect-to-ready capture.
- `Reverse/` — decompiled apps, OTA probes, FINDINGS docs (pre-existing + extended).
- `Reference/` — cloned `Meizu-Myvu-SDK` and `Meizu-Myvu-Client` (the repos that
  identified the real audio-link mechanism).
- `INVESTIGATION.md` — this document.
