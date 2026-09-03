# Matched Toolchain Spec (Star Air / myvu)

Goal: reproduce a build environment whose codegen is **byte-compatible** with the shipped
firmware, so new code can be compiled and linked into the existing image (cave veneers,
function replacement) rather than byte-patched by hand.

> This is *not* a from-scratch compiler. Writing an ARMv8-M C++ compiler that matches GCC's
> codegen byte-for-byte is a multi-year effort with a strictly worse result than using the
> compiler the vendor actually used. The task is **identification + reproduction + validation**.

---

## 1. Toolchain identity (recovered from the binaries)

All three firmware versions (`1.0.7.83`, `1.0.11.53`, `1.0.12.83`) **and** both cores
(M55 `platform_tester.bin`, M33 `best1600_watch_bth.bin`) embed the identical build path:

```
/mnt/workspace/workspace/GCC-10-pipeline/
  jenkins-GCC-10-pipeline-338_20211018_1634516203/
  src/newlib/newlib/libc/{stdlib,string,time}/*.c
```

That is the **Arm GNU Toolchain `arm-none-eabi` GCC-10 Jenkins pipeline, build 338,
dated 2021-10-18** → the official release **`gcc-arm-none-eabi-10.3-2021.10`** (GCC 10.3.1).

| Property | Value | Evidence |
|---|---|---|
| Compiler | `arm-none-eabi-gcc` **10.3.1** (Arm GNU Toolchain **10.3-2021.10**) | jenkins build path, 3/3 versions, 2/2 cores |
| C library | **newlib** (Arm's build, same pipeline) | `newlib/libc/...` paths |
| C++ library | **libstdc++** — full, not nano | `std::string`, `std::iostream`, `std::bad_alloc`, `std::deque`, `random_device` |
| Language | **C++** (with C) | mangled/demangled `std::` symbols, `.cpp` `__FILE__` paths |

**Consistency across versions is itself a result:** the vendor did not change toolchain
between 1.0.7 and 1.0.12, so one build environment covers all three images.

---

## 2. Target flags (recovered by instruction profiling)

Profiled with Capstone over ~620k decoded M55 instructions and ~307k M33 instructions
(`scripts/arch_probe.py`, `scripts/fp_probe.py`).

### M55 core — `platform_tester.bin` (load `0x2C000000`)

| Observation | Count | Implication |
|---|---|---|
| `wls` / `dls` / `le` (low-overhead loops) | **0** | No ARMv8.1-M loop codegen |
| `vctp` / `vpst` / MVE q-reg ops | **0** (55 "qreg" hits are skipdata artifacts) | **MVE / Helium unused** |
| `vsel*.f32` | 26 | **ARMv8-M Mainline or later** (Cortex-M4/ARMv7E-M cannot encode `vsel`) |
| `.f64` ops (`vmov.f64`, `vcvt.f64.s32`, `vcmp.f64`) | **328** | **Double-precision FPU** — rules out M33's SP-only FPv5-SP |
| `.f32` ops | 2412 | Hard-float, heavily used |
| `vcvt.f16.s16` / `.f16.u16` | 139 | **FP16** conversions present |
| `sdiv`/`udiv` | 270 | Hardware divide |
| `cmse` (`sg`/`bxns`) | ~50 (noise-level) | No meaningful TrustZone secure-gateway use |

**Conclusion — M55 flags:**
```
-mcpu=cortex-m55+nomve  -mfloat-abi=hard  -mfpu=fpv5-d16  -mthumb
```
`+nomve` is the safe choice: it *guarantees* no MVE is emitted, matching the image. (Plain
`-mcpu=cortex-m55` under GCC 10.3 also emits no MVE in practice — GCC 10's MVE
auto-vectorization is effectively absent — so both should match; `+nomve` removes the risk.)

### M33 / BTH core — `best1600_watch_bth.bin` (load `0x14000000`)

Single-precision FP only in the profile; no MVE, no LOB. Cortex-M33 = ARMv8-M Mainline,
FPv5-**SP**-D16.
```
-mcpu=cortex-m33  -mfloat-abi=hard  -mfpu=fpv5-sp-d16  -mthumb
```

### Still to pin by bake-off
- **Optimization level** (`-Os` vs `-O2`) — not determinable from the instruction mix alone.
- `-fno-exceptions` / `-fno-rtti` — `std::bad_exception` is present, suggesting exceptions
  are **enabled**, but that may come from libstdc++ rather than app code.
- Struct packing / `-fshort-enums` (AAPCS default is short-enums on bare metal).

Resolve these with the byte-match harness (§4) — that is exactly what "closest to the 3
firmware" means operationally.

---

## 3. Recovered project layout

From `__FILE__` paths in the image (build dir is 2 levels deep, hence `../../`):

```
../../thirdparty/     355 hits   (star_air_lvgl/app/Pages/..., LVGL, vendor libs)
../../services/        98
../../tests/           85
../../platform/        61
../../multimedia/      38
../../xjxr_starrynet/  37        (BLE protocol to the phone)
../../factory/         26
../../apps/            26
../../xjxr_sensor_mgr/ 15
../../rtos/            14
../../xjxr_audio/      12
../../utils/           10
```

This is the vendor's tree, not something you can rebuild — but it tells you which module a
given function belongs to, which is useful when placing a hook.

---

## 4. Install + validate

### Install the exact toolchain
```sh
# Option A: Arm's official 10.3-2021.10 release (exact match)
#   https://developer.arm.com/downloads/-/gnu-rm  -> gcc-arm-none-eabi-10.3-2021.10
# Option B (convenient, but check version):
brew install --cask gcc-arm-embedded
arm-none-eabi-gcc --version     # want 10.3.1
```

### Prove the match (the important part)
Do **not** trust the flags until compiled bytes equal firmware bytes. The harness
(`match_test.sh`) compiles a candidate translation unit across a grid of flag
combinations and byte-compares against a known function extracted from the image.

Good validation targets are self-contained leaf functions with no relocations —
newlib routines are ideal, because you have their **exact source** (same newlib
revision as the jenkins path above), so any mismatch is a *flag* difference, not a
source difference.

---

## 5. What this unlocks

With a matched toolchain you move from level 1 to levels 2–3:

| Level | Capability |
|---|---|
| 1 | Same-length byte patches (strings, colors, immediates) |
| **2** | **Compile real C/C++ into the ~5.9 KB code cave at `0x2C12F2E4`, hook a `BL` to it** |
| **3** | **Replace whole functions with your own compiled code (same or smaller size, ABI-respecting)** |
| 4 | Full rebuild — still not practical (needs proprietary BES SDK + all drivers) |

Your code calls the firmware's existing functions (LVGL, display, BLE) via `firmware.ld`
absolute symbols — the shipped image becomes your BSP.

**Unchanged constraint:** the bootloop was a *lifecycle* bug, not a toolchain limit. Creating
LVGL objects during boot/splash init bricks the device regardless of how the code was built.
See `analysis/BATT_CIRCLE_POSTMORTEM.md` and `hud_ready/splash_vs_idle/SPLASH_VS_IDLE.md`.
