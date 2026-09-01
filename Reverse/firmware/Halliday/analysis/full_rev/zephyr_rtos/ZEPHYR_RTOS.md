# Halliday Zephyr RTOS kernel (1.00_2601211113)

**Leaf:** 1.11  
**Binary:** `Reverse/firmware/Halliday/HallidayOfficialOTA.bin` → inner `app.bin` (1,662,592 B)  
**Load base:** **`0x10000000`** (Thumb XIP; string VA = `0x10000000 + app.bin file_off`)  
**Sources:** `export/official/strings/categorized/zephyr.txt` (54 hits), targeted `app_ascii.txt` greps for `thread`, `k_thread`, `work_queue`, `fatal error`, `ring_buffer`, `heap`, `shell`, `pm`  
**Manifest:** `manifest.json`

## Verdict

Halliday runs **Zephyr** on Actions **ATS3089 Leopard** (Cortex-M33). The stock `app.bin` embeds full upstream-style kernel objects (`thread.c`, `work.c`, `fatal.c`, `kheap.c`) plus Actions framework layers (`framework/osal`, display/audio HAL). A **UART shell** exposes kernel introspection (`threads`, `stacks`, `kheap`, heap dump). **Power management** uses `zephyr/subsys/pm/power.c` with device `pm_control` hooks (see power_battery leaf 1.9). **Ring buffers** back shell history and app I/O paths. On fault, **`z_fatal_error`** prints the offending **thread** and reason before spin/reboot. No Ghidra function export yet — anchors are rodata string VAs only.

## 1. Image and addressing

| Item | Value |
|---|---|
| Binary | `Reverse/firmware/Halliday/export/official/layer3/app.bin` |
| Platform | `ats3089_dev_watch`, build `1.00_2601211113` |
| XIP base | **`0x10000000`** |
| String bucket | `export/official/strings/categorized/zephyr.txt` |
| VA rule | **`va = 0x10000000 + file_off`** |

Re-run export: `python3 Reverse/firmware/Halliday/tools/export_halliday.py`.

## 2. Boot and version strings

Early boot prints the standard Zephyr banner and version tuple:

| String | File off → VA | Role |
|---|---|---|
| `*** Booting Zephyr OS build %s %s ***` | `0x1912e8` → `0x101912e8` | Boot banner (build id + date) |
| `Zephyr version %d.%d.%d` | `0x15f7b1` → `0x1015f7b1` | Kernel semver print (shell `kernel version`) |
| `Uptime: %u ms` | `0x15f7ca` → `0x1015f7ca` | Shell uptime |
| `Scheduler: %u since last call` | `0x15f7d9` → `0x1015f7d9` | Scheduler stats |

The categorized `zephyr.txt` also records toolchain path `%%ZEPHYR_TOOLS%%\gcc-arm-none-eabi-9-2020-q2-update-win32\...` @ `0x161ef2` — build host was Windows + GCC 9.2 (2020-q2).

## 3. Kernel threads (`thread.c`)

Zephyr kernel thread management is present at `WEST_TOPDIR/zephyr/kernel/thread.c` (`0x190686` → **`0x10190686`**).

### 3.1 Thread states and diagnostics

| String | File off → VA | Meaning |
|---|---|---|
| `prestart` / `dead` / `dummy` / `aborting` / `queued` | `0x1906da`–`0x1906f7` | Thread state names |
| `*** Stack overflow detected ***` | `0x1906fe` → `0x101906fe` | Stack guard trip |
| `Thread:%p %-10s, SP: 0x%lx, sp_b = 0x%lx orverride %d bytes!` | `0x19071f` → `0x1019071f` | Stack overrun |
| `Thread: %p %-10s, SP: 0x%lx: sp_b = 0x%lx stack only has %d bytes free space!` | `0x19077b` → `0x1019077b` | Stack usage warning |
| `Threads may not be created in ISRs` | `0x1908a3` → `0x101908a3` | ISR guard |
| `Thread %p %-10s run time %d ms` | `0x1908f5` → `0x101908f5` | Per-thread runtime |

Priority ceiling in asserts uses **15** as max cooperative priority (`0x1907df`), consistent with Zephyr 2.x on single-CPU build (`_kernel.cpus[0]`).

### 3.2 Application-level threads (selected)

Beyond kernel threads, `app_ascii.txt` names many app/service threads spawned by Actions framework and Halliday services:

| Thread name | File off → VA | Subsystem |
|---|---|---|
| `log_thread` | `0x1693c4` → `0x101693c4` | Logging |
| `ble_ring_read_thread` | `0x15d814` → `0x1015d814` | xs_ble_ring_service |
| `vendor_read_thread` / `vendor_file_thread` | `0x15ca21` / `0x15ca34` | xs_vendor (leaf 1.12) |
| `ota_rx_thread` | `0x181666` → `0x10181666` | OTA receive |
| `hci_rx_thread` / `hci_tx_thread` | `0x1868e8` / (tx exit @ `0x1861a1`) | BT HCI |
| `standby_thread` | `0x17cc9c` → `0x1017cc9c` | Standby service |
| `app_manager_*` / `srv_manager_*` | `0x17bc53` / `0x17bde0` | Framework app/service manager |

Task watchdog callbacks reference thread names: `Task watchdog channel %d callback, thread: %s` @ `0x17ce72`.

## 4. Work queues (`work.c`)

Deferred work runs through Zephyr's work queue API:

| Symbol / string | File off → VA | Role |
|---|---|---|
| `WEST_TOPDIR/zephyr/kernel/work.c` | `0x190a8e` → `0x10190a8e` | Work queue implementation |
| `sysworkq` | `0x190a85` → `0x10190a85` | System work queue thread name |
| `work_q %s %p work %p run %d us!!!` | `0x190ac6` → `0x10190ac6` | Work item timing log |
| `!flag_test(&queue->flags, K_WORK_QUEUE_STARTED_BIT)` | `0x190b4d` → `0x10190b4d` | Queue start assert |
| `!flag_test(&work->flags, K_WORK_DELAYABLE_BIT)` | `0x190b04` → `0x10190b04` | Delayable work assert |
| `ble_wake_lock_check_work` | `0x183d46` → `0x10183d46` | App work item (BLE wake lock) |

Application services (`ble_ring`, OTA, vendor) sit above `sysworkq`; no custom work-queue thread names beyond `sysworkq` appear in kernel strings.

## 5. Shell subsystem

Zephyr shell is fully linked. Source files from `zephyr.txt`:

| Source | File off → VA |
|---|---|
| `subsys/shell/shell.c` | `0x15fd29` → `0x1015fd29` |
| `shell_utils.c` | `0x1601e5` → `0x101601e5` |
| `shell_ops.c` | `0x16022e` → `0x1016022e` |
| `shell_uart.c` | `0x160288` → `0x10160288` |
| `shell_history.c` | `0x16071e` → `0x1016071e` |
| `shell_dbg.c` | `0x160c77` → `0x10160c77` |

UART backend label: `shell.shell_uart` @ `0x1602b5` → `0x101602b5`.

### 5.1 Kernel shell commands

| Command | Help string | File off → VA |
|---|---|---|
| `threads` | List kernel threads | `0x15f9ae` → `0x1015f9ae` |
| `stacks` | List threads stack usage | `0x15f994` → `0x1015f994` |
| `uptime` | Kernel uptime | `0x15f9cb` → `0x1015f9cb` |
| `kernel version` | Zephyr version tuple | `0x15f9e1` → `0x1015f9e1` |
| `kheap [addr]` | Inspect kernel heap | `0x161421` → `0x10161421` |
| `devices` | List configured devices by init level | `0x15fa90` → `0x1015fa90` |

Sysrq-style helpers (Actions debug extension): `show-thread-states(t)`, `show thread stack usage (s)` @ `0x15f6bc` / `0x15f6ea`.

Halliday **application shell commands** (`shell_set_config`, `shell_device_test`, BLE tests) are documented in factory_shell leaf 1.10 — they register alongside kernel commands under `Application shell commands` @ `0x14aff4`.

### 5.2 Shell ↔ thread safety

Shell asserts enforce thread context: `Thread context required` @ `0x15ff42`, `Shell thread error: %d` @ `0x15ff1b`, and `(k_current_get() != shell->ctx->tid)` guard @ `0x15ff5c`.

## 6. Heap allocators

Two heap layers appear in strings:

### 6.1 `sys_heap` (`lib/os/heap.c`)

| String | File off → VA | Role |
|---|---|---|
| `WEST_TOPDIR/zephyr/lib/os/heap.c` | `0x15e8c6` → `0x1015e8c6` | Multi-heap allocator |
| `unexpected heap state (double-free?) for memory at %p` | `0x15e8f9` → `0x1015e8f9` | Corruption detect |
| `corrupted heap bounds (buffer overflow?) for memory at %p` | `0x15e957` → `0x1015e957` | Bounds check |
| `Heap at %p contains %d units in %d buckets` | `0x15ea58` → `0x1015ea58` | Heap stats dump |
| `dump heap=%p:` | `0x160c57` → `0x10160c57` | shell_dbg heap dump |

### 6.2 `k_heap` (`kernel/kheap.c`)

| String | File off → VA | Role |
|---|---|---|
| `WEST_TOPDIR/zephyr/kernel/kheap.c` | `0x1905bd` → `0x101905bd` | Kernel heap API |
| `kalloc %d fail,init_bytes = %d` | `0x190624` → `0x10190624` | Allocation failure |
| `h <= _k_heap_list_end` | `0x160ca3` → `0x10160ca3` | shell_dbg list walk |

Related: `mem_slab.c` @ `0x190644`, `mempool.c` @ `0x1911ca`. LVGL/font caches log separate heap failures (`font cache heap alloc failed` @ `0x18d499).

## 7. Ring buffer

| Artifact | File off → VA | Use |
|---|---|---|
| `WEST_TOPDIR/zephyr/include/sys/ring_buffer.h` | `0x14bdfc` → `0x1014bdfc` | Public API header |
| `WEST_TOPDIR/zephyr/lib/os/ring_buffer.c` | `0x15ebde` → `0x1015ebde` | Implementation |
| `ring_buf_is_empty(history->ring_buf)` | `0x16074e` → `0x1016074e` | Shell command history |

App-level ring usage includes BLE ring read path (`ble_ring_read_thread` @ `0x15d814`) — transport layer, not the kernel ring_buffer.c itself.

## 8. Power management (`power.c`)

| String | File off → VA | Role |
|---|---|---|
| `WEST_TOPDIR/zephyr/subsys/pm/power.c` | `0x161800` → `0x10161800` | Zephyr PM core |
| `pm_early_suspend` | `0x161980` → `0x10161980` | Early suspend hook |
| `_pm_devices` | `0x161974` → `0x10161974` | Device PM table |
| `Device %s did not enter %s state (%d)` | `0x1618db` → `0x101618db` | PM failure log |
| `early suspend: number of dev exceeds the upper limit` | `0x16192a` → `0x1016192a` | Device count guard |
| `low power` / `suspended` | `0x161960` / `0x16196a` | State names |

Actions SoC wakelock (`sys_wakelock.c` @ `0x15f466`) and PMU hooks sit below Zephyr PM — see `power_battery/POWER_BATTERY.md`.

## 9. Fatal error handler (`fatal.c`)

Fault path centers on `z_fatal_error`:

```
CPU exception / Stack overflow / Kernel panic
        │
        ▼
>>> ZEPHYR FATAL ERROR %d: %s on CPU %d     @ 0x10190455
        │
        ├── Current thread: %p (%s)            @ 0x1019049e
        ├── Fault during interrupt handling    @ 0x1019047d
        └── Attempted to recover from ...      @ 0x101904f6 / 0x1019052b
        │
        ▼
WEST_TOPDIR/zephyr/kernel/fatal.c            @ 0x101904b6
```

| Reason string | File off → VA |
|---|---|
| `CPU exception` | `0x19055b` → `0x1019055b` |
| `Unhandled interrupt` | `0x190569` → `0x10190569` |
| `Stack overflow` | `0x19057d` → `0x1019057d` |
| `Kernel oops` | `0x19058c` → `0x1019058c` |
| `Kernel panic` | `0x190598` → `0x10190598` |

ARM fault helper: `arch/arm/core/aarch32/cortex_m/fault.c` @ `0x16594d` → `0x1016594d`. Post-fatal reboot string: `Failed to reboot: spinning endlessly...` @ `0x15ec0f`.

## 10. Scheduler and idle

| Source | File off → VA |
|---|---|
| `kernel/sched.c` | `0x190b96` → `0x10190b96` |
| `kernel/idle.c` | `0x190915` → `0x10190915` |
| `kernel/timeout.c` | `0x190d82` → `0x10190d82` |
| `kernel/mutex.c` / `sem.c` / `poll.c` | `0x19095e` / `0x190a18` / `0x190dc6` |

Overlay section manager strings (`overlay_section_init`, `cannot found overlay for idcode`) @ `0x1911b5`–`0x191187` indicate XIP code overlay support on Actions platform.

## 11. Cross-leaf references

| Topic | Leaf | Path |
|---|---|---|
| PM + wakelock + battery | 1.9 | `power_battery/POWER_BATTERY.md` |
| Factory / app shell cmds | 1.10 | `factory_shell/FACTORY_SHELL.md` |
| xs_vendor threads | 1.12 | `xs_vendor/XS_VENDOR.md` |
| Container / load map | 1.2 | `firmware_map/FIRMWARE_MAP.md` |

## 12. Next steps (out of scope)

- Ghidra export of `app.bin` → recover `z_fatal_error`, `k_thread_create`, shell command tables as Thumb entry points.
- Correlate `sysworkq` stack with `app_manager` / `srv_manager` spawn paths.
- Diff Zephyr version banner against upstream 2.x tag once semver digits are captured from runtime log or rodata.
