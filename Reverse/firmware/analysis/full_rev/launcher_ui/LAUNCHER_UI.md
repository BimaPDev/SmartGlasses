# Star Air Launcher UI — domains, views, navigation

Firmware: `platform_tester.bin` **1.0.12.83** (M55 XIP base `0x2C000000`).
Leaf: **1.3.1** · OWNS: `Reverse/firmware/analysis/full_rev/launcher_ui/**`.

Primary evidence: `export/1.0.12.83/strings/m55_ascii.txt`, `ui/page_sources.txt`,
`strings/categorized/source_files.txt`, named decomp `launcher_theme_init`.
Prior HUD/font geometry work lives under `analysis/hud_map/` — **cited only**, not owned here.

VA rule: string anchors use `va = 0x2c000000 + file_off` from `m55_ascii.txt`.
Thumb code entries come from `functions/m55/functions.csv` / decomp. Method TRACE
strings usually have **zero** absolute/MOVW/MOVT pools (BES TRACE-hash); treat those
VAs as stable rodata labels, not recovered `BL` targets.

---

## 1. Architecture (one screen, two hosts)

The glasses HUD is an LVGL app tree under `thirdparty/star_air_lvgl/app/Pages/`.

| Host | Role |
|---|---|
| **Launcher** (`Pages/Launcher`) | Home: StandBy widgets + DockviewV2 app strip; `LauncherProvider` owns `_pageManager` / `_PageStack` |
| **Assistant** (`Pages/Assistant`) | Voice / NLU **Domain** graph; domains may `startApp` other Pages (navi, translate, …) |

`LauncherViewController` switches between **StandByView** (idle HUD) and **DockviewV2**
(dock icons). Assistant overlay can force-hide launcher (`switchView assistant show,
hide launcher`).

```
                    ┌─────────────────────────────┐
   StarryNet/TP ──► │ LauncherMessageProxy /      │
   VUI / Ring   ──► │ MessageModel / StatusModel  │
                    └───────────┬─────────────────┘
                                │
              ┌─────────────────┼─────────────────┐
              ▼                 ▼                 ▼
     StandByView          DockviewV2      LauncherProvider
     (widgets/clock)      (app icons)     startAppByPageName
              │                 │                 │
              └────────┬────────┘                 │
                       ▼                          ▼
            LauncherViewController          PageManager stack
            switchView(isShowDock)          Pages/* registry
```

---

## 2. PageManager registry (`Pages/*`)

Compiled page names (string cluster @ `0x165b84`…):

| Page name | String VA | Typical entry |
|---|---|---|
| `Pages/StarryNetApp` | `0x2c165b84` | Pairing / connect guide; shown when not bonded (`Launcher::onPageSwitchFinish not bond`) |
| `Pages/Launcher` | `0x2c165b98` | Home; default `getStackTopApp` fallback |
| `Pages/SmartLife` | `0x2c165bb4` | WeChat / smart-life surfaces |
| `Pages/Navigation` | `0x2c165bd0` | AR navi; splash via `SplashView.cpp` |
| `Pages/Translation` | `0x2c165be4` | Live translate |
| `Pages/Phone` | `0x2c165c04` | Dial / call UI |
| `Pages/AirMusic` | `0x2c165c1c` | Music player |
| `Pages/Ota` | `0x2c165c38` | OTA; blocks some backHome paths |
| `Pages/Ring` | `0x2c165c48` | Ring accessory pairing UI |
| `Pages/Settings` | `0x2c165c5c` | Settings |
| `Pages/Assistant` | `0x2c165c6c` | Voice assistant + Domain runtime |
| `Pages/MMIPage` | `0x2c165c94` | Factory MMI |
| `Pages/Prompt` | `0x2c165cac` | Prompt / tip overlays |
| `Pages/Transcribe` | `0x2c174d08` | Transcribe |
| `Pages/StartupGuide` | `0x2c190af8` | First-run guide |
| `Pages/SimuTranslation` | `0x2c1914ec` | Simulated translation (LauncherService) |

`LauncherProvider::startAppByPageName` TRACE @ `0x2c190db4` is the stack push.
`backHome` TRACE @ `0x2c191094` returns to launcher when it is not already top.

---

## 3. Launcher module map (source_files / page_sources)

From `star_air_lvgl/app/Pages/Launcher/`:

| Source | Role |
|---|---|
| `Launcher.cpp` | Page lifecycle: `onViewLoad` / `DidAppear` / `onEvent` / `onPageSwitchFinish` / `startServices` |
| `LauncherProvider.cpp` | App launch gate + PageManager API (`realStartApp`, `startAppByPageName`, `backHome`, `isLauncherAppOnTop`, `checkOtaConsistency`, `shutDownWithAnim`) |
| `LauncherService.cpp` | Connect / upgrade / music-hide / mailbox (`ui_mail_box_callback`) |
| `LauncherMessageProxy.cpp` | StarryNet JSON → launcher actions |
| `model/MessageModel.cpp` | Phone-pad, health, version-mismatch, start-app messages |
| `model/StatusModel.cpp` | BLE/BR, battery, zen, brightness, volume, superApp |
| `model/WeatherModel.cpp` | Weather tile payload |
| `model/TimeModel.cpp` / `TipsModel.cpp` | Clock / tips |
| `view/DockviewV2.cpp` | Dock strip (flex, scroll, app seq, ring events) |
| `view/StandByView.cpp` | Idle HUD chrome + hints |
| `view/LauncherViewController.cpp` (`0x2c197bc8`) | Dock ↔ standby + PIP icons |
| `widget/StandByWidget.cpp` / `StandByWidgetManager.cpp` | Standby widget grid (cite hud_map for tile size) |

Theme: **`launcher_theme_init` @ `0x2c5046ba`** (decomp present) builds LVGL style
packs including `theme_style_radius12_{a,b,c}`.

---

## 4. DockviewV2 navigation graph

Dock is the icon carousel. Method TRACE cluster starts at `DockviewV2.cpp` path
`0x2c196a64`.

### 4.1 Interaction edges

| Event | Method (TRACE) | String VA | Next |
|---|---|---|---|
| Init | `DockviewV2::init` | `0x2c19744c` | `createFlexRootView` → `createFlexContent` → `createAppInfo` / `initAppSeq` |
| Tap icon | `DockviewV2::onClick` | `0x2c196c00` | `LauncherProvider` launch of mapped `pageName` / pkg (fails if scrolling / change-seq) |
| VUI | `DockviewV2::onVuiEvent` | `0x2c196ae0` | Logs `txt_id`, `pageName` |
| Ring | `DockviewV2::onRingEvent` | `0x2c196fd4` | Scroll / sports-app inject when ring connects |
| Scroll | `leftMove` / `rightMove` / `onListScrollCallback` | `0x2c196df8`… | Indicator update via `showIndicator` / `createIndicator` |
| Reorder | `changeAppPos` / `sortAppVectorSeq` / `storeValues` | `0x2c19753c`… | Persist `STORE_SEQ_APP_SIZE` index array |

### 4.2 Package ↔ page bindings (dock apps)

| Package string | VA | Notes |
|---|---|---|
| `com.upuphone.star.launcher` | `0x2c02a684` | Base launcher identity |
| `com.upuphone.star.launcher.music_player` | `0x2c1909f4` | → `Pages/AirMusic` |
| `com.upuphone.star.launcher.setting` | `0x2c190a38` | → `Pages/Settings` |
| `com.upuphone.star.launcher.user_guide` | `0x2c1972ac` | Guide / startup |
| `com.upuphone.star.launcher.sports` | `0x2c19757c` | Injected when ring connects (`changeAppPos add Sports app`) |
| `com.upuphone.star.launcher.ring.single_unbound` | `0x2c16d0d8` | Ring unbound toast path |

Launch failure paths (all under `[Launcher]…` near `0x2c190ab8`): no LVGL app for
pkg, force-upgrade ignore, superApp missing, BLE/BR not connected, third-party phone
BR missing, system sleeped, music/navi status checks.

`pageNameToIndex` fail TRACE @ `0x2c191360`.

### 4.3 Geometry (cite hud_map only)

Dock/standby **1×1 tile width 140** is `FUN_2c508910` @ `0x2c508910`
(`movs r1,#0x8c` at `0x2c50893c` → `lv_obj_set_size`). Documented in
`hud_map/patch_catalog.json` / `layout_tables.json` — not re-owned here.

---

## 5. LauncherViewController ↔ views

| Method | String VA | Behavior |
|---|---|---|
| `Create` / `release` | `0x2c19827c` / `0x2c1982a8` | Controller lifetime |
| `switchView isShowDock` | `0x2c1982e0` | StandBy ↔ Dock; `isExitToDock` |
| Assistant show | `0x2c198364` | Hide launcher; ignore input while assistant up |
| `onPipIconEventChange` | `0x2c197c84`… | PIP badge: notification / music / navigation / calendar / taxi / flight / prompt / call / default |
| Dock timer | `0x2c1981c4` | `current on dockView, resume hide dock timer` |
| Force upgrade | `0x2c1983fc` | Ignore input when upgrade mode open |

StandByView TRACE cluster @ `0x2c1976a4` (`StandByView.cpp`): hints, swipe, ring,
connect status, hide status — feeds the idle face that Dockview replaces on gesture.

---

## 6. Assistant Domain graph (NLU → UI)

Base: `Domain.cpp` @ `0x2c1804e4`, runtime `DomainRuntime.cpp` @ `0x2c17ff6c`,
fallback `NoDomain.cpp`. Domains live under
`Pages/Assistant//domain/<name>/` (double-slash in firmware paths).

Full table: see **`domain_map.md`**. Summary:

- **Routing**: `onNLUResultMessage` / `onNLUResultMessageCMD` dispatched per domain
  (`GlobalDomain`, `NavigationDomain`, `NluErrorDomain`, `VspErrorDomain`, …).
- **NavigationDomain** (`0x2c17dfb4`): POI select → send connect data / open navi card;
  bridges Assistant → `Pages/Navigation` (+ `SplashView`).
- **ApplicationDomain**: opens LVGL apps by name (launcher-adjacent).
- **TranslateDomain / FreeChatDomain / GPTDomain / WechatDomain / WeatherDomain /
  AlarmDomain / ScheduleDomain / TodoDomain / HelpingDomain / SystemSettingDomain /
  STKSDomain / InnerStkDomain / FallbackDomain**: card + TTS surfaces inside Assistant.

---

## 7. Navigation page + SplashView

`Pages/Navigation` sources include `SplashView.cpp` @ `0x2c18c2d0`, plus
`AddressView`, `NaviView`, `EndView`, `NaviPipView`, `NavigatingScene`.

Entry paths into Navigation:

1. Dock / `startAppByPageName("Pages/Navigation")` after `check navigation launch status`.
2. `LauncherProvider::startWindowAppByPkgName, start navigation` @ `0x2c191308`.
3. `NavigationDomain` NLU select (Assistant).
4. PIP icon update to navigation (`LauncherViewController::onPipIconEventChange`).

SplashView is the Navigation-local splash (not the global `Pages/StartupGuide`).

---

## 8. Cross-page edges (string-proven)

| From | To | Evidence |
|---|---|---|
| Launcher (any) | `Pages/StarryNetApp` | `onPageSwitchFinish not bond, show starrynet app` @ `0x2c191ea4` |
| StarryNet / OTA | stay | `current in ota or starrynetApp, not call backHome` @ `0x2c192678` |
| Dock tap | AirMusic / Settings / … | pkg strings + `start app pkg is %s, pageName is %s` @ `0x2c190ee0` |
| Any | Launcher | `backHome enter` @ `0x2c191094` |
| Assistant | hide Launcher | `switchView assistant show, hide launcher` @ `0x2c198364` |
| Force upgrade | Launcher/StarryNet/Ota only | `need backhome` @ `0x2c191994` |
| Ring connect | Dock sports icon | `changeAppPos add Sports app when ring connect` @ `0x2c1974ac` |
| Setting / Ring UI | internal view hops | `ui_names.txt` edges (`GuideSearchView → RingListView`, `UnbindDeviceView → DeviceListView`, …) |

Translation sub-state machine (separate page): `IdleView` / `LaunchView` /
`LaunchFailedView` / `StateView` / `TransView` (`0x2c169224`…).

---

## 9. Recovered code VAs (this leaf)

| VA | Name | Role |
|---|---|---|
| `0x2c5046ba` | `launcher_theme_init` | Theme ctor (decomp) |
| `0x2c5056b4` | `theme_style_radius12_a` | Style pack |
| `0x2c509b0c` | `theme_style_radius12_b` | Style pack |
| `0x2c50c808` | `theme_style_radius12_c` | Style pack |
| `0x2c508910` | `FUN_2c508910` | Dock/standby tile `set_size(140)` |

Intern TRACE load sites for StandByWidget `__FILE__` fragments also appear in
`hud_map/intern_map.json` (e.g. `0x2c13cf2e`) — useful for widget ctor hunting, outside
this leaf’s write scope.

---

## 10. Deliverables & verify

| File | Purpose |
|---|---|
| `LAUNCHER_UI.md` | This overview + nav graph |
| `domain_map.md` | Domain*.cpp inventory + Assistant routing |
| `manifest.json` | ≥3 `{va,name,role}` anchors |

```bash
node Reverse/firmware/analysis/full_rev/scripts/verify-leaf.mjs 1.3.1
```

Expected: `leaf 1.3.1 verification passed`.
