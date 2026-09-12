# Bundled apps — MYVU 1.0.11.53 (`platform_tester.bin`, 7,042,632 B)

leaf-1.8 of the subsystem map. Every offset here is a **file offset** into
`Reverse/firmware/x_1.0.11.53/platform_tester.bin` and is **build-specific to 1.0.11.53**.

Address model (PLAN.md): code `VA = file + 0x2C010000` · data `file = VA - 0x3BFD7CB0`.

Oracle: `node Reverse/firmware/analysis/map/verify-apps.mjs` → `apps verification passed`.

`Pages/Launcher` and `Pages/Assistant` belong to leaf-1.2 / leaf-1.3 and are only
referenced here.

---

## 0. The headline: most of these "apps" are phone-driven renderers

Five of the eleven surfaces below contain **no business logic at all**. The phone does the
work and pushes finished text/state over the StarryNet/interconnect message bus; the glasses
lay it out. That makes them **CONFIG tier** — a phone-side app that speaks the right
package name and JSON can drive the panel with arbitrary content, **with no flash**:

| surface | pipe | what you can push |
|---|---|---|
| Translation / Transcribe | `PHONE_CMD_TRANS_PROXIMAL_RESULT` · `sourceText`/`sourceTextObj`/`sourceTextOffset` | arbitrary subtitle text, 2 sizes |
| **Prompt (teleprompter)** | `send_content` / `open_result_v3` on `com.upuphone.ar.tici` | a **full-panel paginated document** of arbitrary text |
| SmartLife | `onReceiveNotification` + `MSG_TYPE_*` | arbitrary notification cards, sender/group/body/icon |
| Navigation | `navi_start_rsp` + `update_navi_info` | road names, distances, lane art, speed |
| Phone | `PhoneDirective` JSON on `com.upuphone.ai.phone` | contact list rows, display names |

`Pages/Prompt` is the most expressive of these: it is a general free-text document viewer
that happens to be branded "Prompter".

### Customization tiers used below

- **CONFIG** — a BLE/StarryNet message or an NV key. Reversible, no flash.
- **DATA** — a byte patch into rodata (labels, icon resource names, literals).
- **CODE** — new instructions. v5/v6 bricked a pair this way; treat as last resort.

### The DATA lever that applies to every app: the text-id table

There is a `(uint32 txt_id, const char *text)` pair table; the English block runs
**`0x492fb0`–`0x493200`, 74 entries, stride 8**. The app labels the dock shows live here:

| txt_id | text | string file offset | used by |
|---|---|---|---|
| `0x1001` | `Ring` | `0x176c70` | Pages/Ring |
| `0x1002` | `Translator` | `0x41eb88` | Pages/Translation |
| `0x1003` | `Navigation` | `0x193fdc` | Pages/Navigation |
| `0x1004` | `Music` | `0x1ab70c` | Pages/AirMusic |
| `0x1024` | `Settings` | `0x176b94` | Pages/Settings |
| `0x1035` | `Prompter` | `0x41eba0` | Pages/Prompt |
| `0x1010` | `Please connect to mobile first` | `0x41ec04` | Prompt start gate (§7) |
| `0x1068` | `Transcribe` | `0x41b81c` | Transcribe mode |

The dock `createAppInfo` arm for each app loads exactly these ids (leaf-1.2 pins the
`MOVW` sites: `0x6137e0`=`0x1002`, `0x61380c`=`0x1003`, `0x61386c`=`0x1004`,
`0x6137b4`=`0x1035`, `0x613838`=`0x1024`).

**DATA tier, two independent knobs:**
1. rewrite the string in place at the offsets above (must fit the existing NUL-terminated
   slot, or repoint the pair's second word at a longer literal elsewhere);
2. rewrite the pair's second word to point at *any* other literal in rodata — a 4-byte
   patch that relabels an app without touching any string.

Combined with the dock's icon-name pointers (leaf-1.2: `0x6138d0`–`0x6138f4`), **any app
can be fully visually repurposed at DATA tier** — new label, new icon, same code.

---

## 1. Pages/Translation — and its two aliases, Transcribe and "SimuTranslation"

Registry: `Pages/Translation` → class `Translation`. Dock: pkg
`com.upuphone.ar.translation.glasses` (`0x17a100`), txt id `0x1002`, app id 3, icon
`launcher_dock_trans`.

### 1.1 It does not translate. Confirmed.

There is no engine, no model, no language pair table in this page — only a proxy, a state
machine, and a text view. The inherited fact holds and is re-derived by the verifier:
the translated text arrives from the phone.

### 1.2 Transcribe and SimuTranslation are **not** separate pages

- `Pages/Transcribe` and `Pages/SimuTranslation` **do not exist** (0 occurrences; the page
  registry has thirteen `Pages/*` entries and neither is among them — NEGATIVE CONTROL in
  the verifier). Transcribe is a **mode** of `Pages/Translation`, selected by app type:
  `APP_TYPE_TRANSLATION` vs `APP_TYPE_TRANSCRIBE` (`TransManager.cpp`,
  `0x179da8`/`0x179dc8`), with `bindTranslationContext` / `bindTranscribeContext`
  (`0x179c64`, `0x179c98`).
- Two package pairs select the mode:
  | mode | glasses package | phone package | phone service |
  |---|---|---|---|
  | translate | `com.upuphone.ar.translation.glasses` `0x17a100` | `com.upuphone.ar.translation.phone` `0x17a154` | `...launcher@...TranslationService` `0x17a1a8` |
  | transcribe | `com.upuphone.ar.transcribe.glasses` `0x17a124` | `com.upuphone.ar.transcribe.phone` `0x17a178` | `...launcher@...TranscribeService` `0x17a200` |
- `SimuTranslation` appears once in the image, inside an unrelated Launcher log string —
  **it is not a page, a class, or a package in this build.** Reported as "not found",
  per the method rule.

### 1.3 Screens

`TransViewManager` drives a small state view stack (`TransView.cpp`, `0x17a318`):

| view | offset | meaning |
|---|---|---|
| `IdleView` | `0x17a2a0` | nothing running |
| `LaunchView` | `0x17a2ac` | waiting on the phone app |
| `LaunchFailedView` | `0x17a2b8` | phone app never came up |
| `TransNotStart` | `0x17a2cc` | armed, no audio yet |
| `TransPreparing` | `0x17a2dc` | |
| `TransListening` | `0x17a2ec` | |
| `TransRunning` | `0x17a2fc` | subtitles flowing |
| `TransEnd` | `0x17a30c` | |

Two subtitle dialog styles: `dialog_trans` (`0x17aa2c`) and `dialog_trans_large`
(`0x17aa3c`) — i.e. the "subtitle size" the phone selects. Page icon `trans_icon`
(`0x17a3a4`). Mute overlay package `com.upuphone.ar.translation.glasses.mute` (`0x17a378`).

The text renderer is a **custom LVGL widget**, `widget/lv_textview.c` (`0x179320`), with its
own line pool (`lv_textline_pool_acquire` `0x1796b0`, `lv_textview_new_text_area` `0x179708`,
`lv_textview_recycle_first_textline` `0x1796cc`). This is the only page in the build with a
bespoke text engine — it is what makes it a general subtitle surface.

### 1.4 The phone→glasses command set (the CONFIG surface)

16 command names sit contiguous in rodata; declaration order is almost certainly the enum
value (an enum-to-string array), but the numeric mapping is **not** independently proven —
treat the names as authoritative, the indices as likely:

| # | name | offset |
|---|---|---|
| 0 | `PHONE_CMD_INVALID` | `0x17b449` |
| 1 | `PHONE_CMD_RECORD_STATE` | `0x17b45c` |
| 2 | `PHONE_CMD_TRANS_STATE` | `0x17b474` |
| 3 | `PHONE_CMD_TRANS_REMOTE_RESULT` | `0x17b48c` |
| 4 | **`PHONE_CMD_TRANS_PROXIMAL_RESULT`** | `0x17b4ac` |
| 5 | `PHONE_CMD_SERVER_RUNNING_STATE` | `0x17b4cc` |
| 6 | `PHONE_CMD_NETWORK_STATE` | `0x17b4ec` |
| 7 | `PHONE_CMD_SUBTITLE_SIZE_TPYE` *(sic)* | `0x17b504` |
| 8 | `PHONE_CMD_SUBTITLE_SET_TYPE` | `0x17b524` |
| 9 | `PHONE_CMD_SERVER_START_COMPLETE` | `0x17b540` |
| 10 | `PHONE_CMD_TRANS_LAN_SET` | `0x17b560` |
| 11 | `PHONE_CMD_TRANS_START` | `0x17b578` |
| 12 | `PHONE_CMD_TRANS_STOP` | `0x17b590` |
| 13 | `PHONE_CMD_DIALOG_DIMISS` *(sic)* | `0x17b5a8` |
| 14 | `PHONE_CMD_TRANS_SAVE_SUCCESS` | `0x17b5c0` |
| 15 | `PHONE_CMD_TRANS_EXIT` | `0x17b5e0` |

Handlers, one translation unit per command — the `P*Msg` (phone-originated) / `G*Msg`
(glasses-originated) split:

| phone → glasses | path offset | glasses → phone | path offset |
|---|---|---|---|
| `PAppStateMsg` | `0x17ae98` | `GAssistantOpenMsg` | `0x17ae08` |
| `PRunMsg` | `0x17af14` | `GClickMsg` | `0x17ab94` |
| `PStopMsg` | `0x17afac` | `GMuteDialogDismissMsg` | `0x17acb8` |
| `PProximalResultMsg` | `0x17b010` | `GPhoneCallingMsg` | `0x17ad9c` |
| `PMuteDialogDismissMsg` | `0x17b0c0` | `GPhoneIncomingMsg` | `0x17ab24` |
| `PSubtitleTypeMsg` | `0x17b134` | `GWechatReplyExitMsg` | `0x17ac48` |
| `PLanguageMsg` | `0x17b1bc` | `GWechatReplyOpenMsg` | `0x17ad2c` |
| `PResultMsg` | `0x17b224` | | |
| `PTransSaveSuccessMsg` | `0x17b28c` | | |
| `PRecordStateMsg` | `0x17b2fc` | | |
| `PTransStateMsg` | `0x17b390` | | |

JSON keys read out of those payloads: `dst` `0x179804`, `update` `0x179808`,
`recordState` `0x17b354`, `transState` `0x17b3e8`, `extCode` `0x17b3f4`,
`ttsTime` `0x17b42c`. The debug formats at `0x17af64` (`dstObj = %p srcObj = %p,
transTypeObj = %p`) and `0x17b06c`/`0x17b08c` (`dst = %s commit = %s` /
`src = %s commit = %s`) prove the **`src`/`dst` + `commit` shape of the result payload**:
each result carries a source-language and target-language string plus a commit flag
(interim vs final), which is exactly what an incremental subtitle stream needs.

`TransConfig` (`0x179774`) — the config object the phone sets: `launchType` (`0x1797dc`,
values `LAUNCH_TYPE_GLASS` `0x179740` / `LAUNCH_TYPE_PHONE` `0x179754`), `subtitleSetType`
(`0x1797e8`), `transType` (`0x1797f8`).

`TransProxy` (`0x17a098`) is the transport: it wraps `com.upuphone.xr.interconnect`
(`0x17a26c`) with `appId` (`0x17a1f8`), `menuId` (`0x17a250`), `requestId` (`0x17a260`),
serial format `%010u` (`0x17a258`).

`TransState` (`0x179e40`) enumerates every state the phone can put the page into —
app `FOREGROUND`/`BACKGROUND`, mute `MUTE_STATE_{TWO_SECS,FIVE_SECS,FIVE_MIN,NOT_MUTE}`,
net `NET_STATE_{OFF,LOSS,GOOD}`, remote `WAIT_FOR_REMOTE_SERVICE_LAUNCH` /
`WAIT_FOR_REMOTE_APP_LAUNCH` / `REMOTE_APP_LAUNCH_FAILED` / `LOCAL_PAUSED` /
`TRANSLATE_RUNNING` (`0x179e9c`–`0x179fa0`).

### 1.5 Tiers

| what | tier | evidence |
|---|---|---|
| put arbitrary text on the subtitle panel | **CONFIG** | `PHONE_CMD_TRANS_PROXIMAL_RESULT` + `src`/`dst`/`commit`; no on-glasses engine exists |
| switch translate ↔ transcribe | **CONFIG** | different package name in the launch message |
| subtitle size, language, mute, start/stop | **CONFIG** | `PHONE_CMD_SUBTITLE_*`, `_LAN_SET`, `_DIALOG_DIMISS`, `_TRANS_START/STOP` |
| rename "Translator", change `trans_icon` | **DATA** | txt id `0x1002` @ `0x41eb88`; dock icon ptr `0x6138dc` |
| dialog style/geometry beyond the 2 presets | **CODE** | only two style names exist; sizes are LVGL immediates in the view ctor |

---

## 2. Pages/Prompt — the teleprompter (`com.upuphone.ar.tici`)

Registry: `Pages/Prompt` → class `Prompt`. Dock: pkg `com.upuphone.ar.tici` (`0x177754`),
txt id `0x1035` → **"Prompter"**, app id 4, icon `launcher_dock_prompt`.
Three translation units: `Prompt.cpp` `0x176e30`, `controller/PromptManager.cpp` `0x1770e0`,
`ui/PromptView.cpp` `0x1779bc`, plus a private LVGL widget `widget/lv_tipview.c` `0x176ec0`.
Code lives roughly `0x536d00`–`0x53ad10` (literal pools there resolve to those paths).

### 2.1 The document protocol — confirmed, and richer than PROTOCOL.md records

Every field the inherited note predicted is present, plus a v2/v3 protocol generation:

| key | offset | role |
|---|---|---|
| `action` | `0x1776a0` | envelope verb |
| `msgId` | `0x1776b8` | correlation |
| `version` | `0x1776d4` | protocol generation |
| `fileKey` | `0x1776dc` | document identity |
| `screenLocation` | `0x1776e4` | where the panel sits |
| `isFinish` | `0x1776f4` | last page flag |
| `ticiMode` | `0x177700` | manual / uniform-scroll |
| `isRunning` | `0x17770c` | |
| `ticiSpeed` | `0x177718` | scroll speed |
| `totalPage` | `0x177724` | |
| `sourceText` | `0x17773c` | **the page body** |
| `targetPage` | `0x177748` | |
| `currentPage` | `0x17776c` | |
| `nextTotalParagraphSize` | `0x1777a8` | |
| `prevTotalParagraphSize` | `0x1777e0` | |
| `paragraphIndex` | `0x1777f8` | |
| `paragraphIndexes` | `0x17788c` | |
| `highlight_index` | `0x177844` | current-line highlight |
| `highlight_index_v3` | `0x177900` | v3 form |
| `sourceByteSize` | `0x177854` | |
| `totalTextLength` | `0x1778a0` | |
| `sourceTextOffset` | `0x1778ec` | **byte offset of this page inside the document** |
| `autoTiciProgress` | `0x1778b0` | |
| `isAutoTiciPlaying` | `0x177914` | |
| `blockNotification` | `0x1778c4` | suppress SmartLife cards while prompting |
| `index`/`start`/`value`/`data`/`end`/`tici` | `0x177954`,`0x17795c`,`0x177964`,`0x177944`,`0x177940`,`0x17794c` | envelope scaffolding |

Actions (both directions):

| action | offset | direction |
|---|---|---|
| `glass_tici_started` | `0x1776c0` | glasses → phone |
| `open_from_glasses` | `0x177878` | glasses → phone |
| `request_send_content_page` | `0x17777c` | glasses → phone (pull) |
| `send_content` | `0x177798` | **phone → glasses (push a page)** |
| `send_content_reply` | `0x1778d8` | glasses → phone (ack) |
| `open_result` / `open_result_v2` / `open_result_v3` | `0x177730` / `0x1777c0` / `0x1777d0` | phone → glasses |
| `change_tici_mode` | `0x177808` | |
| `auto_tici_running` | `0x177864` | |
| `check_tici_state` / `check_tici_state_reply` | `0x17781c` / `0x177928` | |
| `app_cancel_tici` | `0x1776a8` | |
| `glasses_quit_msg` | `0x177830` | |
| exit package `com.upuphone.ar.tici.exit` | `0x177a40` | |

`PromptManager` senders (`0x177130`–`0x1772f0`): `sendProgressMsg`, `sendLaunchReplyMsg`,
`sendStartMsg`, `sendExitMsg`, `sendSyncMsg`, `sendUniformModeState`, `sendReadyMsg`,
`sendPageRequest`, `sendContentAck`, `initSession`. Its assertion strings
(`pageCountObj != NULL` `0x177348`, `pageIndexObj`, `pageOffsetObj`, `pageCharsObj`,
`prevParaSizeObj`, `nextParaSizeObj`) pin the **required** fields of a content page.
A content page is bounded: `mCurSessionPtr->content_len > mCurSessionPtr->content_size
overflow` (`0x177604`) — oversize pushes are rejected, not accepted-and-truncated.

### 2.2 Screens and chrome

`PromptView` builds an indicator rail with six up/down states and six on/off states —
`indicator_up_default` `0x177b3c` … `indicator_off_selected` `0x177c38` (12 resource names,
contiguous, pointer array at `0x53a168`–`0x53a194`). Also `prompt_focus` `0x17798c`,
`prompt_exit_dialog` `0x177af8`, `prompt_timeout` `0x177c50`, `uniformModeOn`/`Off`
`0x177b2c`/`0x177b1c`, timers rendered as `%02u:%02u:%02u` (`0x17798c`) and `%02u:%02u`,
progress as `%.1f%%` (`0x177a38`) and `100%%` (`0x177a30`).
Fonts are named indirectly: `FONT_DUMMY_16` (`0x17796c`) and `FONT_DUMMY_20` (`0x177b0c`) —
i.e. the teleprompter's two text sizes resolve through the font-name table, which puts
**font choice at DATA tier** (leaf-1.1 owns the font objects).

### 2.3 "Please Connect to the mobile first" — CONFIRMED, with the exact gate

The string in this build is **`Please connect to mobile first`** (lower-case *c*, no "the"),
at file `0x41ec04`, text id **`0x1010`**, pair slot `0x493000`. PROTOCOL.md's wording is
approximate; the behaviour it describes is real.

The gate is in `PromptView`'s start path (literal pool at `0x53a8e8`–`0x53a8f0` resolves to
`start`, `[%s]`, `.../Pages/Prompt/ui/PromptView.cpp`, which is what proves ownership):

```
53a898  79 6b     ldrb  r3, [r5, #5]        ; link/connection state byte
53a89a  06 2b     cmp   r3, #6              ; 6 == the state the teleprompter requires
53a89c  0b d0     beq   0x53a8b6            ; -> build the document view
53a89e        ldr   r0, [r2, #0x2c]
53a8a0        bl    0x2c67d67c              ; tear down / dismiss
53a8a4  41 f2 10 00   movw r0, #0x1010      ; "Please connect to mobile first"
53a8a8        bl    0x2c6347a0              ; text-id -> string
53a8ac-53a8b2 pop / b.w 0x2c635468          ; tail-call the toast
```

**Confirmed:** the page refuses to start and shows text id `0x1010` unless a link-state
byte equals 6. **Not confirmed:** that 6 specifically means "HFP + RFCOMM up". The enum is
a raw byte with no nearby name table; the binary proves *a* connection precondition
distinct from "BLE is up", not *which* profile satisfies it. Do not quote HFP as
firmware-proven — quote "state == 6".

The same `movw #0x1010` toast is raised from `LauncherProvider.cpp` (site `0x608258`) and
two other sites (`0x5df046`, `0x6081b2`), so the string is shared, not Prompt-private.

### 2.4 Tiers

| what | tier | evidence |
|---|---|---|
| **render an arbitrary paginated document full-panel** | **CONFIG** | `send_content` + `sourceText`/`sourceTextOffset`/`currentPage`/`totalTextLength`; glasses never author text |
| scroll mode + speed, highlight line, notification blocking | **CONFIG** | `change_tici_mode`, `ticiSpeed`, `highlight_index`, `blockNotification` |
| rename "Prompter" / re-icon it | **DATA** | txt id `0x1035` → `0x41eba0`; dock ptrs `0x6138d0`/`0x6138d4` |
| swap the 12 indicator images | **DATA** | name pointers `0x53a168`–`0x53a194` |
| change the two text sizes | **DATA** | `FONT_DUMMY_16`/`FONT_DUMMY_20` resolve by name |
| remove the connection gate | **CODE** | one 2-byte edit at `0x53a89c` (`beq`→`b`) is *technically* DATA-sized but changes control flow — count it as CODE, and note it only skips the toast; the transport still has to exist for content to arrive |
| page geometry / margins | **CODE** | LVGL immediates in the view ctor |

---

## 3. Pages/Navigation

Registry `Pages/Navigation` → class `Navigation`. Dock pkg `com.upuphone.ar.navi.glass`
(`0x18c2c8`), txt id `0x1003`, app id 2, icon `launcher_dock_navi`.
Phone side is `com.upuphone.ar.navi.lite` (`0x19cdf8`) via `StarryNetManager`
(`0x19cce0`, `sendMessageAndDataWithPkg` `0x19cdb8`, `sendMessageToInterconnect` `0x19ce14`).

**Screens:** `SplashView` `0x19dcbc` → `AddressView` `0x19ce48` (route choice, focusable list)
→ `NavigatingScene` `0x19da08` / `NaviView` `0x19d6d0` → `EndView` `0x19dc40`; plus
`NaviPipView` `0x19dd20`, whose picture-in-picture identity is the package
`com.upuphone.ar.navi.glass_pip_navigating` (`0x19de98`).

**Messages:** `navi_start_rsp` `0x19b260`, `navi_stop` `0x19b1f8`, `navigation_close`
`0x19b270`, `navi_launch_mode` `0x19b284`, `naviMode` `0x19b204`,
`navigation_open_voice` / `navigation_close_voice` `0x19b298` / `0x19b2b0`,
`update_navi_info` `0x19d864`, `register_starry_net` `0x19b364`.
Payload fields seen in `NaviModel`: `cameraIntervalInfo` `0x19b514`, `intervalCameraInfo`
`0x19b528`, `carEnterCameraStatus` `0x19b564`, `cameraSpeed` `0x19b57c`.
Event names in the log formats: `NAVI_EVENT_CALCULATE_ROUTE`, `_ROUTE_SELECTED`,
`_POI_SEARCH`, `_ARRIVE_DEST`, `_END_EMUL_NAVI` (`0x19b704`–`0x19b82c`) — note
`END_EMUL_NAVI`: the firmware accepts **simulated** navigation sessions.

**Art is entirely data-driven.** 60 manoeuvre icons `here_left_u_turn` … `here_right_exit`
(`0x19e784`–`0x19ec00`, including 24 roundabout-exit variants) and 22 lane-background
tiles `landback_0` … `landback_l` (`0x19ece8`–`0x19edec`), selected by
`getGuideLaneImage` (`0x19edf0`). Mode icons `navigation_drive_icon` / `_walk_icon` /
`_cycle_icon` (`0x19df6c`/`0x19df84`/`0x19df9c`). Units literal `km/h` `0x19ef60`,
`min` `0x19f118`.

Extras: `NaviBrightnessManager` (`0x19c3b0`) raises panel brightness during navigation;
`NaviZenModeManager` (`0x19e518`, `updateNaviZenMode` `0x19e684`) is what produces the
"Do Not Disturb mode has been enabled for navigation" toast at `0x41f630`;
`NaviHotWordManager` (`0x19e118`, `regHotWord` `0x19ae98`) registers navigation-only voice
hot words with the Assistant (leaf-1.3).

| what | tier | evidence |
|---|---|---|
| drive the whole HUD with fabricated route data | **CONFIG** | `update_navi_info` consumes phone JSON wholesale |
| swap any manoeuvre/lane/mode icon | **DATA** | name tables `0x19e784`+, `0x19ece8`+, `0x19df6c`+ |
| relabel "Navigation" | **DATA** | txt id `0x1003` → `0x193fdc` |
| change `km/h`→`mph` text | **DATA** | `0x19ef60` (3-char slot; text only, no unit conversion) |
| new widget layout, extra fields | **CODE** | |

---

## 4. Pages/Phone

Registry `Pages/Phone` → class `PhonePage` (`0x18235c`). Mixed C/C++: `phone_api.c`
`0x1825c8`, `phone_eshell.c` `0x1824c0`, `phone_controller.c` `0x184150`,
`adapter/audio_adapter.c` `0x18278c`, `adapter/powerkey_adpater.c` *(sic)* `0x1831d0`.

**Screens:** `PhoneView` `0x185bbc`, `CommView` `0x187710`, `Item` `0x185aac`,
`SIMPanelView` `0x1881b4` (dual-SIM chooser), `WechatSysView` `0x1851a4`.

**The phone→glasses directive schema** (`utils/JsonToObj.cpp` `0x184dfc`) is a clean
namespaced RPC and is the app's CONFIG surface:

- envelope: `namespace` `0x184e64`, `code` `0x1850e8`, `msg` `0x1850e4`, `data` `0x1850f0`,
  `param` `0x1850f8`, `requestId` `0x185108`, `callback` `0x184fe0`
- verbs: `PhoneDirective` `0x185088`, `Dial` `0x185080`, `DialContact` `0x185044`,
  `DialNumber` `0x185054`, `DialYellowPage` `0x185060`, `DialRelative` `0x185070`,
  `Select` `0x185098`, `SwitchPage` `0x1850a0`, `Cancel` `0x1850ac`
- actions: `redial` `0x184fec`, `answer` `0x184ff4`, `hang_up` `0x184ffc`,
  `open_phone` `0x185008`, `close_phone` `0x185014`, `open_phonebook` `0x185024`,
  `view_message` `0x185034`
- contact fields: `displayName` `0x1850b4`, `phoneNumber` `0x184fb8`, `phoneNo` `0x185100`,
  `company` `0x184fc4`, `lookup` `0x184fcc`, `contactId` `0x184fd4`, `geo` `0x1850e0`,
  `functionName` `0x1850c0`, `targetPackage` `0x1850d0`

`PhoneProxyConsumer` (`0x18339c`) binds `com.upuphone.ai.phone` (`0x183544`) with
`AIR_FUNCTION` (`0x18355c`) and does reverse-lookup via `QUERY_CONTACT_ADDRESS`
(`0x1835bc`, `requestNameAndGeo` `0x1835d4`). `AssistantAdapter` (`0x1835f0`) is how
"call Mum" reaches this page from leaf-1.3's Assistant.

| what | tier | evidence |
|---|---|---|
| push an arbitrary contact list / caller identity to the panel | **CONFIG** | `pushBackContactVec` `0x184f3c` over `displayName`/`phoneNumber` from phone JSON |
| trigger answer/hang-up/redial/open-phonebook remotely | **CONFIG** | verb strings above |
| relabel / re-icon | **DATA** | text table + dock icon ptr |
| change list row layout (`onGetItemCount`/`onDrawItem` `0x18367c`/`0x1836b4`) | **CODE** | |

---

## 5. Pages/AirMusic

Registry `Pages/AirMusic` → class `AirMusic`. Dock pkg
`com.upuphone.star.launcher.music_player`, txt id `0x1004`, app id 1, icon
`launcher_dock_music_intl`.

**Two front-ends, chosen by region:** `qqmusic/QqMusicMainView.cpp` (`0x19957c`, +
`QqMusicTpEventAnim.cpp` `0x198c4c`) and `intl_music/IntlMusicMainView.cpp` (`0x19a3d4`),
plus a shared `playcenter/AudioPlayCtrlCenterView.cpp` (`0x199f20`) — the generic
transport bar used when there is no track metadata
(`createAudioPlayCtrlWithOutMusicInfo` `0x19628c`). `AirMusicLanguageUtil.cpp` (`0x198ba4`)
is what picks between them; the dock icon name literally ends `_intl`.

Packages: glasses `com.upuphone.ar.music.glass` `0x18c2e4` /
`com.upuphone.ar.music.glasses` `0x1976a4`, phone `com.upuphone.ar.music.phone` `0x1979a4`.
Transport: `adapter/StarryNetAdapter.cpp` `0x19779c`, `sendJsonRequest` `0x19793c`,
`setQqMusicPlayState` `0x1979c0`. Audio path `adapter/AudioAdapter.cpp` `0x19848c` and
`adapter/MusicHandler.cpp` `0x198830` (leaf-1.5 owns the codec side).

Lyrics are a **scrolling text surface**: `postion_mutex` *(sic)* `0x196fd8` and
`lyric_mutex` `0x196fe8` guard a position/lyric pair the phone pushes;
`ui/TranslateAnim.cpp` (`0x1976c4`) animates the line change; `checkPositionChange`
`0x196c70` re-syncs.

| what | tier | evidence |
|---|---|---|
| push arbitrary title/artist/lyric lines | **CONFIG** | `sendJsonRequest` + lyric/position pair |
| force the intl vs QQ front-end | **CONFIG**-ish | language util reads a setting; exact key not established |
| relabel "Music", re-icon | **DATA** | txt id `0x1004` → `0x1ab70c` |
| add a control to the transport bar | **CODE** | |

---

## 6. Pages/SmartLife — the notification pipe

Registry `Pages/SmartLife` → class `SmartLife`. **No dock entry** — it has no
`createAppInfo` arm; it is a background presenter that raises cards. Package
`com.upuphone.glass.smartlife` `0x19f72c`.

**This is the broadest phone→glasses text pipe in the firmware.** `SmartLifeAdapter.cpp`
(`0x19f264`) parses phone JSON straight into on-screen cards:

- entry points: `onReceiveNotification` `0x19f5c8`, `onReceiveDismissNotification`
  `0x19f63c` (by `ids` `0x19f65c`) / `onReceiveDismissScene` `0x19f618` (by `packages`
  `0x19f630`), `onReceiveToast` `0x19f6b8`, `onReceiveUnlockState` `0x19f6dc`
  (`screen_state` `0x19f6f4`), `onReceiveMuteType` `0x19f704`,
  `onReceiveAncsConnectRequest` / `…StateRequest` / `…DisconnectRequest`
  `0x19f660`/`0x19f67c`/`0x19f698`
- card types: `MSG_TYPE_REMINDER` `0x19f3c4`, `MSG_TYPE_TAXI` `0x19f3d8`,
  `MSG_TYPE_EXPRESS` `0x19f3e8`, `MSG_TYPE_TAKEOUT` `0x19f3fc`, `MSG_TYPE_FLIGHT`
  `0x19f410`, `MSG_TYPE_WEATHER` `0x19f420`, `MSG_TYPE_IM` `0x19f434`
- message fields: `msgType` `0x19f574`, `crateTime` *(sic)* `0x19f538`, `canReply`
  `0x19f55c`, `aiResult` `0x19f568`, `discernResult` `0x19f57c`, `sender` `0x19f5a0`,
  `groupName` `0x19f594`, `verificationCode` `0x19f5b4`; `Im:im` `0x19f58c` /
  `Im:phone` `0x19f5a8` sub-types
- flight card fields: `flightNumber` `0x19f7bc`, `flightDepartureAerodrome` `0x19f7d8`,
  `flightDepartureTime` `0x19f7ac`, `lastUpdateTime` `0x19f780`
- behaviour switches the phone sets: `notificationControlState` `0x19f2b4`,
  `reminderScenesControlState` `0x19f2d0`, `notificationDisplayTime` `0x19f2ec`,
  `notificationBroadcast` `0x19f344` (TTS read-aloud),
  `notificationBrightenScreen` `0x19f35c`, `callNotificationState` `0x19f378`,
  `notificationBroadcastPauseType` `0x19f390`, `reminderOpenState` `0x19f3b0`,
  `iosNotificationState` `0x19f440`, `iosUsingTurnOffNotification` `0x19f458`

Views: `FlightView` `0x19f7ac`-family (`0x1a1bbc`), `TaxiView` `0x1a1d1c`,
`WechatResponseView` `0x1a1714`. Managers: `AncsManager` `0x1a096c` (iOS ANCS),
`NormalManager` `0x19fed8`, `SceneManager` `0x19fc48`, `MissedCallManager` `0x19fe1c`,
`WechatManager` `0x1a15ac`, `SmartLifePresenter` `0x1a0f6c`.

**Per-app icon table (DATA gold).** The manager maps package name → icon resource, e.g.
`com.tencent.wework` `0x1a002c` → `smartlife_notification_wework_icon` `0x1a0040`,
`com.tencent.wemeet.app` `0x1a0064` → `smartlife_notification_wemeet_icon` `0x1a007c`,
`com.ss.android.lark` `0x1a00a0` → `smartlife_notification_lark_icon` `0x1a00b4`,
plus `com.tencent.mm` `0x19fdfc`, `com.whatsapp` `0x19ff7c` (routed as
`phone-com.whatsapp-23` `0x19ff8c`), `com.whatsapp.w4b` `0x19ffcc`,
`com.alibaba.android.rimet` `0x1a00d8`. Editing a package literal in place **re-points an
existing icon at a different app** without touching code.

| what | tier | evidence |
|---|---|---|
| raise a card with arbitrary sender/body/type, or a bare toast | **CONFIG** | `onReceiveNotification` / `onReceiveToast` |
| have the glasses read a message aloud | **CONFIG** | `notificationBroadcast` |
| wake the panel remotely | **CONFIG** | `notificationBrightenScreen`, `screen_state` |
| retarget or replace a per-app icon | **DATA** | package/icon literal pairs `0x19ffcc`–`0x1a00d8` |
| a new `MSG_TYPE_*` with its own view | **CODE** | view classes are compiled in |

---

## 7. Pages/Ring

Registry `Pages/Ring` → class `Ring`. **Deliberately de-docked in this build:** the dock's
app ids are `{1,2,3,4,6}` — 5 is a hole, and `createAppInfo` compares
`com.upuphone.xr.ringmanager` but returns no `AppInfo` (leaf-1.2, CBZ at `0x613788`).
Packages `com.upuphone.ar.ring` `0x17d9e0`, `com.upuphone.ar.ring.glasses` `0x17bb7c`,
OTA `com.upuphone.star.ring.ota` `0x17d79c`, unbound tile
`com.upuphone.star.launcher.ring.single_unbound` `0x17e120`.

**Ten screens** — the largest screen count of any bundled app:
`GuideSearchView` `0x17cf58`, `SearchFailedView` `0x17c22c`, `RingListView` `0x17cad8`,
`ConnectingView` `0x17cd2c`, `ConnectedViewV1` `0x17d130`, `SingleUnboundView` `0x17c3b0`,
`OperationGuideView` `0x17c668`, `RemoveView` `0x17c8a4`, `VersionInfoView` `0x17bfc4`,
`VersionInfoDetailView` `0x17c490`; driven by `ViewController` `0x17bd14` +
`ViewAnimator` `0x17bca4`.

**Messages** (`RingService.cpp` `0x17dad0`): `get_unicron_battery` `0x17dd9c`
("unicron" is the ring's internal codename), `set_unicron_name` `0x17db8c`,
`sendRingInfoMsg` `0x17dc1c` with `isConnect` `0x17dc50`, `devName` `0x17dc5c`,
`bluetooth` `0x17dc64`, and `dev_name` `0x17dddc` for rename.
Listeners: `onRingConnectEventListener` `0x17e014`, `onRingBoundEventListener` `0x17e090`,
`onRingModifyNameListener` `0x17df38`, `onRingVersionListener` `0x17df70`.
Toast resource `launcher_ring_toast_disconnect` `0x17de94`.
`RingOtaManager.cpp` `0x17d73c` flashes the ring over the glasses.

| what | tier | evidence |
|---|---|---|
| fake ring battery / name / connect state on screen | **CONFIG** | `sendRingInfoMsg` fields are phone-supplied |
| rename "Ring" | **DATA** | txt id `0x1001` → `0x176c70` |
| **put Ring back in the dock** | **CODE** | the hole at app id 5 is a missing `createAppInfo` arm, not a data table entry |

---

## 8. Pages/StarryNetApp

Registry `Pages/StarryNetApp` → class `StarryNetApp` — **registry entry 0, and the only one
of the thirteen that is absent from the 12-entry registration list at `0x534ed0`**
(leaf-1.2). It is the connectivity/system shell, not a launchable app.

Units: `StarryNetApp.cpp` `0x17eeec`, `StarryNetAppService.cpp` `0x17f140`,
`adapter/StarryNetAppAdapter.cpp` `0x17f4c4`, `adapter/BatteryAdapter.cpp` `0x1804dc`,
`adapter/TtsAudioAdapter.cpp` `0x180630`, `view/StarryNetViewHandler.cpp` `0x1806e0`,
`view/ConnectGuideViewV2.cpp` `0x180858`, `toplayer/PowerOffAndRebootView.cpp` `0x1817b8`,
`util/BtNameCalUtil.cpp` `0x182294`.

Screens: the pairing guide (`createConnGuiderViewV2` `0x17f204`) and the power-off/reboot
top layer (`createPowerOffAndRebootView` `0x17f254`, `handlePowerOffView` `0x17f2a8`,
`delePowerOffAndRebootView` `0x17f474`). `BtNameCalUtil` derives the advertised Bluetooth
name; the "Power off" label is text at `0x41f5a8`.

| what | tier | evidence |
|---|---|---|
| relabel the pairing guide / power-off strings | **DATA** | text table + `0x41f5a8` |
| change what the top layer offers | **CODE** | |

---

## 9. Pages/Ota

Registry `Pages/Ota` → class `Ota` (`Ota.cpp` `0x194700`, `OtaModel.cpp` `0x194f08`,
`OtaMsgModel.cpp` `0x194820`, `OtaView.cpp` `0x194e00`). This page is the **glasses side of
"Air OTA"** — it also flashes the *ring*, hence the `air_glass` naming.

**Message set** (all phone ↔ glasses): `get_air_glass_info` `0x194948`,
`show_air_glass_update_dialog` `0x194a20`, `sync_air_glass_update_dialog_result` `0x1948a4`,
`open_air_glass_update_app` `0x194990`, `query_air_glass_update_state` `0x194a64`,
`request_sync_air_update_file_info` `0x194ca4`, `request_sync_update_info_stream` `0x194cf0`,
`request_send_update_file_stream` `0x194d10`, `request_send_air_update_file` `0x19552c`,
`sync_air_glass_update_progress` `0x194fc0`, `sync_air_glass_update_result` `0x194b30`,
`get_air_glass_update_result` `0x194b7c`, `sync_air_glass_checking_business` `0x1956f8`,
`air_ota` `0x194804`.
Device-info payload: `model` `0x1948fc`, `subModel` `0x194904`, `displayName` `0x194910`,
`romVersion` `0x19491c`, `serial` `0x194928`, `isCharging` `0x194930`,
`buildType` `0x19493c`, `needInstallUpdate` `0x194890`, `isUpdating` `0x194a58`.
File transfer: `fileSize` `0x195964`, `fileOffset` `0x195aa8`, `fileLength` `0x195ab4`,
target images `platform` `0x195590` / `bth` `0x1955cc` / `nand` `0x19571c`.

**Integrity model, confirmed from this page:** `checkWrittenFlashMd5` `0x19537c`,
`isMd5Equal` `0x195a68`, `final md5 check succeed` `0x195a74`,
`ota failed to check written flash md5` `0x195114`, `ota failed to update magic number`
`0x19513c`, `ota failed to update boot info` `0x195160`. The 21-entry failure-reason table
`0x194ffc`–`0x195264` contains **md5, size, magic-number and boot-info failures and no
signature failure** — independent corroboration of the repo's standing "MD5 + A/B, no
signature gate" finding, from a different subsystem than the one that established it.
Transfer is watchdogged: `OTA_TRANSFER_TIMEOUT_TIMER` `0x195f14`,
`ota transfer file timeout` `0x195020`, and BLE loss aborts (`ota ble disconnected`
`0x195008`, `onBleStatusChanged` `0x195304`).
Views: `createOtaViews` `0x194e60`, `ota_progress_circle_bg` `0x194e48`,
`showFailView` `0x194e70` (`ota_fail_bg` `0x194e98`), `showSuccessView` `0x194ecc`,
`updateOtaProgress` `0x194eb8`.

| what | tier | evidence |
|---|---|---|
| raise a fake "update available" dialog | **CONFIG** | `show_air_glass_update_dialog` + `launcher_system_alert` `0x194a40` |
| drive a real flash from a non-vendor phone app | **CONFIG** | full request/stream verb set above; no signature check in the failure table |
| restyle the progress ring / fail art | **DATA** | `ota_progress_circle_bg`, `ota_fail_bg` |
| change what images are accepted (`platform`/`bth`/`nand`) | **CODE** | names are compared in code |

---

## 10. Cross-app summary

| page | dock | phone pkg | primary pipe | best tier for content |
|---|---|---|---|---|
| Translation (+Transcribe) | yes, id 3 | `…translation.phone` / `…transcribe.phone` | `PHONE_CMD_*` | CONFIG |
| Prompt | yes, id 4 | `com.upuphone.ar.tici` | `send_content` | CONFIG |
| Navigation | yes, id 2 | `com.upuphone.ar.navi.lite` | `update_navi_info` | CONFIG |
| AirMusic | yes, id 1 | `com.upuphone.ar.music.phone` | `sendJsonRequest` | CONFIG |
| Phone | no | `com.upuphone.ai.phone` | `PhoneDirective` | CONFIG |
| SmartLife | no | `com.upuphone.glass.smartlife` | `onReceiveNotification` | CONFIG |
| Ring | **removed (id 5 hole)** | ring over glasses | `get_unicron_battery` | CONFIG |
| StarryNetApp | no (shell) | — | system | DATA |
| Ota | no | vendor app | `*_air_glass_update_*` | CONFIG |

**Nothing in this leaf proposes a write inside the HiFi4 DSP sub-image
(`0x04E9B4`–`0x143F14`) or sensor_hub (`0x134070`–`0x14A7A4`).** Every offset named above
is ≥ `0x176000`.

## 11. What this leaf could NOT establish

- The **numeric value** of each `PHONE_CMD_*` (declaration order is suggestive, not proven).
- What link state **6** is at `0x53a89a` — that Prompt requires a non-BLE-only connection is
  proven; "HFP + RFCOMM" is PROTOCOL.md's claim and remains unconfirmed from the binary.
- The setting key that selects QQ Music vs intl music.
- Full field lists for AirMusic and StarryNetApp payloads (their JSON keys are not
  clustered in rodata the way the other apps' are).
