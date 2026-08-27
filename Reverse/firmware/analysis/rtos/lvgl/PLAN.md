# PLAN — leaf-3: Locate the LVGL thread(s) in platform_tester.bin

Contract: recover the *actual code* of the LVGL threads on the M55 core —
entry-function VAs, creation sites (osThreadNew / osThreadAttr_t), the
lv_timer_handler service loop, tick source, and the mailbox wiring — replacing
the name-only rows in `../RTOS_MAP.md` §2.

Image: `Reverse/firmware/x_1.0.12.83/platform_tester.bin`, XIP base `0x2C000000`,
SRAM/TRACE string alias `0x3C000000`, size 0x6753FC.

## Known anchors (pre-verified by orchestrator)

| Fact | Value |
|---|---|
| `lv_app.c` path string | file 0x41D9B7 / VA 0x2C41D9B7 |
| `lvgl_task_handler_thread running...` | file 0x41D9C8 / VA 0x2C41D9C8 |
| `lvgl_task_handler_thread stopped` | file 0x41DA38 / VA 0x2C41DA38 |
| `lv_async_handler_thread.c` path | file 0x41D7D7 / VA 0x2C41D7D7 |
| `lvgl_async_handler_thread, waiting signal..` | file 0x41D7FC |
| `Enter lvgl_async_handler_thread!` | file 0x41D82E |
| `lvgl_async` (thread NAME string) | file 0x41D930 / VA 0x2C41D930 |
| `lvgl_async_handler_signaling` | file 0x41D93C |
| `lv_to_async_ipc.c` | file 0x41D5FF |
| `lv_port_indev.c` | file 0x41DB53 |
| `lv_port_disp_speedup_bgra8888.c` | file 0x41DE8F |
| `lv_fps_test.c` | file 0x41DBDB |
| TRACE intern pool | file 0x198FFC (see hud_map/intern_map.json) |
| Known display thread entry | `jbd4010_display` @ 0x2C499270 |

Existing toolkit to reuse (do NOT re-derive):
- `../../hud_map/intern_map.json` — 2013 interned-string call sites (intern_id -> ascii)
- `../../hud_map/lvgl_xrefs.json` — LVGL wrapper VAs + 1679 BL/B.W xrefs
- `../../ghidra_proj/star_air3.gpr` — existing Ghidra project for the M55 image
- Ghidra headless: `/opt/homebrew/Cellar/ghidra/12.1.3/libexec/support/analyzeHeadless`

## Depth tree

| Leaf | Deliverable | OWNS |
|---|---|---|
| leaf-3.1 | TRACE intern-ID resolution -> code sites logging the lvgl thread strings; containing function bounds | `rtos/lvgl/intern_sites.json`, `rtos/lvgl/GATES-3.1.md`, `rtos/lvgl/scripts/lvgl_intern_sites.py` |
| leaf-3.2 | Thread creation sites: osThreadAttr_t structs + osThreadNew/xTaskCreate call sites for `lvgl_async` and the task-handler thread | `rtos/lvgl/thread_create_sites.json`, `rtos/lvgl/GATES-3.2.md`, `rtos/lvgl/scripts/find_thread_create.py` |
| leaf-3.3 | Ghidra headless disassembly/decompile of candidate entry functions; confirm the service-loop shape | `rtos/lvgl/disasm/**`, `rtos/lvgl/GATES-3.3.md`, `rtos/lvgl/scripts/ghidra_lvgl.java` |
| leaf-3.4 | LVGL core map: lv_timer_handler, lv_tick source, disp flush, indev read, and the lv_ipc/lv_to_async mailbox objects | `rtos/lvgl/lv_core_map.json`, `rtos/lvgl/GATES-3.4.md`, `rtos/lvgl/scripts/lv_core_map.py` |
| branch-3 | `LVGL_THREAD.md` integration + RTOS_MAP.md §2 update | `rtos/lvgl/LVGL_THREAD.md`, `rtos/lvgl/GATES-3.md`, `rtos/RTOS_MAP.md` |

Dependency: 3.1–3.4 independent (wave 1). branch-3 after all four verify.
