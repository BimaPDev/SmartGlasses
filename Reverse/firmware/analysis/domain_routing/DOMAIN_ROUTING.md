# Domain routing, app registration, and the phone→glasses text surfaces

**Build: 1.0.11.53 (`Air_intl_FR`). Every offset here is this build only.**
Oracle: `node Reverse/firmware/analysis/domain_routing/verify.mjs` → 27 checks.

---

## 1. Correction: probes 1–4 were on the wrong channel

`TodoProbe` runs 1–4 sent `code:102` (VUI) and got total silence. That silence was
read as "the domain is unreachable." It was not. `DomainRuntime` takes domain
requests through **two paths, neither of which is `code:102`**:

```
[%s] NLU_RESULT->data parse succeed. Domain Namespace %s
[%s] CONNECT_DATA->connectData parse succeed. Domain Namespace %s
[%s] No matched domain found: %s
findDomain   startDomain   onNLUMessage   onInterceptConnectDataMessageCMD
```

The messages were never reaching the matcher, which is exactly why the failure was
silent rather than an error. **Absence of a reply was evidence about the channel,
not about the domain.**

## 2. The Domain Namespace table — `0x192144`

Seven values, read as exact strings at exact offsets (G1):

| Offset | Namespace |
|---|---|
| `0x192144` | `freechat` |
| `0x192150` | `INNER_STKS` |
| `0x19215c` | `application` |
| `0x192168` | `VSP_ERROR` |
| `0x192174` | `alarm` |
| `0x19217c` | **`todo`** |
| `0x192264` | `systemsetting` |

Domain class names live just below at `0x1923f0`: `NoDomain`, `SystemSetting`,
`Freechat`, `General`, `Application`, `NluErrorDomain`, `VspErrorDomain`,
`GlobalDomain`, `Weather`, `Translate`, `FallbackDomain`.

### STKS is not stocks

`STKS` is **voice-command shortcuts** — `stks_global_play`, `stks_global_next_music`,
`StksHotWordTransInfo`, `MediaNext_stks`. G2 is a negative control asserting no
stock-market vocabulary exists anywhere in the image (`ticker`, `NASDAQ`,
`portfolio`, `equity`, `NYSE`): **zero hits**. There is no stock feature to unlock.

## 3. The worked envelope — `0x192664`

The firmware carries a complete, valid domain message. This is not a reconstruction:

```json
{"header":{"namespace":"INNER_STKS","specialCmdInChatGptScene":false},
 "payload":{"data":{"intent":"Intent_Global_Confirm"},"text":"确定"}}
```

`payload.data.intent` is a field probes 1–4 never sent (G4c). The `Intent_*`
vocabulary is `Intent_Global_*`, `Intent_Sys_*`, `Intent_Set_*`, `Intent_Music_*`,
`Intent_App_*`.

**Hypothesis, not fact:** that an `NLU_RESULT` carrying `namespace:"todo"` opens
`TodoDomainView`. The channel, the namespace list and the envelope shape are read
from the binary; the outcome is untested. Run it with a known-good control.

## 4. App registration — `0x176b94`

**Thirteen** `Pages/X` → delegate-class pairs, contiguous in `0x176b90`–`0x176ce0`
(G5, G5b):

```
Pages/Launcher→Launcher   Pages/Translation→Translation   Pages/Phone→PhonePage
Pages/AirMusic→AirMusic   Pages/Assistant→AssistantAppDelegate
Pages/SmartLife→SmartLife Pages/Settings   Pages/Navigation  Pages/StarryNetApp
Pages/Ring→Ring           Pages/Ota→Ota    Pages/MMIPage     Pages/Prompt
```

> Corrected 2026-09-11: an earlier draft said *twelve* and omitted `Pages/Prompt`.
> The original G5 only checked that named pages were present, so it could not catch
> the omission — a gate that cannot fail proves nothing. G5 now asserts the exact
> set and count within the pool. Count inside the pool, not image-wide: the image
> holds 19 distinct `Pages/*` strings; `Pages/SimuTranslation`, `Pages/Transcribe`,
> `Pages/StartupGuide`, `Pages/Speech`, `Pages/MMI` and `Pages/Setting` are not
> registry entries.

**There is no `Pages/Todo`** (G5c, a negative control that will fail the day one is
added). Todo is an *Assistant domain* — `domain/todo/TodoDomainView.cpp`, intents
`TODO_CREATE_LIST` / `TODO_QUERTY_LIST` / `TODO_UPDATE_SELECT` / `TODO_DELETE_LIST`,
icons `assistant_todo_domian_done` / `_undone` (vendor's typo). Different layer from
Translate. A genuinely new app means a 14th registry entry **plus a delegate class**
— i.e. new C++ against a fully stripped binary (G10: no `.symtab`, no `_ZN`, no
`__cxa_`; built `-fno-rtti -fno-exceptions`).

## 5. Architecture: LVGL draws, C++ decides

`thirdparty/star_air_lvgl/` holds both layers, which is why the naming looks fused:

| Layer | Path | Files | Lang |
|---|---|---|---|
| LVGL library | `src/` | 52 | C |
| Vendor app | `app/` | 227 | **C++** |

LVGL is the widget/render engine only. Behaviour is a C++ Domain/Service/MessageBus
layer that calls into it. The `lv_`-prefixed vendor functions (`lv_ipc_mailbox`,
`lv_zen_mode_manager`, `lv_preference_command`) are **not** upstream LVGL API.

Method-name recovery is sparse and log-driven: 283 `Class::method` names, all from
classes that log. Todo, Schedule and Weather are quiet and yield **none** (G9, with
G9b as positive control). Any claim to have "recovered" their logic is unfounded.

## 6. Phone→glasses text surfaces — no firmware change needed

The glasses are a display; the phone is the brain. Three surfaces already exist:

| Surface | Command / SDK call | Transport | Shape |
|---|---|---|---|
| Notification card | `SHOW_NOTIFICATION` · `MyvuGlasses.showNotification` | **BLE alone** | `title`, `content`, `appName`, `pkgName`, `msgId`, `msgType` |
| Teleprompter | `MyvuGlasses.openTeleprompter` + `teleprompterHighlight(index:)` | needs HFP + RFCOMM | paginated doc: `paragraphIndex`, `currentPage`, `sourceTextOffset`, `totalTextLength` |
| Translation view | `PHONE_CMD_TRANS_PROXIMAL_RESULT` | BLE | `sourceText`, `sourceTextObj`, `sourceTextOffset` |

**The Translation page does not translate.** The phone translates and pushes text in
(G8c); the glasses render subtitles. It is a general text pipe wearing an app's name.
The teleprompter shares its `sourceTextOffset` mechanism.

Per `PROTOCOL.md`, the teleprompter shows *"Please Connect to the mobile first"* over
BLE alone — it opens only once the audio link is up. Cards work over BLE by itself.

## 7. Cosmetic conversion of an existing slot

Labels are in the i18n pool, **not** the registry, so patching them cannot break page
lookup (G6). All three fit `"Todo"`:

| Label | Offset | Capacity |
|---|---|---|
| `Translator` | `0x41eb88` | 10 |
| `Listening trans` | `0x431e48` | 15 |
| `Transcribe` | `0x41b81c` | 10 |

Dock icons are ordinary IDX4 assets (G7): `launcher_dock_{navi,trans,music,set,prompt,ring,weather,indicator}`.
Note `launcher_dock_weather` **exists with no weather app in the shipped dock** (G7b)
— the dock set may be larger than what is enabled.

So a slot can be made to *look* like a Todo app with proven data patches. Making it
*behave* like one still requires §3.

---

## What is proven vs. what is not

**Read from the binary:** the two entry paths; the namespace table; the envelope at
`0x192664`; the page registry and the absence of `Pages/Todo`; label offsets and
capacities; the dock icon set; the notification and translation field names; the
stripped-binary facts.

**Not established:** that any specific message opens `TodoDomainView`. That is the
next experiment, and it needs a control that is known to work.
