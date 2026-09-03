# MYVU AR 1.1.28 IPA — Resource Bundle Survey (measured)

Source: `Reverse/IPA/extracted/Payload/XJOverSeas.app/*.bundle` (9 top-level `.bundle`
directories, per `recon/RECON.md`). Enumerated with `find`; plist metadata read with
`plutil -convert xml1 -o -`; sizes from `du -sk`/`ls -la`; asset catalog contents from
`assetutil -I`.

## FairPlay limitation

The app's main binary `XJOverSeas`, the Flutter AOT `App.framework/App`, and all 99
embedded `.framework` binaries are FairPlay-encrypted (`LC_ENCRYPTION_INFO_64`,
`cryptid 1`, confirmed in `recon/RECON.md` via `otool -l`). None of the code that
*consumes* these 9 resource bundles is inspectable from this artifact. However, **all
9 bundles surveyed here contain zero Mach-O binaries** — every file in them was probed
for Mach-O magic bytes (`cafebabe`/`feedface`/`feedfacf`/`cffaedfe`/`cefaedfe`) and none
matched, confirming these are pure data/resource bundles (JSON, ONNX/`.nn`/`.bin` model
weights, images, `.strings`, `.car`, HTML/JS, plists). No cryptid measurement applies to
any bundle in this report because none embeds a Mach-O; this does not lessen the
FairPlay restriction on the surrounding app and framework code, which remains
unreadable native code per the hard rule.

## Summary table

| Bundle | Files | Size | Bundle ID | Version | Origin | Purpose |
|---|---|---|---|---|---|---|
| XJARAssistant.bundle | 1 | 4 KB | org.cocoapods.XJARAssistant | 0.1.0 | First-party (upuphone/XJ) | AR assistant module marker bundle; only an `Info.plist`, no resources bundled here |
| XJASR.bundle | 9 | 55 MB | org.cocoapods.XJASR | 0.1.0 | First-party (upuphone/XJ) | On-device Automatic Speech Recognition: ONNX encoder/decoder/CTC models, ITN FSTs, command grammar |
| XJNLG.bundle | 3 | 88 KB | org.cocoapods.XJNLG | 0.1.0 | First-party (upuphone/XJ) | Natural Language Generation: TTS response templates (incl. hardware-specific `_hw` set) |
| XJVAD.bundle | 47 | 15 MB | org.cocoapods.XJVAD | 0.1.0 | First-party (upuphone/XJ) | Voice Activity Detection / keyword-spotting / voiceprint: `.nn`/`.bin`/`.onnx` DSP+NN models, offline command & intent tables |
| FlymeAccountUI.bundle | 17 | 188 KB | (no Info.plist found) | — | Meizu/Flyme | Flyme account login UI: country-code picker JSON + 14 `.lproj` localizations |
| LarkSSO.bundle | 2 | 36 KB | org.cocoapods.LarkSSO | 1.1.17 | Third-party OSS (ByteDance Lark/Feishu SSO SDK) | SSO web-auth UI assets: `Assets.car` (2 nav icons) + `Info.plist` |
| GTCaptcha4.bundle | 6 | 76 KB | com.geetest.GTCaptcha4Bundle | 1.8.2 | Third-party OSS (Geetest) | CAPTCHA v4 webview: `gt4-index.html`, `gt4.js` (v4.1.5), loading GIF, 2 localizations |
| TZImagePickerController.bundle | 31 | 128 KB | (no Info.plist found) | — | Third-party OSS (TZImagePickerController, github.com/banchichen) | Photo/video picker UI: 20 PNG icons + 12 `.lproj` localizations |
| permission_handler_apple_privacy.bundle | 2 | 8 KB | org.cocoapods.permission-handler-apple-privacy | 9.3.0 | Third-party OSS (Flutter `permission_handler` plugin) | Apple privacy manifest (`PrivacyInfo.xcprivacy`) declaring UserDefaults API usage |

## Per-bundle detail

### XJARAssistant.bundle (first-party)
`find` shows only `Info.plist` — no images/nib/json inside. `CFBundleIdentifier
org.cocoapods.XJARAssistant`, `CFBundleShortVersionString 0.1.0`, built with Xcode
2620 / iphoneos SDK 26.2, `MinimumOSVersion 13.0`. This is a CocoaPods-vendored pod
resource bundle; its near-empty contents suggest the actual AR-assistant logic lives
in the (encrypted) companion framework/pod code, not in bundled resources.

### XJASR.bundle (first-party — Automatic Speech Recognition)
Contents: `encoder.onnx` (39.6 MB), `decoder.onnx` (14.4 MB, `file` reports generic
"data" — ONNX protobuf, no distinguishing magic caught by `file`), `ctc.onnx`
(2.19 MB), `zh_itn_tagger.fst` / `zh_itn_verbalizer.fst` (Chinese inverse-text-
normalization finite-state transducers), `lang_char.txt` (vocabulary), `commands.json`
(voice command→sentence-variant table, Chinese, e.g. "打开蓝牙"/"关闭蓝牙"/"打开wifi"),
`contexts.json` (hotword list: "阿里妈妈","勿扰","提词器","小点声","调暗屏幕" etc.). This
is a streaming ASR pipeline (encoder/decoder/CTC = typical Conformer/Transducer
architecture) bundled for on-device Mandarin recognition with domain-specific command
grammar for the glasses (bluetooth, wifi, screen dimming, teleprompter, do-not-disturb).
`CFBundleIdentifier org.cocoapods.XJASR`, version 0.1.0.

### XJNLG.bundle (first-party — Natural Language Generation)
`nlg_template.json` and `nlg_template_hw.json` (hardware-variant templates). Sampled
entries keyed by `functionId` (e.g. `GLOBAL01_P22`, `GLOBAL01_P10`) each holding a
`tts` array with `mood`/`speakID`/`template` Chinese response strings, e.g.
"抱歉，没太听清，请重新唤醒再试一次吧。" and "${appName}账号未登录，请登录后再试试。" — this
is the canned TTS response layer for the voice assistant, with `${appName}` templating.
`CFBundleIdentifier org.cocoapods.XJNLG`, version 0.1.0.

### XJVAD.bundle (first-party — Voice Activity Detection / KWS / voiceprint)
Largest structured bundle (47 files, 15 MB). Top level: 8 `.config` files for named
acoustic scenarios (`gloable-vadonly-air(-pro)`, `gloable-bfvad-trans-star`,
`gloable-assistant-star-wkpvadcwronly`, `gloable-vadcwronly(-en)`, `gloable-vadonly-air-en`),
plus `offlineCmd.json` / `offlineCmdPlus.json` (offline intent tables — sampled entries
map Chinese phrases like "打开WIFI"/"关闭WIFI" to `{target, intent: Intent_Sys_Open/
Intent_Sys_Close, domain: wakeFree_system}`) and `funcIntent.json` (intent-category
groupings: `open`→[`Intent_Sys_Open`,`Intent_AR_Card_Open`,`Intent_Nav_Open`,
`Intent_Tiktok_Open`,`Intent_Phone_Open`,`Intent_Music_Open`,`Intent_Video_Open`],
`close`, `switch_tab`, `set`, `close_tab`, `global_cancel` — confirms app-level voice
control surfaces: AR card, navigation, TikTok, phone, music, video). The `res/`
subdirectory holds the DSP/NN weight files: `cwr_model.nn` (2.07 MB), `kws_model.nn`
(1.42 MB), `ns_1192.nn` (noise-suppression, 357 KB), multiple `res_2mic_*.bin` beam-
forming/AEC/GEVD-NNBF profiles for star/concept/wechat/transcribe/assistant/off
scenarios (~15 KB each), `.cfg`/`.cmvn` feature-extraction configs, and a `vprint/`
(voiceprint) subtree with `campp/embedding_campp_{unaware_content,wakeup_dim128}.onnx`
and `module0/{separate,nnbeam,embedding}.onnx` + `aec.mic2.ref2.Tap3.bin` +
`res_agc3_drc0_g18.bin` — a 2-mic beamforming/AEC/speaker-embedding pipeline for
wake-word verification and voiceprint-gated wake. `CFBundleIdentifier
org.cocoapods.XJVAD`, version 0.1.0. Together XJASR+XJNLG+XJVAD form the on-device
"always-listening wake word → VAD/KWS → ASR → NLG/TTS" voice assistant stack referenced
by `XJARAssistant` and the Vertex AI/Gemini and aispeech.com hosts noted in RECON.md.

### FlymeAccountUI.bundle (Meizu/Flyme)
No `Info.plist` present (`find -iname "*.plist"` returns nothing — confirmed by
directory listing showing only `countryCode/` and `localizable/`). Contains
`countryCode/countryCode.json` (phone country-code picker data, sampled entries:
中国/0086/CN, 中国台湾/00886/TW, 中国香港/00852/HK, Brazil, …) and `localizable/` with 14
`.lproj` dirs (de, zh-Hant-TW, ar, zh-Hans, ja, ms-MY, en, zh-Hant-HK, en-GB, it, ko, tr,
en-US, fr, id, th), each a `Localizable.strings`. The `en.lproj` file (header comment
"Account - 手机上设 en", author "lawn.cao", 2023/7/3) defines login/registration UI
strings: `captchaLogin`, `submitTitle`, `agreeRegister` (Service Agreement/Privacy
Policy consent), `wechatLogin`, `appleLogin`, `passwordLogin`, `getCaptcha`,
`remain`="Resend (%ds)". This backs the Flyme/Meizu account SSO login flow referenced
by the `xj-platform-global.flyme.com` host in RECON.md.

### LarkSSO.bundle (third-party OSS — ByteDance Lark/Feishu SSO)
`CFBundleIdentifier org.cocoapods.LarkSSO`, `CFBundleShortVersionString 1.1.17`, built
with older toolchain (Xcode 1400/14A309, SDK iphoneos16.0, `MinimumOSVersion 8.0` —
notably older than the other first-party pods' SDK 26.2, consistent with a vendored
third-party pod not rebuilt for this release). Contents: `Info.plist` +
`Assets.car`. `assetutil -I` on the car file lists exactly 2 unique image assets,
each with two renditions (lzvn-compressed + palette-img fallback): `navigation_back_light`
and `navigation_close_light`, both 48x48pt @2x, RGB/ARGB, non-opaque, template-mode
automatic (i.e. tintable nav-bar back/close icons) — minimal chrome for an SSO webview
sheet.

### GTCaptcha4.bundle (third-party OSS — Geetest CAPTCHA v4)
`CFBundleIdentifier com.geetest.GTCaptcha4Bundle`, `CFBundleShortVersionString 1.8.2`,
copyright "© 2020 geetest", built Xcode 1300/SDK iphoneos15.0. Contents: `gt4-index.html`
(webview host page, `<title>请通过以下验证</title>` = "Please complete the verification
below", styles a `#geetest_index_loading` overlay), `gt4.js` (self-identifies as
`"v4.1.5 Geetest Inc."`, IIFE requiring a browser `window`/`document` environment, 10s
`TIMEOUT`), `gt4-loading.gif`, and 2 localizations (`en.lproj`, `zh-CN.lproj`) each with
a binary-plist `GTCaptcha4.strings` (sampled strings: "Captcha session canceled.",
"Evaluating javascript fail.", "Have a trouble in loading.", "Invalid parameters.",
"Missed resource.", "Request web resource timeout.", "The web content process is
terminated.", "Unknown error." — all native-side WKWebView bridge error messages).
Matches the `gcaptcha4.geetest.com` / `static.geetest.com` / `monitor.geetest.com`
hosts in RECON.md; used for human-verification challenges (likely gating login/registration).

### TZImagePickerController.bundle (third-party OSS — banchichen/TZImagePickerController)
No `Info.plist` (confirmed absent by directory listing). 20 `@2x` PNG icons for a
custom photo/video picker UI: `takePicture@2x.png`, `takePicture80@2x.png`,
`photo_sel_photoPickerVc@2x.png` / `photo_def_photoPickerVc@2x.png`,
`photo_sel_previewVc@2x.png` / `photo_def_previewVc@2x.png`,
`MMVideoPreviewPlay(HL)@2x.png`, `iCloudError@2x.png`,
`preview_original_def@2x.png` / `photo_original_{def,sel}@2x.png`, `addMore@2x.png`,
`right_arrow@2x.png`, `navi_back@2x.png`, `{preview,photo}_number_icon@2x.png`,
`VideoSendIcon@2x.png`, `tip@2x.png` — plus 12 `.lproj` dirs (de, ar, zh-Hans, ja, en,
es, ko-KP, zh-Hant, vi, ru, fr, pt) each with `Localizable.strings`. This is the
well-known open-source `TZImagePickerController` CocoaPod, used here for in-app
photo/video selection (e.g. attaching media in chat/profile/AR features).

### permission_handler_apple_privacy.bundle (third-party OSS — Flutter plugin)
`CFBundleIdentifier org.cocoapods.permission-handler-apple-privacy`,
`CFBundleShortVersionString 9.3.0`, SDK iphoneos26.2. Contains only `Info.plist` +
`PrivacyInfo.xcprivacy` (Apple's required privacy manifest). The manifest declares one
`NSPrivacyAccessedAPIType`: `NSPrivacyAccessedAPICategoryUserDefaults` with reason code
`1C8F.1` (accessing user defaults to read/write app-internal data, one of Apple's
approved reasons); empty `NSPrivacyCollectedDataTypes`; `NSPrivacyTracking` false. This
is the auto-generated manifest shipped by the Flutter `permission_handler` plugin's iOS
podspec, confirming the app embeds Flutter (consistent with the `App.framework`
Flutter-AOT binary noted in RECON.md) and uses `permission_handler` for runtime
permission prompts (camera/mic/photos etc., needed by TZImagePicker and the AR/voice
features above).

## Classification recap
- **First-party (upuphone/XJ voice-assistant stack)**: XJARAssistant, XJASR, XJNLG,
  XJVAD — all `org.cocoapods.XJ*`, version `0.1.0`, built with current Xcode 2620/SDK
  26.2 toolchain matching the app itself.
- **Meizu/Flyme**: FlymeAccountUI — no bundle id (raw resource pod), backs
  `xj-platform-global.flyme.com` account login.
- **Third-party OSS**: LarkSSO (ByteDance Feishu SSO, v1.1.17), GTCaptcha4 (Geetest
  v1.8.2, `com.geetest.*`), TZImagePickerController (photo picker, no bundle id),
  permission_handler_apple_privacy (Flutter plugin privacy manifest, v9.3.0).

IPA_BUNDLES_COMPLETE
