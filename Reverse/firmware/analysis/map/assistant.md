# Assistant subsystem map — `1.0.11.53` (`Air_intl_FR`)

Target: `Reverse/firmware/x_1.0.11.53/platform_tester.bin` (7,042,632 B).
Oracle: `node Reverse/firmware/analysis/map/verify-assistant.mjs` → `assistant verification passed`.

**Every offset here is 1.0.11.53 only.** Address model used throughout:

| region | rule |
|---|---|
| code | `VA = file + 0x2C010000` |
| data | `VA = file + 0x3BFD7CB0`, i.e. `file = VA − 0x3BFD7CB0` |

> **Build-specific data delta.** `CLAUDE.md` states `file = VA − 0x3BFD7C0C`; that is the
> **1.0.12.83** constant. On **1.0.11.53** the constant is `0x3BFD7CB0` (a 0xA4 difference).
> This is proven, not assumed: the verifier resolves the `findDomain` literal pool with both
> deltas and only `0x3BFD7CB0` yields the 15 expected namespace strings (V2 + V2-control).
> Both facts are true of their own build; neither supersedes the other. Flagged for node-1.

Source tree (from `__FILE__` literals): `thirdparty/star_air_lvgl/app/Pages/Assistant/`,
with `domain/`, `app/avatar/`, `app/card/`, `app/stks/`, `protocol/`, `protocol2/`, `message/`.

---

## 1. The two entry paths, decompiled

`DomainRuntime` is the matcher. It is reached by two message kinds and **never by `code:102`**
(see `analysis/domain_routing/DOMAIN_ROUTING.md` §1 and §8 — four silent probe runs and one
BusFault came from that mistake; this leaf does not re-litigate it, it extends it).

```
NLU_RESULT   -> onNLUMessage / onNLUMessageCMD          -> findDomain(namespace : string)
CONNECT_DATA -> onInterceptConnectDataMessageCMD        -> getDomainByDataType(dataType : u8)
```

Log formats that name both paths: `0x1924e8`, `0x192588`, `0x192280`.

### 1a. `DomainRuntime::findDomain(const char*)` — file `0x5d262c` (VA `0x2C5E262C`)

A flat `strcmp` chain (callee `0x2C6BD874` is byte-wise `strcmp`, verified by its own
16-byte encoding), each arm returning a member pointer out of the `DomainRuntime` object.
The literal pool at file `0x5d2718`–`0x5d2750` holds the **complete namespace vocabulary in
registration order**. Read as raw pointers, not inferred:

| pool | namespace | member | | pool | namespace | member |
|---|---|---|---|---|---|---|
| `0x5d2718` | `freechat` | `+0x1c` | | `0x5d2738` | `wechat` | `+0x48` |
| `0x5d271c` | `navigation` | `+0x2c` | | `0x5d273c` | `phonecall` | `+0x28` |
| `0x5d2720` | `INNER_STKS` | `+0x30` | | `0x5d2740` | `translation` | `+0x4c` |
| `0x5d2724` | `application` | `+0x34` | | `0x5d2744` | `alarm` | `+0x50` |
| `0x5d2728` | `error` | `+0x38` | | `0x5d2748` | `llm` | `+0x58` |
| `0x5d272c` | `VSP_ERROR` | `+0x3c` | | `0x5d274c` | `schedule` | `+0x5c` |
| `0x5d2730` | `global` | `+0x40` | | `0x5d2750` | **`todo`** | `+0x64` |
| `0x5d2734` | `weather` | `+0x44` | | *(no match)* | fallback | `+0x60` |

The `todo` arm is the last comparison and the compiler inverted it: `0x5d26d4` is
`CBNZ r0` (`d8 b9`), so **strcmp ≠ 0 → `+0x60` (fallback)**, **equal → `+0x64` (todo)**.
Getting this backwards would swap todo and fallback, so the verifier asserts the raw `d8b9`.

A **wrapper** at file `0x5d2ec0` is the public entry: it tests two more namespaces before
tail-branching into the chain above —

| namespace | member |
|---|---|
| `systemsetting` | `+0x18` |
| `helping` | `+0x14` |

**So the namespace vocabulary is 17, not the 7 in `DOMAIN_ROUTING.md` §2.** The table at
`0x192144` is only the subset of namespace *string literals* that happen to live in
`DomainRuntime.cpp`'s own rodata; the other ten literals are shared with other translation
units (`navigation` `0x3C3F6574`, `schedule` `0x3C3F7F28`, `llm` `0x3C156764`, …) and are
only visible from the pool. That is a correction, not a contradiction: §2's seven offsets
are all still exactly right.

Namespace string literals that *are* in this file:

| file | string | | file | string |
|---|---|---|---|---|
| `0x192144` | `freechat` | | `0x192174` | `alarm` |
| `0x192150` | `INNER_STKS` | | `0x19217c` | `todo` |
| `0x19215c` | `application` | | `0x192264` | `systemsetting` |
| `0x192168` | `VSP_ERROR` | | | |

Domain class names sit at `0x1923f0`: `NoDomain`, `SystemSetting`, `Freechat`, `General`,
`Application`, `NluErrorDomain`, `VspErrorDomain`, `GlobalDomain`, `Weather`, `Translate`,
`FallbackDomain` (`Wechat` separately at `0x192734`, `QQ` at `0x19224c`).

### 1b. `onInterceptConnectDataMessageCMD` — file `0x5d6534` (VA `0x2C5E6534`)

Prologue, verbatim bytes at file `0x5d6548`: `cb8c 7a3b 9bb2 012b`

```
ldrh r3, [r1, #0x26]   ; message.code (u16)
subs r3, #0x7a         ; 122
uxth r3, r3
cmp  r3, #1
bls  <llm fast path>   ; -> this->m[0x58]  == the "llm" domain
```

**Codes 122 and 123 bypass the matcher and go straight to the LLM/GPT domain.**
`PROTOCOL.md:308` already documents `code:122 base_status:1 then :2` as "commit the answer
text into the card" — the firmware side of that is this two-instruction shortcut, and
`+0x58` is independently the `llm` arm of `findDomain`. Two unrelated derivations agreeing
is the internal control for the whole member-offset map.

Otherwise: the JSON in `msg+4` is parsed; a `u8 dataType` lands at `sp+0x98`; the runtime
logs `[%s] businessData.dataType: %d` (`0x1922a4`) and calls the type→domain switch.

### 1c. `DomainRuntime::getDomainByDataType(u8)` — file `0x5d2ef8`

A `tbb` jump table; the byte table at file `0x5d2f10` is `0f 11 13 15 1d 17 19 1b 05`.

| dataType | token | → member | domain |
|---|---|---|---|
| 0 | `PHONE` | `+0x28` | phonecall |
| 1 | `SETTING` | `+0x18` | systemsetting |
| 2 | `NAVIGATE` | `+0x2c` | navigation |
| 3 | `APP` | `+0x34` | application |
| 4 | `TTS` | — | **default arm, no domain** (TTS is not a domain) |
| 5 | `WECHAT` | `+0x48` | wechat |
| 6 | `ALARM` | `+0x50` | alarm |
| 7 | `SCHEDULE` | `+0x5c` | schedule |
| 8 | **`TODO`** | `+0x64` | **todo** |

The token spellings come from the string→enum mapper at file `0x58b704` (VA `0x2C59B704`),
whose literal pool is exactly `SETTING NAVIGATE APP TTS PHONE WECHAT ALARM SCHEDULE TODO`.
Every member offset in this switch matches the one `findDomain` returns for the same
domain (`+0x18`, `+0x2c`, `+0x34`, `+0x48`, `+0x50`, `+0x5c`, `+0x64`), and the one arm with
no domain is `TTS`, which is the one token that is not a namespace. Self-consistent.

### 1d. The CONNECT_DATA envelope keys

`connectData` `0x19161c`, `connectType` `0x191628`, `guideWord` `0x191634` — three adjacent
literals, and `connectData`/`connectType` are loaded as an adjacent literal-pool pair at
three sites (`0x5cda5c/0x5cda60`, `0x5d07bc/0x5d07c0`, `0x5d11b8/0x5d11bc`), i.e. one bean
reads both.

---

## 2. What opens `TodoDomainView` — answer, with its residual uncertainty

`DOMAIN_ROUTING.md` §3 left this as the open question. From the parsing code:

**Path A — CONNECT_DATA.** `connectType` is one of the nine tokens above; `"TODO"` maps to
`dataType == 8`, and case 8 of the `tbb` switch loads member `+0x64`, which `findDomain`
independently proves is the todo domain. The runtime then calls vtable slot `+0x38` on it
with the `connectData` string. Shape:

```json
{"connectType":"TODO","connectData":"<todo payload>","guideWord":"…"}
```

**Path B — NLU_RESULT.** `findDomain("todo")` returns `+0x64`. The envelope shape is the one
already read out of the image at `0x192664`:

```json
{"header":{"namespace":"todo","specialCmdInChatGptScene":false},
 "payload":{"data":{ … },"text":"…"}}
```

**The `connectData` payload the todo view expects** (bean field literals, `TodoDomain.cpp` /
`AlarmModel.cpp` neighbourhood): `accountId` `0x189dcc`, `startTime` `0x189ddc`,
`endTime` `0x189de8`, `timeText` `0x189df0`, `originQuery` `0x189dfc`, `createTime`
`0x189e08`, `updateTime` `0x189e14`; plus the list/selection verbs the domain logs:
`TODO_CREATE_LIST` `0x18f305`, `TODO_DELETE_LIST` `0x18f31d`, `TODO_UPDATE_LIST` `0x18f341`,
`TODO_QUERTY_LIST` `0x18f365` (vendor typo), `TODO_DELETE_SELECT` `0x18f37d`,
`TODO_UPDATE_SELECT` `0x18f3a5`. `TodoDomain` also guards
`todo list is blank, can not create view` (`0x18f2ac`) — **an empty list does not open the
view**, which is a second way probes 1–4 could have produced silence.

**What is still NOT established:** the exact JSON nesting of the todo payload *inside*
`connectData`, and which transport frame carries a `CONNECT_DATA` (that is leaf-1.4's area).
`Class::method` recovery for Todo is nil — `DOMAIN_ROUTING.md` §5, G9 — so the payload
schema is read from bean field literals, not from recovered code. Test with a control that
round-trips and does not open a scene (`ancsState()`), per §8 of that document.

---

## 3. Every domain

| namespace | member | source file | intents / verbs | view | data it expects |
|---|---|---|---|---|---|
| `todo` | `+0x64` | `domain/todo/TodoDomain.cpp` `0x18f234` | `TODO_{CREATE,DELETE,UPDATE,QUERTY}_LIST`, `TODO_{DELETE,UPDATE}_SELECT`, `selectTodo` | `TodoDomainView.cpp` `0x18f154`, icons `assistant_todo_domian_done/_undone` `0x18f1a8/0x18f1c4` (vendor typo "domian") | list of items + `accountId/startTime/endTime/timeText/originQuery`; **blank list ⇒ no view** |
| `schedule` | `+0x5c` | `domain/schedule/ScheduleDomain.cpp` `0x18dd50` | `SCHEDULE_ADD` `0x18de41`, `SCHEDULE_VIEW`/`SCHEDULE_LIST`, `SCHEDULE_DELETE`, `SCHEDULE_MODIFY`, `selectSchedule` | `ScheduleDomainView.cpp` `0x18df98` — `showList`, `showSingle`, `showSingleInnerHor` | `title/rrule/instanceId/exDate/dtStart/dtEnd/instanceBegin/instanceEnd` + `start_*`/`end_*` fields `0x189b12`–`0x189c18`; nlg `CAL04_R01`,`CAL05_R01` |
| `weather` | `+0x44` | `domain/weather/WeatherDomain.cpp` `0x18d66c` | `search`, `meteorology`, today vs "furture days" | `MultipleTimeWeatherView.cpp` `0x18d58c`; 17 icons `weather_*` `0x18d370`–`0x18d52c`; `assistant_weather_divider/_navigation` | `weatherResponse.futureDays[]`/`hourly[]`, `areaName/province/dayTemp/nightTemp/iconDay/windSpeed/humidity/pressure/sensibleTemp` `0x1882bc`–`0x1883f8`; scene `SCENE_ASSISTANT_WEATHER_DOMAIN` |
| `alarm` | `+0x50` | `domain/alarm/AlarmDomain.cpp` `0x18d8c8` + `AlarmModel.cpp` `0x18db44` | `turnPage`,`select_page`,`select_index`,`Delete`,`selectAlarm` | icons `assistant_alarm_on/off/line`, `%02d:%02d` | `alarmList[]`, `daysofWeek`, `enabled/label/vibrate/snoozeLength/festival/deleteAfterUse` `0x189c98`–`0x189d14`; nlg `ALARM03_R01` |
| `llm` (GPT) | `+0x58` | `domain/gpt/GPTDomain.cpp` `0x18e1b0`, `GPTDomainControllerV2.cpp` `0x18e380`, `GPTDomainViewV2.cpp` `0x18eb38` | `onQuestion`,`onResponse`,`startResponse`,`stopGenerate`,`startNextRound`,`swipeUp/Down`,`onPageUp/Down` | markdown-aware card (`containsMarkdownTableElements`, `removeMarkdownTableElements`, `containsMarkdownCodeElements`) | `RESULT_TEMP` / `RESULT_FINAL` / `FAIL_SENSITIVE`; hints `GPT_DOMAIN_RING_HINT`,`GPT_DOMAIN_TP_HINT`; **reached directly by code 122/123** |
| `freechat` | `+0x1c` | `domain/freechat/FreeChatDomain.cpp` `0x1909d8` | — (thin; no logging) | — | — |
| `navigation` | `+0x2c` | `domain/navigation/NavigationDomain.cpp` `0x18f5e4`, `NaviManager.cpp` `0x18fa18`, `NaviDomainView.cpp` `0x18f49c` | `MapOpen`, `TrafficRestrictionSearch`, `navigation_home/office`, `NAVI_TOAST`, `Select`, `nextPage/previousPage/toPage/selectItem` | POI list card, `assistant_navi_domain_select_icon`, `%d km`/`%d m`/`%.1f km` | `NavigationPayload`: `poiResults[]`,`currentPage`,`pageNumber`,`totalPage`,`distance/latitude/longitude/poiId`; scene `SCENE_ASSISTANT_NAVIGATION_RESTRICT_DOMAIN`; `ACCESS_BACKGROUND_LOCATION_LACK`; nlg `NAVI15_P01/P02`,`Restriction02_P01` |
| `wechat` | `+0x48` | `domain/wechat/WechatDomain.cpp` `0x18edd4`, `WechatDomainModel.cpp` `0x18ec88` | `sendWechatData`, `Retype`, contact select, countdown send | `WechatContactListView.cpp` `0x18ef80`, `WechatMsgView.cpp` `0x18f01c` | `WECHAT_DOMAIN_PROCESSING_HINT`,`WECHAT_DOMAIN_CONTACT_HINT`; nlg `Wechat04_R01`; shortcut ids `id_wechat_{send,cancel,confirm,clear}` |
| `systemsetting` | `+0x18` | `domain/SystemSetting/SystemSettingDomain.cpp` `0x18ca04` + `SettingUtils.cpp` `0x18c988` | `SetBrightness`,`AdjustBrightness`,`SetVolume`,`AdjustVolume`,`ActivateConnection`/`DeactivateConnection`,`handleUserConfirm`,`handleFunction` | no card of its own | targets `no_disturb,keep_dialog,system_mute,tts_mute,phone_mute,ring_mute,navi_mute,delay_listening,shutdown,wifi`; `up_step/down_step/percent/Value`; nlg `SET02..SET11` (~30 ids `0x18d0b0`–`0x18d200`) |
| `application` | `+0x34` | `domain/application/ApplicationDomain.cpp` `0x18c514` | `appOperate`,`confirmOpen`,`Intent_Global_Confirm`,`isSupportNaviStartOpen` | confirm dialog | `app_operation/app_name/app_package/device_type/is_support`; nlg `APP01_R01..R09`,`APP02_R01..R08` |
| `global` | `+0x40` | `domain/global/GlobalDomain.cpp` `0x18fc28` | `GeneralHelp`,`GeneralDirective`,`MediaDirective`,`FreeWake`; `ReturnDesktop`,`ResetScreenDirection`,`Exit`,`DNDOpen`,`DNDClose`,`MediaPlay/Resume/Pause/Pre/Next` | — | `stks_global_{play,pause,next_music,pre_music,back_home,…}`; nlg `GLOBAL04_R07`,`GLOBAL06_P04/P05` |
| `INNER_STKS` | `+0x30` | `domain/innerstk/InnerStkDomain.cpp` `0x190bf4` | full `Intent_*` table (§4) | — | `New inner stks protocal. Has no domain.` `0x190d4c` |
| `translation` | `+0x4c` | `domain/translate/TranslateDomain.cpp` `0x190858` | `Translation_Open`,`Translation_Quit`,`TranslationDirective` | hands off to `Pages/Translation` | — (phone does the translating; `DOMAIN_ROUTING.md` §6) |
| `phonecall` | `+0x28` | `Pages/Phone/...` `JsonToObj.cpp` `0x184dfc` | `Dial`,`DialContact/Number/YellowPage/Relative`,`PhoneDirective`,`Select`,`SwitchPage`,`Cancel`,`answer/hang_up/redial/open_phonebook` | `PhoneView`, `WechatSysView`, `SIMPanelView` | `phoneNumber/company/contactId/displayName/phoneNo/requestId`; nlg `GLOBAL03_P01..P06` |
| `helping` | `+0x14` | `domain/helping/HelpingDomain.cpp` `0x18e068` | `onNextPage`,`onPreviousPage` | help list | — |
| `error` | `+0x38` | `domain/global/NluErrorDomain.cpp` `0x1903e0` | `code`, `tts` | `AVATAR_STATUS_REJECT` `0x19051c` | `payload.content.{code,tts}` |
| `VSP_ERROR` | `+0x3c` | `domain/global/VspErrorDomain.cpp` `0x1905f4` | `VR_ERROR_ISS_ERROR_NLU`, `VR_ERROR_ISS_ERROR_ASR`, `RECOG_ERROR` | — | `status`, `phone_network_status`; nlg `GLOBAL01_P01/P03` |
| *fallback* | `+0x60` | `domain/fallback/FallbackDomain.cpp` `0x18c7d4` | `onNextPage`,`onPreviousPage` | — | reached when no namespace matches |
| *(general)* | — | `domain/general/GeneralDomain.cpp` `0x18c320` | `global_cancel/confirm`, `id_music_play/close`, `switch_tab`, `global_back_home`, `navigation_close[_voice]`, `navigation_open_voice` | — | package ids `com.upuphone.ar.{navi,music,wechat}.glass` |

---

## 4. `Intent_*` vocabulary — file `0x190d74`–`0x1911cc`, read in order

`Intent_Sys_ShowHelp / Open / Close`, `Intent_App_Open / Close / ExitTask`,
`Intent_Set_{BrightnessUp,BrightnessDown,BrightnessMax,BrightnessMin,SoundIncrease,SoundReduce,SoundMute,SoundUnmute,SoundMax,SoundMin}`,
`Intent_Global_{ToHome,Back,Cancel,Exit,PlayContinue,PlayPause,Confirm,PlayPre,PlayNext}`,
`Intent_Music_{Play,Pause,Parse,Select,Stop,Open}`,
`Intent_Sys_{PhoneAnswer,PhoneRingOff,LightUp,Darker,SoundIncrease,SoundReduce,SoundLager}`,
`Intent_Play_{Continue,Pause}`.
Prefixes tested by `checkInnerStks` (`0x1922dc`): `Intent_Music_` `0x1922ec`, `Intent_Sys_`
`0x1922fc`, `Intent_Set_` `0x190ebc`, `Intent_Global_` `0x190fc0`.
Unmatched ⇒ `Unhandled intent:[%s]` `0x1910c8`.

## 5. STKS — voice shortcuts (still not stocks)

`app/stks/STKSService.cpp` `0x18be50`: `registerSTKS`, `unregisterSTKS`, `resendStksToPhone`,
`onStarrynetConnected`. Per-entry fields `apkPackageName, apkName, sceneId, id, func, value`
plus `StksHotWordTransInfo.packageName`. `[%s] not support hotword for intl` `0x18bea0` —
**the international build refuses hot-word registration**, which caps this surface.
Ids are plain strings (`stks_global_play`, `global_confirm`, `id_wechat_send`, …).
`DOMAIN_ROUTING.md` §2's negative control is reproduced here (V15) so the error cannot come
back through this document either.

## 6. Avatar state machine — `app/avatar/state/`

`StateContext.cpp` `0x189344`. Transitions are logged `StateContext::changeState %s => %s`
`0x18958c`, illegal ones refused by `[%s] Next state (%s) of current state (%s) is not
allowed.` `0x189740` — so the transition table is enforced in code.

Twelve concrete states, each with its own `impl/` file: `IdleState` `0x18888c`,
`ListeningState` `0x188598`, `NoNetworkListeningState` `0x188d58`, `SpeakingState` `0x188a84`,
`ProcessingState` `0x188f38`, `WaitingState` `0x188c64`, `WakeupState` `0x1891e4`,
`RefusingState` `0x1890d4`, `MuteState` `0x188ffc`, `OfflineState` `0x188460`,
`AppleDeviceMuteState` `0x188e2c`, `SilenceRecordingState` `0x1889a4`.

Parallel VR scene enum (`0x191cd4`+): `VR_IDLE, VR_LISTENING, VR_PROMTING, VR_PROCESSING,
VR_INTERPRO, VR_LISTENING_PROMTING, VR_WAITING, VR_DELAY_LISTENING_IDLE, VR_MONITOR,
VR_REJECT, VR_COMMON, VR_ASR_HIT_BY_NLP, VR_ASR_NOT_HIT_BY_NLP, VR_LISTENING_TIMEOUT`.

`AppleDeviceMuteState` is notable: `Connected device is apple device, call siri wakeup`
`0x188e90` — on iOS the glasses hand the wake through to Siri instead of running the domain
stack.

## 7. Wake word and TTS

- Wake handling is **`WakeupState`** + `sendStartVRMessage` `0x189278`, `continueWakeup`
  `0x189240`, `Pre wakeup.` `0x18928c`, preference key `wake_up_on_gui_element_started`
  `0x1892b8`. Wake types: `WUW_ONLY`, `WUW_ONESHOT`, `BARGEIN`, `DIALOG`, `WUW_DETECTED`,
  `BARGEIN_DETECTED`, `NOTIFY_MSG`, `DISENABLE` (`0x191b94`+). System messages
  `SYS_INFO_WAKE_UP` `0x191640`, `SYS_INF_WUW_OUT` `0x1918b4`, `externalwuw` `0x191cbc`.
- **The acoustic model is still not here.** `CLAUDE.md`'s retraction stands: the firmware
  carries the wake *plumbing*, not `kws_model.nn`. V16 is a negative control on that.
- TTS types `0x191ad4`+: `TTS_TYPE_{NONE,WAKEUP,COMMON,TIP,MULTI_ROUND}`, field `ttsType`
  `0x191b2c`, `ttsData` `0x18a234`, timbre `set_tts_timbre_value` `0x18971c` /
  `ttsTimbreValue` `0x189fa8`. Messages `SYS_INFO_READ_TTS`, `EVT_VR_STOP_TTS`,
  `VR_INTER_TTS`, `GLOBAL_READ_TTS`.
- Hint words: `app/avatar/Hint.cpp` `0x18ad9c` with 14 scenes `SCENE_*` `0x18af7c`–`0x18b120`
  and per-scene wake strings `wakeup_{launcher,navigation,translate,media,video}`.

## 8. Session config keys — `protocol2/bean/VuiModel.cpp` `0x18a2e4`

`isAsrResultScreenEnable`, `isChatGptTTSPlayEnable`, `isChatGptCardDisplayEnable`,
`isContinuousDialogueEnable`, `isLowPowerWakeupEnable`, `isLowPowerWakeupScreenOffEnable`,
`isNetworkAvailable`, `versionCode`, `isStar`, `isOtaFeature`, `versionName`, `roundTimes`,
`glassSN`, `ttsTimbreValue` (`0x189ead`–`0x189fa8`). These are the `assistantConfig`
(`code:2`) payload; `PROTOCOL.md:313` and `DOMAIN_ROUTING.md` §8 both say the first two
ChatGPT flags **must** be set before a card-opening command or `lvgl_ui` takes a BusFault.

Mirrored in NV by `StateContext`: `setLpWakeupState`, `setAsrOnscreenState`,
`setContinueDialogState`, `setLowPowerWakeupScreenOff`, `setGPTTtsState`, `setGPTCardState`.

---

## 9. CUSTOMIZATION TIER per surface

| # | Surface | Tier | Evidence / how |
|---|---|---|---|
| 1 | Which domain a message opens | **CONFIG** | Pick `namespace` (17 values, §1a) or `connectType` (9 tokens, §1c). Pure message content; nothing flashed. |
| 2 | Open `TodoDomainView` / schedule / multi-time weather | **CONFIG** | §2. `connectType:"TODO"` → `dataType 8` → member `+0x64`; or `NLU_RESULT` with `namespace:"todo"`. Untested on hardware — see the caveat in §2. |
| 3 | GPT card content & streaming | **CONFIG** | codes 122/123 (§1b) plus `assistantConfig` flags (§8). |
| 4 | Assistant session behaviour (continuous dialogue, ASR on screen, low-power wake, TTS timbre, GPT card/TTS) | **CONFIG** | §8 — BLE `code:2`, persisted to NV by `StateContext`. |
| 5 | STKS voice shortcut set | **CONFIG**, capped | `registerSTKS`/`resendStksToPhone` are phone-driven; but `[%s] not support hotword for intl` `0x18bea0` gates hot-word registration on this build. |
| 6 | Domain UI strings / nlg ids / hint words | **DATA** | In-place byte patch of the i18n pool, same mechanism `DOMAIN_ROUTING.md` §7 proves for `Translator` `0x41eb88`. Capacity = the existing literal's length. |
| 7 | Domain icons (`assistant_todo_domian_done/_undone`, 17 `weather_*`, `assistant_alarm_on/off/line`, `assistant_navi_domain_select_icon`) | **DATA** | Ordinary IDX4 assets, same class as the dock icons in `DOMAIN_ROUTING.md` §7 / `analysis/images_v2/`. |
| 8 | TTS *voice* (timbre value) | **CONFIG** | `ttsTimbreValue` / `set_tts_timbre_value`; the audio itself is `.aac` in the OTA (`CLAUDE.md`) → **DATA** if you want new clips. |
| 9 | Namespace → domain binding (e.g. route `todo` at a different view) | **CODE** | The mapping is a `strcmp` chain + a `tbb` table in `.text` at `0x5d262c`/`0x5d2ef8`. Re-pointing an arm = new instructions. `analysis/BOOTLOOP_EXPLAINED.md` and the `code-injection-blocked` memory apply. |
| 10 | A **new** domain / new namespace | **CODE** | Needs a new C++ class, a vtable, a member slot, and a new arm in both dispatchers, against a fully stripped binary (`DOMAIN_ROUTING.md` §4, G10). |
| 11 | `Intent_*` vocabulary | **DATA** for spellings, **CODE** for behaviour | The literals `0x190d74`–`0x1911cc` are patchable in place; the handler each one runs is a compiled branch. |
| 12 | State-machine transitions | **CODE** | The legality check `0x189740` is code; only the *entry* to a state is message-driven. |
| 13 | Wake word itself | **neither — not in this image** | `CLAUDE.md` retraction; `kws_model.nn` lives in the Android app. Phone-side change. |

**No surface in this document proposes a write inside `0x04E9B4`–`0x143F14` (HiFi4 DSP) or
`0x134070`–`0x14A7A4` (sensor_hub).** Every offset named above is ≥ `0x176b90`.

---

## 10. What this leaf could not establish

- The exact JSON nesting of the todo/schedule payload **inside** `connectData`. Bean field
  names are read; their parent objects are not. `DOMAIN_ROUTING.md` §5 (G9) explains why:
  Todo/Schedule/Weather log nothing, so no `Class::method` names survive.
- Which BLE frame carries a `CONNECT_DATA` — leaf-1.4's area, deliberately not guessed here.
- Member `+0x54` of `DomainRuntime` is destructed alongside the domains but is reached by
  neither dispatcher. Unidentified; **not** guessed.
- `+0x20` is the *currently started* domain (`[%s] Domain %s is already started.` `0x19248c`,
  `ldr r3,[r5,#0x20]` guards in both paths), not a domain slot.
