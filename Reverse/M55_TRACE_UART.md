# M55 trace UART, crash dumps and a live thread table (1.0.11.53)

**Firmware:** `Flyme XR 1.0.11.53.20241126_Air_intl_FR` (`platform_tester_my.bin`).
Addresses below are 11.53 VAs — **not** 12.83. Where this repo's tables are for
12.83, treat these as a second data point, not a correction.

**How this was obtained.** These are observations from **running the M55 firmware
in an emulator** (Renode) on top of a memory snapshot taken from a live device:
the real LVGL/RTOS code executes, and everything it writes to its trace port is
captured. That means the register layout below is what the firmware *does*, seen
from the bus side. It has **not** been verified against a physical UART pad — no
test point was probed. Treat §1 as "this is the peripheral the trace path talks
to", not as a pinout.

---

## 1. The trace port the firmware actually writes to

§8.4 of `FIRMWARE_FINDINGS.md` notes that the `HAL_UART_ID` and pins behind
`eshell_platform_init`'s `open=%d` are not recoverable from strings or 32-bit
pointers, because the iomux setter was compiled without a TRACE name. The
peripheral *address* is recoverable from execution:

| What | Where |
|---|---|
| Register window | `0x50190000` – `0x501903FF` |
| TX data register | `base + 0x8` (byte written per character) |
| Status / FIFO level | `base + 0xC`, free slots in **bits [12:8]** |
| Register stride | `0x20` (several instances in the window) |
| TX busy-wait loop | ITCM `0x40E38` (a second copy at `0x40DFC`) |

The TX loop reads the status word, masks it with `tst r3, #0x1F00`, and spins
while there is no room; `ubfx r0, r3, #8, #5` extracts the free-slot count. A
status value of `0x1F10` therefore means "31 free slots", which is what makes
the port drain.

In one emulated run this loop accounted for **46 % of all executed
instructions** — the firmware is extremely chatty on this port.

Knowing the block address narrows the pad hunt: whichever BES controller lives
at `0x50190000` is the one `hal_uart_open` returns a handle for.

### Related timing peripheral (same investigation)

| What | Where |
|---|---|
| Free-running counter | `0x40080050`, **16384 Hz** |
| ticks → ms converter | ITCM `0x4FF20` (`ticks / 2^14 * 1000.0`, constant at `0x4FF40`) |
| counter getter | ITCM `0x4FEBC` (`ldr r0, [0x40080000 + 0x50]`) |
| `udelay`-style busy wait | ITCM `0x4FED4` |

This is the time base behind `lv_tick_get()` and every busy-wait delay.

---

## 2. The port carries full crash dumps, not just logs

This matters for §3's "UART payoff": a test point on this port gets **post-mortem
diagnostics**, not only the `eshell >` prompt. On an assertion the firmware
prints the build banner, a timestamp, the failing expression with file:line,
all core registers, and a full RTOS thread list.

Verbatim from a captured dump (line wrapping is the FIFO's, not ours):

```
Flyme XR 1.0.11.53.20241126_Air_intl_FR
Dump Time:
09-15 21:43:51.893
Dump Title:
### ASSERT @ 0x2C53BF11 ###
block_trim_free:742
Common Registers:
R0 =3C002B4C, R1 =3C14B6A0, R2 =000002E6, R3 =227B7522
R4 =3C734800, R5 =3D63A6B0, R6 =00000000, R7 =3C505720
R8 =3D63A814, R9 =3C71EE54, R10=3C71EE60, R11=00000001
R12=00048901, SP =400FFE60, LR =2C53BF11
```

`block_trim_free` is a **TLSF** allocator routine, so the M55 heap is TLSF —
useful when reading `xr_mem` / `multi_heap` code. Each thread entry also carries
a `Possible Backtrace:` section.

---

## 3. Live RTOS thread table (11.53)

`CLAUDE.md` lists `rtos/m55/THREADS.md` under "known-bad artifacts" (entry VAs
below `0x2C479954` suspect, `af_thread` garbage). The table below is not from
string scanning — the firmware printed it about itself:

| id | name | prio | state | thread_addr | TCB |
|---:|---|---:|---|---|---|
| 2 | `idle` | 1 | READY | `0x2C6953F9` | `0x3D6732B0` |
| 7 | `power_supply_update` | 40 | WAIT_FLAG | `0x2C506189` | `0x3D663570` |
| 9 | `xr_trace_task` | 39 | WAIT_DLY | `0x2C4CBA0D` | `0x3D663958` |
| 17 | `xrbm_thread` | 40 | WAIT_MGET | `0x2C4D0215` | `0x3D667A90` |
| 25 | `lvgl_ui` | 40 | RUNNING | `0x2C680EC9` | `0x3D668798` |

Stack geometry from the same dump: `lvgl_ui` `stack_mem=0x3D65AC58`,
`stack_size=32768`, `min_stack_free=30176`; `idle` `stack_mem=0x3D674308`,
`stack_size=1024`. The `idle` frame shows `PC=0x0004FEBC` — the counter getter
from §1, i.e. idle spins on the tick source.

Caveat: this is the thread set at the moment the snapshot was taken, and only
the threads the dump walks (current / ready / delay lists). It is a floor, not
a complete inventory.

---

## 4. Safety: do not read address `0x0` over the extended-screenshot path

Reading a window at VA `0x00000000` through the `shot --addr` style memory read
**reboots the glasses**. Observed as five consecutive failed reads followed by a
device restart; a control read at `0x00028000` in the same session succeeded, so
the transport was fine. ITCM below `0x28000` reads back empty by other routes
too, so there is nothing to gain by retrying.

---

## 5. Note: this firmware can be executed off-device

The observations above come from a working **snapshot rehost**: the real M55
image plus a RAM snapshot loaded into Renode, executing the genuine LVGL refresh
and input paths, with the trace port modelled so the firmware's own logging is
readable. It renders real frames and processes real key events.

If that is useful to this project — for checking a hypothesis without risking
hardware, or for reading what the firmware says about itself — I am happy to
talk about it. Reach me through this PR or an issue on this repo
(GitHub: **@gogibeet**).
