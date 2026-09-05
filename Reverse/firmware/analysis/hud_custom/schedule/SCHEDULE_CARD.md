# Schedule card on the standby HUD — feasibility

**Leaf 1.6.** Binary: `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (1.0.12.83).
Address model: code VA = file + `0x2C010000`; data file = VA − `0x3BFD7C0C`.
All offsets below are **file offsets** unless written as VA. Disassembly by capstone 5.0.7
(Thumb/MClass); no Ghidra export was trusted.

Reference mockup: a rounded, bordered container titled **"Schedule"** with a small icon,
holding two bulleted entries, each a bold title line plus a lighter time line
("Lunch with Alex / Today, 12:30 PM – 2:00 PM").

---

## Verdict in one paragraph

**The exact card already exists in this firmware — twice — but not on the standby HUD, and
neither instance can be filled with phone-supplied schedule text without patching code.**
`ScheduleDomainView.cpp` renders a 264×144 rounded-12px card with a 1 px green border at 40 %
opacity and a FONT_DUMMY_20 title over a FONT_DUMMY_16 secondary line — a pixel-level match
for the mockup — but it lives on `Pages/Assistant` and is driven by the voice-assistant
VUI/NLU pipeline. The notification PIP card (`lv_pip_misc_msg_ui.c`) renders a 324×auto
rounded-16px card with the same border treatment plus title / content / dim-60 % sub-line,
and **it does take free-form text from the phone** — but it is transient by design and it is
not the standby HUD. The standby HUD itself has a **closed vocabulary of six widget ids**
(`time`, `weather_1x1`, `weather_1x2`, `aiBall`, `steps`, `weekday`) with **no text input path
from the phone at all**. Getting the mockup onto standby therefore requires new code, and new
code in the standby widget path is exactly what bricked this device on v5 and v6 — although
this leaf did find one materially safer injection point than the one those patches used
(§5c).

---

## 1. The "no schedule widget" claim — verified, but the framing was wrong

### 1a. TRUE for the standby HUD widget system

`StandByWidgetManager.cpp` (source string `0x199914`) and `StandByWidget.cpp` (`0x1994b0`).
The complete widget-id vocabulary is a 6-pointer table at **`0x5d8c10`–`0x5d8c24`**, repeated
at `0x5dbbc0`–`0x5dbbe0`:

| ptr file | name string | file |
|---|---|---|
| `0x5d8c10` | `weather_1x1` | `0x199798` |
| `0x5d8c14` | `time` | `0x195960` |
| `0x5d8c18` | `aiBall` | `0x199790` |
| `0x5d8c1c` | `weather_1x2` | `0x199774` |
| `0x5d8c20` | `steps` | `0x199780` |
| `0x5d8c24` | `weekday` | `0x199788` |

Those six strings occur **nowhere else in the image** except these two pools. There is no
`schedule`, `calendar`, `agenda`, `event`, `todo` or `alarm` widget id.

The BLE surface matches: `MessageModel::handleStandbyWidgetsChange` (**f`0x5cc458`**, log
string `0x194d14`) parses `value.widgets` (`0x194cf0`) from `set_standby_widget_lists`
(`0x194cf8`) into a `vector<string>` and hands it to `changeStandbyWidgetSeq`
(**f`0x5dbbe4`**) → `rebuildFromWidgetSeq` (**f`0x5db9dc`**). The phone chooses **which of the
six appear and in what order**. It supplies **no text, no icon, no size**.

### 1b. The "exactly five factories" claim is WRONG

The widget base constructor **f`0x5d9c78`** dispatches on a byte type field with a `tbb` table
at `0x5d9cfe` (bytes `1f 25 05 31 3b 40 45 53 60 10`) — **ten** cases, not five:

| type | branch | builder | identified as |
|---|---|---|---|
| 0 | `0x5d9d3c` | f`0x5d8cf8` | — |
| 1 | `0x5d9d48` | f`0x5d8f2c` | `createNormalWidget` (err str `0x1997b8`) |
| 2 | `0x5d9d08` | f`0x5d9190` | — |
| 3 | `0x5d9d60` | f`0x5d931c` | `customTimeAndBatteryWidget` (err `0x19987c`) — **the v5/v6 hook** |
| 4 | `0x5d9d74` | f`0x5d8d84` | — |
| 5 | `0x5d9d7e` | f`0x5d8810` | — |
| 6 | `0x5d9d88` | f`0x5d904c` | **`createTextWidget`** (err `0x199800`) |
| 7 | `0x5d9da4` | f`0x5d94e8` | — |
| 8 | `0x5d9dbe` | f`0x5d9708` | — |
| 9 | `0x5d9d1e` | f`0x5d9990` | — |

`createWeather1x2Widget` (`0x1998b8`) and `adjustFlexPadColumn` (`0x199900`) are in the same
literal pool (`0x5d9e2c`–`0x5d9e4c`) but are not `tbb` cases. So the five names the prior
finding listed are **log-string names, not the dispatch table**. This does not change the
conclusion — none of the ten is schedule-shaped — but the inventory was incomplete.

### 1c. FALSE at the firmware level: a full schedule stack exists

The claim "NO calendar/schedule widget exists" is only true if scoped to standby. The image
contains a complete, shipping schedule feature:

| evidence | file |
|---|---|
| `.../Pages/Assistant//domain/schedule/ScheduleDomain.cpp` | `0x17ca78` |
| `.../Pages/Assistant//domain/schedule/ScheduleDomainView.cpp` | `0x17ccc0` |
| `SCHEDULE_ADD` / `SCHEDULE_VIEW or SCHEDULE_LIST` / `SCHEDULE_DELETE` / `SCHEDULE_MODIFY` | `0x17cb64`–`0x17cbc0` |
| `schedule list is blank, can not create view` | `0x17cb38` |
| `showList` / `showSingle` / `showSingleInnerHor` / `createSingleItem` | `0x17cd44`, `0x17cd64`, `0x17cd50`, `0x17cd1c` |
| time-range formats `%02d/%02d %02d:%02d-%02d/%02d %02d:%02d`, `%02d:%02d-%02d:%02d` | `0x17ca20`, `0x17c9ca` |
| i18n `Agenda`, `New schedule`, `Check more on your phone`, `Tomorrow` | `0x404fec`, `0x404ff4`, `0x405004`, `0x405020` |
| sibling domains `AlarmModel.cpp`, `TodoDomainView.cpp` | `0x17c86c`, `0x17dac8` |
| SFX id `iot_schedule_reminder` | `0x37688` |

**Resource-name table** — I re-derived it rather than trusting the stated bounds. Scanning
`0x5e1508`–`0x5e52a4` for well-formed `{img_ptr, name_ptr}` pairs yields **373 pairs / 370
unique names** (the "369" figure is right to within one duplicate). Calendar-adjacent entries:

| table off | image file | name | decoded |
|---|---|---|---|
| `0x5e1b28` | `0x33f008` | **`launcher_standby_calender`** | 44×44 IDX4 — outline calendar page glyph |
| `0x5e2550` | `0x3f3f14` | `smartlife_notification_calendar_icon` | 48×48 — Android cal icon ("周四 30") |
| `0x5e2580` | `0x3f52f4` | `smartlife_notification_ios_calendar_icon` | 48×48 |
| `0x5e29b0`/`b8`/`c0` | — | `assistant_alarm_on` / `_off` / `_line` | alarm rows |
| `0x5e29d8`/`e0` | — | `assistant_todo_domian_done` / `_undone` | todo check marks |

`launcher_standby_calender` **is** referenced from the standby HUD — but only as a *PIP status
glyph*. `LauncherViewController::onPipIconEventChange` (`0x197c6c`) logs
`"…update to calendar icon"` (`0x197e94`) immediately before the name string `0x197ee4`. It is
a one-icon indicator that a calendar PIP is active, sitting alongside
`launcher_standby_music`, `_navigation`, `_car`, `_flight`, `_freestyle_call`. **No text, no
card.** So there is a calendar *affordance* on standby, just not a calendar *widget*.

---

## 2. Does a reusable bordered card already exist? — Yes, three of them

### 2a. Every standby widget is already a rounded, bordered container

This is the most useful single finding, and it was not previously recorded. The **base**
constructor f`0x5d9c78` runs this **before** the type dispatch, so it applies to all ten types:

```
5d9c92  movs r2,#0x48            ; 72
5d9c9a  mov  r1,r2
5d9ca0  strh.w r2,[r4,#0x40]     ; stash h
5d9cbc  bl   f607048             ; lv_obj_set_size(obj, 72, 72)
5d9cc0  ldrsh.w r1,[r4,#0x40] ; asrs r1,#1
5d9cd0  bl   f606e68             ; lv_obj_set_style_radius(obj, 36, 0)      prop 0x0B
5d9cd6  mov.w r1,#-0xff0100      ; 0xFF00FF00 = opaque green
5d9cdc  bl   f606d84             ; set_style_border_color                    prop 0x30
5d9ce2  movs r1,#2
5d9ce6  bl   f606d9c             ; set_style_border_width(2)                 prop 0x32
5d9cee  movs r1,#0x5c
5d9cf0  bl   f606d90             ; set_style_border_opa(0x5C ≈ 36%)          prop 0x31
```

So each standby tile is **72×72, radius 36 (i.e. a circle at that size), 2 px green border at
36 % opacity**. The mockup's frame therefore exists on standby *already* — but at circle
geometry and tile scale, not as a 264×144 rounded rectangle. (Style-prop ids confirmed against
LVGL v8: `0x0B` radius, `0x20/0x21` bg colour/opa, `0x30/0x31/0x32` border colour/opa/width,
`0x46` img opa. This is a vendor fork — the text block is shifted by one, `0x55` = text colour,
`0x57` = text font, verified by argument semantics.)

### 2b. `CardView.cpp` is **not** the card

`.../Pages/Assistant//app/card/CardView.cpp` (`0x17a9e0`) contains only
`startShowAnimation` / `startHideAnimation` / `finishShowAnimation` / `finishHideAnimation` /
`opaAnimationExecCallback` / `isContentContain` (`0x17aa2c`–`0x17ab38`). It is the **opacity
show/hide animation wrapper** for assistant domain views, not a bordered container. Its
siblings `ListView.cpp` (`0x17a900`, with a `%d/%d` page indicator and
`assistant_navi_domain_select_icon`) and `HorizontalListView.cpp` (`0x17a94c`) are the
list containers.

### 2c. `ScheduleDomainView` draws the mockup card, literally

`ScheduleDomainView::showSingleInnerHor` (function **f`0x5762d4`**; its pool at `0x57662c`
carries `showSingleInnerHor`, the `ScheduleDomainView.cpp` path at `0x57663c`,
`FONT_DUMMY_16` at `0x576644` and `FONT_DUMMY_20` at `0x576648`) builds:

```
5763c6  bl f606a10               ; lv_obj_create(parent)
5763d8  bl f606abc               ; clear flag 0x10 (scrollable)
5763dc  movs r2,#0x90 ; r1=#0x108
5763e4  bl f607048               ; lv_obj_set_size(obj, 264, 144)
5763ee  bl f606d6c               ; bg_opa = 0            (transparent fill)
5763f8  bl f606d9c               ; border_width = 1
576402  bl f606e68               ; radius = 0x0C = 12
57640e  bl f606d84               ; border_color = 0xFF00FF00 (green)
576418  bl f606d90               ; border_opa = 0x66 ≈ 40%
576422  bl f606d18               ; pad_left = 12
```

**264 × 144, radius 12, 1 px green border at 40 %, 12 px padding, title font 20 / secondary
font 16.** That is the mockup, already compiled into the device. The byte-identical recipe
appears again at `0x57fba2` in `TodoDomainView.cpp` (`showCreateTodo`), so it is a house style
shared across assistant domain cards.

**Reachability:** `Pages/Assistant`. It is created when the assistant receives a
`SCHEDULE_VIEW` / `SCHEDULE_LIST` VUI payload (`0x17cb78`). `AssistantService` gates that
behind a long list of preconditions logged at `0x180df4`
(`isWakeupBleStateValid`, `isLoginStateValid`, `isPassive`, network state, `Scene`…). It is a
transient assistant result card, is torn down when the assistant exits, and never appears on
standby.

### 2d. `FlightView` / `AlarmModel` — title + time rows, but scene-bound

`SmartLife/view/FlightView.cpp` (`0x18fee0`) has `updateHeadMainDesc` / `updateHeadSecondDesc`
/ a content object (`0x18ff68`–`0x18ffd4`) plus `smartlife_scene_flight_icon` — an icon +
main-desc + second-desc structure that does resemble the mockup entry. `TaxiView.cpp`
(`0x19003e`) is the same shape with `updateHeadIcon` / `updateHeadTitle` / `setIndicator`.
`AlarmModel.cpp` (`0x17c86c`) supplies `%02d:%02d` time strings and
`getWeekdayDescription`. All of these are driven by the SmartLife **scene** channel
(`MSG_TYPE_FLIGHT`, `MSG_TYPE_TAXI`, `MSG_TYPE_REMINDER` at `0x18d740`–`0x18d79c`) and render
on their own scene surface, not on standby.

---

## 3. `createTextWidget` as a no-patch route — it cannot carry the content

Full disassembly of f`0x5d904c` (0x134 bytes):

* Creates **exactly two labels** via `lv_label_create` (f`0x637344`) on the widget object:
  one at `this+0x10` (title), one at `this+0x14` (content).
* **Both use the same font.** Both do `ldr r0,[pc] → f5e2e80` on the *same* pool word
  `0x5d9180` = data `0x166af0` = **`"FONT_DUMMY_20"`**. There is no bold/light or
  large/small distinction, and no separate opacity — both get `text_color 0xFF00FF00`
  (opaque green) and nothing else.
* Both are sized `lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT)` (`0x27D1`) and then
  `lv_obj_align`: title `align=2` (TOP_MID) `y=+10`; content `align=5` (BOTTOM_MID) `y=-8`.
* **No container, no border, no radius, no bullet glyph, no icon** is created inside
  `createTextWidget`. The rounded border it appears inside is the base-ctor frame from §2a —
  a 72 px circle.
* Both strings are required non-empty (`0x199800`); each is passed through f`0x620f3c`
  before `lv_label_set_text`, which registers the label for language/text updates.
* Size budget: the tile is **72 × 72 px** on a **640 × 480** panel (`AA_Pattern_640_480_*`
  at `0x161d80`). At FONT_DUMMY_20 that is roughly 4–5 characters per line. "Lunch with Alex"
  does not fit; neither does "Today, 12:30 PM – 2:00 PM".

**And it is not addressable from the phone.** `createWidget` (f`0x5db204`) reaches type 6
from exactly one place, `0x5db382`, which first materialises **two runtime strings from an
on-device model** (`f5c685c` → `f5c6d84`/`f5c6d7c`, accessors at `model+0x2D8`) and stores them
at `[sp,#0x7c]`/`[sp,#0x80]` before `movs r2,#6`. The `set_standby_widget_lists` payload never
reaches those strings — it only picks names out of the six-id vocabulary.

**Verdict on route (a): not viable.** Wrong font model (one font, no dim line), no border of
its own, no bullets, ~5 characters wide, and no phone-text path into it.

---

## 4. The notification card — the only free-form surface, and it is a good one

`lv_pip_misc_msg_ui.c` `layout_message_ui` = function **f`0x5e9924`** (pool at `0x5e9bd8`
names the function, `0x5e9bdc` the file). It builds:

**Root** (`0x5e993c`):

```
5e993c  bl f606a10   ; lv_obj_create
5e996a  bl f606e68   ; radius = 0x10 = 16
5e9974  bl f606d9c   ; border_width = 1
5e9980  bl f606d84   ; border_color = 0xFF00FF00 (green)
5e998a  bl f606d90   ; border_opa = 0x4C ≈ 30%
5e9994  bl f606d6c   ; bg_opa = 0xFF
5e99a0  bl f606d60   ; bg_color = 0xFF000000 (black)
5e99ae  bl f607048   ; lv_obj_set_size(324, LV_SIZE_CONTENT)
```

**Inner** (`0x5e99b4`): 324 × content, `pad_top/bottom/left/right = 12` (`0x5e99d6`–`0x5e99f4`),
`border_width = 0`, `radius = 0`.

**Three text rows**, each `lv_obj_set_size(240, n × line_height)`:

| row | field | font | opacity | max lines |
|---|---|---|---|---|
| title | `[this+0x3c]` | (set earlier) | theme | 2 |
| content | `[this+0x14]` | `FONT_DUMMY_20` (pool `0x5e9bcc`) | theme global `[r8+0x138]` | **5** |
| sub | `[this+0x24]` | **`FONT_DUMMY_16`** (pool `0x5e9bd0`) | **`0x99` ≈ 60 %** | 2 |

That third row is *exactly* the mockup's "lighter time line": smaller font **and** 60 %
opacity, under a full-opacity larger line, inside a rounded green-bordered box.

**What the phone can put in it.** `SmartLifeAdapter::createNormalMsg` (`0x18d7f0`) parses a
JSON object with `appName`, `title`, `content`, `id`, `crateTime` [sic], `packageName`,
`canReply`, `aiResult`, `msgType`, `discernResult`, `groupName`, `sender`
(`0x18d868`–`0x18d930`). All free-form.

**The icon comes free.** `NormalManager::filterNotification` (`0x18e240`) maps package name →
icon resource; `AncsManager` (`0x18ece4`) does the same for iOS bundle ids. The table includes
`com.android.calendar` / `com.google.android.calendar` / `com.samsung…` / `com.huawei…` /
`com.xiaomi…` / `com.vivo…` / `com.bbk…` / `com.coloros…` → `smartlife_notification_calendar_icon`
(`0x18e76c`), and **`com.apple.mobilecal` → `smartlife_notification_ios_calendar_icon`**
(`0x18f0f4`/`0x18f108`). A card whose `packageName` is a calendar app gets a calendar icon
without any patch. (Caveat: I found **no `lv_img_create` call site anywhere in
`0x5e5000`–`0x5ec000`**, so I could not positively trace the icon into `layout_message_ui`
itself — the icon may be drawn by the caller or by a bg-image style. Treat "icon on the
notification card" as strongly indicated, not proven. `toast_style3` = `SINGLE_LINE_ICON`
(`0x407608`) does prove an icon-bearing toast variant exists.)

**Fidelity check against the mockup.** Container ✔ (rounded 16, 1 px green border, black
fill). Title line ✔. Lighter time line ✔ (font 16 @ 60 %). Two entries ✔ — the content row
holds up to 5 lines at 240 px, enough for `Lunch with Alex ⏎ Today, 12:30 PM – 2:00 PM ⏎
Design review ⏎ …`. Bullets ✖ — no bullet glyph; you would have to type `•` or `-` into the
text and hope the font has the codepoint. A "Schedule" header ✖ as a distinct styled row —
you get title/content/sub, so "Schedule" would have to be the title.

**The catch, stated plainly:** it is **transient by design**. `lv_pip_misc_msg.c` has
`Message stacked` (`0x40ae34`), `now top message is ready to close` (`0x40ae80`),
`msg is being displayed!` (`0x40a9dc`), `show_next_message` (`0x40aa48`) and a
`notificationDisplayTime` setting (`0x18d668`). It is a queue of timed cards over the HUD, not
a resident standby element. Holding it by repainting the same id (per the sibling leaf) is a
workaround, not a fix — and while it is up, it occludes the HUD.

---

## 5. Risk-tiered options

Two prior firmware patches bricked this device. Both failures had **one** cause, recorded in
`BOOTLOOP_EXPLAINED.md` / `BATT_CIRCLE_POSTMORTEM.md`: LVGL object creation (v5:
`lv_obj_create`; v6: `lv_timer_create` then create on the next tick) hooked **inside
`customTimeAndBatteryWidget`, ctor f`0x5d931c`** — a function reached through the *single*
`BL` at `0x5d9d6e`, which runs both during boot and later, with no in-scope way to tell the two
apart. At boot the display stack is not yet accepting new objects → crash → watchdog → loop.
Everything below is graded against that specific failure mode, not against generic caution.

| | route | what you get | what you lose | risk | brick class |
|---|---|---|---|---|---|
| **a** | standby `createTextWidget` (type 6) | two labels in a 72 px green circle | one font, no dim line, no border of its own, no bullets, ~5 chars wide, **and no phone-text path** | n/a — **not reachable**, no patch would make it reachable without also adding a text transport | — |
| **b1** | notification PIP card (`layout_message_ui`) | rounded-16 bordered card, title + 5-line content + dim-60 % sub-line, calendar icon by `packageName`, **free-form text from the phone** | transient; occludes rather than lives on the HUD; no real bullets; "Schedule" must be the title | **zero firmware risk** — no patch at all | none |
| **b2** | assistant `ScheduleDomainView` | the mockup card exactly (264×144, radius 12, border 1 px @ 40 %, font 20 + font 16) | `Pages/Assistant` only; needs a live assistant session and a `SCHEDULE_VIEW`/`SCHEDULE_LIST` VUI payload through a gate list that includes `isLoginStateValid`; transient | **zero firmware risk**, but reachability is the blocker, not safety | none |
| **c1** | patch a **new** widget type into the standby ctor's `tbb` | a real resident standby card | — | **HIGH — this is the v5/v6 failure mode verbatim** | bootloop |
| **c2** | patch creation into a **phone-triggered** standby entry point (§5c) | same | still needs a text transport that does not exist | **MEDIUM** — the boot race is genuinely removed; the remaining risks are different and smaller | teardown UAF, not bootloop |
| **c3** | v4-style: rewrite text on a label that **already exists** | no new objects, provably safe | there is no standby label whose content you can source schedule text into | **LOW** | none |

### 5c. If you must patch: the safest injection point

The v5/v6 mistake was hooking a function that is on the boot path. There are standby-side
creation sites that are **structurally impossible to reach during boot**, because they only
run in response to a message from the connected phone:

| function | file off | trigger | why it cannot run at boot |
|---|---|---|---|
| `handleStandbyWidgetsChange` | **f`0x5cc458`** | BLE `set_standby_widget_lists` | requires a bonded, connected phone and an explicit app action |
| `changeStandbyWidgetSeq` | **f`0x5dbbe4`** | called by the above | ditto; logs `update mStandbyWidgetSeq, size %d` (`0x199e38`) |
| `rebuildFromWidgetSeq` | **f`0x5db9dc`** | called by the above; issues `createWidget(kind)` for kinds 1,2,3,4,6,5 | ditto — and it is a **proven-good creation site**: the stock firmware creates widgets here every time the user reorders tiles, i.e. with the HUD fully up |
| `remoteDeviceTypeChangeCallback` | **f`0x5db774`** | BLE remote-device-type change; logs `receive remote device type change, create spec widget` (`0x199c40`) | ditto |

`rebuildFromWidgetSeq` is the pick. It sits **after** the same `createWidget` → base-ctor path
the v5/v6 patch used, but it is entered only from a phone command, so the "am I in boot or not"
question that six different heuristics failed to answer (`BOOTLOOP_EXPLAINED.md`) **does not
arise** — the caller identity itself is the answer. That is a real, evidence-backed
improvement over v5/v6, not a rewording of them.

**What must still be avoided, precisely:**

1. **No `lv_obj_create` / `lv_label_create` / `lv_timer_create` in `f0x5d931c`** (the
   `customTimeAndBatteryWidget` ctor) or in the base ctor `f0x5d9c78` **before** the `tbb` at
   `0x5d9cfa`. Both are on the boot path via the single `BL` at `0x5d9d6e`.
2. **No deferred timer as a boot-avoidance trick.** v6 proved 100 ms is still inside the boot
   window, and it adds a use-after-free if the tile is destroyed before the callback fires.
   The fix is to pick a caller that cannot be boot, not to wait.
3. **Do not add a new `tbb` case** without extending the table and the `cmp r2,#9` bound at
   `0x5d9cf6`; the postmortem lists "adding a brand-new tile type" as never implemented.
   Re-using type 6 (`createTextWidget`) avoids touching the table at all.
4. **Widget teardown is the live risk on this route.** `rebuildFromWidgetSeq` destroys and
   rebuilds; anything you attach must be a child of the widget object so it dies with it.
5. **None of this solves the text problem.** Even a perfectly safe new standby card has
   nothing to display: there is no phone→standby free-text transport. A complete patch is
   *two* changes (a renderer *and* a transport), which roughly doubles the surface v5/v6
   already failed on.

### The honest bottom line

**The exact card is not achievable on the standby HUD without code patching, and code patching
in this exact subsystem is what bricked the device twice.** The device is still bricked and
none of this is testable until UART recovery. If the goal is "the user sees their schedule on
the glasses in a card that looks like the mockup", the zero-risk answer available *today* is
**route b1**: push a notification whose `packageName` is a calendar bundle id, `title` =
"Schedule", `content` = the bulleted entries. You get the rounded green-bordered box, the
calendar icon, a bright title and a dimmer secondary line — the mockup's visual language,
already shipping, with no bytes changed. What you do not get is persistence.

---

## Method notes / what I did not prove

* Style-property ids were read from the generated setters' `movs r1,#prop` and matched to LVGL
  v8 semantics **by argument type** (a colour word to `0x30`, an integer 2 to `0x32`, a font
  pointer to `0x57`). The text block of this vendor fork is shifted one from stock LVGL. I did
  not find the fork's `lv_style_prop_t` enum to confirm.
* Which of the six widget ids maps to kind 5 (the `createTextWidget` kind) is **not pinned**.
  The name→kind map was not located; `weekday` is the most plausible candidate given kind 5
  formats two runtime strings from a model, but I am flagging this rather than asserting it.
* The app icon on the PIP notification card is **indicated, not proven** — see §4.
* `Reverse/firmware/analysis/BATT_CIRCLE_POSTMORTEM.md` quotes VAs computed with the old
  `0x2C000000` base; its "VA `0x2C606A10`" for `lv_obj_create` is file `0x606A10`, true VA
  `0x2C616A10`. Its `createSpecWidgets @0x5db5e4` is off: `0x5db5e4` is the
  create-if-absent wrapper named `createWidget` (`0x199b10`); the function whose pool carries
  `createSpecWidgets` (`0x199b68` → pool `0x5db75c`) starts at **f`0x5db634`**. Its
  `createDefaultWidgets @0x5db7c4` and `kind switch @0x5db204` check out.
