# StandByView / LauncherViewController — idle HUD vs dock vs delay

Firmware: `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (1.0.12.83).
Leaf: **1.1.2**. File offsets are the source of truth. `va_xip = file_off + 0x2C000000`.
Rodata TRACE pointers use runtime VA `file_off + 0x3bfd7c0c` (not intern). Runtime Thumb
function pointers in pools use `file_off + 0x2C010000 | 1` (labeled separately).

## Verdict

The idle HUD is **StandByView**, owned by `LauncherViewController`. Showing it is an
instance-field compare, not a named SRAM global and not the stock enter delay.

- **Ready-looking TRACE** `launcher_is_on_standby_view.` at file `0x41add8` is a **log
  line** in `lv_indev_xjxr.c`. Intern MOVW cannot reach it. LDR-literal recovers the
  indev site; the predicate it consults is `LauncherViewController::isOnStandByView`.
- **Stock delay** `[Launcher]StandByView:: onLauncherEnterCallback delay exec` at
  `0x197908` is registered as a **100 ms** timer (`movs r1,#0x64` then `bl 0x62bdd8`).
  Recorded as **kind delay**. It is **not** idle-HUD-ready. v6’s
  `lv_timer_create(100 ms)` guess inside `customTimeAndBatteryWidget` is this
  callback’s registration, not a widget-ctor ready hook.
- **No SRAM byte named `launcher_is_on_standby_view`**. Stored state is LVC
  `this+0x258` (current-view pointer) and `this+0x260` (isShowDock). Setters exist
  (`Create`, `switchView`). Do not invent a standalone SRAM address.

## Address / xref method

TRACE format strings in the `0x196xxx–0x199xxx` cluster and the indev blob at
`0x41add8` have **zero** little-endian dwords at `0x2C000000+off` or `0x3C000000+off`.
They **do** appear as `file_off + 0x3bfd7c0c` in Thumb literal pools. Each pool word
is loaded with `LDR (literal) T1`. Containing functions are recovered by walking back
to a Thumb `PUSH` / `PUSH.W` (`0xE92D`) that linear-Capstone-lands on the LDR.
`fw_common.is_push_prologue`’s T2 mask never matches `0xE92D`; this leaf uses a local
decoder so `switchView` / `createDefaultWidgets` start at the real `PUSH.W`.

Intern hunt for the flag string: required id `0x41add8 - 0x198ffc = 0x281ddc` is not
an imm16, so MOVW intern is impossible (0 sites). That is a real negative, not a
missed SRAM flag.

## Call graph

```
Pages/Launcher onViewLoad / Create
        │
        ▼
LauncherViewController::Create          file 0x5d4fc4  va_xip 0x2c5d4fc4
        │  StandByView embed = this+0x148
        │  Dockview embed    = this+8
        │  str this+0x258, &StandByView     ← default current view = standby
        │  hide-dock osTimer at this+0x25c
        ├─► StandByView::Create             file 0x5d4824
        │         │
        │         ├─► StandByWidgetManager::ctor   this+0x98   file 0x5db938
        │         │         └─► createDefaultWidgets           file 0x5db7c4
        │         │                   (tail pop.w pc @ 0x5db8ce)
        │         └─► createHintLabel                          file 0x5d2f40
        │
        └─► registerOnLauncherEnterDelay    file 0x5d2b0c
                  period 0x64 (100)
                  callback StandByView::onLauncherEnterCallback  file 0x5d3bc0
                  kind = delay  (TRACE "delay exec")

enter STANDBY  (isShowDock==0, isHide==0)
        LauncherViewController::switchView  file 0x5d51e4  PUSH.W
            strb #0, this+0x260             ← isShowDock = 0
            str  &this+0x148, this+0x258    ← current = StandByView
            bl changeHideStatus(isHide=0)   file 0x5d45b4
            (optional hide-dock timer pause)

enter DOCK     (isShowDock==1)
        switchView
            strb #1, this+0x260
            str  &this+8, this+0x258        ← current = Dockview
            bl changeHideStatus(isHide=1)   on the standby object
            resume hide-dock timer          (onExitRingHoldStatus reads +0x260)

idle-HUD-showing predicate
        isOnStandByView                     file 0x5d4f50
            ldr.w r2, [r0,#0x258]
            r0 = 1 iff r2 == &r0+0x148
        indev_xjxr_keypad_proc              file 0x6027a0
            BL thunk 0x5c795c → singleton then +8 → isOnStandByView
            if true: TRACE "launcher_is_on_standby_view."   file 0x41add8 / LDR 0x602af0

SPLASH (not this idle HUD)
        SplashView.cpp lives under Pages/Navigation (string cluster ~0x18c2d0).
        LVC::Create never constructs SplashView. Navigation splash is a different
        page stack entry. Do not treat splash widget ctor or this enter-delay as ready.
```

## Function table (re-measured)

| Name | file_off | va_xip | prologue | kind |
|---|---|---|---|---|
| StandByView::createHintLabel | `0x5d2f40` | `0x2c5d2f40` | `70b50446` | lifecycle |
| StandByView::updateHintIndicatorStatus | `0x5d31fe` | `0x2c5d31fe` | `30b50d46` | other |
| StandByView::updateTipsViewAlign | `0x5d3678` | `0x2c5d3678` | `30b50446` | other |
| StandByView::onLauncherEnterCallback | `0x5d3bc0` | `0x2c5d3bc0` | `30b50a4d` | **delay** |
| StandByView::registerOnLauncherEnterDelay | `0x5d2b0c` | `0x2c5d2b0c` | `10b50846` | **delay** |
| StandByView::showDisconnectHint | `0x5d3e90` | `0x2c5d3e90` | `f0b52a4c` | other |
| StandByView::onRingEvent | `0x5d400c` | `0x2c5d400c` | `30b50c46` | other |
| StandByView::onSwipe | `0x5d4250` | `0x2c5d4250` | `70b5244e` | other |
| StandByView::handleConnectStatusChange | `0x5d4394` | `0x2c5d4394` | `30b52e4c` | other |
| StandByView::changeHideStatus | `0x5d45b4` | `0x2c5d45b4` | `f0b5abb0` | switch |
| StandByView::Create | `0x5d4824` | `0x2c5d4824` | `38b50446` | lifecycle |
| LVC::Create | `0x5d4fc4` | `0x2c5d4fc4` | `70b5444c` | lifecycle |
| LVC::release | `0x5d511c` | `0x2c5d511c` | `30b5274d` | lifecycle |
| LVC::switchView | `0x5d51e4` | `0x2c5d51e4` | `2de9f041…` | switch |
| LVC::isOnStandByView | `0x5d4f50` | `0x2c5d4f50` | `d0f85822` | other |
| LVC::onExitRingHoldStatus | `0x5d4cd8` | `0x2c5d4cd8` | `30b5174d` | other |
| StandByWidgetManager::ctor | `0x5db938` | `0x2c5db938` | `10b50b46` | lifecycle |
| createDefaultWidgets | `0x5db7c4` | `0x2c5db7c4` | `2de9f04f…` | lifecycle |
| createSpecWidgets | `0x5db634` | `0x2c5db634` | `2de9f041…` | lifecycle |
| unBondReset | `0x5db9a0` | `0x2c5db9a0` | `10b50b4c` | lifecycle |
| TipsModel::onLauncherEnterCallback | `0x5cf3e0` | `0x2c5cf3e0` | `f0b5294d` | **delay** |
| indev_xjxr_keypad_proc | `0x6027a0` | `0x2c6027a0` | `70b58b7b` | other |

## Delay vs ready

`StandByView::onLauncherEnterCallback` at `0x5d3bc0`:

1. TRACE `"delay exec"` (kind **delay**).
2. `ldr r0,[r4,#0xc]`; if non-null, tail-call `0x5d3b14` (privacy/NV follow-up).
3. Registered from `0x5d2b0c` with period **100**, helper `0x62bdd8` (same timer
   create used for the hide-dock timer). Pointer in pool: runtime Thumb
   `0x2c5e3bc1` at file `0x5d2b34`.

`TipsModel::onLauncherEnterCallback` at `0x5cf3e0` is a second delay (tips while
dock is showing wait to return to standby). Also **kind delay**.

Neither delay is a discriminator that the idle HUD has finished painting.

## Flag store

**A real store exists**, but it is not a global named `launcher_is_on_standby_view`.

| Field | Offset on LVC | Writer | Reader |
|---|---|---|---|
| current view pointer | `+0x258` | Create (`&StandByView`); switchView | isOnStandByView |
| isShowDock byte | `+0x260` | switchView `strb r7` (0 standby / 1 dock) | onExitRingHoldStatus `ldrb` |

`changeHideStatus(isHide=0)` runs on enter standby; `updateHintIndicatorStatus`
logs `isHide`. Those are view-chrome flags on **StandByView**, not a process-wide
SRAM ready bit.

createDefaultWidgets **callers**: StandByWidgetManager ctor `0x5db938` (`bl 0x5db7c4`)
and unBondReset tail `b.w 0x5db7c4`. **Tail**: stack-canary then `pop.w {…,pc}` at
`0x5db8ce`. createSpecWidgets **callers**: `remoteDeviceTypeChangeCallback` wrapper
`0x5db794` and the no-space/saved-sp paths inside `0x5db634` itself.

## Extract / verify

```
python3 Reverse/firmware/analysis/hud_ready/standby_view/extract_standby.py
node Reverse/firmware/analysis/hud_ready/scripts/verify-leaf.mjs 1.1.2
node Reverse/firmware/analysis/hud_ready/scripts/verify-delay-named.mjs standby
```
