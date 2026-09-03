# MYVU AR 1.1.28 iOS IPA — reverse-engineering index

Source: `Reverse/MYVU_AR_1.1.28.ipa` → `Reverse/IPA/extracted/Payload/XJOverSeas.app/`
(`com.upuphone.overseas` v1.1.28). Produced under the `unlazy` scope `ipa-rev`. The
`analysis-1` subagent wave failed on Cursor usage limits; leaf reports were completed
via driver local fallback. All native code is FairPlay-encrypted (cryptid 1); reports
use unencrypted resources/symbols only.

## Start here
- [WRITEUP.md](WRITEUP.md) — integrated master writeup (all domains)
- [inventory.md](inventory.md) — identity, FairPlay measurements, layout
- [recon/RECON.md](recon/RECON.md) — shared measurements (cryptid, hosts, URLs, plists)
  - `recon/frameworks.csv`, `recon/file-inventory.txt`, `recon/urls-all.txt`,
    `recon/hosts-vendor.txt`, `recon/Info.plist.xml`, `recon/entitlements.xml`

## Static-artifact reports (branch 1.2)
- [privacy/PRIVACY.md](privacy/PRIVACY.md) — Info.plist privacy strings, ATS, URL schemes, entitlements
- [bundles/BUNDLES.md](bundles/BUNDLES.md) — the 9 resource `.bundle` directories
- [flutter/FLUTTER.md](flutter/FLUTTER.md) — Flutter engine + `flutter_assets` + Dart packages
- [frameworks/FRAMEWORKS.md](frameworks/FRAMEWORKS.md) — all 99 embedded frameworks catalogued
- [strings/STRINGS.md](strings/STRINGS.md) — strings/nm dumps + demangled Swift symbol surface

## Domain reports (branch 1.3)
- [network/NETWORK.md](network/NETWORK.md) — hosts/API map + iOS-vs-Android host comparison
- [ble/BLE.md](ble/BLE.md) — BLE/glasses protocol evidence, device models, MyvuCore cross-ref
- [auth/AUTH.md](auth/AUTH.md) — Flyme account, GeeTest captcha, Lark SSO
- [assistant/ASSISTANT.md](assistant/ASSISTANT.md) — ASR/VAD/NLG on-device models + LLM backends
- [notifications/NOTIFICATIONS.md](notifications/NOTIFICATIONS.md) — ANCS mirroring, PAG assets
- [maps/MAPS.md](maps/MAPS.md) — HERE SDK 4.17.0 primary, AMap region-gated
- [ota/OTA.md](ota/OTA.md) — Nordic DFU firmware transport, OTA gaps
- [android-compare/COMPARE.md](android-compare/COMPARE.md) — iOS 1.1.28 vs Android 2.40.51 intl

## Ledgers
- Scope: `.unlazy/ipa-rev/` (PLAN.md, GATES.md, gates/, status.log, dispatch.json)
- Leaf oracle: `Reverse/IPA/scripts/verify-report.mjs <path> <token> [minBytes]`

IPA_INDEX_COMPLETE
