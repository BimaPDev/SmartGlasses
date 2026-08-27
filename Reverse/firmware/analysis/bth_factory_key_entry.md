# BTH factory key-hold — Ghidra scan

- program: `best1600_watch_bth.bin`
- image base: `0x14000000`

## Strings

| string | VA | xrefs | in function |
|---|---|---|---|
| `hal_key_boot_handler` | `0x140e63b0` | 0 | — |
| `app_factorymode_enter` | `0x14132494` | 0 | — |
| `app_factorymode_key_init` | `0x141324ac` | 0 | — |
| `app_factorymode_test_key_init` | `0x141324c8` | 0 | — |
| `app_poweron_key_init` | `0x141379a8` | 0 | — |
| `app_factorymode_init mode:` | `0x141324e8` | 0 | — |
| `To enter test mode!!!` | `0x141378d8` | 0 | — |
| `PWR KEY DITHER!` | `0x14137998` | 0 | — |
| `power on case:` | `0x14137a20` | 0 | — |
| `ENGINEER_MODE` | `0x141376c1` | 0 | — |
| `BT_DUT_MODE` | `0x1411648c` | 0 | — |
| `HAL_KEY_EVENT_LONGPRESS_500_MS` | `0x140e623b` | 0 | — |
| `HAL_KEY_EVENT_LONGPRESS_3000_MS` | `0x140e625f` | 0 | — |
| `HAL_KEY_EVENT_LONGPRESS_5000_MS` | `0x140e6283` | 0 | — |
| `app_enter_normal_mode` | `0x1413795d` | 0 | — |
M55-only strings (`BTH_TO_M55_FACTORY_TEST_MODE`, `enter MMI mode!`) live in `platform_tester.bin`, not this BTH image.

## Immediates 500 / 3000 / 5000 in disassembled code

| VA | function | insn | imm |
|---|---|---|---|
| `0x140303e0` | `FUN_14030594` | `movw r1,#0xbb8` | 3000 |
| `0x14030ef0` | `FUN_14030e44` | `movw r2,#0x1388` | 5000 |
| `0x14030fdc` | `FUN_14030e44` | `mov.w r0,#0x1f4` | 500 |
| `0x140430a2` | `FUN_14042e00` | `mov.w r6,#0x1f4` | 500 |
| `0x140440ca` | `FUN_14043fa8` | `movw r1,#0x1388` | 5000 |
| `0x1404a41a` | `FUN_1404a374` | `movw r1,#0x1388` | 5000 |
| `0x1404a4d4` | `FUN_1404a374` | `movw r1,#0xbb8` | 3000 |
| `0x1404b376` | `FUN_1404b318` | `mov.w r0,#0x1f4` | 500 |
| `0x1404c91e` | `FUN_1404c4f8` | `movw r1,#0xbb8` | 3000 |
| `0x1404c998` | `FUN_1404c4f8` | `movw r1,#0xbb8` | 3000 |
| `0x1404d842` | `FUN_1404d5c0` | `cmp.w r7,#0x1f4` | 500 |
| `0x1404de86` | `FUN_1404d5c0` | `cmp.w r9,#0x1f4` | 500 |
| `0x140502f6` | `FUN_1405021c` | `movw r3,#0x1388` | 5000 |
| `0x14051a5e` | `FUN_14051a2c` | `movw r1,#0x1388` | 5000 |
| `0x140523a8` | `FUN_14052154` | `mov.w r1,#0x1f4` | 500 |
| `0x14058f5c` | `FUN_14058ef0` | `cmp.w r3,#0x1f4` | 500 |
| `0x140591d0` | `FUN_14059128` | `cmp.w r0,#0x1f4` | 500 |
| `0x14065fa2` | `FUN_14065f94` | `add.w r1,r1,#0x1f4` | 500 |
| `0x14076a50` | `FUN_14076a2c` | `movw r1,#0x1388` | 5000 |
| `0x140771f0` | `FUN_1407717c` | `add.w r1,r3,#0x1f4` | 500 |
| `0x1407ed84` | `?` | `movw r1,#0xbb8` | 3000 |
| `0x1408191e` | `FUN_14081900` | `movw r1,#0xbb8` | 3000 |
| `0x1408e1ac` | `FUN_1408df8c` | `mov.w r1,#0x1f4` | 500 |
| `0x140a5c4e` | `FUN_140a5bf0` | `mov.w r0,#0x1f4` | 500 |
| `0x140a6aaa` | `FUN_140a6a58` | `movw r0,#0x1388` | 5000 |
| `0x140a6ae4` | `FUN_140a6a58` | `movw r2,#0x1388` | 5000 |
| `0x140a85c0` | `FUN_140a8590` | `mov.w r1,#0x1f4` | 500 |
| `0x140bd2b8` | `FUN_140bd248` | `movw r2,#0x1388` | 5000 |

## Call-graph stub (callees ← callers)

### seed `app_poweron_key_init`
Function not created yet — analyze, then re-run this script.

### seed `app_factorymode_enter`
Function not created yet — analyze, then re-run this script.

### seed `app_factorymode_key_init`
Function not created yet — analyze, then re-run this script.

### seed `app_factorymode_init`
Function not created yet — analyze, then re-run this script.

### seed `hal_key_boot_handler`
Function not created yet — analyze, then re-run this script.

### seed `app_init`
Function not created yet — analyze, then re-run this script.

### seed `app_watch_init`
Function not created yet — analyze, then re-run this script.

## Next (manual)

After auto-analysis, factory log strings still have **0 xrefs** (BES trace-hash). Named seeds like `app_poweron_key_init` are `.rodata` labels, not Thumb functions — create functions from the boot/key `.text` around `0x1404xxxx` / GPIO scan, not from the string VAs.

1. `app_init` / `power on case:%d` → branch into `app_factorymode_enter`.
2. That branch's key event is one of LONGPRESS_500/3000/5000_MS.
3. Confirm mailbox `BTH_TO_M55_FACTORY_TEST_MODE` (M55: `enter MMI mode!`).
4. GUI: `ghidraRun` → `firmware/ghidra/project` → `StarAirBth` → `best1600_watch_bth.bin`. Bookmarks category `factory-key`.

## Capstone follow-up (2026-08-22) — immediate-scan candidates RULED OUT

Disassembled the functions the 3000/5000 immediate-scan flagged. They are **not**
the boot-key classifier:

- `FUN_1404a374`, `FUN_1404c4f8`, `FUN_1404a374`+neighbours are **HFP / three-way
  call state machines**. The `movw r1,#0xbb8` (3000) / `movw r1,#0x1388` (5000)
  values are loaded into `r1` and tail-called into a **timer-start** at
  `0x140e5378` (call-hold / no-answer timeouts). The `bl 0x1402a6e8` calls are
  BES `TRACE(level=4, hashed_id, args)` — confirms the trace-hash scheme (ids
  like `0xda2`, `0x1388`-adjacent are hash args, not durations).

Conclusion: **duration-constant scanning is a dead end for the boot key** — 500/
3000/5000 ms appear all over the HFP/AVRCP/audio timers. The factory-key
threshold must be reached from the **GPIO key-scan / `app_poweron_key_init`**
path, which has no string xrefs (trace-hash) and needs real call-graph work in
the Ghidra GUI (or the on-device 3 s/5 s boot-hold test, which is faster).

Next anchor to try in Ghidra: the **intersys mailbox send** of
`BTH_TO_M55_FACTORY_TEST_MODE` (numeric msg id, cross-ref from the M55 handler
enum) → the BTH function that sends it is the factory-entry site; walk its
callers back to the key event.
