# MYVU AR (XJOverSeas.app) — Notification Mirroring / ANCS Feature

Leaf report for the notification-mirroring pipeline that pushes iOS phone alerts
to the AR glasses HUD. All facts below are cited to files read directly from
`Reverse/IPA/extracted/Payload/XJOverSeas.app` or `Reverse/IPA/recon/*`.

## 1. xj_smart_notice_ancs_*.pag animation assets

Found at the top level of the app bundle (confirmed with `find` against
`extracted/Payload/XJOverSeas.app/`, cross-checked against
`recon/file-inventory.txt` lines 4917–4924, which lists these as bare
filenames with no subdirectory prefix):

| Asset | Path | Size | Purpose (inferred from name) |
|---|---|---|---|
| `xj_smart_notice_ancs_air_en.pag` | `extracted/Payload/XJOverSeas.app/xj_smart_notice_ancs_air_en.pag` | 276,747 B | ANCS notice animation, "Air" model, English |
| `xj_smart_notice_ancs_air_zh.pag` | `extracted/Payload/XJOverSeas.app/xj_smart_notice_ancs_air_zh.pag` | 270,111 B | ANCS notice animation, "Air" model, Chinese |
| `xj_smart_notice_ancs_star_ar.pag` | `extracted/Payload/XJOverSeas.app/xj_smart_notice_ancs_star_ar.pag` | 662,140 B | ANCS notice animation, "Star" model, Arabic |
| `xj_smart_notice_ancs_star_en.pag` | `extracted/Payload/XJOverSeas.app/xj_smart_notice_ancs_star_en.pag` | 271,146 B | ANCS notice animation, "Star" model, English |
| `xj_smart_notice_ancs_star_zh.pag` | `extracted/Payload/XJOverSeas.app/xj_smart_notice_ancs_star_zh.pag` | 261,711 B | ANCS notice animation, "Star" model, Chinese |
| `xj_smart_notice_center_ar.pag` | `extracted/Payload/XJOverSeas.app/xj_smart_notice_center_ar.pag` | 446,898 B | "Notification Center" style notice animation, Arabic |
| `xj_smart_notice_center_en.pag` | `extracted/Payload/XJOverSeas.app/xj_smart_notice_center_en.pag` | 50,195 B | "Notification Center" style notice animation, English |
| `xj_smart_notice_center_zh.pag` | `extracted/Payload/XJOverSeas.app/xj_smart_notice_center_zh.pag` | 259,944 B | "Notification Center" style notice animation, Chinese |

The `ancs_*` set exists in exactly two glasses-model variants — `air` and
`star` — each in three languages (`en`, `zh`, `ar`); the `center_*` set has
no model split, only the three languages. `xxd` on the first 32 bytes of
`xj_smart_notice_ancs_air_en.pag` and `xj_smart_notice_center_en.pag` shows
both begin with the ASCII magic `PAG` followed by a version string containing
`4.3.6` — i.e. these are Tencent **libpag** vector-animation containers, not
raster images. This is consistent with the two other libpag-based UI
animation sets already documented for this app family. No `.lproj` folder
contains any of these filenames, so language selection for the animation is
driven by the explicit filename suffix (`_en`/`_zh`/`_ar`), not by iOS's
normal `.lproj` resource-selection mechanism — evidence, not inference, since
`find -iname "*smart_notice*"` under `extracted/` returns only the eight
bundle-root files listed above.

## 2. Push/background entitlements

From `Reverse/IPA/recon/entitlements.xml`:
```
<key>aps-environment</key>
<string>production</string>
```
This is the standard Apple Push Notification entitlement, set to the
production APNs environment (not sandbox), meaning the app is built to
receive real push notifications, not just local ones.

From `Reverse/IPA/recon/Info.plist.xml`, key `UIBackgroundModes`:
```
<string>audio</string>
<string>bluetooth-central</string>
<string>bluetooth-peripheral</string>
<string>fetch</string>
<string>remote-notification</string>
```
`bluetooth-central` and `bluetooth-peripheral` let the app keep a BLE
connection to the glasses alive in the background (needed to forward alerts
while the phone is locked/backgrounded); `remote-notification` lets the app
wake on a silent APNs push; `audio` and `fetch` are also declared but are not
notification-mirroring specific (audio streaming to glasses, background
refresh).

## 3. ANCS/notification strings in .lproj/*.strings

`en.lproj/Localizable.strings` and `zh-Hans.lproj/Localizable.strings` are
binary plists (confirmed with `file`); read via
`plutil -convert xml1 -o -`. Key evidence, by localization key:

| Key | English (en.lproj) | Chinese (zh-Hans.lproj) |
|---|---|---|
| `openANCSAlertTitle` | "Please enable Notification Access" | "请开启"通知使用权"权限" |
| `openANCSAlertContent` | "These permissions required to transfer mobile notifications to Glasses" | "手机通知流转到眼镜需要此权限" |
| `iPhoneNotificationCenterDes` | "1. Go to Settings > Notifications... 2. Enable Allow Notifications and select ALERTS > Notification Center" | "1.请前往"设置-通知"...2.开启"允许通知"并勾选"提醒-通知中心"" |
| `iPhoneNotificationCenterOpen` | "Turn on Notification Center Reminders" | "开启"手机通知中心提醒"" |
| `sharingSystemNotification` | "Share System Notifications" | "蓝牙共享系统通知" |
| `smartRemiderSubTitle` | (n/a in en dump) | "将手机通知内容流转至眼镜，需开启蓝牙共享系统通知和手机通知中心提醒" ("To transfer phone notification content to the glasses, enable Bluetooth Share System Notifications and Phone Notification Center Reminders") |
| `noticeFlowOpenSetings` / `...Des` | "Settings - Notification Management" / "To receive notifications from more applications, you can go to Settings - Notification Management" | "设置-通知管理" / "要接收更多应用的通知，可前往设置-通知管理" |
| `BluetoothShareNoticeDes(_ble)` | "...2. Turn on Share System Notifications." | "1.请前往"设置-蓝牙"，选择当前已连接的MYVU 设备;2.开启"共享系统通知"开关。" |
| `callPhoneTips` | "Ringtone and message notifications may not be delivered promptly due to compatibility issues with the mobile operating system" | "铃声、消息通知可能因手机系统兼容性问题无法及时流转眼镜" |
| `phoneUsingTitle`/`phoneUsingContent` | "Turn off notification transfer while using your phone" / "Once enabled, the glasses won't remind again after you unlock the phone. Without a lock screen password for your phone, notifications will go to the glasses." | "使用手机时关闭眼镜通知" / "开启且下次解锁手机后，眼镜不再重复提醒；若您的手机没有设置解锁密码，将默认流转到眼镜通知。" |
| `XJUserNotificationsUsageDescription` | "Used to send important notifications" | "用于发送重要通知" |
| 正在微信回复中 (no stable en key found) | "Replying on WeChat…" | "正在微信回复中" |
| 微信 (no stable en key found) | "WeChat" | "微信" |

`ar.lproj/Localizable.strings` (also binary plist, same conversion) confirms
the identical key set in Arabic, e.g. `openANCSAlertContent` =
"لتدفق إشعارات الهاتف إلى النظارة، يتطلب هذا الإذن" ("This permission is
required to flow phone notifications to the glasses") and
`iPhoneNotificationCenterOpen` = "تمكين "تنبيهات مركز إشعارات الهاتف""
("Enable Phone Notification Center Alerts"). This confirms the `_ar` PAG
variants in Section 1 have a matching Arabic-localized text layer feeding the
same feature.

## 4. permission_handler bundle relevance

`recon/file-inventory.txt` lists
`permission_handler_apple_privacy.bundle/Info.plist` and
`.../PrivacyInfo.xcprivacy` at the app bundle root. Reading
`PrivacyInfo.xcprivacy` (via `plutil -convert xml1`) shows this is the
Flutter `permission_handler` plugin's Apple-privacy-manifest companion
bundle (`CFBundleIdentifier` = `org.cocoapods.permission-handler-apple-privacy`,
version `9.3.0`), declaring only `NSPrivacyAccessedAPICategoryUserDefaults`
usage. This bundle itself contains no notification logic — it is metadata
required by Apple's privacy-manifest policy for apps that ship the
`permission_handler` Flutter plugin. Its presence corroborates that the
Flutter layer requests OS-level permissions (Bluetooth, and by strong
implication Notifications/ANCS access, consistent with the
`openANCSAlertTitle`/`openANCSAlertContent` strings in Section 3) through
that plugin rather than hand-rolled native permission code. The companion
framework `Frameworks/flutter_local_notifications.framework` (also present
per `recon/file-inventory.txt`) is the Flutter `flutter_local_notifications`
plugin, used for scheduling/showing local notifications on the phone side —
distinct from, but plausibly composed with, the ANCS mirroring path.

## 5. Which apps/categories are mirrored

Only one specific third-party app name surfaced in the strings tables: the
key pair `微信` / `正在微信回复中` in `zh-Hans.lproj/Localizable.strings`
(English: "WeChat" / "Replying on WeChat…"), which strongly suggests a
WeChat-specific quick-reply UI state on the glasses side, beyond generic
ANCS passthrough. No other named apps (SMS, WhatsApp, Instagram, etc.) or
enumerated ANCS "alert category" identifiers (as used by Apple's
CategoryID field, e.g. `.call`/`.missedCall`/`.other`) were found in any
`.lproj/Localizable.strings` file across en/zh-Hans/ar. `NSContactsUsageDescription`
in `recon/Info.plist.xml` ("Used to display the contact information on the
Glasses when a phone call is transferred to the Glasses") confirms phone-call
transfer is a mirrored category distinct from generic ANCS notices. Beyond
WeChat and calls, the generic strings ("Share System Notifications",
"Notification Center Reminders") indicate the app mirrors whatever apps the
user enables under iOS Settings > Notifications for that app (standard ANCS
behavior), rather than a hardcoded allowlist visible in these resources.

## 6. Pipeline reconstruction (evidence vs. inference)

**Evidence-backed pipeline:**
1. iOS Notification Center receives an alert for a subscribed app (per
   `iPhoneNotificationCenterDes` strings instructing the user to enable
   "Allow Notifications" + "Notification Center" for each app they want
   mirrored).
2. The user must separately grant the app "Notification Access" —
   `openANCSAlertTitle`/`openANCSAlertContent` strings are the in-app prompt
   text for this OS permission, which on iOS is the ANCS-consuming
   entitlement class (apps read Notification Center via the system, since
   third-party iOS apps cannot enumerate other apps' notifications directly
   except through this OS-mediated channel) — filename `ancs` in the PAG
   assets (Section 1) corroborates the developers' own internal naming for
   this exact feature.
3. `sharingSystemNotification` / `BluetoothShareNoticeDes` strings show the
   transfer is gated behind a Bluetooth-connected MYVU device — i.e. the
   phone-side app forwards the captured notification content over the
   already-established BLE session to the glasses (BLE central/peripheral
   background modes from Section 2 keep this session alive).
4. The glasses render the alert using one of the `xj_smart_notice_ancs_*`
   or `xj_smart_notice_center_*` PAG animations (Section 1), model-specific
   (`air`/`star`) and language-specific (`en`/`zh`/`ar`), displayed on the HUD.

**Inference (not directly evidenced):** The exact BLE GATT
characteristic/service UUID or byte-level protocol used to carry the
notification payload from phone to glasses cannot be determined from these
resources — that logic lives in the compiled Dart/Flutter AOT snapshot
(`Frameworks/App.framework/App`) and/or the main Mach-O binary, both of which
are FairPlay-encrypted. Likewise, whether the "Replying on WeChat…" feature
implements a genuine two-way ANCS "Negative/Positive Action" reply (Apple's
ANCS spec supports this) versus a simpler phone-relay of a canned reply
cannot be confirmed from strings alone.

## FairPlay limitation

The main binary `extracted/Payload/XJOverSeas.app/XJOverSeas` and the Flutter
AOT binary `Frameworks/App.framework/App` are both FairPlay-encrypted
(`LC_ENCRYPTION_INFO_64`, `cryptid 1`, per `recon/RECON.md`'s `otool -l`
dump), as are all 99 embedded framework binaries listed in
`recon/frameworks.csv`. This means the actual ANCS-handling code — how the
app registers as an ANCS client, parses `CBCentralManager`/`CBPeripheral`
notification-source characteristics, formats the BLE payload sent to the
glasses, and drives the ANCS-related PAG animations at runtime — is entirely
inside encrypted `__TEXT` segments and cannot be disassembled, decompiled, or
class-dumped from this App-Store IPA without a decrypted dump obtained from a
jailbroken device or debugger attached to a running, OS-decrypted process.
Every claim in this report is limited to what is visible in unencrypted
regions: bundle-root asset filenames and byte sizes, the plist/entitlements
XML, and binary-plist localization strings converted with `plutil`. No
decrypted native code, no disassembly, and no Dart/Flutter AOT symbol
resolution was performed or is claimed anywhere in this document.

IPA_NOTIFICATIONS_COMPLETE
