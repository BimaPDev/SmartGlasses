# Idle HUD-ready strings (`platform_tester.bin` 1.0.12.83)

Leaf 1.1.1 catalogs firmware strings that could be the **real idle-HUD-ready signal**, as opposed to a guessed delay. Offsets were re-measured as NUL-terminated starts in `Reverse/firmware/x_1.0.12.83/platform_tester.bin`. Do not copy these numbers from older prose; rebuild with `extract_strings.py`.

In-tree `m55_ascii.txt` is not present (it is an optional dump from `Reverse/tools/export_everything.py`). The same keyword scan was run on the binary that dump would have been carved from.

## Verdict

**Stock `[Launcher]StandByView:: onLauncherEnterCallback delay exec` is a DELAY, not idle-HUD-ready.** The matching TipsModel string `[Launcher]TipsModel:: onLauncherEnterCallback delay exec` is the same pattern. The prior battery-circle v6 patch that used `lv_timer_create(100 ms)` after the `customTimeAndBatteryWidget` constructor is also a guessed delay. Neither is a firmware “HUD is ready” event.

The strongest *candidates* (not proven ready; later leaves must discriminate) are:

| Rank | String | Why it is a candidate | Why it is not proven |
|---|---|---|---|
| 1 | `launcher_is_on_standby_view.` | Named **flag**, not a timer | Only proves the launcher thinks it is on standby view |
| 2 | `[Launcher]Launcher::onViewDidAppear` | Lifecycle event after the launcher view appears | Appear ≠ widgets painted / idle HUD settled |
| 3 | `[Launcher]Launcher::onPageSwitchFinish, show launcher.` | Page switch finished **and** the launcher branch ran | Sibling branch shows StarryNet when unbonded |

## Address model

| Field | Rule | Use |
|---|---|---|
| `file_off` | Offset in `platform_tester.bin` | Ground truth |
| `va_xip` | `file_off + 0x2C000000` | Schema / Ghidra import base. **0x10000 too low** for live M55 Thumb |
| Rodata runtime | `file_off + 0x3BFD7C0C` | How these strings are actually addressed (PSRAM copy) |
| Live Thumb | `file_off + 0x2C010000` | Runtime PC window from LVGL_THREAD.md |

`va_xip` in the JSON is the contract XIP labeling, not the live pointer.

## How xrefs were recovered

BES `star_air_lvgl` TRACE strings are **not** 16-bit intern IDs. **TRACE intern often has ZERO absolute xrefs** on the flat XIP mapping:

- Little-endian dwords `0x2C000000+file_off` (and Thumb `+1`): **zero** for every catalogued string.
- MOVW intern ids (`imm16 = file_off` if `<0x10000`, or `file_off - 0x198FFC` in the intern-pool window): **not used** for recovery here. Two MOVW immediates coincidentally match `createDefaultWidgets` (`#0xc84` pool-delta at `0x5fa480` is a `cmp`, `#0x9c80` at `0x4aa252` is overwritten before any pointer use). Those are **not** code sites.
- Recovery that worked: dword `file_off + 0x3BFD7C0C` in a Thumb literal pool, loaded with **LDR (literal) T1/T2**. `code_sites[].file_off` is the containing-function Thumb **PUSH** prologue (T1 or PUSH.W `0xE92D`).

`hud_map/intern_map.json` (MOVW imm16 + `0x198FFC`) is **not** a valid decoder for these strings.

## DELAY (explicitly not idle-HUD-ready)

| id | file_off | Code prologue |
|---|---|---|
| `standby_onLauncherEnterCallback_delay_exec` | `0x197908` | `0x5d3bc0` |
| `tips_onLauncherEnterCallback_delay_exec` | `0x196644` | `0x5cf3e0` |
| `onLauncherEnterCallback` | `0x195db0` | `0x5ce3c4` |
| `tips_onLauncherEnterCallback` | `0x195dc8` | `0x5ce3c4` (entry log before the delay fires) |
| `tips_tts_extra_5s_delay` | `0x195e9c` | `0x5ce54c` — another named delay (“add more 5 second”) |
| `tips_delay_show_operation` | `0x196680` | `0x5cf3e0` |

The StandByView delay-exec log is the stock name the v6 patch was trying to approximate. **Hooking or waiting on this callback is waiting on a delay, not on idle HUD ready.**

## Lifecycle events (candidates, not ready by themselves)

`onViewDidAppear` (`0x191cd8`, fn `0x5c79a8`) is the launcher-view appear TRACE. Family in the same `Launcher.cpp` blob (`0x191c98`): `onViewDidDisappear`, `onViewWillAppear`, `onViewLoad`, `onViewDidLoad`, `onViewDidUnload`, `onViewWillDisappear`, `onViewUnload`.

`onPageSwitchFinish` (`0x191e90`) is the event tag. The same function (`0x5c7bb0`) branches:

- `[Launcher]Launcher::onPageSwitchFinish, show launcher.` — launcher path (candidate).
- `[Launcher]Launcher::onPageSwitchFinish not bond, show starrynet app.` — **pairing false positive**.

`StateDidAppearExecute` (`0x19b078`, fn `0x5df27e`) is a generic page-state name. It is **not** idle-HUD-ready.

## Flag candidates

- `launcher_is_on_standby_view.` at `0x41add8` (LVGL rodata band), fn `0x6027a0`. Best named standby-view flag. Still not “widgets finished first paint”.
- `isLauncherAppOnTop` at `0x190f60` — app-on-top, not standby HUD.
- TipsModel bitmask log at `0x195bac` includes `isLauncherShow` and `isShowDock` — status dump, not a ready pulse.

## Widget construction is not ready

`createDefaultWidgets` (`0x199c80`) / `[Launcher]createDefaultWidgets` (`0x199c98`) / `widgetList size` (`0x199cf0`) all TRACE from fn `0x5db7c4` in `StandByWidgetManager.cpp` (`0x199914`). `createSpecWidgets` (`0x199b68`) is the sibling. `customTimeAndBatteryWidget` (`0x199860`, fn `0x5d9c78`) is the v6 ctor target. Building widgets ≠ idle HUD ready.

`[Launcher]standby widgets count: %d` (`0x194d30`) is a count log, not a ready flag.

`[Launcher]StandByView::changeHideStatus isHide %d, isAnim %d` (`0x197a80`) is show/hide animation, not first paint.

## False positives

### StarryNet pairing (not idle HUD)

- `[Launcher]Launcher::onPageSwitchFinish not bond, show starrynet app.`
- `[Launcher]current app is not launcher, wait for starrynet app exit`
- `[Launcher]current in starrynet app, not show connect toast`
- `[Launcher]unbond, reset standby view widget to default status`

Unbonded glasses show the StarryNet pairing app instead of the launcher. Treating `onPageSwitchFinish` as HUD-ready without the “show launcher” branch will fire on the pairing UI.

### Dock (not idle HUD)

- `[Launcher]LauncherViewController::switchView isShowDock %d isAnim %d`
- `[Launcher]LauncherViewController::switchView assistant show, hide launcher`
- `[Launcher]LauncherViewController current on dockView, resume hide dock timer`
- `[Launcher]TipsModel:: current show dock, wait for back to standby`
- `[Launcher]DockviewV2::changeAppPos isReady: %d, isChangeSeq: %d` — the word **isReady** is a dock re-order flag, not HUD-ready.

### Splash / boot (would falsely look like HUD-ready)

- `SplashView.cpp` path `0x18c2d0` — Navigation splash, not launcher idle.
- `Pages/StartupGuide` `0x190af8` and bare `StartupGuide` `0x19a15c`.
- `boot completed.\r\n` `0x41da24` and `Welcome to LVGL\r\n` `0x41d9ec` — `lvgl_ui` thread (`0x62f228`) boot, **not** idle HUD.
- `onViewDidLoad turn on screen` — AirMusic, not launcher.
- `disp_flush_area` `0x41df78` — display flush helper; **not** “first paint of idle HUD”. No `first paint` / `first frame` / `HUD` string exists in this image.

Keyword scan (DidAppear, DidDisappear, onViewLoad, standby, splash, hide/show launcher, widgetList, createDefault, createSpec, HUD, idle, ready, boot complete, first paint, flush): **no string says idle HUD is ready**. `idle` hits are HFP/channel state. `ready` hits are ring-algo / file-xfer / `xr_trace_is_data_ready`, plus the dock `isReady` false positive.

## Recovered vs UNRECOVERED code sites

| Count | Meaning |
|---:|---|
| 44 / 45 | `xref_kind=ldr_literal` with at least one containing-fn prologue |
| 1 / 45 | `StartupGuide` (`0x19a15c`): `xref_kind=dword_ptr` only — page-name table at `0x19a1c8` (`Assistant`/`Wechat`/… sit next to it). **Code site UNRECOVERED** (no Thumb LDR). |
| 0 / 45 | `intern_movw` or flat-XIP `dword_ptr` code sites |
| 0 / 45 | Invented VAs |

Rebuild: `python3 Reverse/firmware/analysis/hud_ready/strings/extract_strings.py`.
