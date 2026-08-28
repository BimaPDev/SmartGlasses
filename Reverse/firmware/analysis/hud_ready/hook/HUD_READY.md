# Idle HUD ready — ranked hook (leaf 1.2.1)

Firmware: `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (1.0.12.83).
File offsets are ground truth. `va_xip = file_off + 0x2C000000`. TRACE format
strings use runtime VA `file_off + 0x3bfd7c0c`. No firmware patches. No OTA.
No invented VAs. Every recommended/rejected `file_off` below was re-measured
from the image in this leaf.

## Verdict

**Recommended create hook:** the indev TRACE `launcher_is_on_standby_view.` at
file **`0x602af0`** (`va_xip 0x2c602af0`), kind **event**, `splash_safe: true`.

That byte is the true-path log inside `indev_xjxr_keypad_proc` (`0x6027a0`) after
the firmware has consulted `LauncherViewController::isOnStandByView`. A later
object-create patch belongs here (or on the `bne.w` that reaches it), **instead
of a guessed delay** and **instead of the widget ctor**.

The **predicate** remains `isOnStandByView`: `this+0x258 == &StandByView`
(`this+0x148`). That getter is the real idle-HUD-showing signal, but it is
**not** a splash-safe *create* site: `LVC::Create` already stores `+0x258`
at the end of first construction.

## Exact hook bytes (re-measured)

| Site | file_off | Bytes |
|---|---|---|
| TRACE (recommended) | `0x602af0` | `2b4940f297122b4b` = `ldr r1,[pc,#0xac]; movw r2,#0x197; ldr r3,[pc,#0xac]` |
| Containing keypad proc | `0x6027a0` | `70b58b7b` = `push {r4-r6,lr}; ldrb r3,[r1,#0xe]` |
| Unique BL to keypad proc | `0x5ffe7e` | `02f08ffc` → `0x6027a0` |
| Indev process caller | `0x5ffb8c` | `2de9f04fc46887b0` |
| Predicate BL (thunk) | `0x60285c` | `c5f77ef8` → `0x5c795c` |
| True-path to TRACE | `0x602862` | `40f04581` = `bne.w 0x602af0` |
| Thunk | `0x5c795c` | `08b5fef77dff` → singleton `0x5c685c` |
| Thunk +8 tail | `0x5c6d64` | `08300ef0f3b8` = `adds r0,#8; b.w isOnStandByView` |
| `isOnStandByView` | `0x5d4f50` | `d0f85822` = `ldr.w r2,[r0,#0x258]` |
| TRACE pool | `0x602ba0` | dword `0x3c3f29e4` → ASCII `0x41add8` `launcher_is_on_standby_view.` |
| TRACE `__FILE__` | `0x41ac2c` | `../../thirdparty/star_air_lvgl/src/core/lv_indev_xjxr.c` |
| Nearby symbol string | `0x41afe0` | `indev_xjxr_keypad_proc` |
| Line immediate | `movw r2,#0x197` | source line 407 |

`0x602af0` is **instruction bytes at the TRACE**, not a PUSH prologue (the
containing function prologue is `70b58b7b` at `0x6027a0`) and not a literal
pool. A previous pool ends at `0x602aee`; this LDR’s literal is **`0x602ba0`**
(after the TRACE call). Capstone lands a single `bne.w 0x602af0` from
`0x602862` after `cmp r0,#0`. TRACE args at this site: `r0=4`, `[sp]=fmt`,
`r1=__FILE__` (`0x41ac2c`), `r2=line 0x197`, `r3=__FUNCTION__` (`0x41afe0`).

## The real signal (predicate vs create hook)

`LauncherViewController::isOnStandByView` at `0x5d4f50`:

1. `ldr.w r2,[r0,#0x258]`
2. `cbz r2` → return 0
3. `add.w r3,r0,#0x148`; `subs r0,r2,r3`; `clz`/`lsrs #5` → 1 iff equal

So idle HUD **showing** is “current view pointer equals the StandByView embed”.
There is **no** SRAM global named `launcher_is_on_standby_view`. Leaf 1.1.2
already proved the ASCII is a log line in `lv_indev_xjxr.c`. Intern MOVW cannot
encode `0x41add8`. This leaf re-read the same LDR-literal recovery: pool
`0x602ba0`, LDR `0x602af0`.

`LVC::Create` `0x5d4fc4` (`70b5444c`):

- `add.w r6,r4,#0x148` then `bl 0x5d4824` (`StandByView::Create`, which
  constructs `StandByWidgetManager` and **`createDefaultWidgets` `0x5db7c4`**)
- `bl` Dockview create
- **`str.w r6,[r4,#0x258]` at `0x5d5036` (`c4f85862`)** — predicate becomes true
- **No BL to `switchView` `0x5d51e4` and no BL to indev**

During `createDefaultWidgets` / the widget ctor, `+0x258` has **not** been
stored yet, so `isOnStandByView` is false even if input were processed on the
same thread. After Create returns the predicate is true; splash/reboot chrome
can still be up — that is why the getter itself is not a splash-safe *create*
hook. The indev TRACE is later still: it runs only when the keypad path is
processing a key **and** the thunk returned non-zero (UI taking input).

## Why not a delay

Stock `[Launcher]StandByView:: onLauncherEnterCallback delay exec` is kind
**delay**:

- Callback `0x5d3bc0` prologue `30b50a4d`
- Registration `0x5d2b0c` prologue `10b50846`: `movs r1,#0x64` (`6421` at
  `0x5d2b1e`) then `bl 0x62bdd8` (`59f058f9` at `0x5d2b24`)
- TipsModel has the same 100 ms / `lv_timer` pattern at `0x5cf3e0`

v6 guessed that **same 100 ms period** from inside `customTimeAndBatteryWidget`
(`FUN_2c5d931c`). A timer is not a view discriminator. Period 100 is still
inside bring-up. Callback `user_data` can UAF if splash tears down the clock
object. **Do not ship another delay.**

The recommended TRACE has no `movs r1,#0x64` and does not call `0x62bdd8`.

## Splash discriminator (why this site is splash_safe)

`splash_safe` here means: **object-create at this site does not run during
boot/splash `createDefaultWidgets` / widget ctor.**

Re-measured unique BLs:

| Target | Unique flash BL | Caller |
|---|---|---|
| ctor `0x5d931c` | `0x5d9d6e` | factory case 3 |
| `createDefaultWidgets` `0x5db7c4` | `0x5db962` | StandByWidgetManager ctor |
| indev keypad `0x6027a0` | `0x5ffe7e` | lv_indev process `0x5ffb8c` |
| thunk `0x5c795c` | `0x60285c` | that keypad proc only |
| `isOnStandByView` `0x5d4f50` | **zero direct BL** | reached via thunk tail `b.w` |

`createDefaultWidgets` BLs `0x5db5e4` / `0x5db634` / TRACE `0x62c82c`, not
`0x6027a0`. Ctor BLs include getter `0x5d9426` stock **`fdf757fa`**, not indev.

SplashView / StartupGuide / PowerOffAndRebootView do not BL the ctor (leaf
1.1.3). Boot **still** runs `createDefaultWidgets` → same ctor while splash or
reboot chrome can be up. A timer started in the ctor inherits that blindness.
Indev keypad processing is a different call chain: LVGL is reading the input
device. That is after the UI is taking input.

## StarryNet (not idle HUD)

`onPageSwitchFinish` `0x5c7bb0` (`30b583b0`):

- Bonded: LDR `[Launcher]Launcher::onPageSwitchFinish, show launcher.` at
  `0x5c7bd4` (`1648…`) — launcher on top and bonded, **still dock vs StandBy**
- Unbonded: LDR at `0x5c7bfe` (`0f486c22…`) then `Pages/StarryNetApp` — pairing

`onViewDidAppear` `0x5c79a8` (`10b5054c`) is a TRACE-only stub. Neither event
is the recommended hook. StarryNet pairing is a false positive for “home UI”.

## Dock (not idle HUD)

`switchView` `0x5d51e4` (`2de9f041554c84b0`) writes `isShowDock` at `+0x260`
and the current-view pointer at `+0x258`:

- `isShowDock==0` → StandByView (`strb #0`, `str &this+0x148`)
- `isShowDock==1` → Dockview (`strb #1`, `str &this+8`)

Ten BLs to `switchView` sit in later LVC methods (`0x5d5422` … `0x5d5764`),
**not** in `LVC::Create`. First boot idle face is the Create store, so first
HUD appearance need not pass `switchView`. Dock `isReady` in
`DockviewV2::changeAppPos` is a re-order flag, not HUD-ready.

## v5 / v6 (what this ranking replaces)

v5 created LVGL objects inside `customTimeAndBatteryWidget` ctor `0x5d931c`
(`2de9f0410d4682b0`) / getter BL **`0x5d9426`**. Boot `createDefaultWidgets`
hits that ctor while splash/reboot chrome can still be showing → bootloop.

v6 deferred the same create with `lv_timer_create(100 ms)` from the ctor. That
is the stock enter-delay period, not a recovered idle event.

**Replacement:** create (once) on the indev TRACE true-path at `0x602af0`,
gated by the existing predicate consult at `0x60285c`. Do not create at
`0x5d9426`, `0x5d931c`, `0x5db7c4`, `0x5d4fc4`, or `0x5d3bc0`.

## Naming split (not HUD ready)

Leaf 1.1.2 labeled `createSpecWidgets` at `0x5db634` (`2de9f041…`). Leaf 1.1.3
labeled a nearby PUSH at `0x5db5e4` (`f0b583b0…`). Both prologues remeasure.
Both run from `createDefaultWidgets` at boot. **Do not pick either as HUD ready.**

## PageManager / `lvgl_ui` wait loop

`lvgl_ui` entry `0x62f228` (`30b5`). Wait loop `0x62f2c2` `fcf791fc` /
back-edge `0x62f2d4` `f5d1`. JSON `lvgl_wait_loop_is_idle_hud_ready` is
**false**: the event pump starts while splash can still build widgets. No
page-name, bond, or StandBy vs dock test lives in that loop.

## How a later patch should use this

1. Treat `isOnStandByView` / `+0x258` as the **predicate** to read, not as the
   object-create site.
2. Hook **`0x602af0`** (or the `bne.w` true-path `0x602862`) so create runs
   only when keypad processing has already seen the predicate true. This TRACE
   can fire on later keys while still on standby; a patch must **latch once**.
3. Keep the stock getter BL `0x5d9426` = `fdf757fa`. Leave timer registration
   `0x5d2b0c` alone; do not add another 100 ms `lv_timer`.

This beats a delay because it is a **firmware event** that already means
“input path, idle HUD predicate true”, not “some milliseconds elapsed during
bring-up”.

## Verify

```
node Reverse/firmware/analysis/hud_ready/scripts/verify-hook.mjs
node Reverse/firmware/analysis/hud_ready/scripts/verify-integration.mjs
node Reverse/firmware/analysis/hud_ready/scripts/verify-regressions.mjs
```
