# MYVU AR 1.1.28 — Mapping/Navigation Stack

Source: `Reverse/IPA/extracted/Payload/XJOverSeas.app`. All facts below are read directly
from files in that tree or from `Reverse/IPA/recon/*`; no native routing/rendering code was
decompiled.

## FairPlay limitation (required disclosure)

`heresdk.framework/heresdk` is FairPlay-encrypted. `otool -l` on
`Reverse/IPA/extracted/Payload/XJOverSeas.app/Frameworks/heresdk.framework/heresdk` shows:

```
cmd LC_ENCRYPTION_INFO_64
cryptoff 16384
cryptsize 48578560
cryptid 1
```

`cryptid 1` means the `__TEXT` segment (all executable code, including HERE's route
calculation, guidance, and tile-decoding logic) is FairPlay DRM-encrypted by the App Store
and cannot be disassembled or class-dumped from this IPA alone — this matches the app-wide
finding in `Reverse/IPA/recon/RECON.md` that all 99 frameworks plus the main binary and
`App.framework/App` (Flutter AOT) measure `cryptid 1`. Everything reported here is limited to
unencrypted plist/bundle/asset/string content; no decrypted or dumped native HERE (or any
other vendor's) code is claimed.

## 1. HERE SDK identity

`Frameworks/heresdk.framework/Info.plist` (read via `plutil -p`):
- `CFBundleIdentifier` = `com.here.sdk`
- `CFBundleExecutable` = `heresdk`
- `CFBundleShortVersionString` / `CFBundleVersion` = `4.17.0` / `4.17.0.0`
- `MinimumOSVersion` = `12.4`, built with Xcode 13.2.1 (`DTXcode 1321`) against iOS SDK 15.2

`Reverse/IPA/recon/frameworks.csv` lists `heresdk.framework,1,57580144` (cryptid 1, ~57.6MB —
the largest third-party framework in the app after `Realm`/`RealmSwift`/`Flutter`).

The framework directory (`Frameworks/heresdk.framework/`) also ships unencrypted brand/UI/
voice assets confirming it is a full HERE Navigation SDK, not a thin maptile client:
`HERE_logo_full.svg`, `HERE_logo_full_inverted.svg`, `location_indicator_navigation.{obj,png}`,
`location_indicator_pedestrian.{obj,png}`, `location_indicator_halo.{obj,png}`,
`arrow_cap_medium.obj`, a `magma/` render asset dir (shaders + `Cousine.ttf`), a `geoviz/`
render-style dir with per-city style packs (`geoviz/japan`, `geoviz/oslo`, `geoviz/miami`,
`geoviz/row`, `geoviz/common`, plus `geoviz/japan.ocm.day.json`), `localization/tmcevents.*`
(TMC traffic-event strings for ~50 locales, each with a `.imperial` unit variant), and
`voice_assets/voice_package_<locale>` turn-by-turn voice packs for ~50 locales (e.g.
`voice_package_en-US`, `voice_package_zh-CN`, `voice_package_ja-JP`).

## 2. HERE network endpoints (`Reverse/IPA/recon/urls-all.txt`)

| URL | Purpose |
|---|---|
| `https://1.aerial.maps.ls.hereapi.com/maptile/2.1/maptile/newest/satellite.day/` | HERE aerial/satellite maptiles |
| `https://traffic.vector.hereapi.com/v2/traffictiles/flow/mc/` | HERE vector traffic-flow tiles |
| `https://traffic.vector.hereapi.com/v2/traffictiles/incident/mc/` | HERE vector traffic-incident tiles |

`Reverse/IPA/recon/hosts-vendor.txt` lists the same three `hereapi.com` hosts with no other
map-tile vendor host present.

## 3. AMap (China secondary provider)

- `Reverse/IPA/recon/urls-all.txt` / `hosts-vendor.txt`: `https://lbs.amap.com/pages/privacy/`.
- `Frameworks/App.framework/flutter_assets/assets/html/category_pp_zh_CN.html` (Flutter privacy
  bundle, Chinese variant only) names the vendor explicitly: `SDK名称：高德地图开放平台 SDK`
  ("SDK name: AMap Open Platform SDK"), `第三方名称：高德软件有限公司` ("third party: AutoNavi/
  Gaode Software Co."), `使用场景：导航` ("usage scenario: navigation"), collecting precise/
  coarse location, IMEI/IDFA/IDFV/OAID/MAC/ICCID device IDs, WiFi/cell/Bluetooth/sensor data,
  and even license-plate number (`车牌号`), shared via `共享方式：内嵌SDK本机采集` (embedded
  SDK, on-device collection), linking to `lbs.amap.com/pages/privacy/`.
- The untranslated AMap motion-usage string lives in the app's own
  `Info.plist` → `NSMotionUsageDescription`, left in Chinese in the otherwise English-localized
  key: `"用于高德获取运动与健身，以提升导航准确性。您不允许，不影响导航功能的正常使用"`
  ("Used by AMap [高德] to obtain motion and fitness data to improve navigation accuracy;
  declining does not affect normal navigation use").
- No `AMap*`/`Gaode*`/`AutoNavi*` `.framework` exists anywhere under
  `Reverse/IPA/extracted/Payload/XJOverSeas.app` (`find -iname "*amap*"`, `*gaode*`,
  `*autonavi*` all return empty; `recon/frameworks.csv`'s 99 rows contain no AMap entry). AMap
  is therefore not shipped as a linked native map-rendering SDK in this IPA build — its
  presence is fully described via consent-flow strings/plist keys and a Flutter privacy-policy
  HTML page, consistent with a China-region navigation path that is either server-mediated or
  gated off in this "OverSeas" bundle (see region-lock strings in section 5).

## 4. Map data files (`Reverse/IPA/recon/file-inventory.txt`)

- `xjsdmap.sqlite` — found at
  `Reverse/IPA/extracted/Payload/XJOverSeas.app/xjsdmap.sqlite` (16,384 bytes). `file` reports
  "SQLite 3.x database ... database pages 4". Its only table, per `sqlite3 .schema`, is
  `CREATE TABLE test (uid TEXT, time datetime)` — a placeholder/telemetry stub, not an offline
  map or tile cache despite the "sdmap" name.
- No `.geojson` and no other top-level `.db`/`.sqlite` map file appear in
  `recon/file-inventory.txt` besides `xjsdmap.sqlite`.
- The only map-related `.json` found is HERE's own style asset,
  `Frameworks/heresdk.framework/geoviz/japan.ocm.day.json` (a HERE render-style file, part of
  the SDK bundle, not app-level offline map data).

## 5. Navigation UI copy (`.lproj/Localizable.strings`)

`en.lproj/Localizable.strings` (via `strings`) and `zh-Hans.lproj/Localizable.strings` (binary
plist, read via `plutil -p`) both carry region-gate strings that disable in-app navigation for
China, South Korea and Russia — evidence the licensed HERE routing path is not permitted/used
in those markets:
- EN: "Navigation is not supported in the current region (China)"
- EN: "Navigation is not supported in the current region (South Korea)"
- EN: "Navigation is not supported in the current region (Russia)"
- EN: "Navigation is not supported in the current region, please use the overseas version of the device"
- zh-Hans: `nonSupportNavCHN` = "当前区域（中国）不支持导航功能", `nonSupportNavKOR` =
  "当前区域（韩国）不支持导航功能", `nonSupportNavRUS` = "当前区域（俄罗斯）不支持导航功能",
  `nonSupportNavCurrentArea` = "当前区域不支持导航功能，请使用海外版本设备"
- zh-Hans `agrment_transfer_nav` consent string states location/route data is sent to a
  "map navigation service provider" whose server is located in Singapore — matching a HERE
  (not mainland-China AMap) backend.

## Conclusion

**Primary: HERE SDK (`com.here.sdk` v4.17.0)** — a fully-featured, linked, FairPlay-encrypted
`heresdk.framework` (~57.6MB) with maptile/traffic endpoints on `hereapi.com`, per-locale voice
guidance packs, TMC traffic-event localization, and render-style packs, used for the app's
worldwide ("OverSeas") navigation.

**Secondary: AMap (高德)** — present only as a China-region compliance/consent artifact
(privacy-policy HTML string, `NSMotionUsageDescription` plist string, `lbs.amap.com` URL);
no AMap native framework is linked in this build, and in-app strings explicitly disable
navigation in China/Korea/Russia, so AMap functions as the documented-but-region-gated
alternate provider for mainland China rather than a second active map renderer in this
"OverSeas" IPA.

IPA_MAPS_COMPLETE
