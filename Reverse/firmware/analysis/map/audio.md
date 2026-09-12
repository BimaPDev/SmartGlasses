# Audio & DSP — MYVU 1.0.11.53

Leaf 1.5 of the subsystem map. Target: `Reverse/firmware/x_1.0.11.53/platform_tester.bin`
(7,042,632 B). **Build-specific: every offset below is 1.0.11.53 only.**

Address model (PLAN.md): code `VA = file + 0x2C010000` · data `file = VA - 0x3BFD7CB0`.

Oracle: `node Reverse/firmware/analysis/map/verify-audio.mjs` -> `audio verification passed`.

---

## 0. Controls (stated first, per PLAN.md method rules)

Nothing in this document rests on an unvalidated search.

| Control | Result |
|---|---|
| POSITIVE — string search finds known-present audio needles (`a2dp: hifi not ready: %d %d %d %d %d`, `audio/click.aac`, `xjxr_audio_set_volume`, `algo_process_kws_detection`, `bt_sco_codec_msbc_init`) | all found |
| NEGATIVE — known-absent needles (`kws_model.nn`, `STAR_NN`, `DFSMN`, `audio/wozai.aac`, `bt_sco_codec_lc3_init`, `a2dp_sink_aac_encoder_open`) | all absent |
| POSITIVE/NEGATIVE — data delta. `[0x48e774]` decodes to `"audio/click.aac"` under `0x3BFD7CB0`; it does **not** under `0x3C000000` (known-bad) or `0x3BFD7C0C` (the 12.83 delta) | discriminates |
| POSITIVE — the ADTS decoder is semantic, not a byte-pattern guess: for all 13 clips the frame chain walks from byte 0 and lands **exactly** on `offset + size`, and `phone_8k.aac` is the **only** clip whose header reports 8 kHz — matching its name | 13/13 exact, 1/1 |
| NEGATIVE — the same ADTS walk started one byte into a clip must not produce a valid chain | fails as required |
| POSITIVE — the write-safety test flags an offset inside the HiFi4 DSP image (`0xad987`, a real KWS log string) | flagged |

`XIAOXI` is present (`0xadb12`) and `Xiaoxi` is absent — a case-discriminating pair that
also proves the search is not case-folding. See §3.3.

---

## 1. The two cores

Audio on this device is split across two processors inside one flash image.

| Core | What it runs | Where in the file |
|---|---|---|
| **M55** (Cortex-M55, XIP) | policy: focus control, volume, BT link management, the local AAC player, the BLE/StarryNet audio messages | `.text` from `0x469954` up; rodata in the PSRAM region |
| **HiFi4 DSP** (Xtensa) | signal processing: AEC, beamforming, NS, VAD, **KWS / wake-word detection**, SCO codecs' heavy lifting | sub-image `0x04E9B4`–`0x143F14` |

The DSP image is a separate linked binary embedded in the OTA. It is loaded by the M55
driver `../../platform/drivers/hifi4/dsp_loader.c` (source path literal `0x143f13`), whose
log strings sit immediately after the sub-image:

```
0x143ef8  best1600_dsp
0x143f40  %s base:%p size:0x%08x
0x143f58  binary_struct ver:%04x
0x143f70  iram:%08x~%08x dram:%08x~%08x sram:%08x~%08x
0x143fa0  %s: Bad itcm s-addr=0x%X        (and Bad itcm/dtcm e-addr)
0x144010  dsp_check_and_startup
0x144028  DSP_HIFI4
0x144034  hal_mcu2dsp_open failed: %d
0x144050  hal_mcu2dsp_start_recv failed: %d
0x144074  ../../platform/drivers/hifi4/rx_dsp_hifi4_trc.c
```

So the boot sequence is: M55 validates the embedded `binary_struct` header, range-checks
ITCM/DTCM start/end addresses, copies the segments, and calls `dsp_check_and_startup`;
control messaging is `hal_mcu2dsp_*` mailbox RPC, with a separate trace-receive channel.

**Customization tier for anything on the DSP: CODE, and out of scope.** The DSP image is a
foreign-ISA blob whose segment addresses are checked at load. This is the exact region that
made `veneer.ld` unsafe — its "code cave" was inside this sub-image. **Never propose a byte
write strictly inside `[0x04E9B4, 0x143F14)` or inside sensor_hub `[0x134070, 0x14A7A4)`.**
Nothing proposed in this document lands there; the verifier enforces it.

> Note on the two inherited ranges: as given in PLAN.md they overlap
> (`0x134070 < 0x143F14`). This leaf does not resolve which end address is right and does
> not need to — it treats the **union** `[0x04E9B4, 0x14A7A4)` as forbidden, which is safe
> under either reading.

---

## 2. Bluetooth audio links and codecs

M55-side link glue lives in `../../apps/bth_if/bt_if_client/`.

### 2.1 A2DP sink (music)

| Offset | Literal |
|---|---|
| `0x174e60` | `../../apps/bth_if/bt_if_client/bth_a2dp_sink.c` |
| `0x174ecc` | `../../apps/bth_if/bt_if_client/bth_a2dp_client.c` |
| `0x174f20` | `A2DP_CONN_EVT` / `A2DP_DISC_EVT` / `A2DP_STREAM_CHANGE_EVT` |
| `0x175730` | `../../apps/bth_if/bt_if_client/bth_a2dp_sink_player.cpp` |
| `0x1757cc` | `a2dp_sink_sbc_decode` |
| `0x175888` | `a2dp_sink_aac_decoder_open` |
| `0x1758cc` | `a2dp_sink_decoder_open` (asserts `!sbc_dec`, `!smf_open(sbc_dec, decPara)`) |
| `0x175850` | `a2dp-start, codec = %d, rate = %d, vol = %d` |

**Two A2DP codecs only: SBC and AAC.** There is a decoder-open path for each and no other.
Decoding goes through `smf_open` (BES' Stream Media Framework). There is no
`a2dp_sink_aac_encoder_open` (negative control) — the glasses are a sink, not a source.

### 2.2 HFP / SCO (calls)

| Offset | Literal |
|---|---|
| `0x174d44` | `../../apps/bth_if/bt_if_client/bth_hfp_client.c` |
| `0x174d9c` | `HFP_CALLER_IND_EVT`, `HFP_CALL_STATE_EVT`, `HFP_CALLSETUP_STATE_EVT`, `HFP_SPEAKER_VOL_SET_EVT`, `HFP_STREAM_START_EVT`, `HFP_STREAM_STOP_EVT` |
| `0x1750e8` | `BT_SCO_CONN_EVT` / `BT_SCO_DISC_EVT` |
| `0x175278` | `../../apps/bth_if/bt_if_client/bth_sco_stream.c` |
| `0x172c80` | `../../apps/audioplayers/bt_sco_codec_msbc.c` (`bt_sco_codec_msbc_init/encoder/decoder/deinit`) |
| `0x172df0` | `../../apps/audioplayers/bt_sco_codec_cvsd.c` (`bt_sco_codec_cvsd_init/encoder/decoder/deinit`) |
| `0x1753b8` | `sco-start:sample_rate:%d volume %d` |
| `0x1755b8` | `bt_sco_speaker_force_mute`, `bt_sco_speaker_volume_set` |

**Two SCO codecs: CVSD (narrowband) and mSBC (wideband).** No LC3 — the single `lc3`/`LC3`
occurrence in the image is not a codec entry point, and `bt_sco_codec_lc3_init` is absent
(negative control). SCO is bidirectional (both `_encoder` and `_decoder` exist), unlike A2DP.

Both links are suppressed during OTA: `sco, ota is ongoing` (`0x174d74`),
`a2dp, ota is ongoing` (`0x175970`), `kws, ota is ongoing` (`0x3e8d4`),
`local play, ota is ongoing` (`0x3dc40`).

### 2.3 The `a2dp:` / `hifi not ready` telemetry

Three adjacent format strings in `bth_a2dp_sink_player.cpp`:

```
0x1759b0  wait wakeup words end
0x1759c8  a2dp:%d %d %d %d %d %d %d %d %d %d
0x1759ec  a2dp: hifi not ready: %d %d %d %d %d
0x175a14  delay:%d %d %d %d %d slow:%d %d %d %d %d hifi:%d bypass:%d
0x175a68  %s: bth slow, freq:%d
```

Read together these are the A2DP-sink jitter/underrun instrumentation: a 10-slot histogram
(`a2dp:`), a 5-slot histogram of "the HiFi4 post-processing chain was not ready when a
buffer came due" (`hifi not ready`), and a combined delay/slow/hifi/bypass line. `bypass`
means the DSP effect chain was skipped for that buffer. `wait wakeup words end` shows that
A2DP playback start is *gated on the wake-word engine finishing* — the two contend for the
same DSP. This is diagnostic output only; there is no tunable here.

**Tier: none (read-only telemetry).** Visible over the trace/UART channel.

---

## 3. Capture path: mic -> DSP -> assistant

### 3.1 M55 side

`../../tests/besair_platform/../../xjxr_audio/m55/` is the vendor's M55 audio layer:

| Offset | File / symbol |
|---|---|
| `0x3e160` | `xjxr_voice_assistant.cpp` |
| `0x3e85f` | `app_kws.cpp` — `voice_kws_process` (`0x3e8a0`) |
| `0x3e91c` | `xjxr_audio_focus_control.cpp` |
| `0x3ece8` | `xjxr_audio_requests.c` |
| `0x3d818` | `xjxr_audio_m55_msg_proc.cpp` |

MCPP (multi-core processing pipeline) users, i.e. who may own the mic:

```
0x3e524  APP_MCPP_USER_KWS
0x3e5b0  APP_MCPP_USER_TRANSLATE
0x3e5f8  APP_MCPP_USER_WX_VOICE
0x3e81c  APP_MCPP_USER_CALL
0x3e830  APP_MCPP_USER_AUDIO
```

Audio focus owners (`xjxr_audio_focus_control.cpp`, `0x3ec34`+):
`UNKNOW`, `LOCAL_PLAYER`, `AI_ASSISTANT`, `AI_TRANSLATE`, `WEIXIN_VOICE_REPLY`,
`CALL_PLAYER`, plus request types `TRANSLATOR`, `WX_VOICE`, `SCO_PLAYBACK`, `ONE_SHOT`,
`CLEAR_ALL`. Focus results are `FOCUS_NONE` / `FOCUS_LOSS` / `FOCUS_GAIN`.

Wrappers `voice_assistant_wrapper_start` (`0x3e504`), `translator_wrapper_start`
(`0x3e594`), `wx_voice_wrapper_start` (`0x3e5e0`), `one_shot_wrapper_start` (`0x3e4a8`)
each request focus, then `start_capture_audio` (`0x3e6fc`) which logs `%s, open kws hifi`
(`0x3e710`) — i.e. capture turns the DSP KWS pipeline on. Uplink is Opus
(`voice_assistant_wrapper_stop, %s, opus = %d` at `0x3e584`; the DSP side logs
`push opus data failed! fifi len %d` at `0xadb7c`), which matches PROTOCOL.md's
phone-bound voice stream.

Two gates worth noting: `screen off and not enable wakeup` (`0x3e2f0`) — wake word is
suppressed with the screen off unless a setting allows it — and
`bth disconnected, wake up, %s` (`0x3e738`), a distinct wake path when the phone is gone.

### 3.2 DSP side (inside the sub-image)

All of the following string offsets are **inside** `[0x04E9B4, 0x143F14)`, which is how we
know the algorithms run on the HiFi4, not the M55:

```
0xad9e0  ../../services/mcpp/./bes/air/algo_process_kws.c
0xad9d1  SPEECH_AQE_KWS
0xad987  =kws %d sample_rate=%d, frame_len=%d, mic_num=%d, mode=%d sample_bytes:%d
0xada11  algo_process_kws_open        0xada80  algo_process_kws_set_cfg
0xadba4  algo_process_kws_detection   0xadd1f  send_wakeup_notification at: %d
0xadab6  kws %d enter_count=%d score=%d, %d time=%d %s,%d,%d,%s,%d,%d
0xadb12  [KWS - XIAOXI] cnt: %d after wakeup, threshold=%d
0xadc0c  [KWS - XIAOXI] wakeup word power is %d
0xadb44  filter side incorrect user by RMS mean during wakeup!!!
0xadc33  filter side incorrect user by low volume!!!
0xadce5  rms mean output[%d], mic1[%d], rate=%d%%, threshold[%d%%]
0xb29be  ../../services/multimedia/speech/src/process/kws/aqe_kws.c
```

`mic_num=%d` and `mic1[%d]` plus the `res_2mic_*` config names (§6) confirm a **two-mic**
array with beamforming/VAD. Post-detection the DSP applies two side-rejection filters
(absolute volume, and an RMS-mean ratio between mics — a "was this the wearer or a
bystander" test), then `send_wakeup_notification`.

### 3.3 Wake word — what is and is not here

**The wake-word model is not in this firmware.** `kws_model.nn`, `STAR_NN` and `DFSMN` are
all absent (negative control); the real 1.4 MB float32 model lives in the Android app, and
the same files ship in `Reverse/extracted/base/assets/fsp/res/` (§6). This document does
**not** re-assert the retracted "KWS model is in the OTA" claim; see CLAUDE.md.

What *is* in the firmware is the **runner**: the DSP-side detection loop, its scoring and
thresholds, and the M55 plumbing.

Branding: the DSP log tag is `[KWS - XIAOXI]` (`0xadb12`), while the user-facing string on
this build is `Hey Aicy` (11 occurrences, e.g. inside the localized sentence at `0x41b35c`,
so the phrase itself begins at `0x41b362`). These are not in
conflict — the internal algorithm tag kept the old project codename. Quote the user-facing
name from the i18n sentences, never from the DSP log tag.

---

## 4. Playback: local player and the 13 embedded AAC clips

### 4.1 The player

`xjxr_audio_local_player.cpp` (`0x3db40`) and `xjxr_audio_aac_decoder.cpp` (`0x3dde8`).
Clips are decoded through `smf` with a **synthetic file API** registered over the in-flash
bytes — `write_fs` / `read_fs` / `close_fs` / `seek_fs` / `tell_fs` / `length_fs`
(`0x3de34`–`0x3dee4`), `%s register IO success!`. Entry points:

```
0x3dc5c  xjxr_local_player_start          0x3dc74  %s play id invalid %d
0x3dce0  xjxr_local_play_wakeup_word      0x3dcb8  %s keep playing aac id:%d current:%d
0x3dffc  local_player_aac_decoder_start   0x3e01c  %s decodeId=%d is invalid!
0x3e038  %s decodeId=%d, file=%s
0x43e4c4 / 0x43e8f8  "play internal sound" / play_internal_sound  (Notify/lv_pip_sound_effects.c, 0x43e380)
```

So the LVGL notification layer calls `play_internal_sound(id)`, which resolves an id to one
of the 13 clips below.

### 4.2 The clip descriptor table

Two parallel arrays, both indexed by the same clip id:

* **names** — `const char *name[13]` at file **`0x48e774`** (VA `0x3C466424`), 4-byte stride.
* **descriptors** — `struct { void *handle; u32 size; const u8 *data; }` (12 bytes) at file
  **`0x465920`**, 13 entries, ending exactly at `0x4659BC` where the first clip's payload
  begins. `handle` is 0 in flash and is written at runtime.

Derivation (not assumed): the lookup helper at `0x4c67f0` iterates `r4 = 0 .. 12` with
`cmp r4,#0xd` at `0x4c680c`, and on a hit computes
`add.w r4,r4,r4,lsl #1` then `add.w r6,r3,r4,lsl #2` — i.e. `base + i*12` — with `r3`
loaded from the literal at `0x4c682c`, whose value `0x3C43D5D0` is exactly file `0x465920`.
The same routine writes the handle back with `str.w r0,[r3,r4,lsl #2]`, proving `handle` is
field 0. A second 13-element array of 24-byte runtime slots lives at `0x48e7a8`
(literal at `0x4c6828`).

### 4.3 The clips (1.0.11.53)

All are **ADTS AAC-LC, mono, no CRC** (`FF F1`), profile field `01`. Frame chains verified
to land exactly on `offset + size` for all 13.

| id | name | descriptor | payload | size | rate | frames | ≈dur |
|---|---|---|---|---|---|---|---|
| 0 | `audio/click.aac` | `0x465920` | `0x48c8b4` | 881 | 16 k | 4 | 0.26 s |
| 1 | `audio/connectSucc.aac` | `0x46592c` | `0x477ddc` | 10,962 | 16 k | 28 | 1.79 s |
| 2 | `audio/disconnect.aac` | `0x465938` | `0x47392c` | 15,883 | 16 k | 40 | 2.56 s |
| 3 | `audio/msg.aac` | `0x465944` | `0x48ad20` | 7,059 | 16 k | 16 | 1.02 s |
| 4 | `audio/unlock.aac` | `0x465950` | `0x4659bc` | 5,999 | 16 k | 13 | 0.83 s |
| 5 | `audio/screenOff.aac` | `0x46595c` | `0x472fa8` | 2,436 | 16 k | 26 | 1.66 s |
| 6 | `audio/AsistDisconnected.aac` | `0x465968` | `0x48272c` | 30,912 | 16 k | 50 | 3.20 s |
| 7 | `audio/connSucTTS.aac` | `0x465974` | `0x47a8b0` | 32,378 | 16 k | 52 | 3.33 s |
| 8 | `audio/wozai441.aac` | `0x465980` | `0x48cc28` | 6,985 | **44.1 k** | 31 | 0.72 s |
| 9 | `audio/ei441.aac` | `0x46598c` | `0x489fec` | 3,379 | **44.1 k** | 16 | 0.37 s |
| 10 | `audio/phone_8k.aac` | `0x465998` | `0x46712c` | 16,200 | **8 k** | 26 | 3.33 s |
| 11 | `audio/phone_16k.aac` | `0x4659a4` | `0x46b074` | 32,561 | 16 k | 51 | 3.26 s |
| 12 | `audio/screenshot.aac` | `0x4659b0` | `0x477738` | 1,699 | 16 k | 5 | 0.32 s |

Region: `0x4659BC` – `0x48E771`, 167,334 payload bytes, laid out contiguously in **id-shuffled
order** with only 0–3 bytes of alignment padding between clips.

Reading the set: ids 8/9 are the wake-word acknowledgements (`wozai` = 我在, "I'm here";
`ei` = 欸, "mm?") — the only 44.1 kHz clips, played by `xjxr_local_play_wakeup_word`. Ids 10/11
are the call ringtone at the two SCO rates (8 k CVSD, 16 k mSBC) — id 10 being the only 8 kHz
clip in the image is the semantic control for the whole decode. Id 7 `connSucTTS` is a
recorded TTS line, not a tone.

### 4.4 Replacing a clip — **tier: DATA**, with hard constraints

This is a genuinely available surface, and a rare one: the payload is plain ADTS bytes in the
PSRAM-copied region, the OTA has no signature gate (MD5 + A/B only), and nothing here runs
during the LVGL splash, so the boot-order brick mode that killed v5/v6 does not apply.

Procedure:

1. Encode the replacement as **ADTS AAC-LC, mono, no CRC** at the clip's existing sample
   rate. Keep the sample rate: id 10 is consumed by an 8 kHz SCO path and ids 8/9 by the
   44.1 kHz playback path; the descriptor carries no rate field, so the rate is read from
   the ADTS headers you supply and a mismatch lands in the wrong resampler.
2. **In place, same length or shorter** is the only safe shape. Write the new bytes at the
   clip's payload offset and update the `size` field at `descriptor + 4`
   (e.g. `0x465924` for id 0). Zero-pad the tail — do **not** leave the old trailing frames
   readable, or the decoder will run past the new content up to the old `size` if you forget
   to shrink the field.
3. **Do not grow a clip past its current size**: the payloads are packed contiguously, so a
   larger clip overwrites its neighbour. Growing requires relocating the payload, and there
   is no proven free region in the PSRAM segment — treat "bigger clip" as unsolved, not as a
   known-good patch.
4. The `data` pointer at `descriptor + 8` is a VA: `file + 0x3BFD7CB0`. It only needs editing
   if you relocate.
5. `handle` at `descriptor + 0` must stay 0 in the image.
6. Re-run the OTA MD5 over the patched image; A/B means a bad flash is recoverable.

Size budget for a like-for-like swap, per clip, is the `size` column above. A comfortable
target is a 16 kHz mono AAC-LC at ~16–24 kbit/s, which is roughly what the vendor used
(e.g. id 12, 1,699 B for 0.32 s ≈ 42 kbit/s; id 5, 2,436 B for 1.66 s ≈ 12 kbit/s).

Removing a sound entirely is cheaper and safer than replacing it: set `size` to 0 at
`descriptor + 4` and leave the payload alone. That is a 4-byte DATA patch.

### 4.5 Declared write targets (machine-checked)

Every byte offset this document proposes writing, and nothing else. The verifier parses
this block, requires each entry to be outside the forbidden union `[0x04E9B4, 0x14A7A4)`,
and requires each entry to be one it independently checks.

```write-targets
465924 465928 465930 465934 46593c 465940 465948 46594c
465954 465958 465960 465964 46596c 465970 465978 46597c
465984 465988 465990 465994 46599c 4659a0 4659a8 4659ac
4659b4 4659b8
4659bc 46712c 46b074 472fa8 47392c 477738 477ddc 47a8b0
48272c 489fec 48ad20 48c8b4 48cc28
48e774
```

Rows 1–3 are the `size` (`+4`) and `data` (`+8`) fields of the 13 descriptors; row 4 is the
13 clip payload starts; row 5 is the name array. No DSP or sensor_hub offset appears.

**Not attempted / not claimed:** adding a 14th clip. Both `cmp r4,#0xd` at `0x4c680c` and the
13-slot runtime array at `0x48e7a8` would have to change — that is CODE tier.

---

## 5. Volume, mute, sound-effect mode — **tier: CONFIG**

### 5.1 M55 volume service

`../../tests/besair_platform/../../xjxr_audio/m55/xjxr_audio_volume.cpp` (`0x3d43c`):

```
0x3d484  convert_local_vol_to_xjxr_vol      0x3d558  convert_xjxr_vol_to_local_vol
0x3d4c8  xjxr_audio_get_min_volume          0x3d4fc  xjxr_audio_get_max_volume
0x3d518  xjxr_audio_get_volume              0x3d578  xjxr_audio_set_volume
0x3d5d4  xjxr_audio_volume_up               0x3d6b8  xjxr_audio_volume_down
0x3d708  xjxr_audio_volume_mute             0x3d75c  xjxr_audio_volume_unmute
0x3d778  xjxr_audio_get_mute_state          0x3d794  xjxr_audio_phone_notify_volume
```

There are **two volume scales** — a "local" (BT stack) scale and an "xjxr" (product) scale,
with explicit converters both ways and per-type min/max clamps
(`[%s] old_vol=%d is max vol value, can not volume up!`, `0x3d648`).

Volume **types** (`audio_volume_get_current_type`, `0x3f810`):
`VOLUME_TYPE_NOTIFICATION`, `VOLUME_TYPE_A2DP`, `VOLUME_TYPE_HFP`, and a fallback
`VOLUME_TYPE_INVALID` (`0x3f830`–`0x3f8b0`). The per-type RPC names are enumerated as
literals: `audio_volume_set_4_hfp`, `audio_volume_set_6_hfp`, `audio_volume_set_9_a2dp`,
`audio_volume_mute_hfp` / `_a2dp`, `audio_volume_unmute_hfp` / `_a2dp`,
`audio_volume_mute_state_hfp` / `_a2dp` (`0x3f658`–`0x3f7f8`).

### 5.2 Phone-settable knobs

From the launcher's `handleSystemMsg` action pool (leaf-1.2's table at `0x60ed78`), the
audio-relevant actions the phone can send are:

| Action | Effect | Tier |
|---|---|---|
| `get_volume` / `set_volume` | product-scale volume | CONFIG |
| `get_volume_stream_type` | which of NOTIFICATION/A2DP/HFP is current | CONFIG (read) |
| `get_glass_sound_effect_mode` / `set_glass_sound_effect_mode` | sound-effect mode | CONFIG |
| `get_music_tp_control_mode` / `set_music_tp_control_mode` | whether the touchpad drives music transport | CONFIG |

There is **no** `set_volume_stream_type` — the stream type is reported, not chosen.

The sound-effect mode is stored as an integer and round-trips through the launcher model:

```
0x1a5010  setSoundEffectMode
0x1a5024  [Launcher]MessageModel::setSoundEffectMode to %d
0x1a5064  getSoundEffectMode
0x1a5078  [Launcher]MessageModel::getSoundEffectMode to %d
0x1a50ac  get_glass_sound_effect_mode      0x1a6348  set_glass_sound_effect_mode
```

`%d`, not an enum-name lookup — so the accepted values are a small integer range, and the
marketing string `Brilliant sound Crystal clear all around` (`0x41c1f8`) is the UI copy for
one of them. **The value set is not established here** (see §7).

Also CONFIG, from the assistant intent table: `Intent_Set_SoundIncrease`,
`Intent_Set_SoundReduce`, `Intent_Set_SoundMute`, `Intent_Set_SoundUnmute`,
`Intent_Set_SoundMax`, `Intent_Set_SoundMin` (`0x190f34`–`0x190fac`) and the system variants
`Intent_Sys_SoundIncrease` / `_SoundReduce` / `_SoundLager` (`0x19115c`) — i.e. volume is
voice-controllable, and `SYS_INFO_SOUND_LEVEL` (`0x191690`) is the read-back. The StarryNet
command `SYS_VOLUME` (`0x31598`, `STARRY__MSG__CMD__SYS_VOLUME` at `0x315fc`) is the BLE
transport for the same.

`app_slide_volume` (`0x369b0`) is the touchpad slide-to-change-volume gesture (leaf-1.6 owns
the gesture side).

---

## 6. The NN models are on the filesystem, not in this image

`Reverse/extracted/base/assets/fsp/res/` holds the real models, none of which appear in
`platform_tester.bin`:

| File | Size | Role |
|---|---|---|
| `kws_model.nn` | 1,422,200 B | wake word (see §3.3 — **not** in the firmware) |
| `cwr_model.nn` + `cwr_ctc_map.txt`, `cwr.cmvn`, `cwr_decoder.cfg`, `cwr_feature.cfg`, `cwr_map_table` | 2,069,516 B | command-word recognition (on-device CTC ASR) |
| `ns_1192.nn` | 357,452 B | noise suppression |
| `vad.cmvn`, `vad_feature.cfg`, `vad_decoder.cfg`, `vad_decoder_assistant.cfg`, `vad_decoder_trans.cfg` | small | VAD, with **per-mode decoders** (assistant vs translation) |
| `res_2mic_*.bin` (9 files, ~15 KB each) + `res_2mic_off.bin` | ~15 KB | two-mic front-end tunings, named by scenario: `aec_bfvad_assistant_star`, `gevnnbf_trans_star`, `bfvad_wechat_star`, `wkponly_assistant_star`, … |

The `res_2mic_*` naming maps one-to-one onto the focus owners in §3.1 (assistant /
translation / WeChat voice), and `res_2mic_off.bin` (548 B) is the front-end-disabled
profile. **Tier: DATA**, but on a different partition from the OTA image this leaf covers —
swapping a `res_2mic_*.bin` or a `.cfg` changes the mic front-end without touching code.
`vad_decoder*.cfg` are plain text config and are the cheapest audio-behaviour knob in the
whole system. Leaf-1.7 owns that partition; flagged here because it is the audio answer.

---

## 7. What this leaf could **not** establish

Stated explicitly rather than guessed, per PLAN.md ("not found" beats a plausible guess):

1. **The numeric value set for `set_glass_sound_effect_mode`.** The mode is logged as `%d`
   and never as a name; no bounds check was located. How many modes exist, and which integer
   is which, is unresolved.
2. **The exact end offset of the HiFi4 sub-image in 1.0.11.53.** PLAN.md's DSP end
   (`0x143F14`) and sensor_hub start (`0x134070`) overlap. The forbidden set used here is the
   union, which is correct under either reading, but the true boundary was not re-derived.
3. **Which `play_internal_sound` id maps to which UI event.** The id→clip mapping is proven
   (§4.2); the event→id mapping lives in the Notify layer and was not traced.
4. **The `handle` field's runtime type** (smf decoder handle vs cached buffer) — it is 0 in
   flash and written by `0x4c6820`; that is all that is claimed.
5. **Volume scale ranges.** `xjxr_audio_get_min_volume` / `_max_volume` are per-type and
   computed, not constant literals that were located.

---

## 8. Tier summary

| Surface | Tier | Evidence |
|---|---|---|
| Volume, mute, volume-up/down | CONFIG | `set_volume` in the `0x60ed78` action pool; `SYS_VOLUME`; `Intent_Set_Sound*` |
| Sound-effect mode | CONFIG | `set_glass_sound_effect_mode` `0x1a6348`, model setter `0x1a5010` (value set unknown) |
| Music touchpad transport mode | CONFIG | `set_music_tp_control_mode` in the action pool |
| Stream type | CONFIG (read-only) | `get_volume_stream_type`; no setter exists |
| Replace a notification/TTS clip in place | **DATA** | descriptor table `0x465920`, 13×12 B; payloads `0x4659BC`–`0x48E771`; §4.4 |
| Silence a clip (`size := 0`) | **DATA**, 4 bytes | `descriptor + 4` |
| Mic front-end profile, VAD decoder configs | DATA (fs partition, not this image) | `res_2mic_*.bin`, `vad_decoder*.cfg` |
| Grow a clip / add a 14th clip | CODE | `cmp r4,#0xd` `0x4c680c`; contiguous payload packing |
| Anything on the HiFi4 DSP (KWS thresholds, AEC, NS) | CODE — **forbidden region** | KWS strings at `0xad987`+ lie inside `[0x04E9B4, 0x143F14)` |
| New codec (LC3, aptX), A2DP source | CODE | only SBC/AAC sink and CVSD/mSBC SCO decoders exist |
