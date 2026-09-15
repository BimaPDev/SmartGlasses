# The toolchain: C in, flashable firmware out

```sh
python3 Tools/fwbuilder/make_no_rings.py  <stock.bin> /tmp/marker.bin      # boot marker
python3 Tools/fwbuilder/make_payload.py   payloads/digit_flip.c \
        /tmp/marker.bin  out/platform_tester.bin
```

## There is no linker, and none is needed

No `arm-none-eabi` toolchain on this machine. Apple clang already targets
`thumbv8m.main-none-eabi` and emits ARM ELF objects; the only thing a linker adds is
relocating external symbols. So `fwcc.py` enforces the rule that removes the need:

> **the payload must have no relocations in `.text`**

Achievable because vendor functions are called through absolute addresses
(`payloads/vendor_1_0_11_53.h` — *that file is the linker*), which clang turns into
`movw`/`movt` + `blx` with nothing to relocate. Literal pools are PC-relative and live
inside `.text`, so they travel with the blob.

When a payload genuinely needs a relocation, `fwcc.py` **refuses** rather than guessing.
That is the honest boundary: at that point a real linker is required.

| Refused | Why |
|---|---|
| relocations in `.text` | nothing would patch them; the call jumps to 0 |
| non-empty `.data` | no startup code copies initialisers into RAM |
| non-empty `.bss` | nothing zeroes it |
| blob > 2,270 bytes | that is the free PSRAM hole |
| no boot marker | the result would be unreadable — see below |

All five are tested as negative controls, not assumed.

## Where the code goes

XIP `.text` (file `0x4A1270`–EOF) has **zero** free bytes in 2.19 MB. Code goes in PSRAM:

- 2,270 bytes free at file `0x3EC950` → VA `0x3C3C4600`
- ~152 KB more reclaimable from the AAC at `0x46712C`–`0x48E771`

PSRAM executability is **confirmed on hardware** (FIELD_NOTES §8c).

## Always carry a boot marker

`make_payload.py` refuses to write without one, and that refusal is load-bearing.
Without a marker, "the display looks normal" means *either* the payload never ran *or*
the device faulted and A/B rolled back — opposite answers that no photograph can
separate. The first PSRAM test shipped without one and came back unreadable.

With `make_no_rings.py` applied first:

| Rings | Display | Verdict |
|---|---|---|
| gone | payload's effect visible | it ran |
| gone | normal | booted, payload did not run |
| **still there** | normal | faulted, A/B rolled back |

## Writing a payload

First function in the file, entered at offset 0:

```c
#include "vendor_1_0_11_53.h"

const uint8_t *stub(const void *font, uint32_t letter)
{
    if (letter >= '0' && letter <= '9')
        letter = (uint32_t)('9' - (letter - '0'));
    return LV_FONT_GET_GLYPH_BITMAP(font, letter);
}
```

Locals and compile-time constants only — no globals, no statics, no string literals
(each would land in `.data`/`.bss`/`.rodata` and be refused).

## Status

- PSRAM executes hand-written Thumb — **confirmed on hardware**
- `digit_flip.c` compiles to 22 bytes, 0 relocations, and is **built and flashable but
  not yet run**. Until it renders, "compiled C runs on the glasses" is unproven.
