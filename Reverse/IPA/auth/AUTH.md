# MYVU AR (XJOverSeas) 1.1.28 — Authentication / Account / SSO Surface

Bundle: `Reverse/IPA/extracted/Payload/XJOverSeas.app`, `CFBundleIdentifier` `com.upuphone.overseas`
(source: `Reverse/IPA/recon/Info.plist.xml`).

## FairPlay limitation

The account/login *logic* — how credentials, verification codes, WeChat/Apple-ID
OAuth tokens, or Flyme session tokens are actually built, signed, and sent — lives
in the main executable `XJOverSeas` and the Flutter AOT blob `Frameworks/App.framework/App`.
Both are FairPlay-encrypted: `otool -l` on `XJOverSeas` shows `LC_ENCRYPTION_INFO_64`
`cryptid 1` (`Reverse/IPA/recon/RECON.md`), as do all 99 embedded `.framework`
binaries. Their `__TEXT` segments cannot be disassembled or class-dumped from this
App-Store IPA. Everything below was read from **unencrypted** material only —
bundle resource files, Info.plist entries, entitlements, and HTML policy pages —
plus one bare string (`xj_feishu`) recovered from the main binary's unencrypted
`__LINKEDIT` string table via `strings`, which is metadata, not decrypted code. No
FairPlay-protected code was decrypted, disassembled, or claimed to be understood
here.

## 1. Flyme/Meizu account

`FlymeAccountUI.bundle` (`Reverse/IPA/extracted/Payload/XJOverSeas.app/FlymeAccountUI.bundle`)
ships a full localized login/account UI (13 `.lproj` folders) plus
`countryCode/countryCode.json` (phone-prefix picker, e.g. `{"country":"中国","code":"0086","brief":"CN"}`).
`localizable/en.lproj/Localizable.strings` (source path above) exposes the login
flow as key/value strings: `captchaLogin`="Sign in via phone", `submitTitle`="Sign
in/Sign up", `passwordLogin`, phone+SMS-captcha login, plus **social bind/unbind**
keys `wechatLogin`="Wechat", `appleLogin`="AppleID", `bindThirdPartyAccount`,
`untieWechat`, `untieApple`, `wxNotInstalled`="Wechat is not installed". Also
present: real-name/ID-card verification strings (`actualNameVerified`, `idCard`,
`authTips` citing "Mobile Internet Application Information Service Management
Regulations of the People's Republic of China") and `deleteAccount`.

Account backend host, per `Reverse/IPA/recon/hosts-vendor.txt`:
`xj-platform-global.flyme.com/fms/policy/<32-hex-id>` (69 distinct policy-doc
IDs) and `xj-platform.flyme.com/fms/policy/...` (5 IDs, including
`.../nocache/<hash>.html` variants) — a policy/agreement-document CDN keyed by
opaque hash IDs, not a login API endpoint per se, but proves the `flyme.com`
platform backs the account.

`meizu.com` / `www.meizu.com/privacy-policy` also appear in `hosts-vendor.txt`.
The bundled English privacy policy `app_pp_en_US.html` (root of the .app) names
the controller as "Hubei Xingji Meizu Network Technology Co., Ltd." and repeats
"Flyme account" ~30 times, describing account ID/nickname/avatar collection and
cross-device sync tied to the logged-in Flyme account. The dedicated
`account_privacy_policy.html` (8860 bytes) is titled "Flyme 账号服务协议" ("Flyme
Account Service Agreement") and states Zhuhai Meizu Communication Equipment Co.
Ltd. ("魅族"/"Meizu") provides the Flyme account service — confirming the
account model is Flyme/Meizu-ecosystem-centric even though the app is the
international/overseas build.

## 2. Lark/Feishu SSO

`LarkSSO.bundle` (`Reverse/IPA/extracted/Payload/XJOverSeas.app/LarkSSO.bundle`)
contains only two files: `Assets.car` and `Info.plist` — no executable/framework
binary. `Info.plist` (read via `plutil -convert xml1`) gives
`CFBundleIdentifier`=`org.cocoapods.LarkSSO`, `CFBundleName`=`LarkSSO`,
`CFBundleShortVersionString`=`1.1.17`, built with Xcode 14.0/iOS 16 SDK — i.e. a
CocoaPods-distributed Lark (Feishu/ByteDance enterprise IM) single-sign-on
resource pod. `strings` on its `Assets.car` show only generic UI icon names
(`guanbi@2x/3x.png` = "close" in Chinese, `navigation_back_light@2x/3x.png`) —
no Lark logo/branding asset names, and no company scheme string. No matching
`LarkSSO.framework` code module was found under `Frameworks/`, so its actual SDK
code (if used) must be statically linked into the FairPlay-encrypted main binary.
`strings XJOverSeas` recovered exactly one related token, `xj_feishu`, from the
binary's unencrypted symbol/string table (not decrypted code) — consistent with
an internal identifier for a Feishu-branded login path, but its call sites are
inside encrypted `__TEXT` and cannot be traced. `Reverse/IPA/recon/Info.plist.xml`
has no Lark/Feishu URL scheme in `CFBundleURLTypes` or
`LSApplicationQueriesSchemes`, and no other embedded framework `Info.plist`
declares a Lark/Feishu `CFBundleURLSchemes` entry (checked across all
`Info.plist` files under the .app). No lark.com/feishu.cn hosts appear in
`Reverse/IPA/recon/urls-all.txt` or `hosts-vendor.txt`.

## 3. Captcha (GeeTest GTCaptcha4)

`GTCaptcha4.bundle` (`Reverse/IPA/extracted/Payload/XJOverSeas.app/GTCaptcha4.bundle`)
`Info.plist`: `CFBundleIdentifier`=`com.geetest.GTCaptcha4Bundle`,
`CFBundleName`=`GTCaptcha4`, version `1.8.2`, copyright "© 2020 geetest". It
ships `en.lproj/GTCaptcha4.strings` and `zh-CN.lproj/GTCaptcha4.strings`
(binary plists) whose extracted strings are captcha-webview error messages:
"Captcha session canceled.", "Evaluating javascript fail.", "Have a trouble in
loading.", "Invalid parameters.", "Missed resource.", "Request web resource
timeout.", "The web content process is terminated." — consistent with a GeeTest
v4 WKWebView-hosted CAPTCHA challenge widget. No captcha ID/appId string was
found inside the bundle's own resources (it appears the ID is supplied at
runtime from server config or from FairPlay-encrypted code, not baked into
resources). Backend hosts from `Reverse/IPA/recon/hosts-vendor.txt`:
`gcaptcha4.geetest.com` (challenge API), `static.geetest.com` (JS/asset CDN),
`monitor.geetest.com` (telemetry). GeeTest is not mentioned by name in the
bundled English privacy-policy HTML files checked (`app_pp_en_US.html`).

## 4. URL schemes / LSApplicationQueriesSchemes (auth-relevant)

From `Reverse/IPA/recon/Info.plist.xml`:
- `CFBundleURLTypes` → one entry, `CFBundleURLName`=`com.upuphone.superapp.xjmz`,
  `CFBundleURLSchemes`=[`xjmz`] — the app's own inbound URL scheme (used for its
  Flyme/OAuth login callback redirect target, typically; no scheme parameters
  are visible in the plist itself).
- `LSApplicationQueriesSchemes` → [`qqmusic`] only. Notably **no** `weixin`/
  `wechat`, `mqq`/`qq`, `feishu`/`lark`, or Apple-specific scheme is declared
  here, even though `FlymeAccountUI.bundle`'s strings reference WeChat and Apple
  ID login/unbind flows — meaning either those flows are web-based (in-app
  browser / ASWebAuthenticationSession, which needs no `LSApplicationQueriesSchemes`
  entry) rather than native app-switch SSO, or the native SDK's scheme
  registration got dropped in this overseas build.
- `BGTaskSchedulerPermittedIdentifiers` → [`com.upuphone.superapp`] (background
  task id, not auth-specific, included for completeness).

## 5. Entitlements — keychain / associated domains

From `Reverse/IPA/recon/entitlements.xml`:
- `application-identifier` = `K72D494553.com.upuphone.overseas`
- `com.apple.developer.team-identifier` = `K72D494553`
- `keychain-access-groups` = [`K72D494553.com.upuphone.overseas`] — a single,
  app-private keychain access group (no shared/cross-app group, no Meizu/Flyme
  team-prefixed group), implying session tokens are stored in this app's own
  keychain item, not shared with a companion Meizu/Flyme app via keychain.
- `aps-environment` = `production` (push, used for remote-notification delivery,
  not auth by itself).
- No `com.apple.developer.associated-domains` key is present at all — the app
  does NOT declare Universal Links / shared-webcredentials domains, so any
  OAuth-style web redirect back into the app must go through the custom
  `xjmz://` URL scheme (item 4) rather than an associated HTTPS domain.

## 6. OAuth/token hints from readable HTML policy pages

`app_pp_en_US.html` (root of .app, "MYVU AR PRIVACY POLICY", version 1.6,
2025-01-17) — text-extracted content confirms: "Using our services with Flyme
account... we collect and use your Flyme account ID and nickname and avatar...
collected through indirect means from our affiliated companies with your
authorization. Please read the Flyme Account Privacy Policy carefully before
registering or logging in..." and repeated statements that device settings/
conversation records/meeting-assistant transcripts are bound to "your logged-in
Flyme account" for sync. The same file links out to
`xj-platform-global.flyme.com/fms/policy/5a83e3b2419a2a9787ed0656c4d4dcdb_...html`
and a second `.../dca911e1.../...html` policy fragment (both readable
plaintext `href`s in the HTML, not obfuscated). No literal "OAuth", "access_token",
or GeeTest/captcha-id string was present in this file's plaintext. `app_up_en_US.html`
(user agreement) repeats "third-party"/"Meizu" language but no distinct token
scheme. No app-store-safe `.html` file in the bundle contains a literal OAuth
authorize/token endpoint URL.

## Auth provider summary table

| Provider | Mechanism (from evidence) | Evidence path | Hosts |
|---|---|---|---|
| Flyme (Meizu) account | Primary account system: phone+SMS-captcha login, password login, real-name/ID verification, account ID/nickname/avatar sync | `FlymeAccountUI.bundle/localizable/en.lproj/Localizable.strings`; `account_privacy_policy.html`; `app_pp_en_US.html` | `xj-platform-global.flyme.com/fms/policy/*`, `xj-platform.flyme.com/fms/policy/*`, `meizu.com`, `www.meizu.com/privacy-policy` |
| WeChat | Social login/bind-unbind (UI strings only; no `weixin` URL scheme declared) | `FlymeAccountUI.bundle/localizable/en.lproj/Localizable.strings` (`wechatLogin`, `untieWechat`, `wxNotInstalled`) | none found in `urls-all.txt`/`hosts-vendor.txt` |
| Apple ID | Social login/bind-unbind (likely native `ASAuthorizationAppleIDProvider`, standard, no scheme needed) | `FlymeAccountUI.bundle/localizable/en.lproj/Localizable.strings` (`appleLogin`, `untieApple`) | apple.com (implicit, not in recon host list) |
| Lark/Feishu SSO | Resource bundle present (`org.cocoapods.LarkSSO` pod, v1.1.17); one `xj_feishu` symbol string in main binary; no scheme/host evidence of active use in this overseas build | `LarkSSO.bundle/Info.plist`; `strings XJOverSeas` → `xj_feishu` | none found |
| GeeTest GTCaptcha4 | Human-verification challenge widget (WKWebView-based), likely gating login/registration | `GTCaptcha4.bundle/Info.plist`; `GTCaptcha4.bundle/en.lproj/GTCaptcha4.strings` | `gcaptcha4.geetest.com`, `static.geetest.com`, `monitor.geetest.com` |
| App custom scheme | Inbound redirect target `xjmz://`, `CFBundleURLName` `com.upuphone.superapp.xjmz` | `Reverse/IPA/recon/Info.plist.xml` | n/a (local scheme) |
| QQ Music | Query-only scheme, not itself an auth provider but declared alongside login-adjacent integrations | `Reverse/IPA/recon/Info.plist.xml` (`LSApplicationQueriesSchemes`: `qqmusic`) | n/a |

## Notes on account model

All evidence points to a Flyme-centric (Meizu ecosystem) account model: the
in-app account UI bundle is literally named `FlymeAccountUI.bundle`, the backend
policy host is `*.flyme.com`, the dedicated account agreement HTML is titled
"Flyme 账号服务协议" naming Zhuhai Meizu Communication Equipment Co., Ltd., and
the general privacy policy names Hubei Xingji Meizu Network Technology Co., Ltd.
as data controller and repeatedly ties feature data (voice assistant, meeting
transcripts, device settings) to "your logged-in Flyme account". WeChat and
Apple ID appear only as secondary bind/unbind social-login options layered on
top of the Flyme account, and Lark/Feishu SSO resources are bundled but show no
corroborating host/scheme evidence of being wired up for this build.

IPA_AUTH_COMPLETE
