# What this repo's SDK can already put on the lens — no firmware modification

Scope: LEAF 1.5. Every content-bearing phone→glasses action, its JSON shape, where
the Swift SDK implements it, whether it needs the classic-Bluetooth audio link, and
whether it can carry **free-form text**.

Evidence is tagged throughout:

- **[TESTED]** — `PROTOCOL.md` / `INVESTIGATION.md` / `SESSION_LOG.md` record it
  confirmed on the XGA010C over BLE.
- **[SDK]** — implemented in `Sources/`, shape pinned by the repo, but the repo does
  not record a hardware confirmation.
- **[FW]** — inferred from strings in
  `Reverse/firmware/x_1.0.12.83/platform_tester.bin`. **This is not a working
  protocol.** Anything reached only this way is `UNVERIFIED`.

Firmware address model used below: CODE VA = file + `0x2C010000`;
DATA file = VA − `0x3BFD7C0C`. All offsets quoted are **file offsets** into
`platform_tester.bin`.

---

## 0. Headline answers

1. **The only free-form text surface reachable from iOS today is the notification
   card** (`action:"notification"` / `SHOW_NOTIFICATION`). It is BLE-only, it is
   `[TESTED]`, and the SDK wraps it as `LensCards` / `LensScript` precisely because
   the prompter is gated. It is **transient**, not a standby-HUD line: the card
   lives for `notificationDisplayTime` (the official app offers 5/10/15/30 s).
   Re-sending the same numeric id repaints the same card, which is how
   `LensScript` and the demo's cruise/lyrics/contact cards hold text on screen.

2. **The StandByView tips label is NOT phone-supplied.** The firmware picks it by
   **resource id**, on-device, from a fixed vector of tip ids scored by device
   state. Decisive strings: `[Launcher]TipsModel::showTips resId = %d, string is
   null` (`0x196128`), `[Launcher]TipsModel::showOperationTips resId = %d`
   (`0x1962a8`), `[Launcher]TipsModel::showPriorityTips resId = %d` (`0x1965a4`),
   `initTipsVector` (`0x196790`), and per-tip counters persisted in preferences
   (`operationTipCountArray[%d] = %d`, `0x1962dc`). There is **no `tips` action** in
   `MessageModel`'s dispatch table (see §5) and no string key that carries tip text.
   `updateTipsViewAlign textWidth = %d` (`0x1977f0`) is a layout measurement of the
   already-resolved string, not an inbound field. **This path is closed without
   patching.**

3. **The launcher's weather model does not consume `areaName`, hi or lo.** In this
   firmware image `WeatherModel::handleAppMsg` (`0x192b8c`, source path
   `Pages/Launcher/model/WeatherModel.cpp` at `0x192b9c`) reads only `iconCode`
   (`0x192c24`), `quality` (`0x192c30`), `aqi` (`0x192c38`) and a temp, and logs
   `success, temp %d, weatherIconCode %ld` (`0x192c40`). The byte strings
   `dayTempMax`, `dayTempMin`, `sunriseTime`, `sunsetTime` **do not occur anywhere
   in the image**, and `areaName` (`0x1770f8`) / `futureDays` (`0x177148`) occur
   only in the **Assistant** weather scene's field block, not the launcher's. So the
   city/hi/lo the SDK sends are accepted by the wire format and dropped by the
   standby widget. The one free-form string the launcher *does* parse is
   `quality` — `UNVERIFIED` whether it is rendered (an `AQI` literal sits beside it
   at `0x192b88`).

4. **Task-4 premise correction: none of the four standby-widget config actions are
   missing.** `set_standby_widget_lists`, `set_standby_position`,
   `change_dock_items` and `set_font_mode` are all implemented, and there are two
   generic entry points besides. Details in §6.

---

## 1. Free-form-text paths

| Path | JSON shape | SDK support | Audio-link gate | Free-form text? |
| --- | --- | --- | --- | --- |
| **Notification card** `SHOW_NOTIFICATION` | `{"action":"notification","data":{"notificationAction":"SHOW_NOTIFICATION","data":[{"appName","title","content","canReply","type":"MSG_TYPE_NORMAL","id":"phone-<pkg>-<n>","packageName","crateTime","extra":"{}"}]}}` | `Notifications.buildShow` — `Sources/MyvuCore/App/Feature/Notifications.swift:101` / `:105`; entry builder `:82`; `MyvuClient.showNotification` `Sources/MyvuCore/MyvuClient.swift:965` | **No** — BLE-only `[TESTED]` | **YES.** `title` ≤100, `content` ≤500 chars (SDK caps, `Notifications.swift:37-38`); newlines are flattened to spaces (`:70`). Transient. |
| **Lens card** (same wire path, stable ids) | as above, `packageName = dev.myvu.sdk`, fixed `numericId` | `LensCards.buildShow` — `Sources/MyvuCore/App/Feature/LensCards.swift:25`; `MyvuClient.showLensCard` `MyvuClient.swift:991`; dismiss `:997` | **No** | **YES.** Re-show with the same id to repaint in place `[SDK]`. |
| **Lens script** (paged text) | N notification cards on one id | `LensScript` — `LensCards.swift:50`; `MyvuClient` wiring via `LensScript(client:)` `:62` | **No** | **YES.** Blank-line paged; the SDK's explicit substitute for `tici`. |
| **AI answer card** (LLM scene) | `{"code":102,"payload":{…"query":<text>…}}` then `{"code":122,"payload":{"answer":<text>,"base_status":1}}` and again with `2` | `AiProtocol.chatQuery` — `Sources/MyvuAI/AiProtocol.swift:216`; `AiProtocol.chatAnswer` `:255`; driven by `AiSession.ask(_:)` `Sources/MyvuAI/AiSession.swift:488`, commit at `:453-456`; sent to `com.upuphone.ai.assistant` (`AiSession.swift:580`) | **No** per `PROTOCOL.md:30-31` ("the assistant's typed path" is on the BLE-usable side) — but **`UNVERIFIED` on hardware**: no session log records the card rendering on iOS | **YES**, and this is the only *persistent-ish* scene. Requires `code:2` config with `isChatGptCardDisplayEnable` + `isContinuousDialogueEnable` (`PROTOCOL.md:314-316`; `AiProtocol.swift:123` `chat_gpt_card_display`). |
| **ASR caption** | `{"code":101,"payload":{"id","text","type":0|1}}` | `AiProtocol.asrResult` — `AiProtocol.swift:206` | **No** (same caveat as above) | **YES**, but partials must *grow* or the caption flashes and vanishes (`AiProtocol.swift:203-205`). Caption strip, not the standby HUD. |
| **Caller-ID name** `AIR_FUNCTION` | `{"action":"AIR_FUNCTION","data":{"code":200,"data":{"displayName":<text>,"geo":<text>},"functionName","msg","requestId"}}` | `AirFunction.reply` — `Sources/MyvuCore/App/Feature/AirFunction.swift:118` | **No** for the reply itself; but it is only *solicited* by an inbound HFP `+CLIP`, so in practice it never fires on iOS | **YES** (`displayName`, `geo`) — reply-only, cannot be initiated. |
| **Teleprompter** `tici` | open: `{"action":"app","data":{"launchMode":"scene","action":"open_app","pkg":"com.upuphone.ar.tici","app_name":…,"ext":"<json string>"}}`; content: `{"action":"tici","data":{"action":"send_content","value":"<json string with sourceText>"}}` | `Teleprompter.buildOpen` — `Sources/MyvuCore/App/Feature/Teleprompter.swift:22`; `buildContent` `:58`; `buildHighlight` `:81`; `MyvuClient.openTeleprompter` `MyvuClient.swift:934`, `teleprompterContentOnly` `:958` | **YES** `[TESTED]` — `PROTOCOL.md:344,373-379`. Corroborated in firmware: `[Launcher]launch app failed, ble connect but br not, show toast` (`0x190c34`), `…ble and br not connect, show toast` (`0x190bf4`) | Free-form in principle; **unusable from iOS**. Content-only pushes are also gated (`PROTOCOL.md:377-379`). |
| **Navigation road name** | `{"identity":"navi_info","nrn":<road>,…}` to `com.upuphone.ar.navi.glass` | `NavCommands.buildNaviInfo` — `Sources/MyvuNav/NavCommands.swift:110`; launch `buildStart` `:80` | **YES** `[TESTED]` — same gate | `nrn` is free text, but the app must be launched first, which is gated. |
| **Toast** `SHOW_TOAST` | `{"action":"notification","data":{"notificationAction":"SHOW_TOAST","data":{…"content":<text>…}}}` — shape **inferred** | **MISSING.** No occurrence of `SHOW_TOAST` in `Sources/`, `Examples/`, or `Reference/` | Unknown | `UNVERIFIED [FW]`. Handler `onReceiveToast` at `0x18da34`, log `[%s] content: %s` at `0x18da44`, enum literal `SHOW_TOAST` at `0x18de88`. Sits in the *same* `notificationAction` switch as `SHOW_NOTIFICATION`, so it is BLE-reachable in principle. **Best unexplored lead for a short free-form line.** |
| **Dialog** `SHOW_DIALOG` | `{"action":"notification","data":{"notificationAction":"SHOW_DIALOG","data":{"interactionPromptTxt":<text>,"sendPackage":…}}}` — shape **inferred** | **MISSING** | Unknown | `UNVERIFIED [FW]`. `SHOW_DIALOG` `0x18de94`, `onReceiveDialog` `0x18dc48`, `interactionPromptTxt` `0x18dc64`, `[%s] send dialog input result to %s` `0x18dc24`. Interactive — it expects a reply back. |

## 2. Fixed-schema (non-free-form) content paths

| Path | JSON shape | SDK support | Gate | Notes |
| --- | --- | --- | --- | --- |
| **Weather** | `{"action":"weather","data":{ArWeatherModel}}` — `temp`, `weather`, `dayTempMax`, `dayTempMin`, `areaName`, `iconCode`, `lastUpdate`, `sunriseTime`, `sunsetTime`, `aqi`, `quality`, `futureDay[]`. No nested `data.action`; nulls omitted, never `null` | `Weather.build` — `Sources/MyvuCore/App/Feature/Weather.swift:68`; `MyvuClient.sendWeather` `MyvuClient.swift:1007`; auto-answers `{"action":"syncWeather"}` (`Weather.swift:114`) | **No** — BLE-only `[TESTED]` (`INVESTIGATION.md:104`) | Launcher consumes only `temp`/`iconCode`/`quality`/`aqi` (§0.3). **City / hi / lo are not settable on the standby widget.** `quality` is the only free string the launcher parses — `UNVERIFIED` whether drawn. |
| **Step count** | `{"action":"sport","data":{"errorCode":0,"stepCount":N}}` | `Health.build` — `Sources/MyvuCore/App/Feature/Health.swift:63`; `MyvuClient.sendStepCount` `MyvuClient.swift:1012` | **No** | Numeric only. Firmware `handleHealthMsg` `0x192ffc` reads `calories`/`stepCount`/`targetStep`. |
| **Clock** `SyncOffSetTime` | `{"action":"SyncOffSetTime","data":{"syncTimeData":"<ms as string>","timeZoneOffSet":<ms>}}` | `ClockSync.build` — `SystemSettings.swift:304`; `MyvuClient.syncTime` `MyvuClient.swift:1130` | **No** `[TESTED]` | Drives the `time` standby widget. Numeric only. |
| **Device name** | `{"action":"system","data":{"action":"set_device_name","value":{"device_name":<text>}}}` | `SystemSettings.setDeviceName` — `SystemSettings.swift:149`; `MyvuClient.setDeviceName` `:1061` | **No** | **Free text**, but it surfaces in a connect **toast** (`[Launcher]show connect toast, deviceName is %s`, `0x192538`) and settings, not on the idle HUD. Firmware echoes `{"device_name": "%s", "time": "%s"}` (`0x193a68`). A minor, real free-text surface. |
| **HUD language** | `{"action":"system","data":{"action":"set_language","value":{"language","country"}}}` | `SystemSettings.setLanguage` — `SystemSettings.swift:140`; `MyvuClient.setLanguage` `:1062` | **No** `[TESTED]` (`PROTOCOL.md:222-235`) | Chooses which i18n table renders — including the tips. |
| **Trackpad** `phonepad` | `{"action":"phonepad","data":{"action":<gesture>,…}}` | `Trackpad` — `Teleprompter.swift:202`+; `MyvuClient.trackpad*` `:1017-1030` | **No** `[TESTED]` | Input, not content. |
| **Screenshot** | `{"action":"screenshot","data":{"action":"get_glass_screenshot","value":"<json string>"}}` | `GlassScreenshot.request` — `SystemSettings.swift:281`; `MyvuClient.requestGlassScreenshot` `:1044` | **No** | Read-back, not push. Useful to *verify* anything above. |

## 3. The gate, restated precisely

**BLE-only, works from iOS today:** notification/lens cards, weather, step count,
clock, language, all `system` settings incl. standby widget/dock/font/position,
trackpad, queries, screenshot, `AIR_FUNCTION` replies, and — per `PROTOCOL.md`,
`UNVERIFIED` on this repo's hardware logs — the assistant's typed path (`code
102`/`122` card).

**Needs a live classic-BT audio link (HFP/A2DP), unreachable from iOS on the
XGA010C:** anything routed through `open_app` — teleprompter `tici`, navigation
`com.upuphone.ar.navi.glass`, music. `PROTOCOL.md:373-379` states this as tested;
the firmware corroborates the mechanism with three distinct launch-failure branches
keyed on BR/EDR state at `0x190ba8`, `0x190bf4`, `0x190c34`.

The gate is the glasses **app**, not merely the launch message: `teleprompterContentOnly`
still shows the connect card (`PROTOCOL.md:377-379`).

## 4. Practical shape of "a free-form line on the idle HUD" today

There is no persistent phone-supplied text line on the standby HUD. What is
achievable, entirely over BLE, with no firmware change:

- A notification card carrying up to ~500 characters, repainted on a stable
  `numericId` (`LensCards.scriptNumericId` … `lyricsNumericId`,
  `LensCards.swift:11-23`) — this is what `LensScript`, the cruise card, the Uniden
  alert card and the Spotify lyrics card all do. It occludes the standby widgets
  while it is up and expires after `notificationDisplayTime`
  (firmware field at `0x18d668`; SDK default 10 s, `Notifications.swift:143`;
  choices 5/10/15/30 s, `:173`).
- Requires `SYNC_SMART_REMINDER_CONFIG` with `notificationControlState:true`
  first, or the firmware drops the path
  (`ios notification not enabled, pls open in MYVU app`, `0x18ed5d`) —
  `MyvuClient.enablePhoneNotifications` `MyvuClient.swift:978`.
- To hold text up continuously you must re-push on a timer shorter than the
  dismiss time. Not documented as tested for long durations — `UNVERIFIED`.

## 5. `handleSystemMsg` dispatch table, read out of the firmware

The complete set of `system` sub-actions this build handles (contiguous string
block `0x194bcc`–`0x194f58`; unmatched ones hit
`[Launcher]MessageModel handleSystemMsg no handler for action %s`, `0x194f68`):

```
change_dock_items            set_standby_position         set_wear_detection_mode
set_glass_sound_effect_mode  set_hear_impairment_mode     set_app_fast_open
set_music_tp_control_mode    set_image_stabilization_mode set_image_adjustment_mode
set_language                 set_font_mode                get_standby_widget_lists
set_standby_widget_lists     get_device_info              get_language
get_zen_mode                 set_device_name              set_brightness_finish
get_volume                   set_volume                   get_wear_detection_mode
get_standby_position         get_volume_stream_type       get_music_tp_control_mode
notify_privacy_expired       notify_statement_change      sync_clone_data
```

None of them carries display text. **Sub-actions the firmware knows and the SDK does
not implement:** `set_image_stabilization_mode`, `set_image_adjustment_mode`,
`set_brightness_finish`, `notify_privacy_expired`, `notify_statement_change`,
`get_standby_widget_lists`. All reachable today via `MyvuClient.sendRaw`.

## 6. Standby-widget config: what the SDK actually has (Task 4)

The brief's premise — that these are missing — does not hold. All four are
implemented, and two generic escape hatches exist besides.

| Action | Wire shape | SDK symbol |
| --- | --- | --- |
| `set_standby_widget_lists` | `{"action":"system","data":{"action":"set_standby_widget_lists","value":{"widgets":[…]}}}` | `SystemSettings.setStandbyWidgets` `Sources/MyvuCore/App/Feature/SystemSettings.swift:197`; `MyvuClient.setStandbyWidgets` `MyvuClient.swift:1090` |
| `set_standby_position` | `…"value":{"standby_position":<int 0–3>}` | `SystemSettings.setStandbyPosition` `SystemSettings.swift:183`; `MyvuClient.setStandbyPosition` `:1058` |
| `change_dock_items` | `…"value":"pkgA|pkgB|…"` (a flat pipe-joined **string**, not an array) | `SystemSettings.setDockItems` `SystemSettings.swift:126`; `MyvuClient.setDockItems` `:1085` |
| `set_font_mode` | `…"value":<1|2|3>` (1-based; 0 selects nothing) | `SystemSettings.setFontSize` `SystemSettings.swift:107`; `MyvuClient.setFontSize` `:1077` |

Generic entry points, if you want to send something the SDK has no builder for:

- **`MyvuClient.sendRaw(_:targetPkg:sourcePkg:)`** — `Sources/MyvuCore/MyvuClient.swift:1143`.
  Hand-written action JSON, full control of source/target package. This is the
  concrete symbol to use for `SHOW_TOAST`, `SHOW_DIALOG`,
  `get_standby_widget_lists`, or any of §5's unimplemented sub-actions.
- **`MyvuClient.sendAction(_:targetPkg:sourcePkg:)`** — `MyvuClient.swift:902`
  (what `sendRaw` forwards to; drops the message unless `session.ready`).
- **`SystemSettings.query(_:)`** — `SystemSettings.swift:246` for any no-argument
  `system` sub-action; `MyvuClient.query` `:1135`.
- The envelope itself is `AppLayer.buildSendActionBody` —
  `Sources/MyvuCore/App/AppLayer.swift:35`.

**Where new SDK code would actually be needed** (nothing above requires it, but if
you want first-class builders rather than `sendRaw`):

- `SystemSettings` (`Sources/MyvuCore/App/Feature/SystemSettings.swift`) — add the
  five unimplemented `system` sub-actions from §5 beside `setFontSize`; the private
  `system(_:_:)` (`:18`) and `nested(_:_:_:)` (`:30`) helpers already give you both
  payload shapes.
- `Notifications` (`Sources/MyvuCore/App/Feature/Notifications.swift`) — add
  `SHOW_TOAST` / `SHOW_DIALOG` / `DISMISS_REMINDER` /
  `SYNC_SMART_REMINDER_TAXI` / `SYNC_SMART_REMINDER_FLYME_FLIGHT` /
  `CONNECT_ANCS_SERVICE` / `DISCONNECT_ANCS_SERVICE` /
  `QUERY_ANCS_SERVICE_STATE` beside the existing `show`/`dismiss`/`syncConfig`
  constants at `:8-15`; the `envelope(_:_:)` helper at `:40` already builds the
  wrapper. All of these literals are in the firmware's `notificationAction` switch
  (`0x18de88`–`0x18dfa0`) and **none** is in `Sources/`.

## 7. Honest ledger

- `[TESTED]` on hardware, per this repo's own logs: notifications rendering a card;
  brightness/volume/zen/screen-timeout; `set_language`; trackpad; clock; weather
  arriving; device queries; and the *negative* result that `tici`/nav/music are
  gated on HFP.
- `[SDK]` only (shape implemented and unit-tested, hardware result not recorded):
  lens-card repaint-in-place semantics, `LensScript` paging, standby widget/dock/
  font/position actions, step count, screenshot, glass-log pull, `AIR_FUNCTION`
  reply, the whole `MyvuAI` code-101/102/122 flow.
- `[FW] UNVERIFIED` — inference from strings, **no protocol confirmation**:
  `SHOW_TOAST`, `SHOW_DIALOG`, the launcher's narrowed weather field set, the
  resId-only nature of tips, `createTextWidget`'s existence
  (`[Launcher]createTextWidget failed, title or content is empty`, `0x199800` — it
  takes a title and content, but no inbound message routes text to it, so it looks
  like an internal constructor for `steps`/`weekday`, not a phone-addressable
  widget).
