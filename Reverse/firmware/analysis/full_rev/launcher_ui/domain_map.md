# Domain map — Assistant NLU domains + Launcher page bindings

Firmware **1.0.12.83** M55. Companion to `LAUNCHER_UI.md` (leaf **1.3.1**).

String VAs = `0x2c000000 +` offset from `export/1.0.12.83/strings/m55_ascii.txt`.
Source paths also listed in `ui/page_sources.txt` and
`strings/categorized/source_files.txt`.

---

## 1. Domain base

| Symbol / file | String VA | Role |
|---|---|---|
| `Domain.cpp` | `0x2c1804e4` | Abstract NLU domain (`Pages/Assistant//domain/Domain.cpp`) |
| `DomainRuntime.cpp` | `0x2c17ff6c` | Domain registry / dispatch runtime |
| `NoDomain.cpp` | (path in page_sources) | Null / unmatched domain |
| `onNLUResultMessage` | `0x2c172b78` | Shared handler name |
| `onNLUResultMessageCMD` | `0x2c172c54` | CMD variant |

Dispatch pattern (per-domain TRACE): parse NLU payload → domain-specific card /
TTS / `startApp` side effect. Global miss / restrict:

- `SCENE_ASSISTANT_NAVIGATION_RESTRICT_DOMAIN` @ `0x2c17dfd4`

---

## 2. Concrete Domain*.cpp inventory

Paths are under `../../thirdparty/star_air_lvgl/app/Pages/Assistant//domain/…`
(note the firmware double-slash).

| Domain | Source path (trimmed) | Path / name VA | Notes |
|---|---|---|---|
| **Domain** (base) | `domain/Domain.cpp` | `0x2c1804e4` | Base class |
| **NoDomain** | `domain/NoDomain.cpp` | page_sources | Empty handler |
| **GeneralDomain** | `domain/general/GeneralDomain.cpp` | `0x2c17b024` | General intents |
| **ApplicationDomain** | `domain/application/ApplicationDomain.cpp` | `0x2c17b218` | Launch LVGL apps by pkg/page |
| **FallbackDomain** | `domain/fallback/FallbackDomain.cpp` | `0x2c17b4c8` | Fallback replies |
| **SystemSettingDomain** | `domain/SystemSetting/SystemSettingDomain.cpp` | `0x2c17b6f8` | Settings voice commands |
| **WeatherDomain** | `domain/weather/WeatherDomain.cpp` | `0x2c17c392` | Weather cards; ties to launcher weather tile |
| **AlarmDomain** | `domain/alarm/AlarmDomain.cpp` | `0x2c17c5ee` | Alarms |
| **ScheduleDomain** | `domain/schedule/ScheduleDomain.cpp` | `0x2c17ca78` | Schedule + `ScheduleDomainView` |
| **HelpingDomain** | `domain/helping/HelpingDomain.cpp` | `0x2c17cd8d` | Help / tips |
| **GPTDomain** | `domain/gpt/GPTDomain.cpp` | `0x2c17ced8` | GPT chat; `GPTDomainViewV2` / `ControllerV2` |
| **WechatDomain** | `domain/wechat/WechatDomain.cpp` | `0x2c17d748` | WeChat cards / contacts |
| **TodoDomain** | `domain/todo/TodoDomain.cpp` | `0x2c17dba8` | Todos + `TodoDomainView` |
| **NavigationDomain** | `domain/navigation/NavigationDomain.cpp` | path `0x2c17df58` / name `0x2c17dfb4` | POI → Navigation page |
| **GlobalDomain** | `domain/global/GlobalDomain.cpp` | `0x2c17e59c` | Cross-cutting NLU |
| **NluErrorDomain** | `domain/global/NluErrorDomain.cpp` | `0x2c17ed26` | NLU error TTS |
| **VspErrorDomain** | `domain/global/VspErrorDomain.cpp` | `0x2c17ef41` | VSP / speech errors |
| **TranslateDomain** | `domain/translate/TranslateDomain.cpp` | `0x2c17f1ac` | Opens / drives Translation |
| **FreeChatDomain** | `domain/freechat/FreeChatDomain.cpp` | `0x2c17f32a` | Free chat |
| **STKSDomain** | `domain/stks/STKSDomain.cpp` | `0x2c17f432` | STKS skills |
| **InnerStkDomain** | `domain/innerstk/InnerStkDomain.cpp` | `0x2c17f548` | Inner STK |

Supporting views/models (same tree): `NaviDomainView`, `NaviManager`,
`NavigationPayload`, `MultipleTimeWeatherView`, `WechatContactListView`,
`WechatMsgView`, `AlarmModel`, `SettingUtils`, …

---

## 3. NavigationDomain → Pages/Navigation

| TRACE / string | VA | Edge |
|---|---|---|
| `NavigationDomain` | `0x2c17dfb4` | Type name |
| `…onNLUResultMessage poi exits` | `0x2c17e140` | POI present |
| `…Select func, poi valid, start send connect data` | `0x2c17e170` | Start navi connect |
| `…navigation card not exists` | `0x2c17e1c8` | Card missing |
| `…addressView is running, choose from freq address` | `0x2c17e204` | Address picker |
| `SplashView.cpp` | `0x2c18c2d0` | Navigation splash view source |
| `Pages/Navigation` | `0x2c165bd0` | PageManager name |

Also: `LauncherProvider::startWindowAppByPkgName, start navigation` @ `0x2c191308`
and dock `check navigation launch status` @ `0x2c190ce8`.

---

## 4. Global / error domains

| Domain | Sample TRACE | VA |
|---|---|---|
| GlobalDomain | `GlobalDomain: onNLUResultMessage =  %s` | `0x2c17e5f0` |
| GlobalDomain | `…onNLUResultMessageCMD =  %s` | `0x2c17ea28` |
| NluErrorDomain | `NluErrorDomain: onNLUResultMessage =  %s` | `0x2c17ed9c` |
| NluErrorDomain | `…code = %d, tts = %s` | `0x2c17ee34` |
| VspErrorDomain | `VspErrorDomain: onNLUResultMessage =  %s` | `0x2c17ef9c` |
| VspErrorDomain | `…status = %s` | `0x2c17eff8` |

---

## 5. Launcher-side “domains” of responsibility (not Domain.cpp)

These are **not** Assistant Domain classes but own parallel UI state:

| Module | String / path VA | Maps to |
|---|---|---|
| `LauncherProvider` | path `0x2c190a70` | Page stack / launch policy |
| `DockviewV2` | path `0x2c196a64` | Dock icon domain (apps) |
| `StandByView` | path `0x2c1976a4` | Idle widget domain |
| `LauncherViewController` | path `0x2c197bc8` | View mode domain (dock vs standby vs PIP) |
| `StatusModel` | TRACE cluster `0x2c192070`… | Connectivity / battery / zen |
| `WeatherModel` | `0x2c192be8`… | Standby weather content |
| `MessageModel` | `0x2c192e0c`… | StarryNet → UI (see leaf 1.2.1) |

StarryNet action `change_dock_items` (leaf 1.2.1 packed blob) mutates Dockview
sequence — integration edge into this leaf’s dock graph.

---

## 6. Page ↔ Domain / app matrix

| Pages/* | Driven by Domain? | Driven by Dock/Provider? |
|---|---|---|
| Launcher | — | home / backHome |
| Assistant | all Domain*.cpp | PIP / VUI wake |
| Navigation | NavigationDomain | dock, startWindowApp, SplashView |
| Translation | TranslateDomain | dock / SimuTranslation service |
| AirMusic | ApplicationDomain (likely) | `….music_player` pkg |
| Settings | SystemSettingDomain | `….setting` pkg |
| SmartLife / Wechat | WechatDomain | SmartLife page |
| Phone | — | PhonePage views |
| Ring | — | Ring page + sports dock inject |
| Ota / StarryNetApp / StartupGuide | — | connect / upgrade / guide gates |
| Prompt / MMIPage / Transcribe | specialized | factory / prompt / transcribe |

---

## 7. View name index (non-exhaustive)

From `strings/categorized/pages.txt` / `ui_names.txt` — LVGL view classes touching
launcher or domains:

`StandByView`, `DockviewV2` (via logs), `LauncherView`, `SplashView`,
`AddressView`, `NaviView`, `EndView`, `NaviPipView`, `ScheduleDomainView`,
`TodoDomainView`, `NaviDomainView`, `GPTDomainViewV2`, `CardView`,
`VoiceAvatarView`, `SettingView`, `BrightView`, `IdleView`, `LaunchView`,
`LaunchFailedView`, `TransView`, …

Setting/Ring internal hops (examples):

- `GuideSearchView → RingListView` / `SearchFailedView`
- `UnbindDeviceView → DeviceListView` / `MoreView`
- `VersionInfoView → GuideSearchView` / `SingleUnboundView`
- `ConnectedViewV1 → OperationGuideView` / `RemoveView`

---

## 8. Evidence notes

1. Domain `__FILE__` strings embed absolute-ish build paths; offsets in `m55_ascii`
   sometimes sit mid-prefix (e.g. `W,../../thirdparty/…`). Prefer the VA of the
   `../../thirdparty/…Domain.cpp` occurrence listed above.
2. Thumb function entries for Domain methods are **not** recovered in this leaf
   (same TRACE-hash limitation as MessageModel). Use string anchors + page_sources.
3. HUD tile/font patch sites remain under `analysis/hud_map/` — cite only.
