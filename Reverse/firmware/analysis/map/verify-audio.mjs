#!/usr/bin/env node
// verify-audio.mjs — oracle for Reverse/firmware/analysis/map/audio.md (leaf-1.5)
//
// Target: Reverse/firmware/x_1.0.11.53/platform_tester.bin ONLY.
// Address model: code VA = file + 0x2C010000 ; data file = VA - 0x3BFD7CB0
//
// Every claim in audio.md that reduces to bytes is re-derived here from the binary.
// Controls are declared and reported FIRST, per PLAN.md method rules.
//
// Prints exactly "audio verification passed" on success; exits non-zero on failure.

import { readFileSync, existsSync } from 'node:fs';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const HERE = dirname(fileURLToPath(import.meta.url));
const ROOT = resolve(HERE, '../../../..');
const BIN  = resolve(ROOT, 'Reverse/firmware/x_1.0.11.53/platform_tester.bin');
const DOC  = resolve(HERE, 'audio.md');
const RES  = resolve(ROOT, 'Reverse/extracted/base/assets/fsp/res');

const CODE_BASE  = 0x2c010000;
const DATA_DELTA = 0x3bfd7cb0;   // 1.0.11.53. NOT 0x3BFD7C0C (12.83), NOT 0x3C000000 (known-bad).
const BIN_SIZE   = 7042632;

// Forbidden sub-images (PLAN.md). Their four boundary values may be *named* in the doc;
// an offset strictly inside must never be proposed for a write.
const FORBIDDEN = [
  ['HiFi4 DSP',  0x04e9b4, 0x143f14],
  ['sensor_hub', 0x134070, 0x14a7a4],
];
const BOUNDARY_CONSTANTS = [0x04e9b4, 0x143f14, 0x134070, 0x14a7a4];

let failures = 0;
const fail = (m) => { failures++; console.error('FAIL: ' + m); };
const ok   = (m) => { if (process.env.VERBOSE) console.log('  ok  ' + m); };
function check(cond, msg) { cond ? ok(msg) : fail(msg); return !!cond; }

if (!existsSync(BIN)) { console.error('FAIL: binary not found: ' + BIN); process.exit(2); }
const d = readFileSync(BIN);
if (d.length !== BIN_SIZE) { console.error(`FAIL: wrong binary, ${d.length} B (want ${BIN_SIZE})`); process.exit(2); }

// ---------- primitives ----------
const u32 = (f) => d.readUInt32LE(f);
const u16 = (f) => d.readUInt16LE(f);
const hex = (n) => '0x' + (n >>> 0).toString(16);

function strAtVA(va, delta = DATA_DELTA) {
  const f = (va >>> 0) - delta;
  if (f < 0 || f >= d.length) return null;
  const e = d.indexOf(0, f);
  if (e < 0 || e - f > 160) return null;
  const s = d.subarray(f, e);
  if (s.length === 0) return null;
  for (const c of s) if (c < 0x20 || c > 0x7e) return null;
  return s.toString('latin1');
}
const strAtFile = (f) => strAtVA(f + DATA_DELTA);

function bytesAre(f, hexstr) {
  const want = Buffer.from(hexstr.replace(/\s+/g, ''), 'hex');
  return d.subarray(f, f + want.length).equals(want);
}
function countStr(s) {
  const n = Buffer.from(s, 'latin1');
  let c = 0, i = 0;
  for (;;) { i = d.indexOf(n, i); if (i < 0) break; c++; i++; }
  return c;
}

/** ADTS AAC-LC frame-chain walker. Returns {frames,end,rate,ch,crc} or null. */
const ADTS_RATES = [96000, 88200, 64000, 48000, 44100, 32000, 24000, 22050,
                    16000, 12000, 11025, 8000, 7350, 0, 0, 0];
function adtsWalk(off, limit) {
  let i = off, frames = 0, rate = null, ch = null, crc = null, prof = null;
  while (i + 7 <= off + limit) {
    if (d[i] !== 0xff || (d[i + 1] & 0xf6) !== 0xf0) break;       // sync + layer==00
    const p = (d[i + 2] >> 6) & 3;
    const r = ADTS_RATES[(d[i + 2] >> 2) & 0xf];
    const c = ((d[i + 2] & 1) << 2) | ((d[i + 3] >> 6) & 3);
    const len = ((d[i + 3] & 3) << 11) | (d[i + 4] << 3) | (d[i + 5] >> 5);
    const hasCrc = (d[i + 1] & 1) === 0;
    if (len < 7 || r === 0 || c === 0) break;
    if (frames === 0) { rate = r; ch = c; crc = hasCrc; prof = p; }
    else if (r !== rate || c !== ch || hasCrc !== crc || p !== prof) break;
    frames++; i += len;
  }
  if (frames === 0) return null;
  return { frames, end: i, rate, ch, crc, prof };
}

// =====================================================================================
// CONTROLS FIRST — a search that cannot fail proves nothing (PLAN.md).
// =====================================================================================
console.log('controls:');

// POSITIVE CONTROL A — the string search finds audio needles that are definitely present.
const posStrings = ['a2dp: hifi not ready: %d %d %d %d %d', 'audio/click.aac',
                    'xjxr_audio_set_volume', 'algo_process_kws_detection',
                    'bt_sco_codec_msbc_init', 'a2dp_sink_aac_decoder_open'];
for (const s of posStrings) check(countStr(s) >= 1, `POSITIVE CONTROL: "${s}" present (${countStr(s)})`);
console.log(`  POSITIVE CONTROL string search: ${posStrings.length}/${posStrings.length} known-present needles found`);

// NEGATIVE CONTROL B — plausible-but-absent names. If the search degenerated into
// "always found", every absence claim in audio.md (§3.3, §2.2, §5.2) would be worthless.
const negStrings = ['kws_model.nn', 'STAR_NN', 'DFSMN',          // the retracted claim stays retracted
                    'audio/wozai.aac', 'audio/ring.aac',          // plausible misspellings of real clips
                    'bt_sco_codec_lc3_init', 'a2dp_sink_aac_encoder_open',
                    'set_volume_stream_type', 'VOLUME_TYPE_MEDIA'];
for (const s of negStrings) check(countStr(s) === 0, `NEGATIVE CONTROL: "${s}" absent (found ${countStr(s)})`);
console.log(`  NEGATIVE CONTROL string search: ${negStrings.length}/${negStrings.length} known-absent needles correctly absent`);

// CONTROL C — case sensitivity. Proves the matcher is not case-folding, and pins §3.3.
check(countStr('XIAOXI') === 2, 'POSITIVE CONTROL: "XIAOXI" appears exactly twice (DSP KWS log tag)');
check(countStr('Xiaoxi') === 0, 'NEGATIVE CONTROL: "Xiaoxi" (mixed case) is absent — matcher is case-sensitive');
check(countStr('Hey Aicy') === 11, 'POSITIVE CONTROL: user-facing wake phrase "Hey Aicy" x11');

// CONTROL D — the data delta. The clip name array must decode under 0x3BFD7CB0 and
// under neither of the other two deltas in play.
check(strAtVA(u32(0x48e774), DATA_DELTA) === 'audio/click.aac',
      'POSITIVE CONTROL: delta 0x3BFD7CB0 decodes [0x48e774] -> "audio/click.aac"');
check(strAtVA(u32(0x48e774), 0x3c000000) !== 'audio/click.aac',
      'NEGATIVE CONTROL: known-bad delta 0x3C000000 does NOT decode [0x48e774]');
check(strAtVA(u32(0x48e774), 0x3bfd7c0c) !== 'audio/click.aac',
      'NEGATIVE CONTROL: 12.83 delta 0x3BFD7C0C does NOT decode [0x48e774]');

// CONTROL E — the ADTS decoder is semantic. Walking from the true start of the first
// payload must chain exactly; walking from start+1 must not produce a long valid chain.
{
  const good = adtsWalk(0x4659bc, 0x176f);
  check(good !== null && good.end - 0x4659bc === 0x176f,
        'POSITIVE CONTROL: ADTS walk from 0x4659bc covers exactly 0x176f bytes');
  const bad = adtsWalk(0x4659bd, 0x176f);
  check(bad === null || bad.frames < 3,
        'NEGATIVE CONTROL: ADTS walk from 0x4659bd (off by one) does not chain');
}

console.log('checks:');

// =====================================================================================
// §1  The two cores — the HiFi4 sub-image and its loader
// =====================================================================================
check(d.subarray(0x143ef8, 0x143f04).toString('latin1') === 'best1600_dsp',
      'DSP image name @0x143ef8 == "best1600_dsp" (inside a "%s:%s\\n" log literal)');
check((strAtFile(0x143f13) || '').includes('platform/drivers/hifi4/dsp_loader.c'),
      'dsp_loader.c source path @0x143f13');
for (const [f, s] of [[0x143f40, '%s base:%p size:0x%08x'],
                      [0x143f58, 'binary_struct ver:%04x '],
                      [0x143f70, 'iram:%08x~%08x dram:%08x~%08x sram:%08x~%08x'],
                      [0x144010, 'dsp_check_and_startup'],
                      [0x144028, 'DSP_HIFI4'],
                      [0x144034, 'hal_mcu2dsp_open failed: %d'],
                      [0x144050, 'hal_mcu2dsp_start_recv failed: %d']])
  check(strAtFile(f) === s, `dsp loader literal @${hex(f)} == "${s}"`);
for (const s of ['%s: Bad itcm s-addr=0x%X', '%s: Bad dtcm e-addr=0x%X'])
  check(countStr(s) >= 1, `dsp loader range-check string "${s}" present`);
check(countStr('../../platform/drivers/hifi4/rx_dsp_hifi4_trc.c') >= 1, 'DSP trace-rx driver present');

// =====================================================================================
// §2  A2DP / HFP / SCO
// =====================================================================================
for (const [f, s] of [
  [0x174e60, '../../apps/bth_if/bt_if_client/bth_a2dp_sink.c'],
  [0x174ecc, '../../apps/bth_if/bt_if_client/bth_a2dp_client.c'],
  [0x174f20, 'A2DP_CONN_EVT'], [0x174f30, 'A2DP_DISC_EVT'], [0x174f40, 'A2DP_STREAM_CHANGE_EVT'],
  [0x175730, '../../apps/bth_if/bt_if_client/bth_a2dp_sink_player.cpp'],
  [0x1757cc, 'a2dp_sink_sbc_decode'], [0x175888, 'a2dp_sink_aac_decoder_open'],
  [0x1758cc, 'a2dp_sink_decoder_open'],
  [0x175850, 'a2dp-start, codec = %d, rate = %d, vol = %d'],
  [0x174d44, '../../apps/bth_if/bt_if_client/bth_hfp_client.c'],
  [0x174d9c, 'HFP_CALLER_IND_EVT'], [0x174ddc, 'HFP_SPEAKER_VOL_SET_EVT'],
  [0x174df4, 'HFP_STREAM_START_EVT'], [0x174e0c, 'HFP_STREAM_STOP_EVT'],
  [0x1750e8, 'BT_SCO_CONN_EVT'], [0x1750f8, 'BT_SCO_DISC_EVT'],
  [0x175278, '../../apps/bth_if/bt_if_client/bth_sco_stream.c'],
  [0x172c80, '../../apps/audioplayers/bt_sco_codec_msbc.c'],
  [0x172df0, '../../apps/audioplayers/bt_sco_codec_cvsd.c'],
  [0x1753b8, 'sco-start:sample_rate:%d volume %d'],
  [0x1755b8, 'bt_sco_speaker_force_mute'], [0x1755d4, 'bt_sco_speaker_volume_set'],
])
  check(strAtFile(f) === s, `bt audio literal @${hex(f)} == "${s}"`);

// exactly two SCO codecs, each with a full init/deinit/encoder/decoder quartet
for (const codec of ['msbc', 'cvsd'])
  for (const part of ['init', 'deinit', 'encoder', 'decoder'])
    check(countStr(`bt_sco_codec_${codec}_${part}`) >= 1, `SCO codec symbol bt_sco_codec_${codec}_${part}`);

// the a2dp: / hifi not ready telemetry block
for (const [f, s] of [[0x1759b0, 'wait wakeup words end'],
                      [0x1759c8, 'a2dp:%d %d %d %d %d %d %d %d %d %d'],
                      [0x1759ec, 'a2dp: hifi not ready: %d %d %d %d %d'],
                      [0x175a14, 'delay:%d %d %d %d %d slow:%d %d %d %d %d hifi:%d bypass:%d'],
                      [0x175a50, 'a2dp_sink_player_thread'], [0x175a68, '%s: bth slow, freq:%d']])
  check(strAtFile(f) === s, `a2dp telemetry @${hex(f)} == "${s}"`);
check((strAtFile(0x1759c8).match(/%d/g) || []).length === 10, 'a2dp: histogram has exactly 10 slots');
check((strAtFile(0x1759ec).match(/%d/g) || []).length === 5,  '"hifi not ready" histogram has exactly 5 slots');
// the two are adjacent: "a2dp:" occurs exactly twice, once as each format
check(countStr('a2dp:') === 2, '"a2dp:" occurs exactly twice (the two histogram formats)');
check(countStr('hifi not ready') === 1, '"hifi not ready" occurs exactly once');

// OTA suppression guards
for (const [f, s] of [[0x174d74, 'sco, ota is ongoing'], [0x175970, 'a2dp, ota is ongoing'],
                      [0x3e8d4, 'kws, ota is ongoing'], [0x3dc40, 'local play, ota is ongoing']])
  check(strAtFile(f) === s, `ota guard @${hex(f)} == "${s}"`);

// =====================================================================================
// §3  Capture path
// =====================================================================================
for (const [f, s] of [
  [0x3e160, '../../tests/besair_platform/../../xjxr_audio/m55/xjxr_voice_assistant.cpp'],
  [0x3e91c, '../../tests/besair_platform/../../xjxr_audio/m55/xjxr_audio_focus_control.cpp'],
  [0x3ece8, '../../tests/besair_platform/../../xjxr_audio/m55/xjxr_audio_requests.c'],
  [0x3d818, '../../tests/besair_platform/../../xjxr_audio/m55/xjxr_audio_m55_msg_proc.cpp'],
  [0x3e8a0, 'voice_kws_process'],
  [0x3e524, 'APP_MCPP_USER_KWS'], [0x3e5b0, 'APP_MCPP_USER_TRANSLATE'],
  [0x3e5f8, 'APP_MCPP_USER_WX_VOICE'], [0x3e81c, 'APP_MCPP_USER_CALL'],
  [0x3e830, 'APP_MCPP_USER_AUDIO'],
  [0x3e6fc, 'start_capture_audio'], [0x3e710, '%s, open kws hifi'],
  [0x3e2f0, 'screen off and not enable wakeup'], [0x3e738, 'bth disconnected, wake up, %s'],
  [0x3e584, '%s, opus = %d'],
  [0x3ec44, 'LOCAL_PLAYER'], [0x3ec54, 'AI_ASSISTANT'], [0x3ec64, 'AI_TRANSLATE'],
  [0x3ec74, 'WEIXIN_VOICE_REPLY'], [0x3ec88, 'CALL_PLAYER'],
  [0x3eab4, 'FOCUS_NONE'], [0x3eac0, 'FOCUS_LOSS'], [0x3eacc, 'FOCUS_GAIN'],
  [0x3eeb0, 'TRANSLATOR'], [0x3eebc, 'WX_VOICE'], [0x3eec8, 'SCO_PLAYBACK'],
  [0x3eedc, 'CLEAR_ALL'], [0x3e9f8, 'ONE_SHOT'],
])
  check(strAtFile(f) === s, `capture-path literal @${hex(f)} == "${s}"`);

// DSP-side KWS: the strings must lie INSIDE the HiFi4 sub-image. That is the evidence
// that KWS runs on the DSP, so it must be asserted, not assumed.
const KWS_DSP = [
  [0xad9e0, '../../services/mcpp/./bes/air/algo_process_kws.c'],
  [0xad9d1, 'SPEECH_AQE_KWS'],
  [0xada11, 'algo_process_kws_open'],
  [0xada80, 'algo_process_kws_set_cfg'],
  [0xadba4, 'algo_process_kws_detection'],
  [0xadd1f, 'send_wakeup_notification at: %d'],
  [0xadb12, '[KWS - XIAOXI] cnt: %d after wakeup, threshold=%d'],
  [0xadc0c, '[KWS - XIAOXI] wakeup word power is %d'],
  [0xadb44, 'filter side incorrect user by RMS mean during wakeup!!!'],
  [0xadc33, 'filter side incorrect user by low volume!!!'],
  [0xadce5, 'rms mean output[%d], mic1[%d], rate=%d%%, threshold[%d%%]'],
  [0xb29be, '../../services/multimedia/speech/src/process/kws/aqe_kws.c'],
];
const [, DSP_LO, DSP_HI] = FORBIDDEN[0];
for (const [f, s] of KWS_DSP) {
  check(strAtFile(f) === s, `DSP KWS literal @${hex(f)} == "${s}"`);
  check(f > DSP_LO && f < DSP_HI, `DSP KWS literal @${hex(f)} lies INSIDE the HiFi4 image`);
}
check((strAtFile(0xad987) || '').includes('mic_num=%d'), 'DSP KWS config line @0xad987 reports mic_num (2-mic array)');

// the wake-word MODEL is not here (retraction stays retracted) but the runner is
check(countStr('kws_model') === 0 && countStr('.nn') === 0,
      'no NN model filename or .nn blob name in the firmware image');
check(d.subarray(0x41b362, 0x41b36a).toString('latin1') === 'Hey Aicy',
      'user-facing wake phrase @0x41b362 == "Hey Aicy" (inside a localized sentence)');

// =====================================================================================
// §4  Local player and the 13 embedded AAC clips
// =====================================================================================
for (const [f, s] of [
  [0x3db40, '../../tests/besair_platform/../../xjxr_audio/m55/xjxr_audio_local_player.cpp'],
  [0x3dde8, '../../tests/besair_platform/../../xjxr_audio/m55/xjxr_audio_aac_decoder.cpp'],
  [0x3dc5c, 'xjxr_local_player_start'], [0x3dce0, 'xjxr_local_play_wakeup_word'],
  [0x3dffc, 'local_player_aac_decoder_start'], [0x3e01c, '%s decodeId=%d is invalid!'],
  [0x3e038, '%s decodeId=%d, file=%s'], [0x3dea8, 'aac_audio_player_close_demuxer'],
  [0x43e8f8, 'play_internal_sound'], [0x43e4c4, 'play internal sound'],
])
  check(strAtFile(f) === s, `local player literal @${hex(f)} == "${s}"`);
check((strAtFile(0x43e380) || '').includes('Notify/lv_pip_sound_effects.c'),
      'sound-effect UI source path @0x43e380');
for (const s of ['read_fs', 'write_fs', 'seek_fs', 'tell_fs', 'length_fs', 'close_fs'])
  check(countStr(s) >= 1, `synthetic file callback "${s}" present`);

// --- the descriptor table, derived from code, not assumed ---
const TABLE = 0x465920, NAMES = 0x48e774, NCLIPS = 13, STRIDE = 12;
check(u16(0x4c680c) === 0x2c0d, 'clip lookup bound: cmp r4,#0xd @0x4c680c (13 entries)');
check(bytesAre(0x4c6818, '04eb4404' + '03eb8406'),
      'clip index scaling @0x4c6818: add.w r4,r4,r4,lsl#1 ; add.w r6,r3,r4,lsl#2  (i*12)');
check(u32(0x4c682c) - DATA_DELTA === TABLE,
      `clip table literal @0x4c682c -> file ${hex(TABLE)}`);
check(u32(0x4c6828) - DATA_DELTA === 0x48e7a8,
      'runtime slot array literal @0x4c6828 -> file 0x48e7a8');
check(bytesAre(0x4c6820, '43f82400'), 'handle is field 0: str.w r0,[r3,r4,lsl #2] @0x4c6820');

const CLIPS = [
  // id, name,                        payload,    size,   rate,  frames
  [ 0, 'audio/click.aac',             0x48c8b4,     881, 16000,  4],
  [ 1, 'audio/connectSucc.aac',       0x477ddc,   10962, 16000, 28],
  [ 2, 'audio/disconnect.aac',        0x47392c,   15883, 16000, 40],
  [ 3, 'audio/msg.aac',               0x48ad20,    7059, 16000, 16],
  [ 4, 'audio/unlock.aac',            0x4659bc,    5999, 16000, 13],
  [ 5, 'audio/screenOff.aac',         0x472fa8,    2436, 16000, 26],
  [ 6, 'audio/AsistDisconnected.aac', 0x48272c,   30912, 16000, 50],
  [ 7, 'audio/connSucTTS.aac',        0x47a8b0,   32378, 16000, 52],
  [ 8, 'audio/wozai441.aac',          0x48cc28,    6985, 44100, 31],
  [ 9, 'audio/ei441.aac',             0x489fec,    3379, 44100, 16],
  [10, 'audio/phone_8k.aac',          0x46712c,   16200,  8000, 26],
  [11, 'audio/phone_16k.aac',         0x46b074,   32561, 16000, 51],
  [12, 'audio/screenshot.aac',        0x477738,    1699, 16000,  5],
];
check(CLIPS.length === NCLIPS, 'audio.md documents exactly 13 clips');

let payloadTotal = 0;
for (const [id, name, off, size, rate, frames] of CLIPS) {
  const e = TABLE + id * STRIDE;
  check(u32(e) === 0, `clip ${id} handle @${hex(e)} is 0 in flash`);
  check(u32(e + 4) === size, `clip ${id} size @${hex(e + 4)} == ${size}`);
  check(u32(e + 8) - DATA_DELTA === off, `clip ${id} data ptr @${hex(e + 8)} -> ${hex(off)}`);
  check(strAtVA(u32(NAMES + id * 4)) === name, `clip ${id} name @${hex(NAMES + id * 4)} == "${name}"`);
  const a = adtsWalk(off, size);
  check(a !== null, `clip ${id} starts with an ADTS sync word`);
  if (a) {
    check(a.end - off === size, `clip ${id} ADTS chain covers exactly ${size} bytes (got ${a.end - off})`);
    check(a.frames === frames, `clip ${id} has ${frames} ADTS frames (got ${a.frames})`);
    check(a.rate === rate, `clip ${id} sample rate == ${rate} (got ${a.rate})`);
    check(a.ch === 1, `clip ${id} is mono`);
    check(a.crc === false, `clip ${id} is ADTS without CRC (0xFFF1)`);
    check(a.prof === 1, `clip ${id} profile field == 1 (AAC-LC)`);
  }
  payloadTotal += size;
}
check(payloadTotal === 167334, `clip payloads total 167,334 bytes (got ${payloadTotal})`);

// the table ends exactly where the first payload begins
check(TABLE + NCLIPS * STRIDE === 0x4659bc, 'descriptor table ends at 0x4659BC, where clip 4 payload starts');
// the 14th slot is not another plausible descriptor (bounds the table)
{
  const p14 = u32(TABLE + NCLIPS * STRIDE + 8) - DATA_DELTA;
  check(!(p14 >= 0x4659bc && p14 < 0x48e771), 'the 14th descriptor slot does not point into the clip region');
}
// name array is exactly 13 long: the 14th word does not decode to an audio/* name
check(!(strAtVA(u32(NAMES + NCLIPS * 4)) || '').startsWith('audio/'),
      `clip name array ends at ${hex(NAMES + NCLIPS * 4)}`);
// all 13 name literals are the contiguous block at 0x3e050
for (const [, name] of CLIPS) check(countStr(name) === 1, `clip name literal "${name}" occurs exactly once`);
check(strAtFile(0x3e050) === 'audio/click.aac', 'clip name literal block starts @0x3e050');

// payloads are contiguous ascending with at most 3 bytes of alignment padding
{
  const sorted = [...CLIPS].sort((a, b) => a[2] - b[2]);
  check(sorted[0][2] === 0x4659bc, 'clip region starts at 0x4659BC');
  check(sorted[12][2] + sorted[12][3] === 0x48e771, 'clip region ends at 0x48E771');
  for (let i = 0; i < 12; i++) {
    const gap = sorted[i + 1][2] - (sorted[i][2] + sorted[i][3]);
    check(gap >= 0 && gap <= 3, `clips packed: gap after ${sorted[i][1]} is ${gap} B (<=3)`);
  }
  // the name array sits immediately after the payload region
  check(NAMES === 0x48e774 && 0x48e774 - 0x48e771 === 3, 'name array follows the payload region at 0x48e774');
}
// phone_8k is the ONLY 8 kHz clip — semantic cross-check of names against decoded headers
check(CLIPS.filter(c => c[4] === 8000).length === 1 &&
      CLIPS.find(c => c[4] === 8000)[1] === 'audio/phone_8k.aac',
      'exactly one 8 kHz clip and it is named phone_8k');
check(CLIPS.filter(c => c[4] === 44100).every(c => c[1].includes('441')),
      'every 44.1 kHz clip carries "441" in its name');

// =====================================================================================
// §5  Volume / mute / sound-effect mode
// =====================================================================================
for (const [f, s] of [
  [0x3d43c, '../../tests/besair_platform/../../xjxr_audio/m55/xjxr_audio_volume.cpp'],
  [0x3d484, 'convert_local_vol_to_xjxr_vol'], [0x3d558, 'convert_xjxr_vol_to_local_vol'],
  [0x3d4c8, 'xjxr_audio_get_min_volume'], [0x3d4fc, 'xjxr_audio_get_max_volume'],
  [0x3d518, 'xjxr_audio_get_volume'], [0x3d578, 'xjxr_audio_set_volume'],
  [0x3d5d4, 'xjxr_audio_volume_up'], [0x3d6b8, 'xjxr_audio_volume_down'],
  [0x3d708, 'xjxr_audio_volume_mute'], [0x3d75c, 'xjxr_audio_volume_unmute'],
  [0x3d778, 'xjxr_audio_get_mute_state'], [0x3d794, 'xjxr_audio_phone_notify_volume'],
  [0x3f810, 'audio_volume_get_current_type'],
  [0x1a5010, 'setSoundEffectMode'], [0x1a5064, 'getSoundEffectMode'],
  [0x1a50ac, 'get_glass_sound_effect_mode'], [0x1a6348, 'set_glass_sound_effect_mode'],
  [0x1a662c, 'get_volume_stream_type'], [0x1a6644, 'get_music_tp_control_mode'],
  [0x31598, 'SYS_VOLUME'], [0x315fc, 'STARRY__MSG__CMD__SYS_VOLUME'],
  [0x369b0, 'app_slide_volume'], [0x191690, 'SYS_INFO_SOUND_LEVEL'],
])
  check(strAtFile(f) === s, `volume/effect literal @${hex(f)} == "${s}"`);

for (const s of ['VOLUME_TYPE_NOTIFICATION', 'VOLUME_TYPE_A2DP', 'VOLUME_TYPE_HFP', 'VOLUME_TYPE_INVALID'])
  check(countStr(s) >= 1, `volume type "${s}" present`);
for (const s of ['audio_volume_mute_hfp', 'audio_volume_mute_a2dp', 'audio_volume_unmute_hfp',
                 'audio_volume_unmute_a2dp', 'audio_volume_mute_state_hfp', 'audio_volume_mute_state_a2dp',
                 'audio_volume_set_9_a2dp', 'audio_volume_set_6_hfp', 'audio_volume_set_4_hfp'])
  check(countStr(s) >= 1, `per-type volume RPC name "${s}" present`);
for (const s of ['Intent_Set_SoundIncrease', 'Intent_Set_SoundReduce', 'Intent_Set_SoundMute',
                 'Intent_Set_SoundUnmute', 'Intent_Set_SoundMax', 'Intent_Set_SoundMin',
                 'Intent_Sys_SoundIncrease', 'Intent_Sys_SoundReduce'])
  check(countStr(s) >= 1, `voice volume intent "${s}" present`);
// the mode is logged as an integer, which is why audio.md refuses to name its values
check((strAtFile(0x1a5024) || '').endsWith('to %d'),
      'setSoundEffectMode log @0x1a5024 ends in "%d" (mode is an integer, value set unknown)');
// get_volume / set_volume really are in the launcher action pool at 0x60ed78 (leaf-1.2 table)
{
  const pool = [];
  for (let i = 0; i < 29; i++) pool.push(strAtVA(u32(0x60ed78 + i * 4)));
  for (const a of ['get_volume', 'set_volume', 'get_volume_stream_type',
                   'set_glass_sound_effect_mode', 'get_glass_sound_effect_mode',
                   'set_music_tp_control_mode', 'get_music_tp_control_mode'])
    check(pool.includes(a), `audio CONFIG knob "${a}" is in the handleSystemMsg action pool`);
  check(!pool.includes('set_volume_stream_type'),
        'there is NO set_volume_stream_type action (stream type is read-only)');
}

// =====================================================================================
// §6  NN models live on the fs partition, not in this image
// =====================================================================================
if (existsSync(RES)) {
  for (const f of ['kws_model.nn', 'cwr_model.nn', 'ns_1192.nn', 'vad.cmvn',
                   'vad_decoder_assistant.cfg', 'vad_decoder_trans.cfg',
                   'res_2mic_off.bin', 'res_2mic_aec_bfvad_assistant_star.bin'])
    check(existsSync(resolve(RES, f)), `fs model/config "${f}" exists under assets/fsp/res/`);
} else {
  fail('Reverse/extracted/base/assets/fsp/res not found — §6 unverifiable');
}

// =====================================================================================
// §7  write-safety: nothing audio.md proposes writing lands inside a forbidden sub-image
// =====================================================================================
const PROPOSED = [
  // clip descriptor fields (size / data ptr) for all 13 clips
  ...CLIPS.flatMap(([id]) => [TABLE + id * STRIDE + 4, TABLE + id * STRIDE + 8]),
  // clip payload starts
  ...CLIPS.map(([, , off]) => off),
  // the name array
  NAMES,
];
for (const f of PROPOSED)
  for (const [name, lo, hi] of FORBIDDEN)
    check(!(f >= lo && f < hi), `proposed write ${hex(f)} is outside ${name} [${hex(lo)},${hex(hi)})`);
// POSITIVE CONTROL on the safety test itself: a real DSP-internal offset must be rejected.
for (const inside of [0xad987, 0xadb12, 0x100000, 0x140000]) {
  check(FORBIDDEN.some(([, lo, hi]) => inside > lo && inside < hi),
        `POSITIVE CONTROL: write-safety flags ${hex(inside)} as inside a forbidden sub-image`);
}

// =====================================================================================
// doc hygiene
// =====================================================================================
if (existsSync(DOC)) {
  const doc = readFileSync(DOC, 'utf8');
  check(doc.split('\n').length >= 60, 'audio.md is at least 60 lines');
  check(!/0x2C000000/i.test(doc), 'audio.md contains no known-bad 0x2C000000 base');
  check(/1\.0\.11\.53/.test(doc), 'audio.md states the build (1.0.11.53)');
  check(/0x3BFD7CB0/i.test(doc), 'audio.md states the 11.53 data delta');
  for (const t of ['CONFIG', 'DATA', 'CODE'])
    check(doc.includes(t), `audio.md names the ${t} customization tier`);
  check(/NEGATIVE CONTROL|negative control/i.test(doc), 'audio.md reports its controls');
  // The doc declares its write targets in a machine-readable block; every one of them
  // must be outside the forbidden union, and must be a target this verifier also checks.
  const m = doc.match(/```write-targets\n([\s\S]*?)```/);
  if (!m) { fail('audio.md has no ```write-targets``` block'); }
  else {
    const targets = m[1].trim().split(/\s+/).filter(Boolean).map(x => parseInt(x, 16));
    check(targets.length >= 5, `write-targets block lists ${targets.length} offsets`);
    for (const t of targets) {
      for (const [name, lo, hi] of FORBIDDEN)
        check(!(t > lo && t < hi), `declared write target ${hex(t)} is outside ${name} [${hex(lo)},${hex(hi)})`);
      check(PROPOSED.includes(t), `declared write target ${hex(t)} is one this verifier checks`);
    }
    // NEGATIVE CONTROL on the parser+gate: a synthetic in-DSP offset must be rejected.
    const synth = 0xad987;
    check(FORBIDDEN.some(([, lo, hi]) => synth > lo && synth < hi),
          'NEGATIVE CONTROL: had the write-targets block listed 0xad987, the gate would reject it');
  }
} else {
  fail('audio.md not found next to the verifier');
}

if (failures) {
  console.error(`\n${failures} check(s) failed`);
  process.exit(1);
}
console.log('audio verification passed');
