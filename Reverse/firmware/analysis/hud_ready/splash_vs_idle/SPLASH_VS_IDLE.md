# Splash vs idle — `customTimeAndBatteryWidget` ctor

**Leaf:** 1.1.3 · **Image:** `Reverse/firmware/x_1.0.12.83/platform_tester.bin`  
**Owns:** `Reverse/firmware/analysis/hud_ready/splash_vs_idle/**`  
**Producer:** `extract_splash.py` → `splash_vs_idle.json` (prologue, BLs, TRACE pools remeasured)

v5/v6 bootlooped because object create (and v6’s 100 ms `lv_timer`) ran inside `FUN_2c5d931c` while boot/splash UI was still coming up. This leaf answers whether splash construction and idle HUD construction are the same call, and whether anything *other than a delay* can tell them apart at the ctor.

Cited only (not owned): `BATT_CIRCLE_POSTMORTEM.md`, `hud_map/time_widget.json`.

## Address model

| Window | Rule |
|---|---|
| Thumb `.text` | XIP VA = file + `0x2C000000` |
| TRACE format strings | runtime VA = file + `0x3BFD7C0C` (LDR literal). **Do not** treat `0x3C000000+file` as the same string — that alias collides with unrelated Phone/StarryNet ASCII (e.g. `outgoing` vs `StandByWidgetManager.cpp`). |
| Thumb vtable | runtime = file + `0x2C010000` \| 1 |
| Intern MOVW | pool `0x198FFC`. intern `0x864` = `customTimeAndBatteryWidget` @ `0x199860`. **Zero MOVW sites** (`time_widget.json`). |

Getter BL at file `0x5d9426` is stock `fdf757fa`. Leave it stock.

## Ctor (re-measured)

| Item | File | Bytes |
|---|---|---|
| `FUN_2c5d931c` ctor | `0x5d931c` | `2de9f0410d4682b0` = `push.w {r4-r8,lr}; mov r5,r1; sub sp,#8` |
| Spec factory `FUN_2c5d9c78` | `0x5d9c78` | `70b586b0…` |
| Unique BL to ctor | `0x5d9d6e` | factory **case 3** |
| Unique BL to factory | `0x5da032` | wrapper `FUN_2c5d9fe4` |
| Type-3 wrapper BL | `0x5db5c0` | last `movs r2,#3` then `bl` wrapper (`param_2==1` in the kind switch) |

Factory TRACE pool at `0x5d9e38` / `0x5d9e40` holds rodata VAs for `StandByWidget.cpp` (`0x1994b0`) and `customTimeAndBatteryWidget` (`0x199860`). Ghidra’s 3C-alias annotations (`outgoing`, `DialContact`) are the collision, not the source file.

## Call graph (idle HUD)

```
StandByView.cpp (vtable @ 0x197bb0 …)
  unBondReset  BL 0x5d2ace → 0x5db9a0
StandByWidgetManager.cpp
  createDefaultWidgets  0x5db7c4  (PUSH.W; intern TRACE createDefaultWidgets @ 0x199c80)
    → createSpecWidgets  0x5db5e4
      → kind switch      0x5db204   param_2==1 (time tile)
        → wrapper        0x5d9fe4   factory type 3
          → factory      0x5d9c78   case 3
            → ctor       0x5d931c   customTimeAndBatteryWidget
```

`createDefaultWidgets` is the idle grid builder **and** the first StandByView construction at boot. Context in JSON is `idle` meaning StandByWidgetManager, not “idle-HUD-ready”.

## Splash / boot UI (negative controls)

These strings exist; none BL `0x5d931c`:

| UI | String file | Code | Role |
|---|---|---|---|
| Navigation `SplashView.cpp` | `0x18c2d0` | `0x5b394c` | Navi page splash, not boot hang |
| `Pages/StartupGuide` | `0x190af8` | `0x5c52ec` (and startApp sites) | first-run page name |
| `createPowerOffAndRebootView` | `0x16e224` | `0x525a58` | StarryNet **reboot screen** |
| `Welcome to LVGL` / `boot completed` | `0x41d9ec` / `0x41da24` | `0x62f228` `lvgl_ui` | event pump, not HUD-ready |

PowerOffAndRebootView BLs into `0x5dc51c` / `0x5dc53c` are UTF-8 helpers next to the widget TU, not the spec factory.

Boot still *does* construct this widget: Launcher `onViewLoad` / first `createDefaultWidgets` runs on the same `lvgl_ui` thread while splash/reboot chrome can still be showing. That is the v5/v6 failure mode — not Navigation SplashView.

## Discriminator (not a delay)

JSON: `kind=caller`, `status=UNRECOVERED`.

Tried:

1. **caller** — only flash BL to the ctor is factory case 3. Splash pages listed above do not call it. Still shared with boot StandByView construction, so it does not gate “idle HUD” vs “splash-time ctor”.
2. **parent_object** — wrapper passes `FUN_2c5cfd1c(*this)` as the LVGL parent. One construction path; no second parent recovered.
3. **page_name** — `Pages/StartupGuide` / `Pages/Navigation` are recovered as strings, but the ctor is not passed a page name. Boot construction is already on `Pages/Launcher`.
4. **view_mode** — `switchView isShowDock` is dock vs StandBy, not boot vs idle.
5. **function** — `createDefaultWidgets` vs PowerOffAndRebootView is true at page granularity and false as a ctor predicate (boot uses createDefaultWidgets).
6. **flag** — `launcher_is_on_standby_view.` @ `0x41add8` is a TRACE tag in `lv_indev_xjxr.c` keypad proc (LDR `0x602af0`), not a boolean the ctor can load.

Stock `StandByView:: onLauncherEnterCallback delay exec` @ `0x197908` / `0x5d3bc0` is a **delay**. It must not become `discriminator.kind`.

## Why a timer from inside the ctor cannot distinguish splash vs idle

v6 deferred `lv_obj_create` with a 100 ms `lv_timer` started from `FUN_2c5d931c`. That still fires during splash because:

- The ctor is the **same function** on boot `createDefaultWidgets` and later idle rebuilds.
- Period is not a view discriminator; 100 ms is still inside bring-up.
- Callback `user_data` is the clock `lv_obj*`. If splash/reboot tears that object down, the tick is a UAF.
- The ctor has no page_name, parent-class, or standby-flag test, and a timer started there inherits that blindness.

Do not ship another object-creating veneer from this ctor until a recovered non-delay idle predicate exists.

## Verify

```
python3 Reverse/firmware/analysis/hud_ready/splash_vs_idle/extract_splash.py
node Reverse/firmware/analysis/hud_ready/scripts/verify-leaf.mjs 1.1.3
node Reverse/firmware/analysis/hud_ready/scripts/verify-pre-hook.mjs splash
```
