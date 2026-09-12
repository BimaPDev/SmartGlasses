# Launcher — MYVU `platform_tester.bin` 1.0.11.53

leaf-1.2 of `.unlazy/map/PLAN.md`. Every offset here is **file offset in
`Reverse/firmware/x_1.0.11.53/platform_tester.bin`** (7,042,632 B) unless written `VA`.

Address model used and re-verified here:

- code `VA = file + 0x2C010000`
- data `file = VA - 0x3BFD7CB0`

The data delta is **proved, not assumed**: the word at file `0x61aa08` is `0x3C17ED48`;
`0x3C17ED48 - 0x3BFD7CB0 = 0x1A7098` and the bytes there are `time\0`. The known-bad
delta `0x3C000000` sends the same word to `0x17ED48`, which is not a string start.
(`0x3BFD7C0C` from CLAUDE.md is the **1.0.12.83** delta; 11.53 is `0x3BFD7CB0`. Build-specific,
as PLAN.md warns.)

Source tree the strings come from: `../../thirdparty/star_air_lvgl/app/Pages/Launcher/`
with `model/`, `view/`, `widget/` subdirectories. That path literal lives at `0x17C1A8`
(MessageModel.cpp), `0x17FE4C` (DockviewV2.cpp), `0x1A8D8C` (StandByView.cpp),
`0x1A92AD` (LauncherViewController.cpp), `0x1AAB98` (StandByWidget.cpp),
`0x1AAFE4` (StandByWidgetManager.cpp).

---

## 1. Page / app registry — `0x176B90`–`0x176CE0`, table at `0x534DE0`

The strings at `0x176B90`+ are the raw literals. The **registry proper** is a flat array of
`(pagePath, className)` pointer pairs at file `0x534DE0`–`0x534E47`, 13 entries, 8 bytes each:

| # | page path (VA / file) | class name |
|---|---|---|
| 0 | `Pages/StarryNetApp` `0x3C14E850` / `0x176BA0` | `StarryNetApp` |
| 1 | `Pages/Launcher` `0x3C14E864` / `0x176BB4` | `Launcher` |
| 2 | `Pages/SmartLife` `0x3C14E880` / `0x176BD0` | `SmartLife` |
| 3 | `Pages/Navigation` `0x3C14E89C` / `0x176BEC` | `Navigation` |
| 4 | `Pages/Translation` `0x3C14E8B0` / `0x176C00` | `Translation` |
| 5 | `Pages/Phone` `0x3C14E8D0` / `0x176C20` | `PhonePage` |
| 6 | `Pages/AirMusic` `0x3C14E8E8` / `0x176C38` | `AirMusic` |
| 7 | `Pages/Ota` `0x3C14E904` / `0x176C54` | `Ota` |
| 8 | `Pages/Ring` `0x3C14E914` / `0x176C64` | `Ring` |
| 9 | `Pages/Settings` `0x3C14E928` / `0x176C78` | `Setting` |
| 10 | `Pages/Assistant` `0x3C14E938` / `0x176C88` | `AssistantAppDelegate` |
| 11 | `Pages/MMIPage` `0x3C14E960` / `0x176CB0` | `MMIPage` |
| 12 | `Pages/Prompt` `0x3C14E978` / `0x176CC8` | `Prompt` |

Confirms PLAN.md's inherited fact: **thirteen** `Pages/*`, and **no `Pages/Todo`**.

A second, 12-entry list sits at `0x534ED0`–`0x534EFF` — same set minus `Pages/StarryNetApp`,
in registration order `Launcher, SmartLife, Navigation, Translation, Phone, AirMusic, Ota,
Assistant, Ring, MMIPage, Settings, Prompt`. The code immediately above it (`0x534E5C`–`0x534EC8`)
is a straight-line run of twelve `ldr rN,[pc,..]; bl` pairs — the page-registration loop unrolled.
`StarryNetApp` is registered separately (it is the shell, not a page).

**CUSTOMIZATION TIER: CODE.** Adding a 14th page needs a new class, a new constructor and a new
`bl` in that unrolled run. *Renaming* an existing page is DATA but pointless — the name is matched
by string compare in both the registry and every navigation call site (e.g. `Pages/Prompt` is
referenced from 12 distinct pools: `0x534E40, 0x534EFC, 0x59DA2C, 0x5CAD24, 0x5D2E64, 0x607548,
0x607AE0, 0x607CFC, 0x608038, 0x60A460, 0x6138D0, 0x62DCA4`), so a rename must patch all of them.

---

## 2. The DOCK — `DockviewV2`

`view/DockviewV2.cpp`. Log/symbol strings `0x1A819C`–`0x1A8C8x`.

### 2.1 Which apps are in the dock — `createAppInfo` at `0x613758` (VA `0x2C623758`)

A package-name → `AppInfo` factory: a chain of `strcmp` against six package literals, each arm
`malloc(0x18)` and fills a 24-byte struct. Field layout recovered from the stores:

| off | meaning | evidence |
|---|---|---|
| `+0x00` | 0 | `str r2,[r0]` with `r2=0` |
| `+0x04` | **byte: app order id** | `strb r3,[r0,#4]` |
| `+0x08` | word: text/resource id | `str r3,[r0,#8]` after `movw r3,#imm` |
| `+0x0C` | page-path ptr | `strd r4,r1,[r0,#0xC]` |
| `+0x10` | icon-name ptr | same `strd` |
| `+0x14` | package-name ptr | `str r2,[r0,#0x14]` |

| package | app id (`+4`) | txt id (`+8`) | page | icon | arm |
|---|---|---|---|---|---|
| `com.upuphone.star.launcher.music_player` | 1 | `0x1004` | `Pages/AirMusic` | `launcher_dock_music_intl` | `0x61385C` |
| `com.upuphone.ar.navi.glass` | 2 | `0x1003` | `Pages/Navigation` | `launcher_dock_navi` | `0x6137FA` |
| `com.upuphone.ar.translation.glasses` | 3 | `0x1002` | `Pages/Translation` | `launcher_dock_trans` | `0x6137CE` |
| `com.upuphone.ar.tici` | 4 | `0x1035` | `Pages/Prompt` | `launcher_dock_prompt` | `0x6137B4` |
| `com.upuphone.star.launcher.setting` | 6 | `0x1024` | `Pages/Settings` | `launcher_dock_set` | `0x613826` |
| `com.upuphone.xr.ringmanager` | — | — | — | — | `0x613788` `cbz r0,0x6137CC` → **returns NULL** |

So the shipped dock is **five apps**. `ringmanager` is compared but deliberately produces no
`AppInfo` on 11.53 (id 5 is the hole in the numbering — the Ring app was pulled from the dock).
Icon name strings: `0x1A87D4 navi`, `0x1A87E8 trans`, `0x1A87FC music_intl`, `0x1A8818 set`,
`0x1A882C prompt`, `0x1A8904 launcher_dock_indicator`.

**CUSTOMIZATION TIER**
- *Swap which page an existing dock slot opens*: **DATA**. The page-path pointer is a plain
  32-bit literal in the pool at `0x6138D0/0x6138D8/0x6138E0/0x6138E8/0x6138F0`; repoint e.g.
  `0x6138D0` from `0x3C14E978` (`Pages/Prompt`) to `0x3C14E880` (`Pages/SmartLife`) and the Prompt
  tile launches SmartLife. Four bytes, no code.
- *Swap a dock icon*: **DATA**. Icon pointers at `0x6138D4/0x6138DC/0x6138E4/0x6138EC/0x6138F4`
  are pointers to LVGL resource-name strings; repoint, or edit the string in place
  (names are `\0`-padded to the next 4-byte slot, so same-or-shorter only).
- *Re-enable Ring in the dock*: **CODE**. `0x613788` is `cbz r0, 0x6137CC`; a new arm has to be
  written (id, txt id, page, icon). Not a byte flip.
- *Reorder the dock*: **CONFIG** — see 2.3.

### 2.2 Tap dispatch

`onAppItemClicked` (`0x1A82A8` / log `0x1A82BC`) and `onVuiEvent` (`0x1A81E4`) — the latter logs
`txt_id = %d, pageName %s`, i.e. voice control reaches the same table by the `+0x08` txt id and
then launches the `+0x0C` page path. `onClick` refuses while scrolling or while a reorder is in
flight (`0x1A8358`). A click emits telemetry `{"times": %d, "order": "%s", "click_app_id": "%s"}`
(`0x1A82E4`) under event `iot_transcribe_click` (`0x1A8338`).

Ring-remote input arrives as `onRingEvent` (`0x1A8778`) and `LV_KEY_XJ_LONG_TAP_UP`
(`0x1A9860`), moving the selection via `leftMove`/`rightMove`/`longTapMoveApp`
(`0x1A8590` / `0x1A8658` / `0x1A86B0`).

### 2.3 How app order is stored — `change_dock_items`

Persistence is a packed integer, not a string list:

- `[Launcher]DockviewV2::storeValues appIndexArray %d %d …` — **sixteen** `%d` (`0x1A8468`),
  and the matching reader `extractValues appIndexArray` with sixteen `%d` (`0x1A8AA8`).
- Guards: `appSize size over STORE_SEQ_APP_SIZE, reset to STORE_SEQ_APP_SIZE` (`0x1A83D0`),
  `extractValues failed, store appCnt over max size` (`0x1A8B0C`),
  `changAppPos failed, MaxSize over STORE_SEQ_APP_SIZE` (`0x1A8BF4`).

So `STORE_SEQ_APP_SIZE = 16` slots of 4 bits each, packed into one 64-bit preference value —
the same shape the standby row uses (`storeValue: %lld`, §3.3). Helpers:
`saveAppSeq 0x1A83C4`, `updateAppSeqStoreArray 0x1A843E`, `initAppSeq 0x1A89F0`,
`appSeqVecToAppInfoVec 0x1A8994`, `sortAppVectorSeq 0x1A8B58`, `changeAppPos 0x1A8BB0`,
`restoreFlexLayout 0x1A8958`, `extractValuesForAir 0x1A84C8` (+ a migration path,
`migrate from old air appSeq success`, `0x1A8A6C`).

**CUSTOMIZATION TIER: CONFIG.** The phone action `change_dock_items` (§5) rewrites this value at
runtime; no flash write. On-glasses long-press reorder writes the same value.

### 2.4 Dock chrome

`createFlexRootView 0x1A8550` → `createFlexContent 0x1A8514` → `createIndicator 0x1A88CC`
(icon `launcher_dock_indicator`) → `createOperateHint 0x1A8844`. Scrolling/visibility:
`checkScrollValid 0x1A85E8`, `checkAutoScroll 0x1A86F4`, `showIndicator 0x1A8254`
(suppressed when the dock is hidden, `0x1A8880`), auto-hide timer `pauseDockTimer 0x1A98AC`,
and `LauncherViewController::switchView isShowDock` (`0x1A99C8`).

---

## 3. The STANDBY row

### 3.1 The six widget types — id table at `0x61A9D4`

`0x61A9D4` (VA `0x2C62A9D4`) is `StandByWidget::name()`:

```
61a9d4  ldr  r3,[r0,#0x54]      ; widget id, stored by the ctor (see 3.2)
61a9d6  subs r3,#1
61a9d8  cmp  r3,#5
61a9da  bhi  0x61a9fe           ; -> "" (empty literal 0x3C435030)
61a9dc  tbb  [pc,r3]
61a9e0  .byte 05 03 09 0b 0d 07
```

`tbb` base is `0x61A9E0`, target = `0x61A9E0 + 2*byte`, and each target is a single
`ldr r0,[pc,..]; bx lr`:

| widget id | tbb byte | target | literal slot | name |
|---|---|---|---|---|
| 1 | `0x05` | `0x61A9EA` | `0x61AA08` → `0x3C17ED48` | **`time`** |
| 2 | `0x03` | `0x61A9E6` | `0x61AA04` → `0x3C182B30` | **`weather_1x1`** |
| 3 | `0x09` | `0x61A9F2` | `0x61AA10` → `0x3C182B0C` | **`weather_1x2`** |
| 4 | `0x0B` | `0x61A9F6` | `0x61AA14` → `0x3C182B18` | **`steps`** |
| 5 | `0x0D` | `0x61A9FA` | `0x61AA18` → `0x3C182B20` | **`weekday`** |
| 6 | `0x07` | `0x61A9EE` | `0x61AA0C` → `0x3C182B28` | **`aiBall`** |

This is the id↔name contract the phone uses in `set_standby_widget_lists` /
`get_standby_widget_lists`. Name literals live at file `0x1A7098` (`time`) and
`0x1AAE5C`–`0x1AAE8B` (the other five, contiguous).

**CUSTOMIZATION TIER: DATA (rename) / CODE (add a 7th).** The `cmp r3,#5` at `0x61A9D8` caps the
enum; a seventh widget needs a longer `tbb` table, a new arm, and a new constructor case (§3.2).

### 3.2 The widget base constructor `0x61B784` — and the 72 px width

`0x61B784` (VA `0x2C62B784`) is `StandByWidget::StandByWidget(...)`. Annotated:

```
61b784  push {r4,r5,r6,lr}
61b78a  strb r2,[r0,#0x18]     ; widget TYPE (dispatch key, 0..8)
61b794  str  r1,[r4,#4]        ; the lv_obj
61b798  str  r5,[r4,#0x54]     ; widget ID (1..6, read back by name() at 0x61a9d4)
61b79e  movs r2,#0x48          ; <-- 72
61b7a6  mov  r1,r2             ; <-- 72
61b7ac  strh.w r2,[r4,#0x40]   ; cache 72 as the tile height
61b7c8  bl   0x2C6540C4        ; obj size setter (r0=obj, r1=w, r2=h)  -> set_size(obj,72,72)
61b7cc  ldrsh r1,[r4,#0x40] ; asr #1 -> 36
61b7dc  bl   0x2C65A628        ; radius = 36
61b7e2  mov.w r1,#-0xFF0100    ; 0xFF00FEFF border colour
61b7e8  bl   0x2C65A544
61b7ee  movs r1,#2 ; bl 0x2C65A55C   ; border_width = 2
61b7f8  movs r1,#0x5C ; bl 0x2C65A550 ; border_opa  = 92
61b800  ldrb r2,[r4,#0x18] ; cmp #8 ; tbb  -> widget ctor
```

**This answers the open question in the brief.** The tile container from factory `0x6120C8`
really is created without a size, but every standby tile is immediately given an
**explicit 72 × 72** by its own base constructor at `0x61B79E`. `LV_SIZE_CONTENT` never gets a
chance; a 48 px clock face is laid into a hard 72 px box (matching the "~74 px" clip seen on
hardware — 72 content + the 2 px ring drawn at `0x61B7EE`). The flex row does **not** impose the
width; the widget does.

Cross-check that `0x48` is really the geometry and not a coincidence: the same value is cached at
`+0x40` and then re-read at `0x61B7CC`, halved, and fed to the radius setter — which is exactly the
inherited "radius = height/2" fact. One number, two consumers.

**CUSTOMIZATION TIER: DATA — one byte.** `0x61B79E` holds `48 22` = `movs r2,#0x48`.
Patch `0x61B79E` to `0x60` for 96 × 96 tiles; the ring radius follows automatically (`h/2`).
Note w and h come from the *same* register, so this byte cannot make a tile non-square without
code. Same-pool DATA knobs, all confirmed by bytes:

| what | file | bytes now | effect |
|---|---|---|---|
| tile size | `0x61B79E` | `48 22` | `movs r2,#0x48` → 72 px square |
| ring width | `0x61B7EE` | `02 21` | `movs r1,#2` → 2 px |
| ring opacity | `0x61B7F8` | `5C 21` | `movs r1,#0x5C` → 92; `→ 00` removes the rings (**confirmed on hardware**, inherited) |

### 3.3 Widget-type dispatch — `tbb` at `0x61B806`, table `0x61B80A`

Table bytes `24 2C 05 38 42 49 50 5E 10`, base `0x61B80A`, target = base + 2*byte:

| type | target | constructor / action |
|---|---|---|
| 0 | `0x61B852` | `bl 0x61AAEC` |
| 1 | `0x61B862` | `bl 0x61AD20` |
| 2 | `0x61B814` | `bl 0x61AF84` |
| 3 | `0x61B87A` | `bl 0x61B110` — **the clock ctor** (inherited fact, re-verified: the `bl` at `0x61B888` is `F7 FF 42 FC`, target VA `0x2C62B110`) |
| 4 | `0x61B88E` | `bl 0x61AB78` |
| 5 | `0x61B89C` | `bl 0x61A604` |
| 6 | `0x61B8AA` | `createTextWidget` — inline; error arm logs `createTextWidget failed, title or content is empty` (`0x1AAB98` file / line `0x6C`) |
| 7 | `0x61B8C6` | `bl 0x61B4FC` |
| 8 | `0x61B82A` | `bl 0x61B4FC` (shared, different argument frame) |

Nine cases — matches the inherited "~9 widget constructors". Builder names in
`StandByWidget.cpp`: `createNormalWidget 0x1AAE8C`, `createTextWidget 0x1AAED4`,
`customTimeAndBatteryWidget 0x1AAF48`, `createWeather1x2Widget 0x1AAFA0`.

### 3.4 Slot management — `StandByWidgetManager.cpp`

- `createWidget 0x1AB148` — *"already exist widget id %d, just change index"* (`0x1AB158`).
- `createDefaultWidgets 0x1AB2F4` — reads a stored `long long`:
  *"found sp value : %lld"* (`0x1AB32C`), then *"widgetList size: %d"* (`0x1AB364`).
- `createSpecWidgets 0x1AB1DC` — *"has saved sp, return"* (`0x1AB1F0`),
  ***"no space left, return"*** (`0x1AB224`), and `isSupportStepCountWidget` (`0x1AB275`).
  Re-run on `remoteDeviceTypeChangeCallback` (`0x1AB294`) — pairing a device that reports steps
  adds the `steps` tile if a slot is free.
- `changeStandbyWidgetSeq 0x1AB408` — *"storeValue: %lld"* (`0x1AB420`), early-out
  *"widget seq is same, no need to change"* (`0x1AB454`).
- `unBondReset 0x1AB3BC` — unbonding resets the row to default.

The **"no space left"** guard plus the packed-`%lld` store is the four-slot limit: a 64-bit value
carrying a short list of 1-byte (or 4-bit) widget ids. This is the same storage idiom as the dock
(§2.3). No `adjustFlexPadColumn` symbol exists anywhere in 11.53 — searched the whole image for
`adjustFlex`, `FlexPad`, `flex_pad`: **zero hits** (the search method is sound — `createFlexContent`
and `createFlexRootView` from the same file *are* found). Whatever that name was, it is not in this
build; the flex-row helpers that do exist are `DockviewV2::createFlexRootView/createFlexContent/
restoreFlexLayout`.

**CUSTOMIZATION TIER: CONFIG** for which widgets and in what order
(`set_standby_widget_lists`, §5) — it just rewrites the stored `%lld`.
**CODE** to change the slot count (the "no space left" bound).

### 3.5 Other standby surfaces (`view/StandByView.cpp`, `view/LauncherViewController.cpp`)

Resource names are LVGL image ids and are all **DATA**-tier (repoint or overwrite the image):

- Battery ladder: `launcher_standby_battery_100/90/…/10` at `0x1A80A0`–`0x1A8198`
  (note `_100` at `0x1A8080`), `launcher_standby_battery_empty 0x1AAF28`,
  `launcher_standby_battery_charge_lightning 0x1AAC88`.
- Status badges: `launcher_standby_zen_mode 0x1AAC6C`, `launcher_standby_hear_imp_mode 0x1AB1A0`,
  `launcher_standby_disconnect 0x1AB1C0`, `launcher_standby_demo_mode 0x1A9138`,
  `launcher_health_normal 0x1AAE2C`, `launcher_health_small 0x1AAE44`.
- Reorder hint: `launcher_standby_move_dash 0x1A8D39`, `launcher_standby_move_indicator 0x1A8D5C`,
  gated by the count key `KEY_LAUNCHER_STANDBY_MOVE_HINT_COUNT` (`0x1A8DFF`) — **CONFIG**,
  an NV counter that hides the hint after N showings.
- PiP icon set, chosen in `onPipIconEventChange` (`0x1A9354`) by `(type, subtype)`:
  `launcher_standby_freestyle_pip 0x1A9418`, `..._music 0x1A9494`, `..._navigation 0x1A9560`,
  `..._calender 0x1A95CC`, `..._car 0x1A9638`, `..._flight 0x1A96A0`,
  `..._freestyle_call 0x1A9754`, `..._freestyle_default 0x1A97CC`.
- `launcher_upgrade_dialog 0x1A994C`, screenshot mask `handleScreenShotMask 0x1A98FC`.

---

## 4. Launcher models (`Pages/Launcher/model/`)

| model | symbol span | role |
|---|---|---|
| `MessageModel` | `0x1A4530`–`0x1A6800` (+ pools `0x60E720`, `0x60ED70`) | the entire phone→glasses action surface (§5) |
| `StatusModel` | `0x1A3798`–`0x1A41BA`, `0x1AB116` | screen on/off, connect state; `onScreenOn, need refresh health info` `0x1AB10C` |
| `TimeModel` | `0x1A6D48`–`0x1A719A` | clock source for the `time` widget |
| `TipsModel` | `0x1A727C`–`0x1A7E8E` | the hint/tips line; `StandByView::onTipsEventCallback 0x1A8F14`, `updateTipsViewAlign 0x1A8ED8` |
| `WeatherModel` | `0x1A430C`–`0x1A43CE` | feeds `weather_1x1` / `weather_1x2` |

`MessageModel` also owns privacy/agreement state (`handlePrivacyExpire 0x1A5E48`, types
`myvu_pp` / `glass_pp`; `handleStatementChange 0x1A6198` over `privacy_agreement 0x1A616C` /
`transmission_agreement 0x1A6180`), screenshots (`handleScreenShot 0x1A66E0`,
`get_glass_screenshot 0x1A5CB8`), and log upload (`get_user_feedback 0x1A5CE4`,
`need_send_glass_log 0x1A5D3C`).

---

## 5. What the phone can change — `MessageModel::handleSystemMsg`

Envelope: a `system` message (`0x3C164C6C`) carrying `action` (`0x3C431BC4`) and
`data` (`0x3C0013C0`); unknown names hit *"handleSystemMsg no handler for action %s"*
(`0x1A66A0`). The dispatcher's literal pool at `0x60ED78`–`0x60EDE8` is the **complete,
ordered** action list this build accepts:

| # | pool slot | action | launcher effect | tier |
|---|---|---|---|---|
| 1 | `0x60ED78` | `get_device_info` | — | CONFIG |
| 2 | `0x60ED7C` | `do_recovery` | factory reset (also resets dock/standby) | CONFIG |
| 3 | `0x60ED80` | `get_language` | — | CONFIG |
| 4 | `0x60ED84` | `set_language` | UI language | CONFIG |
| 5 | `0x60ED88` | `get_zen_mode` | — | CONFIG |
| 6 | `0x60ED8C` | `set_zen_mode` | drives `launcher_standby_zen_mode` badge | CONFIG |
| 7 | `0x60ED90` | `set_device_name` | — | CONFIG |
| 8 | `0x60ED94` | `get_screen_off_time` | — | CONFIG |
| 9 | `0x60ED98` | `set_screen_off_time` | — | CONFIG |
| 10 | `0x60ED9C` | `get_brightness` | — | CONFIG |
| 11 | `0x60EDA0` | `set_brightness` | — | CONFIG |
| 12 | `0x60EDA4` | `set_brightness_finish` | — | CONFIG |
| 13 | `0x60EDA8` | `get_volume` | `handleGetVolume 0x1A5648` | CONFIG |
| 14 | `0x60EDAC` | `set_volume` | — | CONFIG |
| 15 | `0x60EDB0` | **`change_dock_items`** | `setDockItemsInner 0x1A5684`; no-op if identical (`app seq is same, ignore` `0x1A5698`) | **CONFIG** |
| 16 | `0x60EDB4` | `get_wear_detection_mode` | — | CONFIG |
| 17 | `0x60EDB8` | `set_wear_detection_mode` | `0x1A56D8` | CONFIG |
| 18 | `0x60EDBC` | **`set_standby_position`** | `setStandbyPosistionInner 0x1A5730`; value is a **number**, rejected otherwise (`failed, value is not number` `0x1A578C`), logged `standby pos = %ld` (`0x1A57D4`) | **CONFIG** |
| 19 | `0x60EDC0` | `get_standby_position` | replies via `sendStandByPositionInfoMsg 0x1A581C` | CONFIG |
| 20 | `0x60EDC4` | `get_volume_stream_type` | — | CONFIG |
| 21 | `0x60EDC8` | `get_music_tp_control_mode` | — | CONFIG |
| 22 | `0x60EDCC` | `set_music_tp_control_mode` | `0x1A5C08` | CONFIG |
| 23 | `0x60EDD0` | `notify_privacy_expired` | `0x1A5E48` | CONFIG |
| 24 | `0x60EDD4` | `notify_statement_change` | `0x1A6198` | CONFIG |
| 25 | `0x60EDD8` | `sync_clone_data` | `handleSyncCloneData 0x1A6230` (array of objects) | CONFIG |
| 26 | `0x60EDDC` | `set_glass_sound_effect_mode` | — | CONFIG |
| 27 | `0x60EDE0` | `get_glass_sound_effect_mode` | — | CONFIG |
| 28 | `0x60EDE4` | **`set_standby_widget_lists`** | `handleStandbyWidgetsChange 0x1A644C`, payload key `widgets` (`0x1A6428`), logs `standby widgets count: %d` (`0x1A6468`) → `changeStandbyWidgetSeq` (§3.4) | **CONFIG** |
| 29 | `0x60EDE8` | `get_standby_widget_lists` | — | CONFIG |

A second pool at `0x60E734`–`0x60E77C` (the `set_*` group used by `handleSyncCloneData`, i.e. the
settings a clone/restore replays) adds five actions that are **not** in the `handleSystemMsg`
chain and only arrive via `sync_clone_data`:

`set_hear_impairment_mode` (`0x60E748`), `set_app_fast_open` (`0x60E74C`),
`set_image_stabilization_mode` (`0x60E754`), `set_image_adjustment_mode` (`0x60E758`),
`set_font_mode` (`0x60E760`) — plus `brightness_model`, `remote_app`, `language`, `country`.

**So the three launcher knobs reachable with zero flashing are exactly:
`change_dock_items`, `set_standby_position`, `set_standby_widget_lists`** (each with a `get_`
counterpart except the first). Everything else about the launcher's layout is DATA or CODE.

Names that plausibly *should* exist and **do not** in 1.0.11.53 (searched the whole image):
`set_dock_items`, `get_dock_items`, `set_standby_widgets`, `add_dock_item`. Absence is meaningful
here because the positive controls from the same search — `change_dock_items`,
`set_standby_widget_lists` — are found at the offsets tabled above.

---

## 6. Customization summary

| surface | tier | where |
|---|---|---|
| dock app order | **CONFIG** | `change_dock_items`; packed 16-slot pref (§2.3) |
| standby widget set + order | **CONFIG** | `set_standby_widget_lists`, ids 1..6 (§3.1, §5) |
| standby row position | **CONFIG** | `set_standby_position` (numeric) |
| reorder-hint suppression | **CONFIG** | `KEY_LAUNCHER_STANDBY_MOVE_HINT_COUNT` |
| which page a dock slot opens | **DATA** | 4-byte pointer at `0x6138D0/D8/E0/E8/F0` |
| dock icon art / name | **DATA** | pointer at `0x6138D4/DC/E4/EC/F4` |
| standby tile size (72 px) | **DATA** | 1 byte at `0x61B79E` |
| standby ring width | **DATA** | 1 byte at `0x61B7EE` |
| standby ring opacity | **DATA** | 1 byte at `0x61B7F8` (`→00` = no rings, hardware-confirmed) |
| battery / status / PiP icons | **DATA** | resource-name literals, §3.5 |
| widget display names | **DATA** | `0x1AAE5C`+, in-place, ≤ existing length |
| non-square tiles | **CODE** | w and h share `r2` at `0x61B79E` |
| a 7th standby widget | **CODE** | `cmp r3,#5` @ `0x61A9D8` + tbb table + ctor |
| more than four standby slots | **CODE** | `createSpecWidgets` "no space left" bound |
| Ring back in the dock | **CODE** | `cbz` @ `0x613788` + a new `createAppInfo` arm |
| a 14th page | **CODE** | registry `0x534DE0` + unrolled registration `0x534E5C` |

### Write-safety

Every byte offset proposed above (`0x534DE0`, `0x6138D0`–`0x6138F4`, `0x61379E`…`0x613878`,
`0x61A9D4`–`0x61AA1C`, `0x61B784`–`0x61B8E0`, `0x1A7098`, `0x1A80A0`–`0x1AB4xx`) lies **outside**
both forbidden sub-images — HiFi4 DSP `0x04E9B4`–`0x143F14` and sensor_hub `0x134070`–`0x14A7A4`.
The verifier asserts this mechanically.

---

## 7. What this leaf could not establish

- The **numeric range/meaning of `set_standby_position`**. The handler only proves it must be a
  number (`0x1A578C`) and that it round-trips through `sendStandByPositionInfoMsg`. No table of
  legal values was found; guessing one would violate PLAN.md's "not found beats a plausible guess".
- The **exact bit width of the packed sequence values**. `%lld` + 16 slots implies 4 bits per dock
  slot, but the pack/unpack shifts were not read, so this is stated as an inference, not a fact.
- **`adjustFlexPadColumn` does not exist in this build** — see §3.4 for the search and its control.
  If the name is real it belongs to a different firmware version or to the phone app.
- The identity of widget **types 0,1,2,4,5,7,8** (only type 3 = clock and type 6 = text are named).
  The ctor addresses are recorded; naming them is leaf work that was outside the time box.
