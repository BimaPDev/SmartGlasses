# Pre-flash sandbox (not a glasses emulator)

## Full SoC emulator — no

A faithful BES2700BP emulator would need M55 + M33 + HiFi4 + VGLite + JBD
microLED + BLE/StarryNet + PMU, all driven by a closed BES SDK. There is no
public QEMU machine for this part. Building one from OTA bins alone is a
multi-year project, not a weekend sandbox. **Do not wait on that before
recovering the glasses.**

What *did* brick you (v5/v6) was “create LVGL objects during early dock/clock
init.” A full emu would still miss that unless it also modeled the real heap
and init order — which is the hard part.

## What this folder is

Two gates you can run on a Mac **before** another OTA:

| Tool | Catches | Misses |
|---|---|---|
| `patch_check.py` | Size shifts, cave clobber, stock sites moved, ctor/dock hooks touched, buffer overflow math for the v4 TimeModel veneer, “forbidden” BL targets into create/style paths | Runtime timing, sensor/BLE, real LVGL heap |
| `hud_preview.py` | How `HH:MM NN` / canary text *look* on a green HUD mock | Actual LVGL layout, clipping, font tofu |

Run after `patch_bima.py` (or on any candidate `platform_tester.bin`):

```bash
python3 Reverse/firmware/sandbox/patch_check.py \
  Reverse/firmware/patched_bima/1.0.12.83/platform_tester.bin

python3 Reverse/firmware/sandbox/hud_preview.py \
  --time 19:23 --soc 68 \
  --out Reverse/firmware/sandbox/out/hud_preview.png
```

Exit code **0** = harness green. Non-zero = do not flash.

## Rule of thumb (from the bootloop)

**Allowed:** same-length strings, theme immediates, veneers that only call stock
helpers and write into an existing buffer/label.

**Forbidden until glasses are healthy again:** `lv_*_create`, `add_style`, new
timers, new dock circles, anything that patches the clock **constructor**
(`HOOK_CTOR_GETTER` / dock build sites must stay stock).
