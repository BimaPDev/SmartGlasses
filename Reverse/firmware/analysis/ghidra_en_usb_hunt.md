# `en_usb` hunt — Ghidra 12.1.3 headless pass on `platform_tester.bin` 1.0.12.83

**Date:** 2026-08-22
**Image:** `firmware/x_1.0.12.83/platform_tester.bin` (BEST1600 M55 app, 6,771,708 B)
**Load:** FLASH XIP `0x2C000000`; `.rodata` alias `0x3C000000`
**Goal:** positively identify the factory `en_usb` command handler (and, along
the way, the `handleSystemMsg` dispatch and the eshell UART), using a real
decompiler instead of Capstone/string heuristics.

## TL;DR

- **`en_usb`'s real handler is not statically recoverable from this image.**
  Factory command names and BLE action names are consumed *only* by positional
  blob-walking — the dispatcher takes the packed-blob base and increments
  through it — so a mid-blob name like `en_usb` is never referenced by any
  instruction. This is inherent to the design, not a tooling gap, and it holds
  after force-disassembling ~all of `.text` (13,815 functions).
- The prior `FIRMWARE_FINDINGS.md` §8.3 handler VAs (`set_sn`@`0x2C5AA114`,
  `en_usb`@`0x2C5AAB48`, `lcd_id`@`0x2C5AAB80`) are **misattributed**: that band
  is LVGL `OtaMsgModel`/Page code. Root cause: the first `ForceDis.java` failed
  to load (OSGi), so that pass analysed an under-covered image (~4,993 functions)
  and named handlers from "TRACE line# + nearest literal pool."
- The **operational** conclusion is unchanged and independently sound: `en_usb`
  is factory-only and is **not** a real USB device stack (the firmware contains
  no USB-gadget code at all).

---

## 1. Environment

Ghidra was not installed. Installed via Homebrew on Apple Silicon:

```
brew install ghidra          # pulls openjdk@21; Ghidra 12.1.3
```

- `analyzeHeadless`: `/opt/homebrew/Cellar/ghidra/12.1.3/libexec/support/analyzeHeadless`
- JDK: `/opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk/Contents/Home`
  (export `JAVA_HOME` + prepend `$JAVA_HOME/bin` to `PATH` before invoking).
- Ghidra 12 dropped Jython; scripts here are Java `GhidraScript`s (compiled on
  the fly). Class name **must** match the filename or the OSGi loader rejects it
  — this is exactly what silently broke the first `ForceDis.java`.

Project import:

```
analyzeHeadless <proj> <name> \
  -import platform_tester.bin \
  -processor ARM:LE:32:Cortex -loader BinaryLoader -loader-baseAddr 0x2C000000 \
  -preScript MapAlias.java     # byte-maps .rodata mirror at 0x3C000000
  -postScript <script>.java
```

`MapAlias.java` adds a byte-mapped block `0x3C000000 → 0x2C000000` so the
`0x3C`-alias `.rodata` pointers resolve.

## 2. The coverage fix (the thing that mattered)

Ghidra auto-analysis of a raw, symbol-less Cortex image with indirect
(interned-ID / vtable) calls only recovered **~5,000 functions** and left the
code at `0x2C5AA114` (and much of `.text`) **undisassembled**. That is why the
first pass could not find handlers and why `getReferencesTo` on every command
string was empty.

A prologue sweep — `push {…,lr}` (`B5xx`) and `push.w` (`E92D`) at every
2-aligned undefined address, then `disassemble()` + `createFunction()` — took
it to **12,044** functions; a subsequent full-analysis pass reached **13,815**.
A greedy variant (`Aggro.java`, 77,126 `disassemble()` calls) covered ~all of
the dense `.text` (`0x2C430000–0x2C670000`, ~63% → near-full).

| Pass | Functions | Note |
|---|---|---|
| auto-analysis only | 4,989 | `0x2C5AA114` not even an instruction |
| + prologue force-disasm | 12,044 | `ForceDis.java` (working) |
| + re-analysis | 13,815 | reference/param recovery |

Scripts (in `ghidra_scripts/`): `ForceDis.java`, `Aggro.java`, `MapAlias.java`,
`FindUsers2.java`, `Verify.java`, `Prev2.java`.

## 3. Why string xrefs are empty (the addressing model)

Even at full coverage, the target strings have **zero references** — verified
exhaustively over the disassembled image for `en_usb`, `eshell >`,
`handleSystemMsg`, `no handler for action %s`, `hal_uart_open`,
`Invalid UART ID: %d`, and the RTOS thread name `fac_cmd_trd`:

| Addressing form | Result |
|---|---|
| Absolute pointer `0x2C`/`0x3C`/`0x28` (aligned + unaligned) | none |
| PIC bare-offset word (e.g. `0x0015FDBC`) | none |
| `MOVW`/`MOVT` full address | none |
| `MOVW`/`MOVT` bare offset + base register | none |
| `ADR` | none |
| `LDR`-literal pool | none |
| Ghidra `getReferencesTo` (after `0x3C` map) | none |

The only exception in the whole set is a single `LDR`-literal load of the
`"set_sn"` string — and it comes from LVGL code, not the factory command (§4).

Two distinct reasons combine:

1. **Positional blob-walk.** `fac_cmd` names/help are packed `name\0help\0…` in
   `.rodata` `0x15FBFC–0x1606D0`; `handleSystemMsg` action names are packed at
   `0x194BCC–0x194F68`. The dispatchers receive the blob base and `strcmp`-walk
   it, incrementing a pointer. Individual entries are therefore *never*
   referenced. This is by design.
2. **Pointerless TU.** The `fac_cmd`/eshell translation units reference even
   their format strings, `__FILE__` paths (`.../fac_cmd/fac_cmd.c`,
   `eshell_platform.c`), and RTOS object names (`fac_cmd_trd`, `cmd_mutex`,
   `fac_cmd_pool`) with **no** recoverable 32-bit anchor — a base-register
   scheme that stores nothing a scan can key on. Other TUs (e.g. LVGL TRACE)
   *do* use `0x3C` pointer literals, which is why the technique works there and
   not here.

`0x2C5E33F0` is a keyed `{key,value}` registry lookup (8-byte records, key@+0,
value@+4; helper `0x2C5E32BC(mode,&n)` selects table `0x3C43EE84`/`0x3C43FD64`)
— a UI-resource/string-ID map, not a string intern.

## 4. The §8.3 misattribution (evidence)

The prior write-up placed `fac_cmd.c` at `0x2C5AA000–0x2C5AB800`. Decompilation
of the fuller project shows that band is **LVGL `OtaMsgModel` & sibling Pages**:

- **`0x2C606A28`** (the claimed "shared fac_cmd helper") decompiles to an LVGL
  object flag/invalidate routine:
  `*(obj+0x1c) |= flags`, then `FUN_2C6041D4` / `FUN_2C607248`
  (invalidate/refresh) gated on mask `0x1800000`; a sibling vtable entry
  iterates child objects. A factory SN-writer / USB-enable does not touch LVGL
  objects.
- **Vtable at `0x2C1825B4`** sits directly between the `Page::onEvent` and
  `OtaMsgModel.cpp` strings and points into `0x2C5AAAxx`.
- **`0x2C5AA114`'s own literal pool is at `0x5AA174`** (it loads
  `DAT_2c5aa174/78/7c`). The `0x5AA10C` `"set_sn"` pointer that anchored the
  guess belongs to the **previous** function, `FUN_2C5AA01C` — an LVGL event
  handler (`if (event(param)!=0xd) return;`) that merely **TRACEs** the string
  `"set_sn"` (line 390). The `"set_sn"` literal is linker-merged and shared
  between the fac_cmd blob and that settings page; only the page references it.
- The TRACE line numbers used as identity (908, 462) are lines in the LVGL
  `.cpp` files, not `fac_cmd.c` — and since `fac_cmd.c`'s own `__FILE__` string
  has no pointer, line numbers can't be pinned to it.

Corrected mapping for that band:

| Address | Reality |
|---|---|
| `0x2C5AA01C` | LVGL event handler; TRACEs merged `"set_sn"` (line 390) — the bad anchor |
| `0x2C5AA114` | LVGL Model method (uses registry IDs `0x5059`/`0x5060`) — **not** `set_sn` |
| `0x2C5AAB48` | LVGL method, tail-calls the LVGL flag/invalidate helper — **not** `en_usb` |
| `0x2C606A28` | LVGL object flag/invalidate helper |
| `0x2C5E33F0` | registry `{key,value}` lookup |

## 5. Where `en_usb` actually is — and why we can't read it

The real `fac_cmd` handler for `en_usb` is reached through the **parallel
handler array** indexed by the command's position in the packed blob. That array
was not locatable statically:

- No pointer to the blob base, to any name, or to any help string exists.
- The regions flanking both the fac_cmd name blob and the `handleSystemMsg`
  action blob are dense **C++ vtables** (LVGL Page/Model/Widget classes — note
  the repeated pure-virtual thunks `0x2C4EE6F9`, `0x2C5DE069`), not a flat
  command→handler array.
- The registration/dispatch code, being in the pointerless TU, offers no string
  anchor to seed from.

**Recovering it therefore needs one of:**

1. The BES `nc_cmd`/eshell command-table convention — find the registration
   site and its handler array by structure, not by string (a targeted,
   interactive-Ghidra effort).
2. **Dynamic** analysis: drive the eshell over UART/`debug_i2c` on the device
   and trace which function `en_usb` invokes.

## 6. What still holds (unchanged conclusions)

- **`en_usb` is not a real USB device stack.** The whole M55 image has no
  `hal_usb`, `usbphy`, `usb_phy`, `CDC_ACM`, `dwc`/`dwc2`, `UsbDevice`,
  `gadget`, or TinyUSB string. (The 11 `tusb` matches are all
  `launcher_sta`**`tusb`**`ar`.) Only USB strings present:
  `en_usb` / `enable usb`, charger `[CHG] vbus usb_enable:%d …`, and TRACE tag
  `DRVUSB`. `en_usb` cannot enable a stack that isn't compiled in, and its
  presence does not show Type-C D+/D− are wired on the retail board.
- **`handleSystemMsg`**: packed actions at `0x194BCC–0x194F68`; no
  `set_demo_mode` / `get_demo_mode` / `screen_record`; dispatch is the same
  positional walk (no per-action xref).
- **UART/eshell pinmux** still unnamed: `hal_uart.c`, `Invalid UART ID: %d`,
  `eshell_platform.c`, `eshell_paltform_init open=%d`, `eshell >`, `debug_i2c`,
  `utest_uart` are present; the only named IOMUX setters are
  `hal_iomux_set_sys_dig_mic` and `hal_iomux_set_sens_i2c3`. The numeric
  `HAL_UART_ID` and pads are not string-recoverable.

## 7. Reproduction

```
export JAVA_HOME=/opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk/Contents/Home
export PATH="$JAVA_HOME/bin:$PATH"
HL=/opt/homebrew/Cellar/ghidra/12.1.3/libexec/support/analyzeHeadless

# 1) import + map 0x3C alias + auto-analyze
"$HL" <proj> star_air2 -import firmware/x_1.0.12.83/platform_tester.bin \
  -processor ARM:LE:32:Cortex -loader BinaryLoader -loader-baseAddr 0x2C000000 \
  -scriptPath ghidra_scripts -preScript MapAlias.java -overwrite

# 2) force-disassemble to full coverage (no re-analysis)
"$HL" <proj> star_air2 -process platform_tester.bin -noanalysis \
  -scriptPath ghidra_scripts -postScript ForceDis.java     # or Aggro.java

# 3) re-analyze, then probe
"$HL" <proj> star_air2 -process platform_tester.bin \
  -scriptPath ghidra_scripts -postScript FindUsers2.java
```

- `MapAlias.java` — byte-map `.rodata` at `0x3C000000`.
- `ForceDis.java` — prologue sweep + `disassemble`/`createFunction`
  (the working replacement for the OSGi-failed original).
- `Aggro.java` — greedy full-`.text` disassembly + reference re-scan.
- `FindUsers2.java` / `Verify.java` / `Prev2.java` — pool-indirect reference
  search and targeted decompiles used for §4.

## 8. Artifacts

- Ghidra project (working, 13.8k functions): reproduce via the steps above into
  `firmware/analysis/ghidra_proj/`.
- Scripts: `firmware/analysis/ghidra_scripts/`.
- Companion sections: `../../FIRMWARE_FINDINGS.md` §8 (corrected),
  `platform_tester_1.0.12.83_disasm.md` (corrected).
