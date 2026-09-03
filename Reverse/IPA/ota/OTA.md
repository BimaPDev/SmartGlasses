# Firmware-OTA Surface — MYVU AR iOS IPA (XJOverSeas.app)

Bundle: `Reverse/IPA/extracted/Payload/XJOverSeas.app`. All facts below cite a
read file path. Android-side reference (read-only): `Reverse/FINDINGS.md`,
`Reverse/FIRMWARE_FINDINGS.md`, `Reverse/MYVU_cloud_API_map.md`,
`Reverse/download_ota.sh`.

## 1. FairPlay limitation (must read first)

The main binary `extracted/Payload/XJOverSeas.app/XJOverSeas` and the Flutter
AOT `extracted/Payload/XJOverSeas.app/Frameworks/App.framework/App` both carry
`LC_ENCRYPTION_INFO_64` with `cryptid 1` (measured by `otool -l`, recorded in
`Reverse/IPA/recon/RECON.md`). All 99 embedded `.framework` binaries,
including `NordicDFU.framework` and `nordic_otas_plugin.framework`, are also
`cryptid 1` per `Reverse/IPA/recon/frameworks.csv` (confirmed independently
here with `otool -l` on both: `NordicDFU` cryptoff 16384 / cryptsize 344064 /
cryptid 1; `nordic_otas_plugin` cryptoff 16384 / cryptsize 32768 / cryptid 1).
This is **FairPlay** App Store encryption: every `__TEXT` (code) page in these
Mach-O images is opaque without a decrypted dump from a jailbroken device. All
Dart business logic — including the app's actual OTA host constants,
`checkV2`-equivalent request builder, and HMAC/signing code — is compiled into
the encrypted `App.framework/App` AOT blob and is **not readable** from this
App-Store IPA. `strings` run directly against `XJOverSeas`, `NordicDFU`, and
`nordic_otas_plugin` for OTA/DFU/host keywords returned only encrypted-page
noise (e.g. `,NjDfuy`, `_dFuq`, garbled `oTA`/`DFU` fragments) or nothing at
all — not real ASCII literals — which is the expected signature of scanning
encrypted `__TEXT`. No native code was decrypted, disassembled, or claimed as
decrypted anywhere in this report.

## 2. What IS visible: DFU/OTA framework structure (via unencrypted `__LINKEDIT`)

Even though `__TEXT` is encrypted, each Mach-O's exported/imported Swift
symbol table (`__LINKEDIT`, unaffected by `cryptid`) is readable with `nm`,
and it demangles into full class/method names:

- `NordicDFU.framework/NordicDFU` — Info.plist (`extracted/.../Frameworks/NordicDFU.framework/Info.plist`)
  identifies it as CocoaPod `org.cocoapods.NordicDFU` v4.15.3 (Nordic Semiconductor's
  official `IOS-DFU-Library` Swift port). `nm` on the binary shows classes
  `DFUServiceInitiator`, `DFUServiceController`, `DFUFirmware`,
  `DFUFirmwareSize`, `ButtonlessDFU` (+ `ButtonlessDFUOpCode`,
  `ButtonlessDFUResultCode`, `ButtonlessDFURequest/Response`),
  `BaseDFUPeripheral`, `DFUControlPoint`, `SecureDFUControlPoint`,
  `DFUStreamBin`/`DFUStreamHex`/`DFUStreamZip` (+ error enums),
  `ManifestJSONContainer`, `DFUState`, `DFUError`, `LoggerDelegate`,
  `DFUProgressDelegate`. It links `CBCharacteristic`/CoreBluetooth and
  `ZIPFoundation` (`unzipItem` symbol), i.e. standard Nordic legacy+secure DFU
  over BLE with a zipped firmware package (bootloader/softdevice/application
  components per `DFUFirmwareSize`).
- `nordic_otas_plugin.framework/nordic_otas_plugin` — Info.plist
  (`extracted/.../Frameworks/nordic_otas_plugin.framework/Info.plist`) shows
  CocoaPod `org.cocoapods.nordic-otas-plugin` v0.0.1. `nm` shows a single
  Flutter-plugin class `NordicOtasPlugin` (`FlutterPlugin` `register(with:)`,
  `handle(_:result:)` method-channel entry points) with properties
  `filePath`, `controller: DFUServiceController?`,
  `centralManager: CBCentralManager?`, `selectedFirmware: DFUFirmware?`,
  `selectedPeripheral: CBPeripheral?`, and methods `searchDevice()`,
  `startOta()`, `setMessage(message:)`, `setFilePath(path:)`,
  `centralManager(_:didDiscover:advertisementData:rssi:)`,
  `dfuStateDidChange(to:)`, `dfuProgressDidChange(for:outOf:to:...)`,
  `dfuError(_:didOccurWithMessage:)`. It imports `DFUFirmware.init(urlToZipFile:)`
  and `DFUServiceInitiator.init(centralManager:target:)` directly from
  `NordicDFU`, confirming it is a thin Flutter MethodChannel wrapper around the
  Nordic DFU library — i.e. the OTA path is: Dart UI picks/receives a firmware
  zip URL → native `NordicOtasPlugin.startOta()` → `NordicDFU`
  `DFUServiceInitiator`/`DFUServiceController` push it over BLE to the glasses
  (matches the Android side's Ring-DFU note below).
- Confirmed wired into the app: `nm extracted/.../XJOverSeas` shows an
  imported Objective-C class reference `_OBJC_CLASS_$__TtC18nordic_otas_plugin16NordicOtasPlugin`,
  i.e. the main binary links and instantiates this plugin (consistent with
  Flutter's `GeneratedPluginRegistrant` auto-registration pattern).
- `App.framework/App` (Flutter AOT) `nm` output has **no** matching symbols
  for `nordic`/`ota`/`firmware`/`checkV2` — expected, since Dart AOT snapshots
  do not export per-function native symbols the way Swift/ObjC frameworks do;
  this binary is also fully `cryptid 1`.

## 3. UI-side evidence of a Ring OTA flow (Flutter assets, unencrypted)

`Frameworks/App.framework/flutter_assets/` is plain files (images/animations),
not compiled code, so it is readable regardless of FairPlay:
- `assets/images/icon_ring_ota.png` (file inventory:
  `Reverse/IPA/recon/file-inventory.txt`) — a Ring OTA icon.
- `assets/pag/ring2_ota_upgrading.pag` — a Ring2 "OTA upgrading" animation
  asset (PAG format). Both are also listed by key in
  `Frameworks/App.framework/flutter_assets/AssetManifest.json`.
These confirm a Ring/Ring2 firmware-update UI exists in the Flutter layer,
consistent with the Android `deviceType=Ring` firmware path.

## 4. Privacy-policy text corroborates the OTA data model (unencrypted HTML)

`Frameworks/App.framework/flutter_assets/assets/html/category_pp_en_US.html`
and `RING_PRIVACY_POLICY_en_US.html` (plain HTML, readable) contain a
"Firmware Update" section stating the app collects "Glasses name, model,
firmware version, serial number" / "ring name, ring model, firmware version,
ring SN" "to detect and update the firmware" and to prompt the user "you will
be prompted to update the software or firmware accordingly." This is
consistent with — but not proof of — the same field set Android sends to
`checkV2` (`deviceType`, `deviceModel`, `version`/firmware version, `deviceId`
derived from serial number). No literal host, path, or field name from the
Android scheme appears in this HTML.

## 5. No iOS OTA host/endpoint is readable

A recursive grep of the entire app tree (`.json`, `.plist`, `.html`, `.txt`,
`.xml`, plus raw `strings` over every OTA-relevant Mach-O) for
`checkV2|arupgrade|xr-nbs|myvu.cn|deviceType|HMAC|nordic` found **no** literal
API host or path anywhere outside: (a) the `SC_Info/Manifest.plist` files,
which only list framework filenames (`NordicDFU.sinf`, `nordic_otas_plugin.sinf`)
not URLs, and (b) the generic "firmware"/"nordic" hits already covered in §3–4.
`Reverse/IPA/recon/urls-all.txt` (165 unique URLs extracted app-wide) contains
**zero** `myvu.cn`, `xr-nbs`, or `ar-ota` hosts — the visible hosts there are
unrelated (HERE maps, GeoTest, `xj-platform*.flyme.com` policy pages, AMap,
Vertex AI). **Conclusion: the iOS app's actual OTA check-in/download host is
not present in any unencrypted region of this IPA.** It almost certainly lives
as a Dart string constant inside the encrypted `App.framework/App` AOT blob
(same architectural place as the request-signing logic), per the FairPlay
limitation in §1. This is a gap, not a negative result — it cannot be ruled
out that the iOS client reuses the exact same `xr-nbs*.myvu.cn/ar-ota`
infrastructure the Android app uses (same backend company, same firmware
files would need to be served to both platforms), but this cannot be
confirmed from static iOS resources alone.

## 6. Android OTA scheme (reference only — NOT independently confirmed on iOS)

Quoted from `Reverse/FINDINGS.md`:
- Bases: China prod `https://xr-nbs.myvu.cn/ar-ota`, China UAT
  `https://xr-nbs-uat.myvu.cn/ar-ota`, Intl prod
  `https://xr-nbs-global.myvu.cn/ar-ota`, Intl UAT
  `https://xr-nbs-global-uat.myvu.cn/ar-ota`.
- Paths: `POST /client/v1/arupgrade/check` (v1), `POST
  /client/v1/arupgrade/checkV2` (v2, current), `POST
  /client/v1/arupgrade/notify`, `POST /client/v1/super-app/latest-version/v2`
  (app self-update).
- `checkV2` fields: `deviceType`, `deviceId`, `version`, `deviceModel`,
  `buildType`, `versionType`, `timestamp`, `lang`, `appVersion`,
  `depDeviceType`, `depDeviceVersion` (mandatory for Ring), `deviceIdEncrypted`,
  `os`, `sign`. `deviceType` observed constants: `View`, `Ring` (server errors
  if a Ring omits dependent-device params); Air (XGA010C) is checked
  client-side in Flutter.
- Signing: `sign = hex(HMAC_SHA256(key="wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI=",
  msg = sorted "k=v&..." of all non-sign fields))` (`Reverse/FINDINGS.md`,
  `Reverse/download_ota.sh`).
- Firmware itself, per `Reverse/FIRMWARE_FINDINGS.md`, is a BES2700/BES1600
  OTA zip (`platform_tester.bin` M55 app image + `best1600_watch_bth.bin` M33
  BT/MCU image) delivered by `packLink`/`packLink2` + `digest` (MD5) fields;
  Ring firmware specifically is pushed over BLE via Nordic DFU
  (`no.nordicsemi.android.dfu` on Android, per `Reverse/FINDINGS.md` §"Other
  notable findings" — the direct Android analogue of this IPA's
  `NordicDFU.framework`/`nordic_otas_plugin.framework` pair).
- `Reverse/MYVU_cloud_API_map.md` corroborates the same `ar-ota` host/paths
  from an independent jadx decompile and adds handler class names
  (`GlassUpdateApiManager`, `VuGlassUpdateHelper`, `GlassUpdateHelper`).

None of the above hosts, paths, field names, or the HMAC key were found
anywhere in the iOS IPA's readable regions (see §5) — they are cited here as
Android-only reference, per the task's compare requirement, not as confirmed
iOS facts.

## 7. Table — OTA artifact / host / evidence / platform

| Artifact | Evidence (path) | Confirmed on |
|---|---|---|
| `icon_ring_ota.png`, `ring2_ota_upgrading.pag` (Ring OTA UI assets) | `Frameworks/App.framework/flutter_assets/{assets/images,assets/pag}/...`, file-inventory.txt | iOS (asset present) |
| "Firmware Update" data-collection clause | `flutter_assets/assets/html/category_pp_en_US.html`, `RING_PRIVACY_POLICY_en_US.html` | iOS (policy text) |
| `NordicOtasPlugin` Flutter bridge class + method channel | `nm` on `Frameworks/nordic_otas_plugin.framework/nordic_otas_plugin` | iOS (symbol table) |
| Nordic DFU library (legacy+secure DFU, BLE) | `nm` on `Frameworks/NordicDFU.framework/NordicDFU`; Info.plist `org.cocoapods.NordicDFU` 4.15.3 | iOS (symbol table) |
| Plugin linked into main app | `nm extracted/.../XJOverSeas` → `_OBJC_CLASS_$__TtC18nordic_otas_plugin16NordicOtasPlugin` | iOS (symbol table) |
| `xr-nbs.myvu.cn` / `xr-nbs-global.myvu.cn` `/ar-ota` hosts | `Reverse/FINDINGS.md`, `Reverse/MYVU_cloud_API_map.md` | Android only — absent from `Reverse/IPA/recon/urls-all.txt` and all iOS greps |
| `checkV2` request/HMAC signing scheme | `Reverse/FINDINGS.md`, `Reverse/download_ota.sh` | Android only — not present in any readable iOS region |
| `deviceType` = View/Air/Ring | `Reverse/FINDINGS.md` | Android only (client-observed); not found as literal iOS strings (only encrypted `App.framework/App` could contain the iOS equivalent) |
| BES2700/BES1600 firmware zip format (`platform_tester.bin` + `best1600_watch_bth.bin`) | `Reverse/FIRMWARE_FINDINGS.md` | Android-sourced download; device-side, platform-agnostic — the iOS app would push the same binary format via its own DFU plugin if/when it downloads one |

## 8. Table — DFU/firmware framework / cryptid / role

| Framework | cryptid (source) | Role |
|---|---|---|
| `NordicDFU.framework` | 1 (`Reverse/IPA/recon/frameworks.csv`; re-verified via `otool -l`: cryptoff 16384, cryptsize 344064) | Nordic Semiconductor BLE DFU client library (legacy + secure DFU, buttonless service, zip/bin/hex firmware streaming) |
| `nordic_otas_plugin.framework` | 1 (`Reverse/IPA/recon/frameworks.csv`; `otool -l`: cryptoff 16384, cryptsize 32768) | Flutter `MethodChannel` plugin (`NordicOtasPlugin`) bridging Dart UI to `NordicDFU`'s `DFUServiceInitiator`/`DFUServiceController` — the actual "start OTA over BLE" call path |
| `App.framework/App` (Flutter AOT) | 1 (`Reverse/IPA/recon/RECON.md`) | Holds the Dart-side OTA orchestration (host URL, request building, any HMAC/signature logic analogous to Android's `SignUtils`) — entirely unreadable in this IPA |
| `XJOverSeas` (main binary) | 1 (`Reverse/IPA/recon/RECON.md`) | Hosts the Flutter engine + registers `NordicOtasPlugin` (confirmed via `nm` symbol import); no plaintext OTA host strings found |

## 9. Gaps (explicit)

- No iOS OTA host/path/HMAC key could be extracted; §1 and §5 explain why
  (FairPlay `cryptid 1` on the only binaries that could contain them).
- Cannot confirm whether the iOS client uses the same `checkV2` scheme, the
  same HMAC key, or the same `deviceType` string set as Android — this would
  require a decrypted dump of `App.framework/App`, which was explicitly out
  of scope and not performed.
- `nordic_otas_plugin` v0.0.1 is a very low version number for a CocoaPod,
  suggesting it is a private in-house pod (not a public Nordic release), but
  no repo URL or changelog was found to confirm authorship beyond the
  bundle identifier `org.cocoapods.nordic-otas-plugin`.

IPA_OTA_COMPLETE
