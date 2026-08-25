# MYVU wire protocol (iOS notes)

Reverse-engineered from packet captures of the Meizu MYVU / Star Air (XGA010C)
and its official app. This documents what the SDK implements; it is not an
official spec and may drift with firmware updates.

The wire format is the same one the [Android SDK](https://github.com/Panny777/Meizu-Myvu-SDK)
documents — it is the glasses' protocol, not a platform's. What differs on iOS
is which parts of it can be reached at all, so each section below ends with the
iOS consequence where there is one.

## The two-link architecture, and why iOS only gets one

The glasses expect **two Bluetooth links at once**, in this order:

1. **BLE first.** The glasses' classic radio does not answer a page until BLE
   has woken them. BLE carries the ECDH bond and is the only channel that
   announces where the app relay lives (the per-session RFCOMM UUID).
2. **Classic Bluetooth (RFCOMM) second**, to that per-session UUID. On Android
   this is the link that carries app traffic.

**iOS cannot open step 2 at all.** `ExternalAccessory` only talks to accessories
whose manufacturer joined Apple's MFi programme and declared a protocol string
in `UISupportedExternalAccessoryProtocols`; the MYVU glasses did not, so their
RFCOMM channel is invisible to a third-party app. There is no entitlement or
private API that changes this — Apple simply does not expose arbitrary SPP.

So this SDK is BLE-only, and BLE carries the app traffic. That is enough for
notifications, settings, trackpad, weather, clock, and the assistant's typed
path — but **not** enough to launch glasses apps. Teleprompter, navigation HUD,
and music need a live classic-Bluetooth **audio** link (HFP/A2DP) plus the
RFCOMM relay; see the audio-link gate section below. `MyvuClient` still logs the
relay UUID when the glasses announce it (`CMD_SPP_SERVER_UUID_SYNC`), so it is
visible in a capture even though iOS cannot open it.

## Discovery: what the glasses actually advertise

Confirmed on an XGA010C by dumping every advertisement in a device scan. The
advert carries **no local name and no service UUIDs** — nothing but manufacturer
data:

```
mfg=d10b03000100021003caf0feb190d30400052001a0100002    (advert)
    d20b13094d59565520304633350f001601                  (scan response)
```

- `d10b` / `d20b` are little-endian company IDs `0x0BD1` / `0x0BD2` — the same
  `0x0bdx` family as the GATT service. The advert and the scan response use
  different ones; CoreBluetooth reports both as one concatenated blob.
- `4d5956552030463335` is ASCII `MYVU 0F35` — the name the official app shows.
  It lives in the scan-response half, so it is absent from the first
  advertisement seen.

The consequence is that **matching on name or service UUID finds nothing**. A
scan filtered with `scanForPeripherals(withServices:)` never reports these
glasses at all, and an unfiltered scan matched on `CBAdvertisementDataLocalNameKey`
or `peripheral.name` discards them (`peripheral.name` is nil until the device has
been connected once). `BleCentral` therefore keys on the manufacturer-data
company ID, with the `MYVU` ASCII marker as a second signal and the name/service
checks kept only as fallbacks for other firmware.

The remaining manufacturer-data bytes are not decoded. One observation worth
recording: the six bytes `caf0feb190d3` also appear in the `0x2020` link frames
of the same session (`000009100a06caf0feb190d310461a0421910000`), so they are
some per-device identifier — but it is NOT the MAC the glasses report during
pairing, which is `2C:6F:4E:01:0F:35`.

## BLE GATT

`makeUUID(i)` = `0000{i:04x}-0000-1000-8000-00805f9b34fb`.

- **Service** `0x0BD1` (`makeUUID(3025)`, "StarryNet"); some builds advertise
  `0x0BD3` instead, and both are matched during a scan.
- **Characteristics** (Air family, each write-without-response + notify):
  - `0x2020` internal — link / pairing (version negotiation + ECDH)
  - `0x2021` external — application data (relay frames)
  - `0x2022` urgent — heartbeat
  - `0x2023` glass write
  - V2 units use `0x2010 / 0x2011 / 0x2012`.
- **Heartbeat**: `00 00 09 10 00` written to the urgent characteristic every
  **3 s**; without it the glasses' watchdog drops the link.

**iOS specifics.**

- *No MTU request.* CoreBluetooth negotiates the largest MTU it can at connect
  time and never exposes it. `BleTransport` reads
  `maximumWriteValueLength(for: .withoutResponse)` instead and derives
  `DMTU = usableLength − 2`. There is no "MTU changed" callback, so the value is
  re-read at the safe boundaries between handshake phases, and channels defer a
  change until no message is mid-reassembly.
- *Writes must be paced.* Every protocol write is a write WITHOUT response, and
  CoreBluetooth silently DROPS those submitted while `canSendWriteWithoutResponse`
  is false. Since a multi-frame message is a `MIX_CTR` followed by fragments
  1..N whose order and presence both matter, a dropped write corrupts the
  message with no error anywhere. `BleWriteQueue` buffers and drains on the
  peripheral's readiness callback, with a 30 ms re-drain because that callback is
  documented as a hint and has been observed not to fire.
- *No CCCD writes.* `setNotifyValue(_:for:)` handles descriptor `0x2902` itself.
- *Peripherals are identified by `UUID`, not MAC.* iOS never exposes a
  peripheral's Bluetooth address. Persist `DiscoveredGlasses.id` (stable per
  device per app installation) and hand it back to `connect(id:)`.

### BLE packet transport

Little-endian. Every packet starts with a 2-byte sequence `sn`:
- `sn == 0` → control packet: `type` at `[2]`, `pkgType`/command at `[3]`.
- `sn != 0` → data fragment `sn`, payload from `[2:]`.

Control types: 0 CTR, 1 ACK, 2 SINGLE, 3 SINGLE_ACK, 4 MNG, 5 MNG_ACK,
6 FAST_CTR, 7 FAST_ACK, 8 MIX_CTR, 9 SINGLE_NO_ACK.
Package types: 0 COMMON_DATA (app), 16 STARRY_DATA (pairing), 17
STARRY_DATA_INIT (first negotiation). ACK statuses: 0 SUCCESS, 1 READY, 2 BUSY,
3 TIMEOUT, 4 CANCEL, 5 SYNC.

## Pairing (ECDH bond) — internal characteristic

1. **Version negotiation** — FAST_CTR, pkgType 17, JSON
   `{"i":ownIdHex,"v":3,"e":5,"m":512,"b":2,"c":"9999"}`. The reply's `"e"`
   picks the AES mode: 1 = CBC/PKCS5, 2 = CTR/NoPadding, else GCM.
2. **WRITE_SWITCH_KEY (cmd 11)** — our SPKI public key + 6-byte MAC.
3. **← WRITE_SWITCH_KEY** — glasses' SPKI public key ‖ 16-byte IV, plus
   `AES(their DeviceInfo)`. We derive the shared secret and decrypt DeviceInfo.
4. **WRITE_SWITCH_INFO (cmd 13)** — our **double-encrypted** DeviceInfo. Bond
   established.

Crypto: EC **P-256 (secp256r1)**; the raw 32-byte X coordinate is used directly
as the AES-256 key (no KDF). IV = first 16 ASCII chars of a **lowercase** UUID4
— the IV bytes are the hex characters themselves, so the case is key material.
Public keys are X.509 SubjectPublicKeyInfo DER (91 bytes). **No certificate or
signature check anywhere** — any correct speaker is accepted.

`device_id = dealDeviceId(mac)` = reverse the 6 MAC bytes **and** bitwise-NOT
each (verified: `7ca375d094f1 → 0e6b2f8a5c83`).

**iOS specifics.** CryptoKit covers P-256 key agreement and AES-GCM, but has no
CBC or CTR, so `StarryCrypto` uses CommonCrypto for those two modes. And because
iOS has no notion of the phone's own MAC, the identity sent here is the
synthetic `AA:BB:CC:DD:EE:FF`. That is not an iOS compromise: Android has
returned a fixed placeholder from `BluetoothAdapter.getAddress()` since Android
6, so the reference SDK sends a synthetic value too, and the glasses only use it
to key the session.

### LinkProtocol

`LinkProtocol { 1: device_id (bytes), 2: cmd (varint), 3: data (bytes) }`.
Commands: INIT 0, WRITE_SWITCH_KEY 11, WRITE_SWITCH_INFO 13, and the relay
lifecycle — **SPP_SERVER_UUID_SYNC 70**, SPP_SERVER_REQUEST_CONNECT 71,
STATE_OPEN 72, STATE_CLOSE 73. The last four are logged but not acted on: see
the note about RFCOMM above.

`DeviceInfo { 1:btMac, 2:companyId, 3:categoryId, 4:modelId, 5:name, 6:battery,
7:btStatus }`. `btStatus`: DEFAULT 0, BOND 1, … CONNECTED_ACL 4, CONNECTED_HFP
5, CONNECTED_A2DP 6, …

**iOS specifics.** An app cannot connect HFP/A2DP profiles programmatically, nor
read whether they are connected. `btStatus` therefore stays at the configured
default unless the host app calls `MyvuClient.updateBtStatus(_:)` — detect the
route yourself with `AVAudioSession.currentRoute` if the glasses need to show
"phone connected".

## RunAsOne session (ability auth) — external characteristic, plaintext

After the bond, the glasses stay on "Open MYVU AR App" until they get the
ability handshake. Two phases, **both required**:

- **AUTH (type 0)** — AuthBean JSON advertising
  `["abilityRelay","abilityRelayBypass","abilityAir","abilityShare"]`,
  `version:"2.40.51"`, `weight:233333`, airMapping to
  `com.upuphone.star.launcher`.
- **AUTH_SUCCESS (type 12)** — without it the glasses ACK data but never engage
  the app layer.

StreamReq/AUTH class byte is `0x02`. The glasses send the ability reply more
than once (twice, observed on BLE); answering each copy starts a second init
burst on the same sequencer and breaks the 1..N msgId run, so `RelaySession`
latches `authConfirmed`.

## RunAsOne relay (SuperMessage)

**TlvBox** is big-endian: `[tag:1][len:2 BE][value]`, ints fixed-width BE,
nested boxes serialized recursively. Tags: 100 MSG_TYPE, 101 MSG_ID, 103
NEED_CALLBACK, 105 MSG_BODY, 109 APP_UNITE_CODE, 112 CATEGORY, 113 PAYLOAD.
msgType: 3 SEND (data), 4 SEND_SUCCESS (ack), 6 OPEN_SUCCESS.

One frame:

```
0x01                                  # FRAME_PREFIX
TlvBox{ 112 category=3,
        113 payload = TlvBox{
            100 msgType, 101 msgId, 103 needCallback,
            109 appUniteCode, 105 msgBody } }
```

**Sequencing is load-bearing.** `msgId` starts at 1 and increments with no
gaps; the glasses track the last received id and buffer (never deliver) anything
that looks like an out-of-order jump — which is why replaying a capture's stale
high msgIds fails.

### StMessage envelope

An action is wrapped: `StMessage { 2:sourcePkg, 3:targetPkg, 4:action_json,
6:msgId }` (msgId base 5001). Default src/dst `com.upuphone.star.launcher`.
Inbound mic audio is binary field 5 (see code:109).

Note that a body is protobuf with JSON *inside* it, so it is not valid UTF-8 as
a whole. Decoding one strictly returns nil and every text scan over it silently
matches nothing; `Data.scannableText` decodes lossily so the embedded JSON
survives and only the framing bytes become replacement characters.

## Init burst

Even after the bond and ability handshake, the relay dispatcher stays
half-asleep until it sees a clean sequence of opening app messages. The SDK
replays a captured burst (`Sources/MyvuCore/Resources/captured_init.txt`) with
fresh 1..N msgIds, paced 200 ms apart, dropping captured ACKs and stale-state
messages (`SyncOffSetTime`, `sync_clone_data`). Override the source via
`MyvuConfig.initBurstSource`.

## Display language

`set_language` switches the glasses' entire HUD locale, and it works — confirmed
on an XGA010C whose firmware shipped set to Chinese:

```
<- {"language":"zh","country":"CN"}                      before
-> {"action":"system","data":{"action":"set_language",
                              "value":{"language":"en","country":"US"}}}
<- {"language":"en","country":"US"}                      after
```

The change is immediate and persistent, and MyvuOS's own system strings render in
English afterwards ("Open MYVU App to connect the phone"). Read the current value
back with the `get_language` query, which replies in the same
`{"language":…,"country":…}` shape.

Neither the Android SDK nor the Python client documents this, so treat the set of
accepted locales as unknown — `en`/`US` and `zh`/`CN` are the two attested pairs.
The glasses' launcher package in the init burst is
`com.upuphone.star.launcher.intl`, which is consistent with English resources
being present on the device rather than being fetched.

## Weather

Sent to the **launcher** as `{"action":"weather","data":{ …ArWeatherModel… }}`.
Unlike the `system` family there is **no nested `data.action`** — `data` *is* the
model. Wire keys are the model's Java field names verbatim, because the official
app serialises with plain Gson and no `@SerializedName`. Gson also omits null
fields by default, which is the shape the glasses were built against: an unknown
value must be **absent**, not JSON `null`.

Fields: `temp`, `weather` (condition text), `dayTempMax`, `dayTempMin`,
`areaName`, `iconCode`, `lastUpdate`, `sunriseTime`, `sunsetTime`, `aqi`,
`quality`, `futureDay[]` (each `date`, `dayTempMax`, `dayTempMin`, `weather`,
`iconCode`). Temperatures are integer degrees **Celsius** — the official app
hardcodes `unit=metric` and there is no unit flag to negotiate. Timestamps are
`yyyy-MM-dd HH:mm:ss`. `iconCode`, `aqi`, `quality` and `futureDay` are
non-nullable in the model and are always sent.

**Icon codes** live in the glasses' launcher, not the phone APK, so they could
not be read out. Three are attested from the official app's own mock payload —
`1` 多云 (cloudy), `2` 阴 (overcast), `7` 小雨 (light rain) — and they land exactly
where the standard Chinese/CMA weather-icon numbering puts them, so the rest of
`WeatherCodes` follows that table as an educated guess.

The glasses request a refresh with `{"action":"syncWeather"}`. Curiously the
official app parses this and then drops it (its handler callback is never
assigned), so on a stock phone weather only ever arrives from the app's own
30-minute timer. This SDK answers it.

## Navigation

Two different destinations, and mixing them up makes navigation silently do
nothing:

- `open_app` / start frames go to the **launcher** (`com.upuphone.star.launcher`)
  — it is the launcher that opens apps.
- `navi_info` / `navi_event` frames go to the **nav app**
  (`com.upuphone.ar.navi.glass`) directly.

Both are sourced from `com.upuphone.ar.navi.lite`. Frames carry the app's own
short keys: `ic` icon, `pd` total distance, `prd` remaining, `prt` remaining
seconds, `nrn` next road, `nrd` distance to the turn, `ns` speed (a STRING),
`rdd` distance ridden, `gs` GPS fix, `hsr` road class, `bts` auto-brightness,
`ack` epoch millis. Nothing renders until the phone answers the glasses'
launch-app request (type:11 → type:12), which `InboundRouter` does.

The `ic` → arrow mapping is a HERE ManeuverAction-style enum that appears
nowhere in the decompiled app, so `IcMap` is largely guesswork. Use
`NavSession.sendCalibrationFrame(ic:roadName:)` to put a value on the lens and
see what it draws.

## AI assistant (code map)

The glasses stream their mic continuously as **code:109** Opus frames (field 5 =
`[2-byte BE length][Opus frame]`, SILK wideband 16 kHz). Ordering the glasses
enforce with real timers:

```
code:2            assistant config (capability flags; before the first frame)
code:4            session ack (arms an 8s timeout)
code:104 type:1   VAD start (first audio; the only thing that clears the timeout)
code:104 type:2   VAD end
code:101 type:0   growing caption partials
code:101 type:1   final caption
code:106 (7)      VR_PROCESSION — only AFTER the final caption
code:102          open the LLM card scene for this question (fresh per sessionId)
code:122 base_status:1 then :2   commit the answer text into the card
code:6 type:1/2   TTS play start / end
code:107          idle / end of turn
```

**The answer surface is the LLM card scene**, not `code:5`. `code:2` must enable
`isChatGptCardDisplayEnable` and `isContinuousDialogueEnable` or the scene is
never configured and a second answer crashes it.

Two things the official app notably does **not** do, both of which wedge the
glasses if added: sending the `106` VR TTS states (3/4) around playback (only
`code:6` is used), and sending `VR_MULTI_WAKEUP` at a turn boundary.

**Multi-turn is capped by the protocol, not by choice.** The official app does
not decide when to keep listening — its cloud NLU does, via an `isNextRecorded`
flag carried in each answer. A client calling a plain LLM never receives that
flag, so a forced follow-up the glasses were not told to expect hangs the
session. `AiSession.spokenFollowUpTurns` opts in for experimenting.

Triggers from the glasses: **code:3 control:1** = AI button, **code:7** = wake
word ("Hey Aicy"); **control:0** = button release / page close (ends at the next
turn boundary, never mid-turn).

**iOS specifics.** There is no Opus decoder anywhere in the system frameworks —
AudioToolbox does not ship one, and Android's equivalent path here uses
MediaCodec's `audio/opus`. `MyvuAI` therefore takes an injected `OpusDecoding`
rather than making every consumer carry libopus for a feature most do not use.
Without a decoder the microphone path is unavailable and `AiSession.ask(_:)`
(typed questions, full on-glasses answer flow) is the only route.

## The audio-link gate ("Please connect to the mobile first")

The lens card **"Please Connect to the mobile first"** / 请连接手机 is **not**
account activation or DRM. It means the glasses have **no classic-Bluetooth
audio link (HFP/A2DP)** from a phone. Confirmed against the reference
Windows/Android clients and on this XGA010C hardware: `tici` (teleprompter)
while BLE-only shows the card; with **HFP + RFCOMM relay** up, it opens.

There is **no account / cloud / license gate** on the connect path.
`system_account` and `system_glass_active` / `req_active_state` in the init
burst are analytics only. Asserting `value:true` (real `accountId`, correct
source package, with `btStatus` reported as HFP or ACL) leaves the glasses
answering `value:false` — because those messages do not open the audio link.

```
-> {"action":"system_glass_active","data":{"accountId":"",
     "action":"req_active_state","active_time":"0","value":false}}
<- {"action":"system_glass_active","data":{"action":"req_active_state","value":false}}
```

### How the official / reference clients clear it

1. BLE connects first (wakes the classic radio).
2. Glasses sync a fresh random RFCOMM UUID over BLE (`CMD_SPP_SERVER_UUID_SYNC`).
3. The **phone**, as BR/EDR master, pages the glasses' **MAC** and opens **HFP**,
   **A2DP**, and the **relay** at that UUID.
4. Once HFP + relay are live, the launcher allows its apps.

The glasses do **not** answer a classic inquiry scan — only a directed page by
MAC works. Classic bonding is **non-persistent** (re-pairs every session), so
the audio link must be live during use. You cannot pre-pair on Android and then
expect iOS to inherit it.

### What this gates

| Works over BLE alone (launcher already running) | Needs live HFP/A2DP (+ relay on Android/Windows) |
| --- | --- |
| notifications, brightness, volume, zen mode, screen timeout, **language**, trackpad (`phonepad`), queries, clock sync, weather | **teleprompter** (`open_app` / `com.upuphone.ar.tici`), **navigation** (`com.upuphone.ar.navi.glass`), music |

The gate is the glasses **app**, not only the launch message: opening the
prompter from the on-lens launcher and sending content-only
(`teleprompterContentOnly`) still shows the card until the audio link exists.

### Why iOS cannot clear it (XGA010C)

- No public API to open classic BT to an arbitrary MAC. The only classic path is
  **ExternalAccessory (MFi)**; this model is **not MFi**.
- Because the glasses skip inquiry, they never appear in **Settings → Bluetooth**
  for manual audio pairing the way Windows' "Add device" bridge does.
- The official iOS app targets newer MFi models (e.g. StarV Air2) and rejects
  this unit for the same class of reason.

**Use Android or Windows** for teleprompter / nav / music. On iOS, accept the
BLE-only surface above. See `INVESTIGATION.md` for the full trail.

Also confirmed dead: **no USB host access** (USB-C is charge-only; MMI labels it
充电/Charging; nothing enumerates on a Mac). No ADB, no developer options in the
launcher, `buildType: user`. BLE is the only channel this SDK can use.

Note: the bundled init burst still carries captured `accountId` `1304198482` —
harmless analytics replay, wrong identity, worth scrubbing separately.

## Deliberately not implemented

`do_recovery` (factory reset) and `user_feedback` — dangerous or useless, omitted
on purpose. `system_account` and `system_glass_active` / `req_active_state` are
sent by the init burst as analytics; they do not clear the audio-link gate.
