# KWS wake-word model — extracted

**Source:** `Reverse/extracted/base/assets/fsp/res/kws_model.nn` (Android app, gitignored)
**Format:** `STAR_NN V0.1.0`, architecture `DFSMN`, 1,422,200 B, float32
**Extractor:** `extract_kws.py` → `tensors/*.npy` + `*_structure.json`

## Architecture (recovered — every block size decomposes exactly)

```
input   40-dim log-mel filterbank x 11 frames context = 440
        CMVN normalise with kws.cmvn (40 mean + 40 var)
  |
  L0    affine 440 -> 256                256x440 + 256          = 112,896
  |
  L1..6 6x DFSMN block                   256x64 + 64
        hidden 256, projection 64,     + 64x256 + 256
        memory order 2                 + 2x64                   =  33,216  each
  |
  L7    output block 256 -> 64 -> 410    256x64 + 64
                                       + 64x410 + 410
                                       + 2x64                   =  43,226
  |
output  410 classes
```

Total 355,530 float32. All three block arithmetics are exact — that is the evidence the
decomposition is right, not a guess.

## Cross-confirmation with the FIRMWARE

**The firmware carries the same CMVN stats, bit-identically.**

| | |
|---|---|
| phone `kws.cmvn` mean[40] | 320 B file, first half |
| firmware `f32[40]` @ `0xf12c8` | inside HiFi4 DSP `.data` |
| **delta** | **0.000e+00 on all 40 values** (variance half matches to 5.1e-07, float32 rounding) |

So the glasses run the **same 40-band filterbank front-end and the same normalisation** as
the phone-side DFSMN. The surrounding DSP `.data` structures are therefore the KWS feature
pipeline, not generic audio furniture:

- sqrt-Hann window `sin(pi*n/511)` @ `0xda188` — WOLA analysis window
- N=512 FFT twiddles @ `0xda988`
- 40-band filterbank descriptor @ `0xf27c8` (int16[3][40])
- **CMVN mean/var @ `0xf12c8`** — matches `kws.cmvn`

## What this does and does NOT change

**Stands:** the OTA does not contain *this* model. No `STAR_NN`/`DFSMN` markers in either
firmware image; sizes and dtype do not match. `STAR_AIR_WRITEUP.md:81` remains correct that
the phone-side models are not in the bins.

**Corrected:** my retraction said the region was "speech enhancement, not KWS". That was too
strong. The CMVN match proves the neighbourhood **is** the KWS feature front-end.

**Still open:** whether the int8 block at `0xe7000`-`0xed400` (~25 KB) is a small
*first-stage* on-device spotter. It is far too small to be a quantised copy of this model
(355,530 params would be ~355 KB at int8), but a two-stage design — tiny always-on spotter on
the DSP, large verifier on the phone — would explain both the size and the shared front-end.
Not proven; needs the Xtensa disassembly.

## Sibling models (same container)

| File | Size | Arch | Declared layers |
|---|---|---|---|
| `kws_model.nn` | 1,422,200 | DFSMN | 10 |
| `cwr_model.nn` | 2,069,516 | DFSMN | 13 |
| `vad_model.nn` | 427,612 | DFSMN | 7 |
| `vad_model_en.nn` | 427,612 | DFSMN | 7 |
| `ns_1192.nn` | 357,452 | Denoise | 13 |

## Why this matters for a custom wake word

DFSMN is a published architecture, the container is now parsed, the feature pipeline is
known (40-band mel, 11-frame context, CMVN supplied), and the tensors are extracted as
`.npy`. That is the full specification needed to train a replacement in any framework and
re-emit this container — the remaining cost is training data, not reverse engineering.
