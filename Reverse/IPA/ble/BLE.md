# BLE / glasses-protocol evidence catalog — MYVU AR 1.1.28 IPA

Leaf: leaf-1.3.2. Source: `Reverse/IPA/extracted/Payload/XJOverSeas.app`. Method: `strings`,
`grep -r`, `plutil -convert xml1`, `otool -l` (LC_ENCRYPTION_INFO_64 only — no disassembly).
Every UUID/string below cites the exact file it was read from; nothing here is invented.

## 1. FairPlay limitation (governs everything below)

The BLE transport implementation in this build is not readable. `otool -l` on
`Reverse/IPA/extracted/Payload/XJOverSeas.app/XJOverSeas` shows `LC_ENCRYPTION_INFO_64`
`cryptid 1`, and independently re-checking every candidate BLE framework confirms the
same: `Frameworks/flutter_blue_plus.framework/flutter_blue_plus` (cryptid 1, cryptsize
81920), `Frameworks/ble2301.framework/ble2301` (cryptid 1, cryptsize 16384),
`Frameworks/NordicDFU.framework/NordicDFU` (cryptid 1, cryptsize 344064),
`Frameworks/nordic_otas_plugin.framework/nordic_otas_plugin` (cryptid 1, cryptsize
32768), `Frameworks/StarryNet.framework/StarryNet` (cryptid 1, cryptsize 2293760),
`Frameworks/StarryCast.framework/StarryCast` (cryptid 1, cryptsize 16384), and
`Frameworks/StarryCastCommon.framework/StarryCastCommon` (cryptid 1, cryptsize 16384),
plus the Flutter AOT payload `Frameworks/App.framework/App` (cryptid 1, cryptsize
17596416, per `Reverse/IPA/recon/RECON.md`). This is **FairPlay** App Store encryption:
the `__TEXT` code pages of every one of these binaries are ciphertext in this
App-Store-downloaded IPA and cannot be disassembled, class-dumped, or even `strings`-scanned
for meaningful content without a decrypted dump from a jailbroken device. As an empirical
check, `strings` on the FairPlay-encrypted `ble2301` binary returns only 34 lines total —
Mach-O header/load-command noise from the unencrypted region, no class names, method
names, or literal strings — confirming the code that would define GATT service/characteristic
UUIDs is opaque here. Consequently this leaf can only report UUIDs/strings that happen to
sit in genuinely unencrypted resources (plists, XML/JSON resource files, `.strings` tables,
`.bundle` contents) and must not, and does not, reconstruct a GATT service/characteristic
map from any of the above binaries.

## 2. BLE-relevant frameworks and cryptid (from `Reverse/IPA/recon/frameworks.csv`, spot-verified with `otool -l`)

| Framework | cryptid | Role (from name/bundle id) |
|---|---|---|
| flutter_blue_plus.framework | 1 | Flutter plugin wrapping CoreBluetooth (`org.cocoapods.flutter-blue-plus`, `Info.plist`) |
| ble2301.framework | 1 | Vendor BLE module, likely BES23xx-family SoC bridge (`org.cocoapods.ble2301`) |
| NordicDFU.framework | 1 | Nordic DFU (firmware update over BLE) library |
| nordic_otas_plugin.framework | 1 | Flutter plugin wrapping NordicDFU for OTA (`org.cocoapods.nordic-otas-plugin`) |
| StarryNet.framework | 1 (binary) | Vendor glasses-protocol/transport library (`org.cocoapods.StarryNet`); ships **unencrypted** `Devices.xml`/`info.json` resources (see §3) |
| StarryCast.framework | 1 | Companion casting/mirroring library (`org.cocoapods.StarryCast`) |
| StarryCastCommon.framework | 1 | Shared support code for StarryCast (`org.cocoapods.StarryCastCommon`) |
| myvu_config_plugin.framework | 1 | First-party Flutter plugin, bundle id `org.cocoapods.myvu-config-plugin` |

All confirmed cryptid=1 (FairPlay), matching `Reverse/IPA/recon/frameworks.csv`.

## 3. 128-bit UUID search (whole app tree)

`grep -rE "[0-9A-Fa-f]{8}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{12}"`
was run over `Frameworks/App.framework/flutter_assets/**`, every `*.json/*.plist/*.xml/
*.strings/*.html/*.txt` in the app bundle, `Reverse/IPA/recon/urls-all.txt`, and
`Reverse/IPA/recon/file-inventory.txt`. **Result: zero matches for any literal 128-bit
GATT-style UUID anywhere in unencrypted resources.** The only look-alike hex substrings
found are inside SHA-derived policy-page hashes in
`Reverse/IPA/recon/urls-all.txt` (e.g. `.../fms/policy/bdcbd3562ce1513a565a58f0ab2c8d39_...`)
— coincidental hex, not a Bluetooth UUID (no `-` dashes, wrong length/position, and the
surrounding text is a CMS/legal-policy content hash, unrelated to BLE).

One genuinely unencrypted, BLE-adjacent resource was found:
`Frameworks/StarryNet.framework/Devices.xml` (and an identical copy inside
`Frameworks/StarryNet.framework/StarryNet.bundle/Devices.xml`) is plain XML, not
FairPlay-protected (it sits next to, not inside, the encrypted `StarryNet` Mach-O). It
contains a device/company ID table (see §4) but **no Bluetooth UUIDs** — company/category/model
IDs there are decimal-ish short IDs (`0001`, `1003`, …), a separate namespace from GATT UUIDs.

### UUID table

| UUID / short form | Where seen | Likely role (per MyvuCore) | Status |
|---|---|---|---|
| `0000bd1-…` / `0x0BD1` | NOT found in IPA plaintext | GATT primary service ("StarryNet"), per `Sources/MyvuCore/Transport/BLE/Uuids.swift:22` (`service = make(3025)`) | Not present in any readable IPA region — only known from MyvuCore/`Reverse/FINDINGS.md:521` |
| `0x0BD3` | NOT found in IPA plaintext | Advertised-service filter, per `Uuids.swift:25` (`advertisedService`) | Same as above; also cited as company/advert ID in `Reverse/FINDINGS.md:509,513` |
| `0x2020` | NOT found in IPA plaintext | "Air" internal/pairing channel, `Uuids.swift:29` | Corroborated externally in `Reverse/FINDINGS.md:522` (Android RE), not from this IPA |
| `0x2021` | NOT found in IPA plaintext | "Air" external/app-data channel, `Uuids.swift:31` | Corroborated in `Reverse/STAR_AIR_FULL_WRITEUP.md:474` ("BLE `0x2021`"), not from this IPA |
| `0x2022` | NOT found in IPA plaintext | "Air" urgent/heartbeat channel, `Uuids.swift:33` | unknown in IPA |
| `0x2023` | NOT found in IPA plaintext | `glassWrite`, `Uuids.swift:34` | unknown in IPA |
| `0x2010`/`0x2011`/`0x2012` | NOT found in IPA plaintext | "V2" internal/external/urgent triple, `Uuids.swift:37-39` | unknown in IPA |
| Apple ANCS `7905F431-…` / Notification Source `9FBF120D-…` | NOT found in this IPA (cited from `Reverse/STAR_AIR_FULL_WRITEUP.md:320`, Android firmware RE) | Standard Apple ANCS UUIDs the glasses' own BLE stack implements as a *client of the phone* | Not applicable to this IPA search (these are firmware-side, not app-side) |

**Conclusion for §3**: this IPA extract contains no plaintext 128-bit UUID anywhere
`grep` can reach. That is expected, not anomalous — every binary that would contain
`CBUUID(string:)`/`CBUUID(nsuuid:)`/GATT-constant literals (`flutter_blue_plus`, `ble2301`,
`StarryNet`, `App.framework/App` Dart AOT) is FairPlay-encrypted (§1). The IPA can
therefore neither confirm nor deny that it uses the same `0x0BDx`/`0x20xx` UUID family as
`Sources/MyvuCore`; that family is corroborated only by the separate Android
reverse-engineering writeups (`Reverse/FINDINGS.md`, `Reverse/STAR_AIR_FULL_WRITEUP.md`),
not by anything readable inside this iOS IPA.

## 4. Glasses/device model strings

Source: `Frameworks/StarryNet.framework/Devices.xml` (plain XML resource, company id
`0001` = `XINGJI`, id `0004` = `XINGJI-intl`):

| id | modelName | category |
|---|---|---|
| 1001 | Star Concept | XR |
| 1002 | Star | XR |
| 1003 | Star Air | XR |
| 1004 | Star Air pro | XR |
| 5001 | Star Air intl | XR-intl (company `XINGJI-intl`) |
| 5002 | Star Air pro intl | XR-intl |
| ring1200 | Unicron | (ring category, company XINGJI) |
| ring1201 | Ring2 | ring |
| ring1202 | Ring2 intl | ring |

Additional model/brand strings found elsewhere (each cited):
- `"MYVU ble"` — literal Bluetooth-name UI string, from
  `en.lproj/Localizable.strings` key `MYVU ble` (binary-plist resource, read via
  `plutil -convert xml1`). Matches `Reverse/STAR_AIR_FULL_WRITEUP.md:513`'s note that the
  official app's manufacturer-data matcher looks for the `MYVU` ASCII marker.
- `Notmatch_starConcept_tips` — a `Localizable.strings` key whose value is "Please use the
  mainland Chinese version of glasses with the MYVU App", confirming "Star Concept" as a
  live model-mismatch check in the shipped UI.
- `"AR Glasses"`, `XJBluetoothUsageDescription` string ("Used to discover AR Glasses and
  smart ring devices, bind devices, establish transmission channels, and obtain system
  audio to play on the Glasses.") — from `en.lproj/Localizable.strings` and mirrored in
  `Info.plist` keys `NSBluetoothAlwaysUsageDescription` / `NSBluetoothPeripheralUsageDescription`
  / `NSBluetoothWhileInUseUsageDescription` (`Reverse/IPA/extracted/Payload/XJOverSeas.app/Info.plist`).
  `Info.plist` also declares `UIBackgroundModes` including `bluetooth-central` and
  `bluetooth-peripheral`.
- A distinct **"View"** glasses model line, not present in `Devices.xml`, found only as
  Flutter asset filenames in
  `Frameworks/App.framework/flutter_assets/AssetManifest.json`: `assets/images/glass_icon_view.png`,
  `certification_view.png` (+ dark/rtl variants), `icon_binding_view_glass.png`,
  `icon_device_manage_view_connected.png` / `_default.png`, `ad_banner_view.png` /
  `ad_banner_view_intl.png`. Also `assets/images/ic_faq_starv_air2.png`,
  `ic_faq_starv_ring2.png`, `ic_faq_starv_view.png` (an FAQ-icon set literally named
  "starv_{air2,ring2,view}" grouping the three model lines together).
- Ring-family assets confirm `Ring2`/`Ring` UI presence: `icon_device_ring2.png`,
  `image_ring2_model.png`, `icon_binding_ring1.png`, `icon_binding_ring2.png` (same
  AssetManifest.json).
- **Not found anywhere in the IPA**: `MP12`, `StarV` as a literal standalone string (only
  the concatenated asset-name fragment `starv` in the three FAQ icon filenames above —
  no standalone "StarV" model string), `Uniden`. `Unicron` (not "Unicron[e]") appears only
  in `Devices.xml` as shown above; `Reverse/FINDINGS.md` and
  `Reverse/STAR_AIR_FULL_WRITEUP.md:328` separately note the firmware spells this
  `unicon` in one binary and `unicron` in another — this IPA's `Devices.xml` spells it
  `Unicron`, matching the M55 firmware spelling per that writeup.

## 5. Cross-reference summary vs `Sources/MyvuCore`

`Sources/MyvuCore/Transport/BLE/Uuids.swift` defines the companion library's GATT
constants: service `0x0BD1` (`STARRY_NET_SERVICE_UUID`, name literally "StarryNet"),
advertised-service `0x0BD3`, "Air" triple `0x2020/0x2021/0x2022` + `glassWrite 0x2023`,
"V2" triple `0x2010/0x2011/0x2012`. `Sources/MyvuCore/Transport/BLE/BleCentral.swift:27-37`
comments that the advert carries **no service UUIDs**, only manufacturer data keyed on the
`0x0BDx` company-ID family plus a `"MYVU"` ASCII marker, and that the advertised name is
`"MYVU DCxx"` while the model reads `"Star Air"`.

This IPA independently confirms, from unencrypted resources only:
1. The vendor's own BLE/transport library is literally named **StarryNet**
   (`Frameworks/StarryNet.framework`, bundle id `org.cocoapods.StarryNet`) — matching
   MyvuCore's `Uuids.swift` comment "name **StarryNet**" for the `0x0BD1` service.
2. The literal string `"MYVU ble"` exists as the app's own Bluetooth-name UI text
   (`en.lproj/Localizable.strings`), matching `BleCentral.swift`'s `"MYVU"` marker logic.
3. The model name **"Star Air"** (and siblings Star/Star Concept/Star Air pro/intl
   variants) is confirmed live in `Devices.xml`, matching `BleCentral.swift:209`'s
   comment "the model reads 'Star Air'".
4. It cannot confirm the specific hex UUID values (`0x0BD1`, `0x0BD3`, `0x20xx`) themselves,
   because those constants live inside the FairPlay-encrypted `flutter_blue_plus`/`ble2301`/
   `StarryNet`/`App` binaries (§1), not in any plaintext resource this leaf can read. The
   match is therefore established at the **naming/brand level** (StarryNet, MYVU, Star Air,
   Star Concept), not at the **byte level** (UUID literals) — that gap is a direct, expected
   consequence of FairPlay, not a discrepancy in the protocol.

IPA_BLE_COMPLETE
