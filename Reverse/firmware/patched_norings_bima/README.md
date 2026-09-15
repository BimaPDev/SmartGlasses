# No rings + BIMA — 1.0.11.53

Two independent patches stacked into one image.

| | where | what | size |
|---|---|---|---|
| no-rings | `0x61b7f8` | `border_opa 92 -> 0` (`movs r1,#92` -> `movs r1,#0`) | **1 byte of code** |
| wordmark | `0x4134D0` | power-off logotype redrawn as BIMA | **2,592 bytes of data** |

They cannot interact. One is an operand inside a live instruction in `.text`; the other
is image payload in the PSRAM-copied data region. Nothing else in the image moves and
the length is unchanged.

## Verified as a combined build, not just separately

That distinction is the point. Both verifiers were re-run against **this** image:

```sh
P=Reverse/firmware/patched_norings_bima/1.0.11.53/platform_tester.bin
node Tools/fwbuilder/verify-no-rings.mjs \
     Reverse/firmware/x_1.0.11.53/platform_tester.bin "$P" --combined
node Tools/fwbuilder/verify-wordmark.mjs "$PWD" "$P"          # 29 gates
```

Both verifiers had to be **scoped** to allow this, and scoped in a way that keeps them
able to fail:

- `verify-no-rings.mjs` G3 used to assert "exactly one byte changed in the whole file".
  It now asserts **exactly one byte of CODE** changed (at or above `0x469954`), which is
  the claim that actually matters, and a separate G3b fails on any *data* change unless
  `--combined` is passed. Running the combined image **without** `--combined` still
  fails — checked, not assumed.
- `verify-wordmark.mjs` scopes its "nothing else moved" gate to the image's own extent
  and prints a note naming any bytes changed elsewhere.

## Rebuild

```sh
python3 Tools/fwbuilder/make_no_rings.py  <stock>        /tmp/step1.bin
python3 Tools/fwbuilder/make_wordmark.py  /tmp/step1.bin \
        Reverse/firmware/patched_norings_bima/1.0.11.53/platform_tester.bin
```

Order does not matter — disjoint regions — but this is the order that was built and
verified.

## Status

no-rings alone is **confirmed on hardware**. The wordmark, alone or combined, is
**not yet confirmed**.
