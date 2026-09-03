# Wake Word Teardown

Pulling the keyword-spotting network out of the companion app, recovering its
architecture from arithmetic alone — and finding the same feature normalisation
sitting bit-for-bit inside the glasses' DSP firmware.

| | |
|---|---|
| **Device** | Meizu MYVU / Star Air, SoC BES2700BP-W |
| **Firmware** | 1.0.12.83 (cross-checked against 1.0.11.53 and 1.0.7.83) |
| **Model** | `kws_model.nn`, 1,422,200 B |
| **Params** | 355,530 float32 |
| **Extractor** | [`extract_kws.py`](extract_kws.py) → `tensors/*.npy` + `*_structure.json` |

---

## 1. What the model is

The wake-word recogniser is **not** in the glasses' firmware. It ships inside the
Android companion app, in a container the vendor calls `STAR_NN V0.1.0`, declaring
an architecture of `DFSMN` — a Deep Feedforward Sequential Memory Network, a
published design that replaces recurrence with fixed-length memory filters.

Source: `Reverse/extracted/base/assets/fsp/res/` (gitignored — decompiled APK).

Four siblings share the container:

| File | Bytes | Arch | Layers | Role |
|---|---|---|---|---|
| `kws_model.nn` | 1,422,200 | DFSMN | 10 | Wake word |
| `cwr_model.nn` | 2,069,516 | DFSMN | 13 | Command words |
| `vad_model.nn` | 427,612 | DFSMN | 7 | Voice activity |
| `vad_model_en.nn` | 427,612 | DFSMN | 7 | Voice activity (EN) |
| `ns_1192.nn` | 357,452 | Denoise | 13 | Noise suppression |

Container header:

```
0x00  "STAR_NN V0.1.0"        magic
0x14  "DFSMN"                 architecture
0x28  u32 = 10                declared layer count
0x50  float32 weights begin
```

---

## 2. Recovering the architecture

The container gives a magic string, an architecture name and a layer count — then
a megabyte of undifferentiated float32. No layer names, no shapes, no offset table.

What it *does* have is structure: the body alternates blocks of small `u32`
metadata with blocks of float weights. Classifying every 4-byte word as one or the
other and run-length encoding the result splits the file into **eight weight
blocks**:

```
112,896  ·  33,216 x6  ·  43,226        (float32 counts)
```

Those three numbers are the whole proof. A DFSMN block has a known shape — project
down, apply a memory filter over past and future frames, expand back up — so each
candidate decomposition predicts an exact parameter count. All three land dead on,
with nothing left over.

```
in     40-band log-mel x 11 frames = 440            CMVN-normalised
        |
L0     affine 440 -> 256
        256x440 + 256                                    = 112,896   EXACT
        |
L1..L6 DFSMN block x6
        hidden 256, projection 64, memory order 2
        256x64 + 64 + 64x256 + 256 + 2x64                =  33,216   EXACT (each)
        |                                                  199,296 total
L7     output block 256 -> 64 -> 410
        256x64 + 64 + 64x410 + 410 + 2x64                =  43,226   EXACT
        |
out    410 classes, scored per frame
```

**Three independent block types, three exact closures.** That is the evidence the
decomposition is right — an approximate fit would have left a remainder.

---

## 3. The find: shared normalisation

Alongside the model sits `kws.cmvn` — 320 bytes, which is 80 float32, which is
mean and variance for a 40-dimensional feature. Exactly the filterbank the input
layer expects.

Those same 40 means also appear inside the glasses' **HiFi4 DSP firmware**, at file
offset `0xf12c8`. An earlier pass had dismissed them as unlabelled "per-band
constants".

| i | Firmware @ `0xf12c8` | Phone `kws.cmvn` | Delta |
|---|---|---|---|
| 0 | 12.969467 | 12.969467 | `0.000e+00` |
| 1 | 14.615863 | 14.615863 | `0.000e+00` |
| 2 | 15.648957 | 15.648957 | `0.000e+00` |
| 3 | 16.397545 | 16.397545 | `0.000e+00` |
| … | … | … | `0.000e+00` |
| 38 | 16.599667 | 16.599667 | `0.000e+00` |
| 39 | 16.004793 | 16.004793 | `0.000e+00` |

**Bit-identical across all forty values.** The variance half matches to `5.1e-07`
— float32 rounding, nothing more.

The glasses and the phone run **the same 40-band front end and the same
normalisation**. Whatever the on-device spotter is, it was cut from this same
pipeline.

That reframes the surrounding DSP data, which had looked like generic audio
furniture. Read together it is a keyword-spotting front end, laid out in order:

| Offset | Structure | Role |
|---|---|---|
| `0xda188` | f32×512, `sin(pi*n/511)` | sqrt-Hann WOLA analysis window |
| `0xda988` | f32×768 = 384 (cos, −sin) pairs | 512-point FFT twiddles |
| `0xf12c8` | f32×40 + f32×40 | **CMVN mean / variance — matches the phone** |
| `0xf27c8` | int16[3][40] | 40-band filterbank descriptor |

The window fits `sin(pi*n/511)` with an RMS residual of `1.42e-08`, and the
neighbouring periods `/510` and `/512` are four orders of magnitude worse — so even
the FFT length is pinned rather than assumed.

---

## 4. What this corrects

An earlier conclusion in this teardown held that a nearby block of int8 data was
the wake-word model, compiled into the OTA. That was wrong and was retracted. The
retraction then over-corrected, calling the whole region speech enhancement rather
than keyword spotting. The CMVN match settles it in between.

**STANDS** — the phone-side model is *not* in the firmware. Neither image contains
a `STAR_NN` or `DFSMN` marker, and the sizes and dtype do not match.
`STAR_AIR_WRITEUP.md:81` remains correct.

**CORRECTED** — calling that region "speech enhancement, not KWS" was too strong.
The bit-identical CMVN proves it **is** the keyword-spotting front end.

**OPEN** — whether the ~25 KB int8 block at `0xe7000`–`0xed400` is a small
*first-stage* on-device spotter. Far too small to be a quantised copy of this model
(355,530 params would be roughly 355 KB at int8), but consistent with a two-stage
design: a tiny always-on network on the DSP deciding when to wake, and this larger
network on the phone confirming it, both fed by an identical front end. Confirming
that needs an Xtensa disassembler, which `Reverse/firmware/toolchain/` does not
currently have.

---

## 5. Why it matters

A wake word cannot simply be renamed, because the phrase is not stored anywhere as
a phrase. Search the firmware for the assistant's name and the only hits are
interface text telling a *human* what to say. The recogniser holds no copy of the
word — it exists as learned weights spread across the layers above.

So changing it is a **retraining problem, not an editing one**. What that requires
is now largely in hand:

- The container format is parsed, and re-emittable.
- The architecture is recovered, and DFSMN is published.
- The feature pipeline is specified — 40-band mel, 11-frame context, with the
  vendor's own CMVN statistics supplied.
- The weights are extracted as `.npy` arrays, usable as a starting point or a
  reference.

**What is still missing: training data.** Thousands of spoken examples of the new
phrase across voices, accents, distances and noise, plus a large negative corpus so
it does not fire on ordinary speech — then threshold calibration against a measured
false-accept rate. That is the honest remaining cost, and no amount of further
reverse engineering produces it.

Worth saying plainly: this constraint is not vendor obstruction. A wake-word
spotter has to run continuously at around a milliwatt while rejecting essentially
all audio it ever hears, and that budget forces a small network specialised to one
phrase at training time. It is why Siri, Alexa and Google all ship fixed wake
words, and why the platforms that do offer custom ones deliver them as a *training
service* rather than a setting.

---

## Related

- [`KWS_MODEL.md`](KWS_MODEL.md) — condensed reference for the same findings
- [`../AUDIT_2026-09-03.md`](../AUDIT_2026-09-03.md) — the wider firmware audit this sits inside
- [`../scripts/verify-audit-2026-09-03.mjs`](../scripts/verify-audit-2026-09-03.mjs) — runnable oracle, 110 checks
