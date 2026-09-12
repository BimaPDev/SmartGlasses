# input.md — Input & sensors (leaf-1.6)

**Build: `Reverse/firmware/x_1.0.11.53/platform_tester.bin`, 7,042,632 B. Offsets are
build-specific to 1.0.11.53 and to this file only.**

Address model (PLAN.md): code `VA = file + 0x2C010000`; data `file = VA − 0x3BFD7CB0`.

Oracle: `node Reverse/firmware/analysis/map/verify-input.mjs` → `input verification passed`.

---

## 0. Method / controls

Every numeric claim below was re-derived from bytes, not from a manifest.

* **Positive control for the string search**: `SYS_TOUCH_EVENT` @file `0x1918c4`,
  `../../thirdparty/star_air_lvgl/src/core/lv_indev_xjxr.c` @`0x44ecd4`,
  `../../thirdparty/star_air_lvgl/src/key/lv_key_manager.c` @`0x4587d0`,
  `../../thirdparty/star_air_lvgl/src/xjxr_input/xjxr_touchpad_51158.c` @`0x4537a0`,
  `../../thirdparty/star_air_lvgl/src/xjxr_input/wear_input.c` @`0x4537e4` — all found.
* **Negative control**: the plausible-but-wrong spellings `LV_KEY_SWIPE_FORWARD`,
  `LV_KEY_TRIPLE_TAP`, `tp_move_up`, `set_touch_gesture_mode`, `xjxr_touchpad_51159.c`,
  `lv_indev_pointer_xjxr.c` are all **absent**. The search does not "always find".
* **Delta control**: `[0x61aa08]` decodes to `"time"` only under `0x3BFD7CB0`.
* **Key-code claims are anchored on a semantic check, not on a guess**: for each entry of
  the `Navigation::onTpEvent` jump table the verifier follows the branch target, decodes
  the first `LDR (literal)` in the handler, and reads the log format string it loads. The
  name `LV_KEY_SWIPE_UP` therefore comes from the firmware's own printf at that target,
  not from my ordering assumption.

---

## 1. The physical hardware

| Device | Evidence (file offset) | Notes |
|---|---|---|
| Capacitive touch strip on the right temple | `xjxr_touchpad_51158.c` @`0x4537a0`; eshell verbs `stk_tp_*` @`0x452e74`… | Sensortek **STK51158**-class cap-touch part. Its gesture vocabulary is **1-D**: left, right, tap, dual-tap, long-press. There is no `tp_move_up` / `tp_move_down` anywhere in the image (negative control). |
| Wear / proximity sensor | `STK501XX_WEAR_DAEMON_TIMER` @`0x159620`, `stk501xx_set_thd` @`0x1596ac`, `wear_detection_s.cpp` @`0x1597dc`, `wear_input.c` @`0x4537e4` | Sensortek **STK501xx** capacitive (SAR/near-far) part, driven from the **sensor-hub core**, not the M55. Has a FAR-check timer (`STK501XX_FAR_CHECK_TIMER` @`0x15963c`) and a threshold setter. |
| IMU (accel + gyro) | `accel_gyro_s.cpp` @`0x15991c`, `sensor_agm_event` @`0x159970`, `snshub_sensor_mgr.cpp` @`0x159880` | Present in the sensor-hub manager. **No head-gesture recogniser was found** — see §9. |
| BT ring remote | `xjxr-input-ring:[%s] keyevent is {%x, %x, %x}` @`0x4524d0`; eshell `bt_ring_test` @`0x452e6c` | A separate BLE ring. It is the source of the `LV_KEY_XJ_DPAD_*` / `LV_KEY_XJ_LONG_TAP_*` codes. |
| Power key | `lv_key_manager.c` @`0x4587d0`, `pwk_multiple_clicked_cb` @`0x45883c`, `LV_KEY_PWR_VOICE_ASSIST Calling: assistant_wakeup.` @`0x44ed28` | The only true button. Multi-click callback exists. |

The M55-side sensor-hub RPC is `app_sensor_hub.cpp` / `sensor_hub_core_app.c`
(`0x15797c`, `0x157f70`) over a mailbox core-bridge (`app_core_bridge_send_cmd` @`0x157b24`).

---

## 2. The LV_KEY code enum (VERIFIED)

Derived from `Navigation::onTpEvent` (`tbh` table @file `0x5ee98e`, dispatch
`sub r3, r0, #0xce ; cmp r3, #0x15 ; bhi ; tbh [pc, r3, lsl #1]` at `0x5ee982`), each
target confirmed by the LV_KEY name in the log string that target loads.

| code | name | source device |
|---|---|---|
| `0xCE` (206) | `LV_KEY_SWIPE_LEFT` | touchpad — swipe back |
| `0xCF` (207) | `LV_KEY_SWIPE_RIGHT` | touchpad — swipe forward |
| `0xD0`,`0xD1` | (not handled by any page found) | — |
| `0xD2` (210) | `LV_KEY_SINGLE_CLICKED` | touchpad — tap |
| `0xD3` (211) | `LV_KEY_DOUBLE_CLICKED` | touchpad — double tap |
| `0xD4` (212) | `LV_KEY_LONG_PRESSED` | touchpad — long press |
| `0xD5`–`0xD7` | (not handled) | — |
| `0xD8` (216) | `LV_KEY_SWIPE_DOWN` | touchpad/ring |
| `0xD9` (217) | `LV_KEY_SWIPE_UP` | touchpad/ring |
| `0xDA` (218) | `LV_KEY_XJ_LONG_TAP_DOWN` | ring |
| `0xDB` (219) | `LV_KEY_XJ_DPAD_UP` | ring |
| `0xDC` (220) | `LV_KEY_XJ_DPAD_DOWN` | ring |
| `0xDD` (221) | `LV_KEY_XJ_DPAD_LEFT` | ring |
| `0xDE` (222) | `LV_KEY_XJ_DPAD_RIGHT` | ring |
| `0xDF` (223) | `LV_KEY_XJ_LONG_TAP_UP` | ring |
| `0xE0`–`0xE2` | (not handled) | — |
| `0xE3` (227) | routed to the **same handler as `LV_KEY_LONG_PRESSED`** | ring; the paired log string `"LV_KEY_LONG_PRESSED || LV_KEY_XJ_SINGLE_PRESSURE"` @`0x194204` makes `LV_KEY_XJ_SINGLE_PRESSURE = 0xE3` the only consistent reading. Marked **inferred, not byte-proved.** |

Names never seen with a proved code: `LV_KEY_XJ_SINGLE_TAP` (aliased with
`LV_KEY_SINGLE_CLICKED` in the Translation log @`0x17a588` but only `0xD2` is tested)
and `LV_KEY_XJ_DOUBLE_TAP` (same, only `0xD3` tested). Both probably alias the touchpad
codes after normalisation in the indev layer; **not established.**

`LV_KEY_PWR_VOICE_ASSIST` is handled inside `lv_indev_xjxr.c` itself
(`0x6461bc` loads the "Calling: assistant_wakeup" string) and never reaches a page.

The 17 distinct `LV_KEY_*` spellings in the image are listed in §11.

---

## 3. The dispatch chain (touch → UI)

```
STK51158 IRQ
  └─ xjxr_touchpad_51158.c          file 0x4537a0  — driver, pushes onto g_tp_event_list
       ("error, tp event add failed." 0x454200, "xjxr_tp_mutex" 0x454354)
  └─ xjxr_touchpad_read()           "xjxr_touchpad_read: data->key = %d"  0x4542e0
       LVGL indev read callback; drains g_tp_event_list.
       Filter: "key code is not a assistant key code, give up this tp event." 0x454304
  └─ lv_indev_xjxr.c                file 0x44ecd4
       indev_xjxr_keypad_proc              0x44efc4
       indev_xjxr_keypad_app_proc          0x44ef60
       indev_xjxr_screen_off_tp_proc       0x44ef7c   ("current statu is screen off,
                                                       do not dispatch tp event." 0x44ee48)
       indev_xjxr_keypad_uincron_pressure_proc 0x44ef9c
  └─ group cascade, in this order (strings 0x44ee80 → 0x44ef1c):
       layer4 group → layer3 group → layer2 group → bg apps → foreground page
     each logs "layerN group has already handled this input event." and stops.
  └─ page handler: Page::onTpEvent(obj,key) / handleEvent(...)
```

**This 4-layer group cascade is the single most useful hook for customisation**: a page
can only see a gesture that no higher layer consumed.

### `SYS_TOUCH_EVENT`

The literal `SYS_TOUCH_EVENT` @`0x1918c4` sits in the assistant's event-name table
(neighbours `SYS_TEXT_TO_NLU`, `SYS_INF_WUW_OUT`, `NLU_RESULT` at `0x1918a4`–`0x1918e4`)
and has exactly **one** code reference, at file `0x5ceb14`. It is the name of the
touch event as published into the assistant's DomainRuntime — i.e. how a touchpad
gesture reaches a voice domain. It is *not* the touchpad driver's own event type.

### Power key — a **separate** enum

`lv_key_manager.c`'s `key_event_cb` is at file `0x682eec` (VA `0x2C692EEC`). Its switch is
`subs r4, #0xc9 ; cmp r4, #0x24 ; bhi default ; ldr.w pc, [r3, r4, lsl #2]` with a
**37-entry absolute jump table at file `0x682f80`**, plus a special `cmp r4, #0xc8`
pre-test at `0x682f32`. Only `0xC8`, `0xC9`, `0xCA`, `0xCB`, `0xCC`, `0xCD` and `0xED`
have bodies; **`0xCE`–`0xEC` all fall to the single default target `0x2C693039`** — which
is exactly the touch/ring code range from §2. So the touch codes share one number space
with the power key but are deliberately ignored by the key manager and consumed by the
LVGL indev instead.

`0xCA` → a click-counter path (`ldrb/adds/cmp #1/strb` at `0x6830b6`, then a 300 ms
(`#0x12c`) timer at `0x6830c6`) = the power-key multi-click detector.

---

## 4. What each gesture does, per context

Each row below is a real dispatch site in this binary.

### 4.1 Navigation (`Pages/Navigation/Navigation.cpp`), `onTpEvent` @`0x5ee970`

| gesture | code | action |
|---|---|---|
| swipe left | `0xCE` | handler `0x5eeb0a` (log line 0xb8) |
| swipe right | `0xCF` | handler `0x5eeb30` (line 0xbf) |
| single tap | `0xD2` | handler `0x5eeb56` (line 0xc6) |
| double tap | `0xD3` | handler `0x5eeb84` (line 0xb0) |
| long press | `0xD4`, `0xE3` | `0x5ee9de` → `0x2C5FF130`/`0x2C5FF598`, then `0x2C60003C(obj, 6 or 1)` |
| swipe down | `0xD8` | `0x5eea16` → `…(obj, 4)` |
| swipe up | `0xD9` | `0x5eea38` → `…(obj, 3)` |
| ring long-tap-down | `0xDA` | `…(obj, 6)` |
| ring dpad up | `0xDB` | `…(obj, 8)` |
| ring dpad down | `0xDC` | `…(obj, 9)` |
| ring dpad left | `0xDD` | `…(obj, 10)` |
| ring dpad right | `0xDE` | `0x5ee9ba` |
| ring long-tap-up | `0xDF` | `0x5eeae4` |

The `movs r1, #N` immediately before `b 0x2c5feb7a` is the **navigation action id**
(3,4,6,8,9,10). Those are one-byte immediates — see §7, DATA tier.

### 4.2 Translation (`Pages/Translation/ui/TransViewManager`), `handleEvent` @`0x54bc28`

A `cmp`-chain, not a table (file offsets of the `cmp r0,#imm` opcodes):

| offset | test | meaning |
|---|---|---|
| `0x54bc42` | `cmp r0, #0xd2` | single tap → line 0x2d6, `"key_code == LV_KEY_XJ_SINGLE_TAP \|\| LV_KEY_SINGLE_CLICKED"` |
| `0x54bc46` | `cmp r0, #0xd3` | double tap → `"LV_KEY_DOUBLE_CLICKED \|\| LV_KEY_XJ_DOUBLE_TAP"` |
| `0x54bc4c` | `cmp r0, #0xce` | swipe left  ┐ |
| `0x54bc50` | `cmp r0, #0xdd` | ring dpad left ┘ same body `0x54bc76` |
| `0x54bc54` | `cmp r0, #0xcf` | swipe right ┐ |
| `0x54bc5a` | `cmp r0, #0xde` | ring dpad right ┘ same body `0x54bdf4` |

Everything else falls through to "ignore". Note Translation **does not bind swipe
up/down or long press at all** — those four codes are free in this page.

### 4.3 Assistant page

Log strings at `0x194204`–`0x1943c0`, referenced from `0x5de77c`/`0x5de7a0`/`0x5dea8c`:
`LV_KEY_LONG_PRESSED || LV_KEY_XJ_SINGLE_PRESSURE`, `SWIPE_LEFT or XJ_DPAD_LEFT`,
`SWIPE_RIGHT or XJ_DPAD_RIGHT`, `SWIPE_UP or XJ_DPAD_UP`, `SWIPE_DOWN or XJ_DPAD_DOWN`.
Guard strings in the same block show the gating: `"[%s] Assistant is running"`,
`"[%s] Assistant is in continuous dialogue"`, `"[%s] Event is consumed(%d) by wechat
domain."`, `"[%s] This event comes from GlobalDomain. Ignore it."` — i.e. an active domain
can swallow the gesture before the page sees it.

### 4.4 Settings / BrightView (`Pages/Setting/ui/BrightView.cpp` @`0x178206`)

Binds `LV_KEY_XJ_LONG_TAP_DOWN` / `XJ_DPAD_LEFT` / `XJ_DPAD_RIGHT` / `XJ_LONG_TAP_UP`
(strings `0x17824c`–`0x178290`). These four strings are referenced from **≥10 distinct
call sites each** (e.g. `0x53cbec`, `0x53dd28`, `0x540cb0`, `0x5428e0`, `0x5585a4`) —
they are the shared "slider/stepper" idiom used by every settings sub-view, not just
brightness.

### 4.5 Power-off / reboot view

`"[STARRYNET_LOG][Info] PowerOffAndRebootView: power off ing ,don't handle LV_KEY_SWIPE_LEFT"` @`0x1820fc`
and the `_RIGHT` twin @`0x18215c`: swipes are explicitly suppressed once shutdown starts.

### 4.6 Music

`" LV_KEY_DOUBLE_CLICKED  stop music"` @`0x19a08f`; `registerPlayCenterTpEvent`
@`0x19a23c`; `refreshTpHintByStatus` @`0x19a190` — the on-screen touch hint is redrawn
from play state. The hint image resource is `tp_click_area_img` @`0x18120c`.

### 4.7 Teleprompter / Prompt

`swipeUp` @`0x18e4b4` and `swipeDown` @`0x18e4bc` are **method-name** literals in the
GPT/assistant card block (neighbours `startTTS`, `resetTimeout`, `startNextRound`,
`showHint`). I did **not** find a distinct `Pages/Prompt` key handler binding LV_KEY
codes. Treat teleprompter scrolling as unresolved here; leaf-1.8 owns `Pages/Prompt`.

### 4.8 Factory / MMI

`key_event_cb` logs `"key_event_cb: MMI processed"` @`0x458820`: while MMI (factory test)
is running it takes keys first. The factory list has its own `touch` item @`0x172134` and
`RIGHT SWIPE FAIL` / `LEFT SWIPE PASS` @`0x171e90`.

---

## 5. Wear detection

State machine in `wear_input.c` (`0x4537e4`). Log strings give the states verbatim:

* states: `idle` (`0x4538ac`), `wearing` (`0x4538e0`), `not_wearing` (`0x453914`),
  `lost_wearing` (`0x453a74`), plus an unknown state with its own timer
  (`xjxr_wear_unknown_timer_handler` @`0x453b54`) and `not_wearing_timer_handler`
  (`0x4539c4`) — so off-head is **debounced by a timer**, not edge-triggered.
* transition trace: `"[FWK-Wear_detect] wear state change from : %d -> %d"` (`0x453848`).
* policy: `WEAR_DETECT_FUNC_ENABLE` / `WEAR_DETECT_FUNC_DISABLE`, set by
  `xjxr_wear_input_set_policy` (`0x453ba4`/`0x453bdc`) and read by
  `xjxr_wear_input_get_policy` (`0x453c18`–`0x453c80`).
* suppressors, in the code's own words: MMI running (`0x45387c`), power-off charging
  (`0x453ab0`), high temperature (`0x453af0`), and a battery-level read (`0x453b2c`).
* telemetry: `"xjxr-input-wear: [%s] wear statu is: %d"` @`0x452564` and the five-field
  `"wear statu:%d,%d,%d,%d,%d,%s"` @`0x453cf0`; sensor-side callback
  `sensor_wear_status_callback` @`0x159834`.
* consumers: music auto-pause — `MSG_WEAR_CTRL_MUSIC_STOP_MSG` @`0x196610` and
  `MSG_WEAR_CTRL_MUSIC_START_MSG` @`0x196660`, guarded by an
  `is_wear_down_pause_state` flag so it only auto-resumes what it auto-paused.
* to the phone: `sendWearModeInfoMsg` @`0x1aa25c`
  (`"CommonMessageSender::sendWearModeInfoMsg called, wear status = %s"`).

---

## 6. What the phone can configure (CONFIG tier — no flash write)

### 6.1 BLE / StarryNet actions, `Launcher/model/MessageModel.cpp`

Action-name literals, contiguous in rodata:

| action | file offset |
|---|---|
| `set_wear_detection_mode` | `0x1a6330` |
| `get_wear_detection_mode` | `0x1a65fc` |
| `set_music_tp_control_mode` | `0x1a6394` |
| `get_music_tp_control_mode` | `0x1a6644` |
| `set_app_fast_open` | `0x1a6380` |
| `set_image_stabilization_mode` | `0x1a63b0` |
| `set_glass_sound_effect_mode` | `0x1a6348` |

These map 1:1 onto the runtime policies in §5/§7 (`wear_input_set_policy`,
`tp_ctrl_music_set_policy`, `quick_start_set_policy`). **This is the supported remap
surface and it costs nothing to try.** Cross-check with leaf-1.4 (`protocol.md`).

### 6.2 "phonepad" — the phone as a trackpad, and gesture injection

`MessageModel::handlePhonePadMsg` @`0x1a44e4`. Its JSON keys are, verbatim:

| key | offset |
|---|---|
| `doubleClick` | `0x1a45b8` |
| `longPress` | `0x1a45c4` |
| `gestureMode` | `0x1a45d0` |
| `actionType` | `0x1a45dc` |

and the decisive log line @`0x1a46d8`:

> `[Launcher]MessageModel handlePhonePadMsg, send %s event (or with gestureModeCode %d) to tp`

i.e. **the phone can synthesise touchpad events into the same queue the real touchpad
feeds.** Validation strings: `"gestureMode actionType is not match any type"` (`0x1a45e8`),
`"…is not number"` (`0x1a4640`), `"action is not match any type"` (`0x1a4690`).
The feature name appears in the feature list as `phonepad` (`0x1a447c`, in the
comma-joined list beside `screenshot`, `sport`, `brightness_model`, `feature_list`).

**Consequence for the user's goal**: a gesture can be *re-purposed* today, with no
firmware patch, by (a) flipping the relevant `set_*_mode` policy, or (b) driving
`phonepad` from a companion app and letting the firmware inject the gesture. Only
*changing what a gesture means inside a page* needs CODE.

### 6.3 Factory MMI

`set_tp_sensitivity` @`0x170920` ("set tp sensitivity" @`0x170934`), `check_tp` @`0x1708e8`,
`get_tp_status` @`0x170900` — reachable only through the factory MMI list, not normal BLE.

---

## 7. The eshell input command table — a runtime poke surface

An array of 42 `{const char *name, fn handler}` 8-byte records at file
**`0x452dec` … `0x452f3c`** (`xjxr_input_test.c` @`0x452380`), reached from the eshell/
`dimon` command path (`lv_ipc.c` @`0x458888`, `"Received ams eshell cmd:%s"` @`0x4588b8`,
`"dimon cmd1:%s"` @`0x458864`). Every handler VA is odd (Thumb) and lies in the XIP
`.text` region ≥ `0x2C479954`. Names, in table order:

```
tp_move_left  tp_move_right  tp_clicked  tp_dual_clicked  tp_move_left_hold
tp_move_right_hold  tp_move_lrl  tp_move_rlr  tp_lp
wear_worn  wear_not_worn  get_wear_statu  wear_input_disable  wear_input_enable
wear_input_get_policy  tp_ctrl_music_get_policy  bt_ring_test
stk_tp_move_left  stk_tp_move_right  stk_tp_clicked  stk_tp_dual_clicked  stk_tp_lp
display_screen_always_on  display_screen_on  display_screen_off
display_set_restore_policy  display_restore  display_clear_restore_policy
brightness_auto_change_test  brightness_auto_change_disable  brightness_auto_change_enable
disable_battary_forbid_sleep  display_record_input
display_set_screen_off_time  display_get_screen_off_time  display_aquire  display_release
assistant_input_test  wear_input_set_policy  tp_ctrl_music_set_policy
quick_start_set_policy  brightness_set_lighting_value
```

Two tiers are visible: `stk_tp_*` inject at the **driver** level, `tp_*` at the **LVGL
indev** level. The full gesture vocabulary of the real pad is therefore exactly:
`move_left`, `move_right`, `clicked`, `dual_clicked`, `lp` (long press), plus the
held/`lrl`/`rlr` combos that only exist at the `tp_*` level.

**`tp_move_lrl` and `tp_move_rlr` (left-right-left, right-left-right) have no page
binding I could find** — they look like unused/reserved combos. If true, they are free
gestures for a custom action. Marked **unconfirmed**.

---

## 8. Customization tiers

| # | Surface | Tier | Evidence / how |
|---|---|---|---|
| 1 | Wear-detect on/off | **CONFIG** | BLE `set_wear_detection_mode` `0x1a6330` → `xjxr_wear_input_set_policy` `0x453ba4`. Reversible. |
| 2 | Touchpad controls music on/off | **CONFIG** | BLE `set_music_tp_control_mode` `0x1a6394` → `tp_ctrl_music_set_policy` `0x452f24`. |
| 3 | Quick-start (gesture shortcut) policy | **CONFIG** | `quick_start_set_policy` `0x452f2c`; no BLE action name found for it — reachable via eshell. |
| 4 | Synthesising any gesture from the phone | **CONFIG** | `handlePhonePadMsg` `0x1a44e4` + log `0x1a46d8`; keys `gestureMode`/`actionType`/`doubleClick`/`longPress`. |
| 5 | Injecting a gesture for testing | **CONFIG** | the 42-entry eshell table `0x452dec`. No flash write. **Do this before any patch.** |
| 6 | Touchpad sensitivity | **CONFIG** (factory) | `set_tp_sensitivity` `0x170920`, MMI-gated. |
| 7 | Screen-off timeout that gates whether a tap wakes vs. acts | **CONFIG** | `display_set_screen_off_time` `0x452ef4`; gate string `0x44ee48`. |
| 8 | Navigation's per-gesture action id (the `movs r1,#N` at `0x5eea34`, `0x5eea56`, `0x5eea78`, `0x5eea9a`, `0x5eeabc`, `0x5eeae0`) | **DATA** | One-byte immediate in a `movs r1,#imm`. Swapping two of these swaps which navigation command a swipe issues, with a 1-byte write and no instruction-length change. Same idiom as the LVGL `movs` operands in `display.md`. |
| 9 | Remapping which **code** a page reacts to (e.g. make Translation's swipe-left run on double-tap) | **DATA** | The `cmp r0,#imm` operand bytes at `0x54bc42`/`0x54bc46`/`0x54bc4c`/`0x54bc50`/`0x54bc54`/`0x54bc5a` are single bytes (`cmp r0,#imm` = `imm, 0x28`). Editing the immediate re-binds without moving code. **Lowest-risk real remap.** |
| 10 | Re-ordering the Navigation jump table (`0x5ee98e`, 22 halfwords) | **DATA** | Each halfword is a `(target−table)/2` offset. Swapping two halfwords swaps two gestures outright. Constrained by `cmp r3,#0x15`. |
| 11 | Making the key manager consume a touch code (`0xCE`–`0xEC` currently default) | **DATA** | 4-byte absolute entries in the table at `0x682f80`; point one at an existing body. |
| 12 | A *new* gesture, a new combo, or new behaviour with no existing body | **CODE** | Needs instructions. `code-injection-blocked.md`: there is **no XIP `.text` cave in 11.53**, and `veneer.ld` is unsafe. Do not attempt. |

### Write-safety

None of the offsets proposed above lies inside a protected sub-image. For the record the
four boundary constants are HiFi4 DSP `0x04E9B4`–`0x143F14` and sensor_hub
`0x134070`–`0x14A7A4`; the verifier rejects any proposed write **strictly inside** either.
All §8 patch offsets are ≥ `0x452dec`, i.e. far above both.

---

## 9. Negative results (stated as absences, with the control that makes them meaningful)

The string search is validated by the positive/negative controls in §0. Given that:

* **No head-gesture recogniser.** `accel_gyro_s.cpp` exists in the sensor manager, but
  there is no nod/shake/tilt string, no `head_`/`nod`/`shake` symbol, and no LV_KEY code
  sourced from the IMU. The IMU appears to serve step/sport and image stabilisation
  (`set_image_stabilization_mode` `0x1a63b0`), not input.
* **No up/down on the physical pad.** The driver-level verbs are only
  `stk_tp_move_left`/`_right`/`_clicked`/`_dual_clicked`/`_lp`. `LV_KEY_SWIPE_UP`/`_DOWN`
  exist as codes but have no `stk_tp_move_up` producer. They are almost certainly ring- or
  phonepad-sourced.
* **No second physical button.** Only the power key (`lv_key_manager.c`).
* **`Pages/Prompt` key bindings not found** — see §4.7.

## 10. Where existing repo work stands

`Reverse/firmware/analysis/key_event/verify.mjs` targets **1.0.12.83**, and asserts
`STARRY__MSG__CMD__KEY_EVENT = 906` from the protobuf descriptor at `0x30674`, while
explicitly recording G2/G3 as **unmet**: it could not establish that anything assigns
`msg_cmd = 906`. I did not contradict it and I did not fix it (not my file). My finding is
adjacent and consistent: in 11.53 the *outbound* path I can see for input is
`sendWearModeInfoMsg` (`0x1aa25c`) and the `SYS_TOUCH_EVENT` publish (`0x5ceb14`), neither
of which is the protobuf `KEY_EVENT`. Whether the glasses ever emit `KEY_EVENT` to the
phone remains **open**, exactly as that ledger says.

## 11. Appendix — every `LV_KEY_*` spelling in the image (17)

`LV_KEY_SINGLE_CLICKED`, `LV_KEY_DOUBLE_CLICKED`, `LV_KEY_LONG_PRESSED`,
`LV_KEY_SWIPE_LEFT`, `LV_KEY_SWIPE_RIGHT`, `LV_KEY_SWIPE_UP`, `LV_KEY_SWIPE_DOWN`,
`LV_KEY_XJ_SINGLE_TAP`, `LV_KEY_XJ_DOUBLE_TAP`, `LV_KEY_XJ_SINGLE_PRESSURE`,
`LV_KEY_XJ_DPAD_UP`, `LV_KEY_XJ_DPAD_DOWN`, `LV_KEY_XJ_DPAD_LEFT`,
`LV_KEY_XJ_DPAD_RIGHT`, `LV_KEY_XJ_LONG_TAP_UP`, `LV_KEY_XJ_LONG_TAP_DOWN`,
`LV_KEY_PWR_VOICE_ASSIST`.
