# MYVU AR 1.1.28 iOS IPA inventory

Source IPA: `Reverse/MYVU_AR_1.1.28.ipa` (291 MB on disk).
Extracted tree: `Reverse/IPA/extracted/Payload/XJOverSeas.app/` (398 MB, 4940 files).

## Identity (from extracted Info.plist)

| Field | Value |
|---|---|
| CFBundleDisplayName | MYVU AR |
| CFBundleIdentifier | `com.upuphone.overseas` |
| CFBundleExecutable | `XJOverSeas` |
| CFBundleShortVersionString | 1.1.28 |
| CFBundleVersion | 407081002 |
| MinimumOSVersion | 13.0 (plist) / device install listed 18.0+ |
| Team | `K72D494553` |
| Application identifier | `K72D494553.com.upuphone.overseas` |

## FairPlay encryption (otool, measured)

Main binary `extracted/Payload/XJOverSeas.app/XJOverSeas`:

```
LC_ENCRYPTION_INFO_64
cryptoff  32768
cryptsize 36405248
cryptid   1
```

Flutter AOT `extracted/Payload/XJOverSeas.app/Frameworks/App.framework/App`:

```
LC_ENCRYPTION_INFO_64
cryptoff  16384
cryptsize 17596416
cryptid   1
```

`cryptid 1` means the `__TEXT` pages are FairPlay-encrypted. class-dump / Ghidra of those two images will not yield real code until a decrypted IPA is available. Resources, plists, flutter_assets, and many third-party framework names remain readable.

## Entitlements (codesign)

- `aps-environment` = production
- HealthKit
- `com.apple.developer.networking.wifi-info`
- keychain-access-group `K72D494553.com.upuphone.overseas`

## Layout highlights

- 100 embedded frameworks under `extracted/Payload/XJOverSeas.app/Frameworks/`
- Flutter plugins: `flutter_blue_plus`, `nordic_otas_plugin`, `heresdk`, `myvu_config_plugin`, `connectivity_plus`, `webview_flutter_wkwebview`, …
- Vendor: `StarryNet`, `StarryCast`, `StarryLog`, `ble2301`, `XJNetWork`, `NordicDFU`, `AliyunOSSiOS`
- Bundles: `XJARAssistant`, `XJASR`, `XJNLG`, `XJVAD`, `FlymeAccountUI`, `LarkSSO`, `GTCaptcha4`, `TZImagePickerController`

IPA_INVENTORY_COMPLETE
