# Ghidra scaffold — BTH factory key-hold

Goal: recover the **exact key code + long-press duration** that sends
`BTH_TO_M55_FACTORY_TEST_MODE` (MMI on the lens). String xrefs cannot find
`hal_key_boot_handler`; this project is for a call-graph pass instead.

## Image map (1.0.12.83 `best1600_watch_bth.bin`)

| | |
|---|---|
| File | `../x_1.0.12.83/best1600_watch_bth.bin` (1,341,116 B) |
| Code XIP | **`0x14000000`** (reset trampoline at `+0x10` loads `0x14049B65`) |
| Language | `ARM:LE:32:v8-m` / `default` (Cortex-M33) |
| NC / data alias | **`0x30000000`** (`__factory_start=0x303FF000`) |
| Header | 16-byte BES OTA (`ffffffff 00000400 …`); mapped with the rest of the file |

M55 app (`platform_tester.bin`) stays at `0x2C000000` — separate project if needed.

## Import + first scan

From the repo root:

```bash
./Reverse/firmware/ghidra/import_bth.sh
```

That creates `Reverse/firmware/ghidra/project/StarAirBth.gpr`, imports the BTH
image at `0x14000000`, maps NC alias `FLASH_NC` @ `0x30000000`, runs
auto-analysis, then `FactoryKeyEntry.java`. The script bookmarks + labels
factory strings, dumps xrefs if any, lists instructions with 500/3000/5000
immediates, and stubs a call-graph from named functions (those names only
exist after you create functions by hand — BES does not xref the log strings).

Skip analysis (bookmarks/overlay only, ~5 s):

Ghidra 12 headless runs the **Java** scripts (`AddBesNcOverlay.java`,
`FactoryKeyEntry.java`). The `.py` copies are for the GUI Script Manager
(`@runtime PyGhidra`).

Skip analysis (project only):

```bash
./Reverse/firmware/ghidra/import_bth.sh --no-analysis
```

GUI afterwards: `ghidraRun`, open `Reverse/firmware/ghidra/project`, file
`best1600_watch_bth.bin`. Bookmarks are under category `factory-key`. A project
already exists after a successful `import_bth.sh` (auto-analysis ~1 min on this
1.3 MB image). Re-import overwrites it.

After analysis, factory strings still have **0 xrefs** — that is the BES
trace-hash, not a failed import. The call-graph stub cannot name
`app_poweron_key_init` as a function; those labels sit on `.rodata`. The
500/3000/5000 immediate list in `bth_factory_key_entry.md` is a set of timeout
anchors, not the boot combo.

## What to finish by hand (the multi-hour part)

1. Jump to bookmarks `app_factorymode_enter`, `app_poweron_key_init`,
   `app_factorymode_key_init`, `To enter test mode!!!`.
2. From `app_init` / `app_watch_init`, follow `power on case:%d` to the branch
   that calls `app_factorymode_enter`.
3. That branch is fed by `hal_key_boot_handler` / debounce
   (`HAL_KEY_EVENT_LONGPRESS_{500,3000,5000}_MS`). Read the GPIO key-scan for
   **which code** (likely power) and **which duration**.
4. Confirm the mailbox send of `BTH_TO_M55_FACTORY_TEST_MODE` (M55 shows
   `enter MMI mode!`).

A 3 s / 5 s power-on hold on the glasses will likely beat this if the menu
appears on the display.