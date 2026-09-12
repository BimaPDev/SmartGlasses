# leaf-1.4 — BLE / StarryNet protocol surface (1.0.11.53)

Binary: `Reverse/firmware/x_1.0.11.53/platform_tester.bin` (7,042,632 bytes)
Address model (PLAN.md): code `VA = file + 0x2C010000`; data `file = VA - 0x3BFD7CB0`.
Every offset below is a **file offset** in that binary unless written as `VA`.
Verifier: `node Reverse/firmware/analysis/map/verify-protocol.mjs` -> `protocol verification passed`.

This document is the **firmware-side** inventory. `PROTOCOL.md` at the repo root is the
**capture-side** view and `Sources/MyvuCore/App/Feature/*.swift` is a working client.
Section 14 lists every place the binary contradicts or outruns `PROTOCOL.md`.
Where they disagree, the binary wins.

## 0. Method and controls (read this before trusting anything below)

Strings alone prove only presence. Every action in sections 3-8 is additionally shown
**reachable** by finding its 4-byte data pointer (`VA = off + 0x3BFD7CB0`) inside the
**literal pool of the dispatcher function that compares it**. A string with no pointer
into a dispatcher pool is marked PRESENT-ONLY and is not claimed to be routable.

- POSITIVE CONTROL: `set_language` at `0x1a63ec`; its pointer `0x3C17E09C` appears at
  `0x60ed84` (handleSystemMsg pool) and `0x60e75c` (handleSyncCloneData pool). The
  method finds a known-good, hardware-confirmed action (`PROTOCOL.md` confirms
  `set_language` works on an XGA010C).
- NEGATIVE CONTROL: the *wrong* data delta `0x3C000000` (the known-bad constant from
  CLAUDE.md) is also tried for `set_language`. It resolves to a different file offset
  whose bytes are not `set_language`. If the search method degenerated into "find
  anything", this control would pass and the verifier fails.
- ABSENCE CONTROL: three plausible-but-invented action names (`set_wallpaper`,
  `set_hotword`, `set_boot_logo`) must be absent from the whole image. They are.

## 1. Transport (GATT / link) — what the firmware corroborates

`PROTOCOL.md` derived the GATT layout from captures. The firmware does not contain the
`0000xxxx-0000-1000-8000-00805f9b34fb` UUID strings (they are built numerically), so the
service/characteristic numbering is **NOT independently confirmed here** — see section 15.

What *is* in the firmware, as a distinct BLE/relay subsystem called **StarryNet**:

| Evidence | Offset | Meaning |
|---|---|---|
| `../../xjxr_starrynet/sdk_m55/xjxr_starrynet_interface.c` | `0x2bf74` | the BLE link SDK |
| `../../xjxr_starrynet/utils_m55/proto_buf/starry_link_encrypt.pb-c.c` | `0x2f0b0` | the ECDH/link protobuf (`LinkProtocol`) |
| `../../xjxr_starrynet/utils_m55/proto_buf/relay_api.pb-c.c` | `0x2e884` | the RFCOMM relay protobuf |
| `../../xjxr_starrynet/utils_m55/proto_buf/runasone_api.pb-c.c` | `0x2d430` | RunAsOne ability/auth |
| `../../xjxr_starrynet/utils_m55/proto_buf/share_api.pb-c.c` | `0x2ddb0` | share ability |
| `Starry.StarryNetMessageData` / `.MessageType` | `0x31124`, `0x31184` | the app-data envelope |
| `%s recv mtu = %d, phone starrynet version = %d` | `0x32468` | MTU + version negotiation |
| `set_negotiated_starrynet_version` | `0x32ee0` | version is negotiated, not fixed |
| `sendAppUniteCode` / `receiveAppUniteCode` / `AppUniteCodeType` | `0x2eb70`, `0x2ebdc`, `0x2e8dc` | TlvBox tag 109 in `PROTOCOL.md` |
| `bond_ancs`, `enable_starrynet_log`, `starrynet_start_br_connect` | `0x2c244`, `0x293a4`, `0x2bee0` | ANCS bond + classic-BT bring-up |

`starrynet_start_br_connect` is the firmware side of the audio-link gate that
`PROTOCOL.md` describes: the glasses have an explicit "start BR connect" entry point,
consistent with the directed-page behaviour documented there.

**TIER: none.** Transport is fixed. Nothing here is customizable without CODE.

## 2. Top-level routing

Inbound app messages are JSON `{"action": <outer>, "data": {...}}` delivered to per-model
handlers in the launcher (`app/Pages/Launcher/model/MessageModel.cpp`, path string at
`0x17c1a8`). The handlers found, each with its own `data.action` sub-vocabulary:

| Handler | name string | dispatcher pool | sub-vocabulary |
|---|---|---|---|
| `handleSystemMsg` | `0x1a648c` | `0x60ed74`-`0x60edf4` | section 3 |
| `handleSyncCloneData` | `0x1a5e...`/`0x1a6230` | `0x60e72c`-`0x60e77c` | section 4 |
| `handleSmartLifeMsg` | `0x19f94c` | `0x5fd2cc`-`0x5fd338` | section 5 |
| `handleStartAppMsg` | `0x1a4adc` | `0x60c9d4`-`0x60ca10` | section 6 |
| `handlePhonePadMsg` | `0x1a44e4` | `0x60c240` | trackpad |
| `handleHealthMsg` | `0x1a4734` | `0x60c384` | steps/calories |
| `handleScreenShotMsg` | `0x1a6958` | — | screenshot |
| `handleGetLogMsg` | `0x1a6bd0` | — | log pull |
| `handleTimeMsg` | `0x1a6cfe` | — | section 13 |
| `handleAppMsg` (WeatherModel) | `0x1a42c4` | `0x60be60`-`0x60be90` | section 12 |
| `handleEventTracking` | `0x1a4a04` | — | analytics |
| `handleMyvuLoginStatus` | `0x1a4944` | — | analytics |
| `handleGlassActive` | `0x1a606c` | — | analytics, section 6 |
| `handleStatementChange` | `0x1a6198` | — | privacy consent |
| `handlePrivacyExpire` | `0x1a5e48` | — | privacy consent |
| `handleVersionNoMatchMsg` | `0x1a4828` | — | version mismatch card |

The **outer** action tokens (`"system"`, `"weather"`, `"notification"`, …) are not
isolable as standalone ASCII strings at `-n 3`; they are matched inside a merged literal
pool. Use `PROTOCOL.md` / the Swift SDK for the outer names — this leaf verifies the
*inner* vocabulary, which is where all the customization lives.

## 3. `system` action vocabulary — the CONFIG core

Confirmed reachable: each pointer below sits in the `handleSystemMsg` literal pool.
The pool is contiguous at `0x60ed78`-`0x60ede8`; the table is in pool order, which is
also the dispatcher's compare order.

| pool @ | action | string @ | direction | reply | TIER |
|---|---|---|---|---|---|
| `0x60ed78` | `get_device_info` | `0x1a658c` | phone->glasses | `sendDeviceInfoMsg` `0x1a4d74` (`system_mode`,`brand`,`serial_number`,`wifi_mac`,`bluetooth_addr`,`total_storage`,`available_storage`) | CONFIG (read) |
| `0x60ed7c` | `do_recovery` | `0x1a4e58` | phone->glasses | `doRecovery` `0x1a4e20` | CONFIG — **destructive factory reset** |
| `0x60ed80` | `get_language` | `0x1a659c` | phone->glasses | `{language,country}` | CONFIG (read) |
| `0x60ed84` | `set_language` | `0x1a63ec` | phone->glasses | `setLanguage` `0x1a4e6c`, key `country` `0x1a4e64` | CONFIG |
| `0x60ed88` | `get_zen_mode` | `0x1a65ac` | phone->glasses | — | CONFIG (read) |
| `0x60ed8c` | `set_zen_mode` | `0x19bddc` | phone->glasses | `setZenMode` `0x1a4fc4` | CONFIG |
| `0x60ed90` | `set_device_name` | `0x1a65bc` | phone->glasses | emits `{"device_name": "%s", "time": "%s"}` `0x1a51a0` | CONFIG |
| `0x60ed9c` | `get_brightness` | `0x384f4` | phone->glasses | — | CONFIG (read) |
| `0x60eda0` | `set_brightness` | `0x38504` | phone->glasses | value must be number 0-100 (`0x1a5310`) | CONFIG |
| `0x60eda4` | `set_brightness_finish` | `0x1a65cc` | phone->glasses | ends a drag | CONFIG |
| `0x60eda8` | `get_volume` | `0x1a65e4` | phone->glasses | `sendVolumeInfoMsg` `0x1a54f0` | CONFIG (read) |
| `0x60edac` | `set_volume` | `0x1a65f0` | phone->glasses | keys `streamType` `0x1a53cc`, `needReply` `0x1a53d8`; legacy no-`streamType` form is accepted and converted (`0x1a5464`) | CONFIG |
| `0x60edb0` | `change_dock_items` | `0x1a6304` | phone->glasses | `setDockItemsInner` `0x1a5684`, ignores identical seq | CONFIG |
| `0x60edb4` | `get_wear_detection_mode` | `0x1a65fc` | phone->glasses | — | CONFIG (read) |
| `0x60edb8` | `set_wear_detection_mode` | `0x1a6330` | phone->glasses | `setWearDetectMode` `0x1a56d8` | CONFIG |
| `0x60edbc` | `set_standby_position` | `0x1a6318` | phone->glasses | numeric; `setStandbyPosistionInner` `0x1a5730` | CONFIG |
| `0x60edc0` | `get_standby_position` | `0x1a6614` | phone->glasses | `sendStandByPositionInfoMsg` `0x1a581c` | CONFIG (read) |
| `0x60edc4` | `get_volume_stream_type` | `0x1a662c` | phone->glasses | `handleGetVolume` `0x1a5584` | CONFIG (read) |
| `0x60edc8` | `get_music_tp_control_mode` | `0x1a6644` | phone->glasses | `sendMusicTpControlInfoMsg` `0x1a5b94` | CONFIG (read) |
| `0x60edcc` | `set_music_tp_control_mode` | `0x1a6394` | phone->glasses | `setMusicTpControlMode` `0x1a5c08` | CONFIG |
| `0x60edd0` | `notify_privacy_expired` | `0x1a6660` | phone->glasses | `pp_type` must be `myvu_pp` or `glass_pp` (`0x1a5ed8`/`0x1a5f0c`) | CONFIG |
| `0x60edd4` | `notify_statement_change` | `0x1a6678` | phone->glasses | types `privacy_agreement` `0x1a616c`, `transmission_agreement` `0x1a6180` | CONFIG |
| `0x60edd8` | `sync_clone_data` | `0x1a6690` | phone->glasses | array; see section 4 | CONFIG |
| `0x60eddc` | `set_glass_sound_effect_mode` | `0x1a6348` | phone->glasses | `setSoundEffectMode` `0x1a5010` | CONFIG |
| `0x60ede0` | `get_glass_sound_effect_mode` | `0x1a50ac` | phone->glasses | `getSoundEffectMode` `0x1a5064` | CONFIG (read) |
| `0x60ede4` | `set_standby_widget_lists` | `0x1a6430` | phone->glasses | key `widgets` `0x1a6428`, count logged `0x1a6468` | CONFIG |
| `0x60ede8` | `get_standby_widget_lists` | `0x1a640c` | phone->glasses | — | CONFIG (read) |

Unknown actions fall through to `[Launcher]MessageModel handleSystemMsg no handler for
action %s` (`0x1a66a0`). That log is the cheapest possible reachability probe on a live
unit: send a nonsense `data.action` and look for it.

Not in the `system` pool but handled by sibling models, same tier:

| action | string @ | handler | TIER |
|---|---|---|---|
| `get_glass_screenshot` | `0x1a5cb8` | `handleScreenShot` `0x1a66e0`; keys `useEncoding` `0x1a5cac`, `filePath` `0x1a687c` | CONFIG (read) |
| `show_screenshot_save_result` | `0x1a6a30` | `handleScreenShotResult` `0x1a5d58` | CONFIG |
| `get_user_feedback` / `get_glass_log` | `0x1a5ce4` / `0x1a6c60` | `handleGetLog` `0x1a6a98`; keys `filesize`,`channel`,`changechannel`,`need_send_glass_log` (`0x1a5cf8`-`0x1a5d50`); file `user_feed_back.log` `0x1a6bbc` | CONFIG (read) |
| `system_glass_active` / `req_active_state` / `req_active_info` | `0x1a44b0` / `0x1a6058` / `0x1a60f4` | `handleGlassActive` `0x1a606c`, key `active_time` `0x1a604c` | CONFIG (analytics only) |
| `system_account` | `0x1a44c4` | `handleMyvuLoginStatus` `0x1a4944`, key `account_state` `0x1a4984` | CONFIG (analytics only) |
| `feature_list` | `0x1a44d4` | key `features` `0x1a492c`, value `audio_multi` `0x1a4938` | CONFIG |
| `phonepad` | `0x1a447a` | `handlePhonePadMsg` `0x1a44e4`; keys `doubleClick` `0x1a45b8`, `longPress` `0x1a45c4`, `gestureMode` `0x1a45d0`, `actionType` `0x1a45dc` | CONFIG |
| `sport` | `0x1a449c` | `handleHealthMsg` `0x1a4734`; keys `calories` `0x1a47c0`, `stepCount` `0x1a47cc`, `targetStep` `0x1a47d8` | CONFIG |
| `screenshot` | `0x1a44a4` | — | CONFIG |
| `sync_event_rule` | `0x1a49e8` | `handleEventTracking` `0x1a4a04`; keys `ueSwitch` `0x1a49f8`, `faultTrackRulesV2` `0x1a4a50`, `errorTrackRules` `0x1a4a9c` | CONFIG (analytics) |

## 4. `sync_clone_data` — the bulk settings push, and the eight hidden settings

`handleSyncCloneData` (`0x1a6230`) takes `value` as an **array of objects** (errors at
`0x1a6244`, `0x1a62c0`) and replays each as a settings write. Its literal pool at
`0x60e734`-`0x60e77c` lists the settings it accepts:

`set_wear_detection_mode` · `set_zen_mode` · `set_glass_sound_effect_mode` ·
`set_hear_impairment_mode` · `set_app_fast_open` · `set_music_tp_control_mode` ·
`set_image_stabilization_mode` · `set_image_adjustment_mode` · `set_language` ·
`set_font_mode` · `change_dock_items` · `set_standby_position`
(plus `brightness_model` `0x17c138` and `remote_app` `0x1a5058`).

**Finding — five settings are reachable ONLY through `sync_clone_data`.** These five
strings have their pointer in the `handleSyncCloneData` pool and in **no** other
dispatcher pool, so plain `handleSystemMsg` will answer them with
"no handler for action":

| action | string @ | pool @ | what it plausibly controls | TIER |
|---|---|---|---|---|
| `set_hear_impairment_mode` | `0x1a6364` | `0x60e748` | hearing-impairment / caption mode | CONFIG |
| `set_app_fast_open` | `0x1a6380` | `0x60e74c` | fast app launch | CONFIG |
| `set_image_stabilization_mode` | `0x1a63b0` | `0x60e754` | display EIS | CONFIG |
| `set_image_adjustment_mode` | `0x1a63d0` | `0x60e758` | display geometry/colour adjust | CONFIG |
| `set_font_mode` | `0x1a63fc` | `0x60e760` | **HUD font size/weight mode** | CONFIG |

`set_font_mode` is the single most interesting entry in this leaf for the stated goal:
it is a **CONFIG-tier** font control, i.e. the phone can change HUD typography with no
flashing at all. leaf-1.1 owns the DATA-tier font story; this is the no-risk lever.
The accepted *values* are not determinable from strings — they are numeric. Probe them.

## 5. Notifications / SmartLife (`notificationAction`)

Dispatcher `handleSmartLifeMsg` (`0x19f94c`), key `notificationAction` (`0x19f97c`),
pool `0x5fd2cc`-`0x5fd314`. Unknown values log
`[%s] unrecognized notificationAction %s` (`0x5fd314` -> `0x19fc48`-ish).

| pool @ | value | string @ | handler | TIER |
|---|---|---|---|---|
| `0x5fd2dc` | `CONNECT_ANCS_SERVICE` | `0x19fb9c` | `onReceiveAncsConnectRequest` `0x19f660` | CONFIG |
| `0x5fd2e0` | `QUERY_ANCS_SERVICE_STATE` | `0x19fc24` | `onReceiveAncsStateRequest` `0x19f67c` | CONFIG (read) |
| `0x5fd2e4` | `DISCONNECT_ANCS_SERVICE` | `0x19fc0c` | `onReceiveAncsDisconnectRequest` `0x19f698` | CONFIG |
| `0x5fd2ec` | `SHOW_TOAST` | `0x19fb0c` | `onReceiveToast` `0x19f6b8` | CONFIG |
| `0x5fd2f0` | `SYNC_SMART_REMINDER_CONFIG` | `0x19fbcc` | — | CONFIG |
| `0x5fd2f4` | `SHOW_NOTIFICATION` | `0x19fb6c` | `onReceiveNotification` `0x19f5c8` | CONFIG |
| `0x5fd2f8` | `DISMISS_NOTIFICATION` | `0x19fbb4` | `onReceiveDismissNotification` `0x19f63c`, key `ids` `0x19f65c` | CONFIG |
| `0x5fd2fc` | `SHOW_DIALOG` | `0x19fb18` | `onReceiveDialog` `0x19f8cc`, keys `sendPackage` `0x19f8dc`, `interactionPromptTxt` `0x19f8e8` | CONFIG |
| `0x5fd300` | `SYNC_SMART_REMINDER_TAXI` | `0x19fb80` | `createTaxiMsg` `0x19f828` | CONFIG |
| `0x5fd304` | `SYNC_SMART_REMINDER_FLYME_FLIGHT` | `0x19fbe8` | `createFlightMsg` `0x19f74c` | CONFIG |
| `0x5fd308` | `DISMISS_REMINDER` | `0x19fb24` | `onReceiveDismissScene` `0x19f618`, key `packages` `0x19f630` | CONFIG |
| `0x5fd30c` | `ios_lock_screen` | `0x19fb38` | `onReceiveUnlockState` `0x19f6f4` (`screen_state`) | CONFIG |
| `0x5fd310` | `SYNC_CONFIG_BROADCAST_PAUSE_TYPE` | `0x19fb48` | `onReceiveMuteType` `0x19f704` | CONFIG |

Card payload keys (`createNormalMsg` `0x19f474`): `msgType` `0x19f57c`, `crateTime`
`0x19f538` (**sic — the firmware misspells "createTime"**), `canReply` `0x19f55c`,
`aiResult` `0x19f568`, `discernResult` `0x19f574`, `groupName` `0x19f594`, `sender`
`0x19f5a0`, `verificationCode` `0x19f5b4`, `erase` `0x19fc40`, `needTtsOn` `0x19fcac`,
`needScreenOn` `0x19fcec`, `cleanPkg` `0x19fd7c`, `cleanType` `0x19fd88`, `cleanAll`
`0x19fdc8`.

`msgType` enum: `MSG_TYPE_NORMAL` `0x19fa68`, `MSG_TYPE_IM` `0x19f434`,
`MSG_TYPE_MISSEDCALL` `0x19faf8`, `MSG_TYPE_REMINDER`, `MSG_TYPE_EXPRESS` `0x19f3e8`,
`MSG_TYPE_TAKEOUT` `0x19f3fc`, `MSG_TYPE_FLIGHT` `0x19f410`, `MSG_TYPE_TAXI`,
`MSG_TYPE_WEATHER` `0x19f420`.

Flight card: `flightNumber` `0x19f7ac`, `flightDepartureAerodrome` `0x19f7bc`,
`flightDepartureTime` `0x19f7d8`, `flightArrivalAerodrome` `0x19f7ec`,
`flightArrivalTime` `0x19f804`, `flightStateDesc` `0x19f818`, `lastUpdateTime` `0x19f780`.

Taxi card: `taxiState` `0x19f838`, `taxiStateDesc` `0x19f844`, `carNumber` `0x19f854`,
`carBrand` `0x19f860`, `driverArriveTime` `0x19f880`, `notificationContent` `0x19f86c`;
state values `taxi:driverReceivesOrder` `0x19faa0`, `taxi:driverComingSoon` `0x19fa78`,
`taxi:driverArrive` `0x19fae4`, `taxi:orderStart` `0x19fa90`, `taxi:orderFinish`
`0x19fad0`, `taxi:cancelOrder` `0x19fabc`, `taxi:userLate` `0x19fa58`.

**Per-app icon table (DATA tier).** The firmware maps source package -> icon resource:
`com.tencent.mm`->wechat, `com.whatsapp`/`com.whatsapp.w4b` (`0x19ff7c`/`0x19ffcc`),
`com.tencent.wework`->`smartlife_notification_wework_icon` `0x1a0040`,
`com.tencent.wemeet.app`->`..._wemeet_icon`, `com.ss.android.lark`->`..._lark_icon`,
`com.alibaba.android.rimet`->`..._dingding_icon`, Meituan/Meituan-takeout/Ele.me,
AMap/BaiduMap, `com.sdu.didi.psnger`->didi, `com.tencent.mobileqq`->qq,
`ctrip.android.view`->ctrip, `com.umetrip.android.msky.app`->msky, eight calendar
packages -> `smartlife_notification_ios_calendar_icon` `0x1a03f0`, six weather packages
-> `smartlife_notification_weather_icon` `0x1a04b0`, `com.android.dialer` ->
`phone_notification_icon` `0x1a04e8` (table spans `0x19ff7c`-`0x1a04ff`).
**TIER: DATA** to re-point an existing package to a different icon (the package string
is a fixed-length ASCII literal; shortening in place is safe, lengthening is not).
**TIER: CODE** to add a package the table does not list — but note the CONFIG workaround:
a phone-side client may simply send any notification under an already-mapped package name.

Related standalone settings strings (PRESENT-ONLY, not tied to a dispatcher pool here):
`notificationControlState` `0x19f2b4`, `notificationDisplayTime` `0x19f2ec`,
`notificationBroadcast` `0x19f344`, `notificationBrightenScreen` `0x19f35c`,
`callNotificationState` `0x19f378`, `notificationBroadcastPauseType` `0x19f390`,
`iosNotificationState` `0x19f440`, `iosUsingTurnOffNotification` `0x19f458`.

## 6. App launch

`handleStartAppMsg` (`0x1a4adc`), pool `0x60c9d4`-`0x60ca10`.
Action `open_app` (`0x1a4c9c`), keys `pkg` and `launchMode` (`0x1a4bcc`).
Guards: `data is null`, `action is null`, `pkg is null`, `launchMode is null`, and
`[Launcher]handleStartAppMsg, isOta is true, ignore` (`0x60ca04`) — **an OTA in progress
silently swallows every launch request**, which `PROTOCOL.md` does not mention.

Launchable packages present in the image (`com.upuphone.*`, 39 distinct):
`ar.tici` (teleprompter), `ar.tici.exit`, `ar.navi.glass`, `ar.navi.glass_pip_navigating`,
`ar.navi.lite`, `ar.music.glass`, `ar.music.glasses`, `ar.music.phone`,
`ar.translation.glasses`, `ar.translation.glasses.mute`, `ar.translation.phone`,
`ar.transcribe.glasses`, `ar.transcribe.phone`, `ar.setting.glasses`, `ar.wechat.glass`,
`ar.ring`, `ar.ring.glasses`, `ar.phone`, `ai.assistant`, `ai.phone`, `ai.ttsengine`,
`ai.ttsengine.phone`, `glass.phone`, `glass.smartlife`, `star.launcher`,
`star.launcher.setting`, `star.launcher.music_player`, `star.launcher.user_guide`,
`star.launcher.ring.single_unbound`, `star.ring.ota`, `xr.interconnect`,
`xr.ringmanager`, `air.ring`, plus test packages `sender1.app`, `test1.app`,
`thanos.sdk_test`.
**TIER: CONFIG** to open any of these. `PROTOCOL.md`'s audio-link gate applies:
opening succeeds, the app then shows "Please connect to the mobile first" without
HFP/A2DP. Note `com.upuphone.star.launcher.intl` (the package `PROTOCOL.md` reports in
the init burst) does **not** appear in this 11.53 image — only `com.upuphone.star.launcher`.

## 7. Teleprompter (`com.upuphone.ar.tici`)

Strings cluster at `0x177678`-`0x177af8`. Package literals at `0x177754` and `0x177a5c`;
exit package `com.upuphone.ar.tici.exit` `0x177a40`.

Messages: `send_content` `0x177798` / `send_content_reply` `0x1778d8`,
`request_send_content_page` `0x17777c`, `change_tici_mode` `0x177808`,
`check_tici_state` `0x17781c` / `check_tici_state_reply` `0x177928`,
`app_cancel_tici` `0x1776a8`, `glass_tici_started` `0x1776c0`,
`glasses_quit_msg` `0x177830`, `open_from_glasses` `0x177878`,
`open_result` `0x177730` / `open_result_v2` `0x1777c0` / `open_result_v3` `0x1777d0`,
`highlight_index` `0x177844` / `highlight_index_v3` `0x177900`,
`focus_para_change` `0x1779a8`.

Fields: `msgId` `0x1776b8`, `version` `0x1776d4`, `fileKey` `0x1776dc`,
`screenLocation` `0x1776e4`, `isFinish` `0x1776f4`, `ticiMode` `0x177700`,
`isRunning` `0x17770c`, `ticiSpeed` `0x177718`, `totalPage` `0x177724`,
`sourceText` `0x17773c`, `targetPage` `0x177748`, `currentPage` `0x17776c`,
`nextTotalParagraphSize` `0x1777a8`, `prevTotalParagraphSize` `0x1777e0`,
`paragraphIndex` `0x1777f8`, `paragraphIndexes` `0x17788c`, `sourceByteSize` `0x177854`,
`sourceTextOffset` `0x1778ec`, `totalTextLength` `0x1778a0`,
`autoTiciProgress` `0x1778b0`, `auto_tici_running` `0x177864`,
`isAutoTiciPlaying` `0x177914`, `blockNotification` `0x1778c4`,
`index` `0x177954`, `start` `0x17795c`, `end` `0x177940`, `value` `0x177964`,
`data` `0x177944`, `tici` `0x17794c`.

**Replies are explicit**: `waitForReplyTimeout` `0x17768c` plus the `_reply`/`open_result`
messages above — the teleprompter is the one surface in this firmware with a documented
request/response timeout. `startUniformMode` `0x177aa4` / `pauseUniformMode` `0x177ad0`
are the auto-scroll engine. `Set teleprompter zen mode: mode=%d, show=%d, reason=%s`
`0x43f8b4`.
**TIER: CONFIG** (all of it), gated on the audio link per `PROTOCOL.md`.

## 8. Navigation (`com.upuphone.ar.navi.glass`)

Vocabulary at `0x19c17c`-`0x19c380`: `navi_start` `0x19c1c0`, `navi_stop` `0x19c1b0`,
`navi_info` `0x19c1f0`, `navi_event` `0x19c1fc`, `navi_tts` `0x19c1d8`,
`navi_indoor` `0x19c1e4`, `navi_location` `0x19c370`, `navi_foreground` `0x19c274`,
`navi_night_tips` `0x19c284`, `navi_switch_rsp` `0x19c294`, `navi_mode_switch` `0x19c2cc`,
`navi_privacy_rsp` `0x19c2e0`, `pre_navi` `0x19c224`, `poi_search` `0x19c208`,
`route_refresh` `0x19c230`, `route_selected` `0x19c304`, `calculate_route` `0x19c340`,
`calc_route_result` `0x19c32c`, `arrive_destination` `0x19c240`,
`show_lane_info` `0x19c264` / `hide_lane_info` `0x19c254`,
`interval_camera_info` `0x19c350`, `end_emulatornavi` `0x19c2a4`,
`network_state` `0x19c214`, `brightness_state` `0x19c2b8`, `updateFreqAdr` `0x19c2f4`.
Fields: `naviMode` `0x19c190`/`0x19c1cc`, `displayPos` `0x19c314`,
`speechMode` `0x19c320`, `maskMsg` `0x19c368`, `desp` `0x19c17c`, `identity` `0x19c184`,
`address` `0x19c1a8`, `freqAdrList` `0x19c19c`, `data` `0x19c380`.
Also `on_notification_focus_changed` `0x19d038` and
`phone-com.upuphone.ar.navi.glass-restore_navi` `0x19f900` (cross-app resume token).
**TIER: CONFIG**, gated on the audio link.

**Correction to `PROTOCOL.md`:** it documents only `navi_info` / `navi_event` and calls
the rest unknown. The firmware accepts at least **25** navigation messages, including
`navi_tts`, `show_lane_info`/`hide_lane_info`, `interval_camera_info` (speed cameras),
`pre_navi`, `poi_search` and `calculate_route`. `PROTOCOL.md`'s short-key list
(`ic`,`pd`,`prd`,`prt`,`nrn`,`nrd`,`ns`,`rdd`,`gs`,`hsr`,`bts`,`ack`) is **not**
contradicted — those are sub-keys of `navi_info` and are too short to isolate at `-n 3`.

## 9. Music and phone

Music: `musicMsgCallback` `0x198408`, `playControl` `0x197be0`, `pauseMusic` `0x198668`,
`pauseMusicTwice` `0x198704`, `musicUiHandlerCallback` `0x198918`,
`handleQqException mgsCmd = %d ,codeInt = %d` `0x198210`, `music_exit_dialog` `0x197690`.
Packages `com.upuphone.ar.music.glass` / `.glasses` / `.phone`,
`com.upuphone.star.launcher.music_player`.
Trackpad music control is a CONFIG toggle: `set_music_tp_control_mode` (section 3) and
`MSG_WEAR_CTRL_MUSIC_START_MSG` / `..._STOP_MSG`.
Phone: `telephone_notification` `0x179d2c`, `configPhoneNotification` `0x1823b8`,
`callNotificationState` `0x19f378`, `app:Telephone` `0x193fe8`,
`Accept` `0x188438` / `Reject` `0x188440` / `Cancel_Dial` `0x188448` / `ReplyCall`
`0x188454`. WeChat reply: `app:WechatReply` `0x19400c`, `WECHAT_REPLY` `0x188974`,
`sendRecallMsg` `0x19fe0c`.
**TIER: CONFIG.**

## 10. Assistant message codes (`code:N`)

The command-message dispatcher is the function whose literal pool ends at `0x5dcb94`
(strings `[%s] code: %d` `0x193be8`, `[%s] Unhandled command message code: %d`
`0x193f90`, `[%s] Ignored Cmd, code: %d` `0x193eb8`, `[%s] Unhandled vad code: %d`
`0x193c24`). Disassembling `0x5dc900`-`0x5dca90` (Thumb) yields a compare chain of
16-bit `cmp r0, #imm` (T1, encoding `0x28<<8 | imm`). Each site below is byte-checked
by the verifier.

| code | cmp site | firmware evidence | in `PROTOCOL.md`? |
|---|---|---|---|
| 4 | `0x5dc9c0` | session ack | yes |
| 6 | `0x5dc96c` | TTS play start/end | yes |
| 101 | `0x5dc978` | ASR caption (`ASR_TEMP_RESULT` `/ASR_FINAL_RESULT`) | yes |
| 102 | `0x5dc98a` | VUI / card scene (`VUI_CHANGED`) | yes |
| 103 | `0x5dc990`, `0x5dca8a` | businessData | yes |
| 104 | `0x5dc97e`, `0x5dc9c6` | VAD (`VAD_START` / `VAD_END`) | yes |
| **105** | `0x5dc9cc` | handled, purpose not established | **NO — missing** |
| 106 | `0x5dc966` | VR_PROCESSION / VR state | yes |
| 107 | `0x5dc972` | idle / end of turn | yes |
| **110** | `0x5dc936` | handled, purpose not established | **NO — missing** |
| 111 | `0x5dc93c` | handled | yes (listed, undescribed) |
| **113** | `0x5dc9a0` | handled, purpose not established | **NO — missing** |
| **114** | `0x5dc948` | handled, purpose not established | **NO — missing** |
| 121 | `0x5dc920` | `cmp r3, #121` — same function, **different register**, so lower confidence than the rest | **NO — missing** |

**Not found in this chain: 122.** `PROTOCOL.md` describes `code:122 base_status:1/2` as
the commit of answer text into the LLM card. The key `base_status` **is** in the firmware
(`0x188408`), so the mechanism is real, but 122 is dispatched somewhere other than
`0x5dc900`-`0x5dca90` — most likely the GPT card model. **Do not treat 122 as refuted; it
is unlocated.** Likewise `code:2`, `3`, `7`, `109` are not in this chain: 2 is the config
push, 7 the bare wake code, 109 outbound mic audio, all handled on other paths.
Wake-word/session message ids confirmed as strings: `MSG_ID_VOICE_PRE_WAKEUP` `0x194040`,
`MSG_ID_VOICE_NORMAL_WAKEUP` `0x194060`, `MSG_ID_VOICE_ONESHOT_WAKEUP` `0x1940a0`,
`MSG_ID_WAKEUP` `0x194130`, `MSG_ID_CALLING_STATE_IDLE` / `_NOT_IDLE`
`0x1940fc`/`0x1940c4`; fields `wake_up_word` `0x194090`, `wake_up_type` `0x193c9c`,
`wake_up_result` `0x193b98`, `wake_up_process_started` `0x193bd0`,
`{ wakeup_word: , query_content: , wakeup_type: , is_one_shot: }` `0x193b1c`-`0x193b50`.
VR states: `VR_IDLE`, `VR_LISTENING`, `VR_PROCESSING`, `VR_PROMTING`, `VR_WAITING`,
`VR_MONITOR`, `VR_REJECT`, `VR_STATE_BREAK`, `VR_LISTENING_TIMEOUT`,
`VR_DELAY_LISTENING_IDLE`, `VR_ASR_HIT_BY_NLP`, `VR_ASR_NOT_HIT_BY_NLP`,
`VR_ERROR_ISS_ERROR_ASR`, `VR_ERROR_ISS_ERROR_NLU`.
TTS types: `TTS_TYPE_NONE`, `TTS_TYPE_COMMON`, `TTS_TYPE_TIP`, `TTS_TYPE_WAKEUP`,
`TTS_TYPE_MULTI_ROUND`.
**TIER: CONFIG.**

## 11. `code:2` assistant config — flags and their persistent keys

The flag names `PROTOCOL.md` names are in the firmware verbatim, at `0x189ead`-`0x189fa8`:
`isAsrResultScreenEnable` `0x189ead`, `isChatGptTTSPlayEnable` `0x189ec8`,
`isChatGptCardDisplayEnable` `0x189ee0`, `isContinuousDialogueEnable` `0x189efc`,
`isLowPowerWakeupEnable` `0x189f18`, `isLowPowerWakeupScreenOffEnable` `0x189f30`,
`isNetworkAvailable` `0x189f50`, `versionCode` `0x189f64`, `isStar` `0x189f70`,
`isOtaFeature` `0x189f78`, `versionName` `0x189f88`, `roundTimes` `0x189f94`,
`glassSN` `0x189fa0`, `ttsTimbreValue` `0x189fa8`.

**Finding `PROTOCOL.md` does not have:** each flag has a matching *stored setting key* at
`0x193cdc`-`0x193d6c` — `low_power_wakeup`, `continuous_dialogue`, `asr_result_screen`,
`low_power_wakeup_screen_off`, `chat_gpt_tts_play`, `chat_gpt_card_display`,
`tts_timbre`. These are the names the assistant persists under, which means the flags
are **sticky across sessions**, not per-turn. Together with `set_tts_timbre_value`
`0x18971c` and `get_voice_assistant_state` `0x405f4` this is a CONFIG-tier voice-persona
control. Session fields: `sessionId` `0x18a0b1+`, `isContinuous` `0x18a1c8`,
`isMulti` `0x18a1d8`, `isWakeup` `0x18a1e0`, `emotionType` `0x18a1ec`,
`functionId` `0x18a1f8`, `playState` `0x18a1ba+`, `hasNetwork` `0x18a10e+`,
`isOfflineResult` `0x18a186+`, `isOffline` `0x18a020`, `sceneId` `0x18a018`,
`apkName` `0x189ffd+`, `apkPackageName` `0x18a008`, `answer` `0x188414`,
`isCmd` `0x18841c`, `recommend_queries` `0x188424`, `base_status` `0x188408`,
`version_code` `0x1883f8`.
**TIER: CONFIG.**

## 12. Weather

Outbound refresh request is a **hardcoded literal**, in two forms:
`{"action": "syncWeather"}` at `0x1a4246` and `{"action":"syncWeather"}` at `0x1aa080`
(note the differing spacing — two separate emitters). This confirms `PROTOCOL.md`'s
claim that the glasses ask for weather.

`WeatherModel::handleAppMsg` (`0x1a42c4`, pool `0x60be60`-`0x60be90`) reads
`iconCode` `0x1a435c`, `quality` `0x1a4368`, `aqi` `0x1a4370`; its logs
(`0x1a4378`, `0x1a43c4`) print `temp %d, weatherIconCode %ld`, so `temp` is consumed.
`dayTempMax`, `dayTempMin`, `futureDay`, `lastUpdate`, `sunriseTime`, `sunsetTime`
appear **nowhere** in the image at `-n 3`. They are either short-string-merged, or the
launcher simply ignores them. `PROTOCOL.md` is not contradicted (it says the phone sends
them), but only `temp`/`iconCode`/`quality`/`aqi` are shown consumed by the HUD.
Icon resources are named, not numbered, in the firmware — e.g. `weather_sunny_night`
`0x1a4264`, `weather_cloudy_night` `0x1a4278`, `weather_thundershower_with_hail`
`0x1a4290`, `weather_sand` `0x1a42b0`, label `AQI` `0x1a42c0`.
A separate, **richer** assistant-domain weather model exists at `0x1882bc`-`0x1883f8`:
`condition`, `time_start`, `time_end`, `time_range_type`, `temperature_type`, `poi`,
`areaName`, `province`, `dayTemp`, `nightTemp`, `uvi`, `iconDay`, `weatherResponse`,
`futureDays`, `hourly`, `windSpeed`, `humidity`, `pressure`, `sensibleTemp`,
`weatherDataInfo`. `PROTOCOL.md` does not mention this second model at all.
**TIER: CONFIG** for the values; **DATA** to change a weather icon bitmap (leaf-1.1).

## 13. Time

`TimeModel` (`app/Pages/Launcher/model/TimeModel.cpp`, `0x1a6d10`). Inbound
`syncTimeData` `0x1a6dc0` with `utcTime` + `timeZoneOffSet` `0x1a6dd0` (both validated:
`utcTime is null`, `timeZoneOffSet is not number`, `utcTime is 0`). Outbound request is
the hardcoded literal `{"action": "SyncOffSetTime"}` at `0x1a6fe4`
(`requestTimeUpdate` `0x1a6f94`). Placeholder when unset: `--:--` `0x1a6f8c`.
NV-side offset setter `set_tm_offset` `0x1a3584`.
**TIER: CONFIG.**

## 14. Where the binary corrects or outruns `PROTOCOL.md`

1. **`sync_clone_data` is a settings channel, not "stale state to drop".**
   `PROTOCOL.md` tells the init-burst replayer to *drop* `sync_clone_data` and
   `SyncOffSetTime` messages. `sync_clone_data` is in fact the **only** route to five
   settings (section 4), `set_font_mode` among them. The SDK is throwing away the most
   useful CONFIG lever in the firmware. (`SyncOffSetTime` really is glasses-outbound, so
   dropping that one is correct.)
2. **`set_font_mode` exists and is CONFIG-tier.** Absent from `PROTOCOL.md` and from
   `Sources/MyvuCore/App/Feature/SystemSettings.swift`.
3. **Four more `system` actions are absent from `PROTOCOL.md`:**
   `set_standby_widget_lists` / `get_standby_widget_lists` (`0x1a6430`/`0x1a640c`),
   `notify_privacy_expired` (`0x1a6660`), `notify_statement_change` (`0x1a6678`),
   `get_volume_stream_type` (`0x1a662c`).
4. **Command codes 105, 110, 113, 114 (and probably 121) are dispatched** and are not in
   `PROTOCOL.md`'s code map (section 10).
5. **`code:122` is not in the main command dispatcher.** `PROTOCOL.md` places it in the
   same ordered flow as 101-107. The flow may still be right, but 122 is handled
   elsewhere; `base_status` is real (`0x188408`).
6. **Navigation is ~25 messages, not 2** (section 8).
7. **An in-progress OTA silently drops every `open_app`** (`0x60ca04`). Not documented.
8. **`com.upuphone.star.launcher.intl` is not in the 11.53 image.** `PROTOCOL.md` reports
   it from the init burst; on this build only `com.upuphone.star.launcher` exists. If the
   captured burst was taken from a different build, the package name in it is stale.
9. **The notification card key is `crateTime`, misspelled** (`0x19f538`). A client that
   sends `createTime` loses the timestamp silently.
10. **`do_recovery` is a live `system` action** (`0x60ed7c`), not merely a string.
    `PROTOCOL.md` is right to omit it from the SDK; it is right to omit it *because it
    works*, which is worth saying out loud.
11. **The `system` weather model and the assistant weather model are different schemas**
    (section 12). `PROTOCOL.md` documents only the first.

## 15. What this leaf could NOT establish

- **GATT service/characteristic numbering.** `0x0BD1`/`0x2020`-`0x2023` are not in the
  image as strings (UUIDs are constructed numerically). `PROTOCOL.md`'s capture-derived
  layout stands unchallenged but is unverified here.
- **The outer `action` token list** (`"system"`, `"weather"`, `"notification"`, …).
  Merged into a shared literal pool; not isolable at `strings -n 3`.
- **Accepted values** for `set_font_mode`, `set_image_adjustment_mode`,
  `set_image_stabilization_mode`, `set_app_fast_open`, `set_hear_impairment_mode`,
  `set_standby_position`, `ticiMode`, `naviMode`. All numeric; probe on hardware.
- **Semantics of codes 105, 110, 113, 114, 121.** Only that they are dispatched.
- **Location of `code:122`.**
- **Which `navi_*` messages are phone->glasses vs glasses->phone.** Both directions share
  the vocabulary; the split needs a capture.
- **`temp` / `weather` JSON key literals** for the launcher weather model.

## 16. Tier summary

| Tier | Count / scope | Risk |
|---|---|---|
| **CONFIG** | 27 `system` actions, 12 `sync_clone_data` settings (5 of them reachable no other way), 13 `notificationAction` values, 25 navigation messages, ~20 teleprompter messages, 13 assistant config flags, `open_app` over 39 packages, weather, time, trackpad, health | none — reversible, no flash |
| **DATA** | notification per-app icon table `0x19ff7c`-`0x1a04ff`; weather icon resources `0x1a4264`+; on-lens strings | low — byte patch, OTA has no signature gate |
| **CODE** | adding a new action name to any dispatcher; changing the `code:N` chain at `0x5dc900`-`0x5dca90` | high — v5/v6 bricked a pair |

No write proposed here lands inside the HiFi4 DSP image (`0x04E9B4`-`0x143F14`) or
`sensor_hub` (`0x134070`-`0x14A7A4`). Every offset cited is inside
`0x176000`-`0x1ab000` (PSRAM rodata) or `0x5d0000`-`0x610000` (XIP `.text` literal
pools), both well clear of both sub-images.
