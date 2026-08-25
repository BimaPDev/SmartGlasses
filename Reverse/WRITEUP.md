# Pulling firmware off a locked-down OTA server — MYVU Star Air (XGA010C)

**A field report on getting the Meizu MYVU Star Air's firmware — which the vendor's
update server insisted did not exist — by understanding exactly how that server
decides what to hand out, and asking it the right question. Plus everything the
firmware then revealed.**

| | |
|---|---|
| Device | MYVU Star Air (XGA010C), advertised `MYVU 0F35` |
| SoC | Bestechnic **BES1600** (dual-core: M55 app + M33 BT/MCU) |
| Installed ROM | `Flyme XR 1.0.12.88.20250217_Air_FR` (buildType `user`) |
| Obtained | `1.0.12.83` and `1.0.7.83` OTA packages |
| Authored | 2026-08-23 |

Companion technical record: [`FIRMWARE_FINDINGS.md`](FIRMWARE_FINDINGS.md). Shareable
web version: Claude artifact `e3f1d733-949a-4b03-9120-02a83c646d00`.

---

## 01 · The setup

The goal was mundane — get iOS text notifications onto the glasses — but it kept
running into a wall: the firmware was needed to answer questions the app decompile
couldn't, and the firmware appeared unobtainable.

The glasses run `Flyme XR 1.0.12.88.20250217_Air_FR`. USB-C is charge-only (no ADB,
no data), and every prior avenue for the firmware image was marked exhausted: no
public dump, no eMMC access, and the vendor OTA endpoint returning
`existsUpdate:false` for the device. Starting position: "the server has nothing for
this model."

The companion Android app (`com.upuphone.star.launcher.intl`, build 2.40.51) was
decompiled with jadx, giving the cloud API surface. The current CN app (2.49.24) is
**iJiami-packed** (a runtime packer that encrypts the DEX at rest and decrypts in
memory), so the international build was used for anything needing readable code.

---

## 02 · The assumption that was wrong

The whole "firmware is unobtainable" conclusion rested on one belief about the
update server — and that belief was false.

> **False premise:** "The OTA server gates on whether a rollout *record* exists for
> the model, not on the client's version — so sweeping versions is pointless; they
> all return `existsUpdate:false`."

Every probe up to this point had sent the glasses' *real* version, `1.0.12.88`, and
always got nothing back. That looked like "no firmware exists." It was actually
something much more specific.

> **Reality:** The server absolutely gates on version. Each published update carries
> a `supportFrom`–`supportTo` window — the range of *currently-installed* versions
> eligible for it. The installed `1.0.12.88` sits **above** the newest window's
> ceiling (`1.0.12.23`), so it correctly gets nothing. Older versions still have
> **open windows** — and claiming to be on one hands over the package.

The device wasn't too obscure to serve — it was **too new**. The firmware was one
carefully-chosen lie away.

---

## 03 · Reproducing the request signature

Before the server would answer at all, the OTA check had to be signed exactly the
way the app signs it. The first unsigned probe returned `9100001 / 签名校验不通过`
("signature verification failed").

The signer lives in the app's `com.upuphone.star.httplib.SignUtils`. It is not any
of the header-based schemes the rest of the app uses — the FOTA library rolls its
own:

```
# checkV2 is an unsigned-looking POST with a form body, but requires a `sign` field
sign = HMAC_SHA256_hex( sorted("k=v" joined by "&") , key )
key  = "wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="   # raw ASCII bytes, NOT base64-decoded

# the device id is a salted hash of the serial number
deviceId = SHA256_hex( "RhdNS`Z?" + serialNumber )
```

Params are reflected off the request object (nulls dropped), sorted alphabetically,
HMAC'd, and the lowercase-hex digest is appended to the form body as `sign`. With
that reproduced the signature check passed — and the server moved on to complaining
the device id was empty, which the serial (recovered from an earlier BLE capture,
`1001160244J0008Q`) filled in.

**Note:** the HMAC key is hardcoded and shared across all devices, so a valid
signature is fully reproducible offline. No per-device secret is involved.

---

## 04 · The version window — the actual trick

With a valid, device-identified request, the only remaining variable was the
*claimed* current version.

```
1.0.0        1.0.7.83     1.0.12.23                    1.0.12.88
  |------[ win → 1.0.7.83 ]---[ win → 1.0.12.83 ]----------|
                              ^claim 1.0.10.0 ✓            ^real 1.0.12.88 ✗
                               (inside window)              (above ceiling)
```

1. Send `checkV2` with a correct signature + real `deviceId`, but a **claimed
   version chosen to sit inside an open window**.
2. The server matches the newest update whose `supportFrom…supportTo` range contains
   that version and returns it — with a **pre-signed Aliyun OSS download URL**
   (expiry stamped for the year 2066, effectively permanent).
3. A sweep of claimed versions maps the entire published table: two distinct
   packages covering the low ranges. `1.0.12.83` is the ceiling of what exists.

**Why the OSS link works when the bucket doesn't:** the same Aliyun bucket refuses
anonymous *listing* (`AccessDenied` on `?prefix=ar-ota/`). But a **pre-signed object
GET** carries its own auth in the query string, so the URL the API hands back
downloads fine even though you can't browse the bucket. That was the door earlier
attempts couldn't open.

An exhaustive follow-up — **15 `versionType` × 10 `buildType` × 5 versions × 2
regions** (1,500 signed requests) — confirmed nothing newer than `1.0.12.83` exists
on any channel (`beta`/`gray`/`eng`/`dvt`/…). The installed `1.0.12.88` was never
published to the OTA server at all; it's a factory/retired build.

---

## 05 · What came down the wire

Two packages, both md5-verified against the values the server reported.

| Package | Size | Eligible window | md5 |
|---|---|---|---|
| `ota_star-air_1.0.12.83…zip` | 4.54 MB | 1.0.7.83 – 1.0.12.23 | `fb7de159…88ca` |
| `ota_star-air_1.0.7.83…zip` | 4.29 MB | 1.0.0.42 – 1.0.5.3 | `6e81dc3a…7cdb` |

Neither is an Android system image. Each zip holds **two raw, unencrypted BES1600
images**:

- `platform_tester.bin` (~6.7 MB) — the M55 application: LVGL UI, StarryNet,
  launcher, factory, eshell.
- `best1600_watch_bth.bin` (~1.3 MB) — the M33 Bluetooth controller.

Full source paths, symbols, and format strings are readable, which is what made
everything below possible.

---

## 06 · Inside the firmware

- **SoC — identified:** Bestechnic **BES1600**, proven by driver/HAL paths
  `platform/*/best1600/*`. The FCC filing had this under a shielded SiP with
  unreadable markings. Dual-core M55 (app) + M33 (BT/MCU).
- **Display:** JBD MicroLED, monochrome green (`jbd4010` / `jbd013_api.c`,
  `get_jbd_brightness`); 1-bpp assets; UI is LVGL.
- **iOS notifications — native:** full ANCS client on the M33 (`ANCC` subscribe) +
  `AncsManager` on M55; AMS (Apple Media Service) too. See §09.
- **OTA design:** dual-bank A/B flash, md5-checked, with automatic `do_ota_rollback`
  on a failed update. TrustZone `SecureFault` present; no obvious image-signature
  check visible in strings.

---

## 07 · Privileged / "dev" modes

There's a full engineering surface — and it has no password. The catch is how you
reach each tier.

1. **App debug panel — easy.** Exported activity `SuperAppDebugActivity`, launchable
   via `adb` on an Android phone with the app (server-env switch, log dump,
   `requestGlassLog`). Not the glasses themselves.
2. **MMI / factory mode — on-device.** Entered by a **power-on button hold** (no BLE
   trigger, no password); renders the factory self-test on the lens. Exact key +
   duration (3 s / 5 s candidates) couldn't be pulled statically — BES trace-hashing
   leaves the boot-key handler with zero string xrefs. Fastest to confirm on-device;
   reboot exits.
3. **eshell — the real root, wire-level.** Arbitrary memory `md`/`mw`, `xmodem`
   load-to-address, factory SN/MAC write, sensor cal, BT DUT/RF test. Runs on UART
   (or `debug_i2c`). No ADB, no BLE, no USB path — needs internal test points.

---

## 08 · Can you flash it?

Reflashing official firmware is a software job; custom firmware hinges on one
unconfirmed check; and a permanent brick basically requires touching the bootloader
or factory NV.

| Route | Brick risk | Why |
|---|---|---|
| OTA, official image | low | Dual-bank + `do_ota_rollback` survive a bad update. Needs the StarryNet OTA sender implemented. |
| OTA, modified image | low–? | Hinges on whether OTA-apply verifies a **signature** or only md5. Strings suggest md5-only, unconfirmed. If md5-only, custom firmware flashes with no teardown. |
| UART xmodem / mw | medium | No rollback net, but leaving the bootloader intact keeps BES ROM download-mode recovery available. |
| Bootloader / factory NV | high | Overwriting these — or erasing SN/MAC/calibration in `factory_section` — is where permanent bricks come from. |

**Reality check on "compile your own":** a from-scratch rebuild isn't practical —
it's a 6.7 MB image built against the proprietary BES SDK at fixed load addresses
(M55 `0x2C000000`, M33 `0x14000000`). The realistic path is **binary-patching** the
existing image. Before any write: dump the full flash, confirm ROM download-mode,
and never touch the bootloader or `factory_section`.

---

## 09 · The original goal: texts on the lens

The firmware implements Apple's notification service natively, so iOS texts can reach
the glasses without any app-side relaying.

On iOS the glasses act as the **ANCS client**: once bonded to the iPhone, the M33
subscribes to the phone's Notification Source and forwards to the M55 `AncsManager`,
which renders title + content on the lens (with call-notification filtering for
WhatsApp/Telegram/generic calls). Two requirements:

1. A real BLE **bond** with iOS — a plain connection won't expose ANCS
   (`ble bond & enable ancs`, `bond_ancs`).
2. One StarryNet message to flip the enable flag: **`SYNC_SMART_REMINDER_CONFIG`
   with `notificationEnable = true`** (otherwise the firmware drops notifications
   with "ios notification not enabled, pls open in MYVU app").

With the official MYVU app this is just "pair + toggle notifications on." From a
custom SDK it's: bond, then send that one config message.

---

## 10 · Tooling & open questions

**Scripts produced** (in `Reverse/`):

- `ota_checkv2_probe.sh` — one signed check
- `ota_version_sweep.sh` — map the windows
- `ota_channel_sweep.sh` / `ota_channel_sweep_mt.sh` — channel sweep (parallel)
- `download_ota.sh` — fetch + md5-verify a pack

**Still open:**

- Does OTA-apply verify a **signature** (decides custom-firmware flashing)?
- Exact **boot-key** combo for MMI mode.
- Flash memory map: bootloader / bank A/B / `factory_section` offsets.

---

**The one-line takeaway:** the firmware was never missing. The update server just
answers the exact question you ask it — and everyone had been asking as a device
that was already too new. Ask as an older one, with a correctly-signed request, and
it hands over a permanent download link.
