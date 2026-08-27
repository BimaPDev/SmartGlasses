# LVGL threads — `platform_tester.bin` (Flyme XR 1.0.12.83)

**Image:** `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (6 771 708 bytes)  
**Branch:** leaf-3 integration (`GATES-3.md`)  
**Child artifacts:** `intern_sites.json` · `thread_create_sites.json` · `service_loops.json` · `lv_core_map.json`

## Verdict

Two CMSIS-RTOS2 threads own the LVGL runtime on the M55 core:

| CMSIS name | Role | Entry file | Runtime Thumb VA | Stack | Prio |
|---|---|---|---|---:|---:|
| `lvgl_ui` | task-handler / UI thread (`lvgl_task_handler_thread` TRACE) | `0x62f228` | `0x2C63F228` | 32 KiB @ `0x3D6A1818` | 40 |
| `lvgl_async` | async IPC bridge (`lvgl_async_handler_thread` TRACE) | `0x62f0d8` | `0x2C63F0D8` | 2 KiB @ `0x3D6A1008` | 42 |

Both are created through a BES peeler at file `0x6440f0` that unpacks `{entry, attr}` and `B.W`s to `osThreadNew` @ file `0x6467e4` / VA `0x2C6567E4`.

## Address model

| Window | Rule | Derived by |
|---|---|---|
| Thumb `.text` | `VA = file_off + 0x2C010000` | 4 KiB-aligned argmax over (name, fn) pairs → 343/442 prologue hits |
| Rodata / named objects | `VA = file_off + 0x3BFD7C0C` | Intersection of `{word − path_start}` over star_air_lvgl path anchors (50/50, unique) |

Older docs and the Ghidra import (`loader-baseAddr 0x2C000000`) are **0x10000 too low** for runtime Thumb pointers. Example: `jbd4010_display` is file `0x499270` → VA **`0x2C4A9270`**, not `0x2C499270`.

## Corroboration (entry file offsets)

| Method | Leaf | `lvgl_async` | `lvgl_ui` |
|---|---|---|---|
| TRACE intern log-site → containing function | 3.1 | file `0x62f0d8` (leaf labels VA `0x2C62F0D8`) | file `0x62f228` (leaf labels VA `0x2C62F228`) |
| `osThreadAttr_t` packed `{entry,attr}` | 3.2 | `0x62f0d8` / VA `0x2C63F0D8` | `0x62f228` / VA `0x2C63F228` |
| Capstone body + service-loop back-edge | 3.3 | same | same |

**Agreeing quantity:** file offset (and runtime VA under `+0x2C010000`). Leaf-3.1’s `code_va_base` remains the certified-wrong `0x2C000000` labeling; do not rewrite 3.1.

## Service loops (from bytes)

### `lvgl_async` — unconditional tight loop

```
0x2C63F108  bl  <work @ 0x2C63EFC8>
0x2C63F10C  b   0x2C63F108          ; bytes fce7
```

Never returns (`return_sites = 0`). Capstone dump: `disasm/capstone/lvgl_async.asm`.

### `lvgl_ui` — flag-controlled wait loop

After init (including creating `lvgl_async`), the long-lived path is:

```
0x2C63F2C2  bl  <handler @ 0x2C63BBE8>
0x2C63F2C6  mov.w r1, #-1
0x2C63F2CA  ldr r0, [r5]
0x2C63F2CC  bl  <blocking wait @ 0x2C6571B4>
0x2C63F2D0  ldrb r3, [r4]
0x2C63F2D2  cmp r3, #0
0x2C63F2D4  bne 0x2C63F2C2         ; bytes f5d1
```

The entry also has a reachable `POP {r4,r5,pc}` cleanup path, so it is not a pure `while(1)` at the prologue. Dump: `disasm/capstone/lvgl_ui.asm`.

## Create sites

| Thread | Attr file | Packed def | LDR(literal) | BL peeler |
|---|---|---|---|---|
| `lvgl_async` | `0x41d970` | `0x41d96c` | `0x62f174` | `0x62f176` → `0x6440f0` |
| `lvgl_ui` | `0x41daf8` | `0x41daf4` | `0x62f3b2` | `0x62f3b4` → `0x6440f0` |

Packed-def VA has exactly one image hit; attr-alone VA has zero (negative control).

## Runtime environment (leaf-3.4, summary)

| Topic | Result | Confidence |
|---|---|---|
| Tick source | `lvgl_os_tick_timer` osTimer callback → `lv_tick_inc` with period **16**; no `SysTick` ASCII | high |
| Flush path | `disp_flush_area` — 640 px row stride, 4 bpp, packed dest `0x2005D0D0` | high |
| IPC objects | `lv_ipc_mailbox`, `lv_to_async_ipc_mailbox`, display mutexes, `jbd_mailbox`, … | high (descriptor bytes) |
| `lv_disp_draw_buf` static buffer | undetermined | gap |

## Method / confidence legend

| Claim | Method | Confidence |
|---|---|---|
| Entry file offsets | 3 independent leaves agree | **high** |
| Runtime Thumb VA | derived text base + file offset | **high** |
| `osThreadAttr_t` fields | dword decode + classifier | **high** |
| Peeler ABI (`r0=&{entry,attr}`) | signature + Capstone | **high** (labelled inference on CMSIS naming) |
| Async never-return loop | unconditional back-edge bytes | **high** |
| UI wait loop | conditional back-edge bytes | **high** |
| Callee = `lv_timer_handler` | not proved in this branch | **gap** |
| Ghidra `disasm/asm/*` absolute VAs | import base wrong by `0x10000` | do not use for runtime VAs |

## Gaps

1. Callees inside the service loops are not renamed to LVGL API symbols in this branch (no `lv_timer_handler` string in the image).
2. Leaf-3.1 still labels code VAs with `file + 0x2C000000`; consumers must normalize.
3. Pre-existing Ghidra project under `disasm/proj` uses the same low base; Capstone dumps under `disasm/capstone/` are authoritative for these two bodies.
4. Static `lv_disp_draw_buf` binding remains undetermined in `lv_core_map.json`.
5. On-device TCB walk via eshell would still help confirm stack watermarks / priorities at runtime.

## Child gate status

| Leaf | Ledger | Status |
|---|---|---|
| 3.1 TRACE→sites | `GATES-3.1.md` | ALL MET |
| 3.2 create sites | `GATES-3.2.md` | ALL MET |
| 3.3 service loops | `GATES-3.3.md` | ALL MET |
| 3.4 core map | `GATES-3.4.md` | ALL MET |
