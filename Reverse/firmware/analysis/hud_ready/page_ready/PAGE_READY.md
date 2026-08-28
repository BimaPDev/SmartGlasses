# PageManager / Launcher lifecycle vs idle HUD

**Leaf:** 1.1.4 · **Image:** `Reverse/firmware/x_1.0.12.83/platform_tester.bin`  
**Owns:** `Reverse/firmware/analysis/hud_ready/page_ready/**`  
**Producer:** `extract_page.py` → `page_ready.json` (all `string_file_off` / `code_file_off` remeasured from bytes)

This leaf answers one question: which PageManager / `Launcher.cpp` TRACE events can mean “home UI is up”, and which popular signals are **false positives** for idle HUD. Verdict up front: **none of the recovered events is idle-HUD-ready by itself**, and the `lvgl_ui` wait loop is **not** idle HUD ready.

## Address model (file offsets only)

| Window | Rule | Use |
|---|---|---|
| Thumb `.text` | runtime VA = file + `0x2C010000` (LVGL_THREAD.md) | function / vtable Thumb pointers (odd) |
| TRACE format strings | runtime VA = file + `0x3BFD7C0C` | dword in a Thumb literal pool |
| Code site | `LDR (literal) T1` of that dword | recovered for every lifecycle TRACE below |
| Intern (hud_map MOVW + pool `0x198FFC`) | **UNRECOVERED / not used** | Launcher.cpp strings sit at `0x191xxx`, *before* the pool; delta is negative |

Do not use Ghidra’s `0x2C000000` code base for these Thumb pointers. Direct XIP `file + 0x2C000000` dwords for the TRACE strings are **zero** (negative control). Only the rodata delta yields pools, and each pool has a matching LDR-literal.

`lvgl_ui` thread entry is file `0x62f228` (runtime Thumb often labeled `0x2C63F228`).

## Recovered lifecycle events

| Event | `string_file_off` | `code_file_off` (LDR) | `fn_file_off` | vtable | `idle_hud` |
|---|---|---|---|---|---|
| `onViewLoad` | `0x191f88` | `0x5c7d4e` | `0x5c7d4c` | `0x191fd8` | **no** |
| `onViewDidLoad` | `0x191d48` | `0x5c7a16` | `0x5c7a14` | `0x191fdc` | **no** |
| `onViewWillAppear` | `0x191f24` | `0x5c7c5a` | `0x5c7c58` | `0x191fe0` | **no** |
| `onViewDidAppear` | `0x191cd8` | `0x5c79aa` | `0x5c79a8` | `0x191fe4` | **maybe** |
| `onPageSwitchFinish` (show launcher) | `0x191eec` | `0x5c7bd4` | `0x5c7bb0` | `0x192010` | **maybe** |
| `onPageSwitchFinish` (StarryNet) | `0x191ea4` | `0x5c7bfe` | `0x5c7bb0` | `0x192010` | **no** |
| `onViewDidDisappear` | `0x191cfc` | `0x5c79ce` | `0x5c79cc` | `0x191fec` | **no** |
| `onViewWillDisappear` | `0x191d6c` | `0x5c7a4a` | `0x5c7a48` | `0x191fe8` | **no** |
| `onViewUnload` | `0x191d94` | `0x5c7a7a` | `0x5c7a78` | `0x191ff0` | **no** |
| `onViewDidUnload` | `0x191d24` | `0x5c79f2` | `0x5c79f0` | `0x191ff4` | **no** |
| `startServices` | `0x191f5c` | `0x5c7cfa` | `0x5c7cf8` | — (called from load) | **no** |
| `backHome` enter | `0x191094` | `0x5c5a60` | `0x5c5a38` | — (direct BL) | **maybe** |
| `isLauncherAppOnTop` | `0x190f60` | `0x5c59fa` | `0x5c59bc` | — (direct BL) | **no** |
| `startAppByPageName` | `0x190db4` | `0x5c56e8` | `0x5c5664` | — (direct BL) | **no** |

Exact ascii and intern/ptr scans live in `page_ready.json`. Offsets in this table are produced by `extract_page.py`; if they drift, trust the JSON after a re-run.

PageBase-style vtable for `Launcher.cpp` sits in the TRACE cluster at `0x191fc8`…`0x192010`. Lifecycle methods have **zero direct `BL` callers**; PageManager dispatches through those Thumb odd pointers (`file + 0x2C010000 | 1`). `backHome` / `isLauncherAppOnTop` / `startAppByPageName` are `LauncherProvider` helpers with real `BL` xrefs.

## `onViewDidAppear`

Ascii `[Launcher]Launcher::onViewDidAppear` at `0x191cd8`. The method at `0x5c79a8` is a **TRACE-only stub**:

- `push {r4,lr}`
- `LDR` format string (this TRACE) + `__FILE__` (`Launcher.cpp` @ `0x191c98`) + line immediate `0x4a` (74)
- `bl` TRACE callee file `0x62c82c` (runtime `file + 0x2C010000` = `0x2C63C82C`)
- `pop {r4,pc}`

So DidAppear means “Launcher’s view appeared enough to log”, nothing more. It does not:

- test BLE/BR bond
- distinguish `Pages/StarryNetApp` pairing from `Pages/Launcher`
- call `LauncherViewController::switchView isShowDock`
- wait for `StandByView` / `createDefaultWidgets` / `onLauncherEnterCallback delay exec`

Idle HUD is therefore **maybe** at best (page visible) and **not proven**.

## `onPageSwitchFinish` — StarryNet vs launcher

One function (`0x5c7bb0`, vtable `0x192010`) implements both outcomes after `isLauncherAppOnTop` (`BL 0x5c59bc`):

1. If launcher is **not** on top → return (not a home-ready event).
2. Bond probe (`BL 0x5c5cf8`). Non-zero → TRACE **`[Launcher]Launcher::onPageSwitchFinish, show launcher.`** @ `0x191eec` / LDR `0x5c7bd4`. This is the closest PageManager signal to “home UI is up”.
3. Bond probe zero → TRACE **`[Launcher]Launcher::onPageSwitchFinish not bond, show starrynet app.`** @ `0x191ea4` / LDR `0x5c7bfe`. The same branch `LDR`s **`Pages/StarryNetApp`** at `0x5c7c16` (pool `0x5c7c40` remeasures string `0x165b84`) and tail-calls into `startAppByPageName`. That is **pairing**, not idle HUD.

The tag string `onPageSwitchFinish` @ `0x191e90` is the TRACE method tag loaded as a pool argument on both branches (also referenced from one other site @ `0x5dee12` — do not treat the tag alone as “show launcher”).

**StarryNet is not idle HUD.** Any consumer that keys on `onPageSwitchFinish` without reading the bond branch will false-trigger on the connect-guide page.

## Dock vs StandByView

Even the bonded “show launcher” TRACE is not StandByView. `LauncherViewController::switchView isShowDock %d isAnim %d` @ `0x1982e0` (LDR `0x5d51e8`) selects:

- `isShowDock=1` → **DockviewV2** (app strip, `DockviewV2.cpp` @ `0x196a64`) — looking at home chrome, **not** idle HUD
- `isShowDock=0` → **StandByView** (clock/widgets, `StandByView.cpp` @ `0x1976a4`) — the idle face, and even then `StandByView:: onLauncherEnterCallback delay exec` @ `0x197908` is a **delayed** enter (owned by the standby_view leaf), not the TRACE itself

`launcher_is_on_standby_view.` @ `0x41add8` is a separate flag-shaped string; this leaf does not promote it to idle-HUD-ready.

So: **DidAppear ⊂ page up. PageSwitchFinish “show launcher” ⊂ launcher page on top and bonded. Idle HUD ⊂ StandByView showing, not dock, not splash, not StarryNet.**

## `lvgl_ui` wait loop is not idle HUD ready

Entry `0x62f228` (`push {r4,r5,lr}` = `30b5`). After init BLs (including the nearby `lvgl_async` bring-up), the long-lived pump is:

```
0x62f2c2  bl  handler @ 0x62bbe8     ; bytes fcf791fc   VA 0x2C63BBE8
0x62f2c6  mov.w r1, #-1
0x62f2ca  ldr r0, [r5]
0x62f2cc  bl  blocking wait @ 0x6571b4
0x62f2d0  ldrb r3, [r4]
0x62f2d2  cmp r3, #0
0x62f2d4  bne 0x62f2c2               ; bytes f5d1
```

That loop is the LVGL **event pump**. It starts as soon as init succeeds, **while splash can still be building widgets** (`onViewLoad`, `createDefaultWidgets`, `startServices`). It has no PAGE name, no bond flag, and no StandBy vs dock test.

Therefore `lvgl_wait_loop_is_idle_hud_ready` is JSON boolean **false**. Treating “`lvgl_ui` is in its wait loop” as HUD-ready is a false positive.

## `backHome`, `isLauncherAppOnTop`, `startAppByPageName`

- **`isLauncherAppOnTop`** (`0x5c59bc`): stack-top name vs `Pages/Launcher`. Query used by switchFinish and backHome. TRACE tag @ `0x190f60` fires on empty `_PageStack` / null `_pageManager` — error logs, not ready.
- **`backHome`** (`0x5c5a38`): if already on top, TRACE `launcher is on top, do nothing`; else TRACE `backHome enter` @ `0x191094` and pop toward launcher. Skipped when `[Launcher]current in ota or starrynetApp, not call backHome` @ `0x192678`. Landing view may still be dock.
- **`startAppByPageName`** (`0x5c5664`): TRACE `with pageName %s` @ `0x190db4`. Pushes whatever PAGE the caller asked for.

## PAGE names (registry cluster)

| PAGE | `string_file_off` | Role vs idle HUD |
|---|---|---|
| `Pages/StarryNetApp` | `0x165b84` | pairing; switchFinish not-bond target |
| `Pages/Launcher` | `0x165b98` | home host (StandBy **or** dock) |
| `Pages/Ota` | `0x165c38` | blocks some backHome paths |
| `Pages/Assistant` | `0x165c6c` | overlay; `switchView assistant show, hide launcher` |
| `Pages/StartupGuide` | `0x190af8` | first-run; not idle HUD |

## False-positive table

| Signal | Looks like “home” because | Actually |
|---|---|---|
| StarryNet `onPageSwitchFinish not bond` | page switch finished | `Pages/StarryNetApp` pairing / connect guide |
| Dock `switchView isShowDock=1` | launcher chrome visible | DockviewV2 strip, not StandByView idle face |
| Splash / `onViewLoad` / `createDefaultWidgets` | LVGL objects exist | widgets still under construction |
| `lvgl_ui` wait loop | UI thread is “running” | handler+wait pump; no page/bond/view discriminator |

## Recovered vs UNRECOVERED

**Recovered (LDR-literal + containing Thumb fn, TRACE strings remeasured):**  
`onViewLoad`, `onViewDidLoad`, `onViewWillAppear`, `onViewDidAppear`, `onPageSwitchFinish` (show launcher **and** StarryNet), `onViewWillDisappear`, `onViewDidDisappear`, `onViewUnload`, `onViewDidUnload`, `startServices`, `backHome` enter, `isLauncherAppOnTop` tag, `startAppByPageName` format.

**UNRECOVERED:** the 16-bit MOVW intern-id form for every row above (not the firmware’s encoding). Direct `BL` to DidAppear / PageSwitchFinish / onViewLoad (they are vtable slots, not `BL` targets). A single event with `idle_hud: "yes"` — **none exists** in this leaf; idle HUD still needs StandByView + not-dock + not-pairing + widgets settled (sibling leaves).

## Conclusion

Use **bonded** `onPageSwitchFinish, show launcher` as “Launcher page is on top”, then still wait for StandByView (not dock, not StarryNet, not splash). Never use the `lvgl_ui` wait loop as idle-HUD-ready.
