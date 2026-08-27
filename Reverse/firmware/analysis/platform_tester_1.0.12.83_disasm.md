# platform_tester.bin 1.0.12.83 — load address and recovered handlers

Capstone + Ghidra 12.1.3 headless. Full write-up: `../../FIRMWARE_FINDINGS.md` §8.

## Image

- File: `firmware/x_1.0.12.83/platform_tester.bin` (6,771,708 bytes)
- OTA header (16 B): `ffffffff 00000400 00000000 2c6851c0`
- **Code load address: `0x2C000000`** (BEST1600 M55 FLASH XIP)
- Reset trampoline @ `0x2C000010`: `ldr r0, [pc, #0x44]; bx r0` → `0x2C010015`
- `.rodata` alias used in some literal pools: **`0x3C000000 + file_off`**
- NC flash alias (factory NV): `0x28000000` (`__factory_start=0x28FFF000`)
- SRAM: `0x20xxxxxx`
- Dense `.text`: file `0x430000`–`0x670000`

## String addressing

Most C strings are **not** referenced by a 32-bit absolute pointer. Raw
`MOVW`/`MOVT` scan: 1142 pairs, **zero** targeting `0x2C`/`0x3C` string VAs.
Factory / launcher TRACE uses 16-bit IDs + `bl 0x2C5E33F0` (8-byte
`{key,value}` registry; tables at `0x3C43EE84` / `0x3C43FD64`).

Ghidra 12.1.3 BinaryLoader @ `0x2C000000` + byte-mapped `0x3C` overlay:
`getReferencesTo` on `en_usb` / `handleSystemMsg` / `eshell >` is still
empty. Auto-analysis left `0x2C5AA114` undefined. Recover handlers from
`push {…,lr}` + literal pools, not from xrefs.

Confirmed 0x3C pointer: `set_sn` at `0x3C15FDBC`, stored at file `0x5AA10C`.

## Handlers recovered / corrected

> **Correction (2026-08-22).** The earlier `set_sn`/`en_usb`/`lcd_id` rows were
> misattributed — the first `ForceDis.java` failed to load (OSGi), so only
> ~4993 functions existed and `0x2C5AA114` wasn't disassembled. A working
> force-disassembly (→ 13,815 functions, ~all `.text`) shows `0x2C5AAxxx` is
> LVGL `OtaMsgModel`/Page code, not `fac_cmd.c`. See `../../FIRMWARE_FINDINGS.md`
> §8.3.

| Name | VA | Status |
|---|---|---|
| ~~`set_sn`~~ | ~~`0x2C5AA114`~~ | LVGL Model method (uses registry IDs `0x5059/0x5060`), **not** `set_sn` |
| ~~`en_usb`~~ | ~~`0x2C5AAB48`~~ | LVGL method that tail-calls the LVGL flag/invalidate helper, **not** `en_usb` |
| ~~`lcd_id`~~ | ~~`0x2C5AAB80`~~ | same band, misattributed |
| `FUN_2C5AA01C` | `0x2C5AA01C` | LVGL event handler; TRACEs merged string `"set_sn"` (line 390) — source of the bad anchor |
| registry lookup | `0x2C5E33F0` | keyed `{key,value}` table search (helper `0x2C5E32BC` picks table `0x3C43EE84`/`0x3C43FD64`) |
| LVGL flag/invalidate | `0x2C606A28` | `OR into [obj+0x1c]`; invalidate `0x2C6041D4`/`0x2C607248` on mask `0x1800000` |

**Real `en_usb` handler: not statically recoverable.** Command names and
`handleSystemMsg` action names are walked positionally from a blob base, so no
name is ever individually referenced. Verified over the fully force-disassembled
image: `en_usb`, `eshell >`, `handleSystemMsg`, `no handler for action %s`,
`hal_uart_open`, `Invalid UART ID: %d`, `fac_cmd_trd` have zero refs under every
addressing form (abs ptr, PIC offset, MOVW/MOVT full, MOVW/MOVT offset+base,
ADR, LDR-literal). Needs the handler-array/registration site or dynamic tracing.

`en_usb` still does **not** call a USB PHY / gadget: image has no `hal_usb` /
`usbphy` / `CDC_ACM` / `dwc` / `gadget` / TinyUSB string (`tusb` hits are all
`launcher_statusbar`). Only USB strings: charger `vbus usb_enable`, TRACE tag
`DRVUSB`.

## `handleSystemMsg`

Packed actions at file `0x194BCC`–`0x194F68` (miss path immediately after).
No `set_demo_mode` / `get_demo_mode` / `screen_record`. Extra vs early list:
`set_brightness_finish`. Zero 32-bit xrefs to those strings.

## UART / eshell pinmux — still unnamed

`eshell_paltform_init open=%d` (file `0x427610`) is the UART-open log.
Named iomux setters in the image: `hal_iomux_set_sys_dig_mic`,
`hal_iomux_set_sens_i2c3` only. No `hal_iomux_set_uart*`. `debug_i2c` can
rebind the same shell. Numeric `HAL_UART_ID` not recovered.

## Ghidra notes

- `analyzeHeadless` + `-processor ARM:LE:32:Cortex` `-loader-baseAddr 0x2C000000`,
  plus a byte-mapped `0x3C000000` alias for `.rodata` (preScript `MapAlias.java`).
- **First pass:** `ForceDis.java` failed to load as an OSGi bundle in 12.1.3;
  analysis produced ~4993 functions, none at the guessed handler VAs. This is
  what caused the §8.3 misattributions above.
- **Working pass (2026-08-22):** `ForceDis.java` here is the fixed version — a
  plain `push {…,lr}` / `push.w` prologue sweep + `disassemble()` over
  `0x2C010000–0x2C675000`, run via `-process … -postScript ForceDis.java`. Took
  the image to **13,815 functions** and ~63%→~near-full `.text` coverage
  (greedy `Aggro.java` variant: 77k `disassemble()` calls). Reference/decompile
  probes: `FindUsers2.java` (pool-indirect refs), `Verify.java`/`Prev2.java`
  (targeted decompiles). Copies of all live in `ghidra_scripts/`.
- Even with full coverage, command/action names have **zero** references
  (positional blob-walk) — see §8.3. `getReferencesTo` will always be empty for
  them; use the handler array / dynamic trace instead.
- Project: `firmware/analysis/ghidra_proj/` (BinaryLoader; add the `0x3C` alias).
- BTH project (separate): `firmware/ghidra/`
