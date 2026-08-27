# Touch input / STK5115 — Ghidra + Capstone decompilation

**Firmware:** `x_1.0.12.83/platform_tester.bin`  
**XIP base:** `0x2C000000` (file offset = VA − `0x2C000000`)  
**`.rodata` alias:** `0x3C000000` (TRACE uses interned IDs; absolute string xrefs are empty)

**Source paths (from strings):**

| Path token | Role |
|---|---|
| `platform/drivers/stk5115_tp/stk50xx.c` | STK5115 touch driver |
| `platform/drivers/stk51155_tp/stk501xx.c` | STK51155 variant |
| `platform/drivers/stk51158_tp/stk51158.c` | STK51158 variant |
| `stk_gesture_lib*.c` | Gesture classifier |
| `xjxr_sensor_mgr/.../wear_detection.cpp` | Wear / on-head detect |
| `xjxr_input/xjxr_touchpad*.c` | LVGL input bridge |
| `lv_indev_xjxr.c` | LVGL indev glue |
| `factory/.../key_base.c` | Factory key / MMI |

Related factory / BLE names: `check_tp`, `get_tp_status`, `set_tp_sensitivity`, `set_wear_detection_mode`, `get_wear_detection_mode`, `enable_wear_detection`.

**Readable reconstruction:** [`touch_reconstructed.c`](touch_reconstructed.c)  
**VA map:** [`manifest.json`](manifest.json)

---

## How the cluster was found

String absolute / `LDR [pc]` / MOVW·MOVT xrefs to `stk5115_*` are **zero** (same PIC + interned TRACE model as JBD013 / VGLite). Location method:

1. Prior note (`BATT_CIRCLE_POSTMORTEM.md`) flagged `FUN_2c49E3B0` as TP-adjacent.
2. Capstone walk of `0x2C49B000–0x2C4A0000` found I2C helpers calling `FUN_2c4BD450` / `FUN_2c4BD438`.
3. **Chip-ID immediate:** `FUN_2c49D6AC` reads register `0` and requires value **`0xA0`**, then validates a register table — matches STK501xx / STK5115 bring-up (`stk_get_pid` / `Start Initial stk501xx` strings).
4. Board init `FUN_2c4C1688` calls reg-init `0x2C49BC4C` → probe `0x2C49DA14` → post-init `0x2C4C0EB4`. TRACE line `0x20D` on failure.
5. Wear/prox state machine `FUN_2c4C1044` compares live reading vs thresholds and calls `FUN_2c49C0CC(0x1B, …)` (enable / phase bit).

---

## Architecture

```
platform bring-up (caller @ 0x2C48C54E)
        │
        ▼
stk5115_board_init (0x2C4C1688)
        ├── stk_reg_table_init (0x2C49BC4C)   I2C write stream regs 0x10…
        ├── stk501xx_init_client (0x2C49DA14)  retry probe
        │         └── stk_probe_pid (0x2C49D6AC)  reg0 == 0xA0
        └── stk_post_init_irqs (0x2C4C0EB4)

IRQ / work / sensitivity:
  stk_attr_dispatch (0x2C4C16FE) ──► stk_set_attr (0x2C49C0CC)
  stk_wear_thresh_sm (0x2C4C1044) ──► prox near/far + TRACE
  stk_alg_work (0x2C49B970)         ──► strength → class 0..3

I2C byte path:
  stk_i2c_write8 (0x2C49B2C0) → hal_i2c_write (0x2C4BD438)
  stk_i2c_read8  (0x2C49C6A0) → hal_i2c_read  (0x2C4BD450)
  stk_i2c_read16 (0x2C49C9E8) → hal_i2c_read  (len=2)
```

LVGL / ring path (strings; Thumb entries for `xjxr_touchpad_unicron` remain TRACE-opaque like other UI TUs):

- Temple pad gestures: `TWS_EventGesture:Click|Double Click|Long Press 800ms|Slide Up|Slide Down`
- Ring HOGP → `xjxr_touchpad_unicron` / `bt_ring_event_cb` (see ring leaf)
- Wear BLE actions: `set_wear_detection_mode` / `get_wear_detection_mode` @ file `0x194BF8` / `0x194EC4`

---

## Key functions

| Semantic name | VA | File off | Role |
|---|---|---|---|
| **`stk5115_board_init`** | `0x2C4C1688` | `0x4C1688` | Top-level STK bring-up; TRACE `0x20D` if post-check fails |
| **`stk_reg_table_init`** | `0x2C49BC4C` | `0x49BC4C` | GPIO/I2C prep + write init table (`0x10←0x7F`, `0x11←0x9F`, …) |
| **`stk501xx_init_client`** | `0x2C49DA14` | `0x49DA14` | Retries `stk_probe_pid` with 250+100 ms delays |
| **`stk_probe_pid`** | `0x2C49D6AC` | `0x49D6AC` | Read reg `0`, expect **`0xA0`**; dump/compare more regs |
| **`stk_i2c_read8`** | `0x2C49C6A0` | `0x49C6A0` | `STK501XX_REG_READ` — 1-byte read via HAL |
| **`stk_i2c_read16`** | `0x2C49C9E8` | `0x49C9E8` | 2-byte read (e.g. raw @ `0xA4`), TRACE on bus err |
| **`stk_i2c_write8`** | `0x2C49B2C0` | `0x49B2C0` | `STK501XX_REG_WRITE` — `{reg,val}` with 3 retries |
| **`stk_i2c_update_bits`** | `0x2C49B35C` | `0x49B35C` | RMW helper used by enable / IRQ mask |
| **`stk_set_attr`** | `0x2C49C0CC` | `0x49C0CC` | Attr / sensitivity / enable mux (large switch) |
| **`stk_get_attr`** | `0x2C49DE50` | `0x49DE50` | Read prox/phase attrs; reg `0xAB`, raw `0xA4` |
| **`stk_wear_thresh_sm`** | `0x2C4C1044` | `0x4C1044` | Wear/prox threshold FSM; toggles attr `0x1B` |
| **`stk_attr_dispatch`** | `0x2C4C16FE` | `0x4C16FE` | Higher cmd mux (`0x3D` sensitivity pack, timers, …) |
| **`stk_alg_work`** | `0x2C49B970` | `0x49B970` | Algorithm / gesture class from magnitude bands |
| **`hal_i2c_read`** | `0x2C4BD450` | `0x4BD450` | Shared HAL read (also used by other sensors) |
| **`tp_reg_read32_be`** | `0x2C49E3B0` | `0x49E3B0` | BE32 register read helper (TP/panel adjacency) |

---

## Register evidence (from binary — not a full datasheet map)

Confirmed by immediates in `stk_probe_pid` / `stk_reg_table_init` / `stk_get_attr`:

| Reg | Evidence |
|---|---|
| `0x00` | PID / chip id; must equal **`0xA0`** or TRACE fail (`stk_get_pid error` path) |
| `0x08` | IRQ / status nibble; upper nibble must be `0` during init |
| `0x0B` | Flag byte; sign bit checked during probe |
| `0x10`–`0x1C` | Init write stream (`0x7F`, `0x9F`, `0x08`, `0xCF`, `0x04`, `0x59`, `0x60`, `0xFF`, `0xAB`, `0x00`, …) |
| `0x1D` | IRQ/enable bitfield via `stk_i2c_update_bits` |
| `0x30`–`0x32` | Read-back trio logged after init (TRACE line `0x30B`) |
| `0xA4` | 16-bit raw / CADC-related (`stk_get_cadc_*` strings) |
| `0xA6` | Byte compared during calib helper `FUN_2c49C7B0` |
| `0xAB` | Phase / prox flag stored at device+`0x38` |

No complete public STK5115 register map was applied; only addresses appearing as immediates in these functions are listed.

---

## Wear detection

- Firmware TU: `wear_detection.cpp` / `wear_detection_s.cpp` / `wear_input.c` / `item_wear_detection.c`.
- Runtime FSM with binary evidence: **`stk_wear_thresh_sm` @ `0x2C4C1044`** — compares live sample from `FUN_2c49D154` against high/low watermarks, fires TRACE at lines `0x18D` / `0x194` / `0x1A1`, and drives attr `0x1B` through `stk_set_attr`.
- BLE: packed action names `set_wear_detection_mode` / `get_wear_detection_mode` (file offs `0x194BF8` / `0x194EC4`); factory `enable_wear_detection`.
- SAR sibling strings (`[SAR]: stk5115_check cadc`) live in a separate sensor-hub string band (`~0x147xxx`) and are not claimed as this temple-TP cluster.

---

## Gesture hooks

- Log tokens: `STK_identifyGesture`, `STK_identifyGesture_51155`, `TWS_EventGesture:*`, `Undefined Gesture`.
- Strength→class logic with binary evidence: **`stk_alg_work` @ `0x2C49B970`** (bands `<0x1E`, `<0x6F`, `<0x1B9`, … → classes `0..3`).
- Long-press **800 ms** appears in UI strings; temple-pad LVGL bridge (`xjxr_touchpad_5115*.c`) is TRACE-opaque (0 absolute xrefs), same limitation as other LVGL leaves.

---

## Notes / limits

- Do not treat `__func__` / path string VAs (`0x2C045DF8` `stk5115_init`, etc.) as code pointers.
- `FUN_2c49E3B0` sits in the same VA neighborhood as JBD panel helpers; use it only as a BE32 read helper, not as the primary STK entry.
- Multiple STK SKUs are compiled in (5115 / 51155 / 51158 / 4pad); this leaf maps the **active I2C probe path** that expects PID `0xA0`.
