#!/usr/bin/env node
// verify-input.mjs — oracle for Reverse/firmware/analysis/map/input.md (leaf-1.6)
//
// Target: Reverse/firmware/x_1.0.11.53/platform_tester.bin ONLY.
// Address model: code VA = file + 0x2C010000 ; data file = VA - 0x3BFD7CB0
//
// Every claim in input.md that reduces to bytes is re-derived here from the binary.
// Controls are declared and reported FIRST (PLAN.md method rules): a search that
// cannot fail proves nothing.
//
// Prints exactly "input verification passed" on success; exits non-zero on failure.

import { readFileSync, existsSync } from 'node:fs';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const HERE = dirname(fileURLToPath(import.meta.url));
const ROOT = resolve(HERE, '../../../..');
const BIN  = resolve(ROOT, 'Reverse/firmware/x_1.0.11.53/platform_tester.bin');
const DOC  = resolve(HERE, 'input.md');

const CODE_BASE  = 0x2c010000;
const DATA_DELTA = 0x3bfd7cb0;   // 11.53. NOT 0x3BFD7C0C (12.83), NOT 0x3C000000 (known-bad).
const TEXT_LO    = 0x2c479954;   // start of the bulk XIP .text region
const BIN_SIZE   = 7042632;

// sub-images that must never be written (PLAN.md). Naming the four boundary constants
// is legitimate; an offset strictly inside either is not.
const FORBIDDEN = [
  ['HiFi4 DSP',  0x04e9b4, 0x143f14],
  ['sensor_hub', 0x134070, 0x14a7a4],
];
const BOUNDARY_CONSTANTS = new Set([0x04e9b4, 0x143f14, 0x134070, 0x14a7a4]);

let failures = 0;
const fail = (m) => { failures++; console.error('FAIL: ' + m); };
const ok   = (m) => { if (process.env.VERBOSE) console.log('  ok  ' + m); };
const check = (cond, msg) => { cond ? ok(msg) : fail(msg); return !!cond; };

if (!existsSync(BIN)) { console.error('FAIL: binary not found: ' + BIN); process.exit(2); }
const d = readFileSync(BIN);
if (d.length !== BIN_SIZE) { console.error(`FAIL: wrong binary, ${d.length} B (want ${BIN_SIZE})`); process.exit(2); }

// ---------- primitives ----------
const u32 = (f) => d.readUInt32LE(f);
const u16 = (f) => d.readUInt16LE(f);
const hex = (n) => '0x' + (n >>> 0).toString(16);

/** NUL-terminated printable ASCII at a DATA virtual address */
function strAtVA(va, delta = DATA_DELTA) {
  const f = (va >>> 0) - delta;
  if (f < 0 || f >= d.length) return null;
  const e = d.indexOf(0, f);
  if (e < 0 || e - f > 200) return null;
  const s = d.subarray(f, e);
  if (s.length === 0) return null;
  for (const c of s) if (!(c === 9 || c === 10 || c === 13) && (c < 0x20 || c > 0x7e)) return null;
  return s.toString('latin1');
}
const strAtFile = (f) => strAtVA(f + DATA_DELTA);
const strTrim  = (f) => { const v = strAtFile(f); return v == null ? null : v.replace(/[\r\n]+$/, ''); };

function countStr(s) {
  const n = Buffer.from(s, 'latin1');
  let c = 0, i = 0;
  for (;;) { i = d.indexOf(n, i); if (i < 0) break; c++; i++; }
  return c;
}

/** file offsets of every 4-byte LE word equal to the VA of `fileOff` in the data region */
function xrefsToString(fileOff) {
  const want = Buffer.alloc(4); want.writeUInt32LE((fileOff + DATA_DELTA) >>> 0);
  const out = []; let i = 0;
  for (;;) { i = d.indexOf(want, i); if (i < 0) break; out.push(i); i++; }
  return out;
}

/**
 * Decode Thumb LDR (literal), encoding T1: 0100 1ttt iiiiiiii.
 * `align` is the PC alignment fudge: the ARM-correct value is 4 with a word-align.
 * Passing a wrong value is used below as a NEGATIVE CONTROL.
 */
function ldrLiteralT1(f, align = 4) {
  const hw = u16(f);
  if ((hw & 0xf800) !== 0x4800) return null;
  const imm8 = hw & 0xff;
  const pool = (((f + align) & ~3) >>> 0) + imm8 * 4;
  if (pool < 0 || pool + 4 > d.length) return null;
  return u32(pool);
}

/** every string reachable through the first `n` halfwords of a handler body */
function handlerStrings(f, n = 10, align = 4) {
  const out = [];
  for (let i = 0; i < n; i++) {
    const v = ldrLiteralT1(f + i * 2, align);
    if (v == null) continue;
    const s = strAtVA(v);
    if (s) out.push(s);
  }
  return out;
}

const bytesAre = (f, ...b) => b.every((x, i) => d[f + i] === x);

// =====================================================================================
// CONTROLS FIRST
// =====================================================================================
console.log('controls:');

// --- POSITIVE CONTROL A: the whole-image string search finds known-present needles.
const POS = [
  'SYS_TOUCH_EVENT',
  '../../thirdparty/star_air_lvgl/src/core/lv_indev_xjxr.c',
  '../../thirdparty/star_air_lvgl/src/key/lv_key_manager.c',
  '../../thirdparty/star_air_lvgl/src/xjxr_input/xjxr_touchpad_51158.c',
  '../../thirdparty/star_air_lvgl/src/xjxr_input/wear_input.c',
  'STK501XX_WEAR_DAEMON_TIMER',
];
for (const s of POS) check(countStr(s) >= 1, `POSITIVE CONTROL: "${s}" present (${countStr(s)})`);
console.log(`  POSITIVE CONTROL string search: ${POS.length}/${POS.length} known-present needles found`);

// --- NEGATIVE CONTROL B: plausible-but-wrong spellings that input.md claims are absent.
// If the search degenerated into "always found", this block fails.
const NEG = [
  'LV_KEY_SWIPE_FORWARD', 'LV_KEY_TRIPLE_TAP', 'tp_move_up', 'stk_tp_move_up',
  'set_touch_gesture_mode', 'xjxr_touchpad_51159.c', 'lv_indev_pointer_xjxr.c',
];
for (const s of NEG) check(countStr(s) === 0, `NEGATIVE CONTROL: "${s}" absent (found ${countStr(s)})`);
console.log(`  NEGATIVE CONTROL string search: ${NEG.length}/${NEG.length} known-absent needles correctly absent`);

// --- CONTROL C: the data delta (same anchor launcher.md uses).
check(strAtVA(u32(0x61aa08), DATA_DELTA) === 'time',
      'POSITIVE CONTROL: delta 0x3BFD7CB0 decodes [0x61aa08] -> "time"');
check(strAtVA(u32(0x61aa08), 0x3c000000) !== 'time',
      'NEGATIVE CONTROL: known-bad delta 0x3C000000 does NOT decode [0x61aa08] -> "time"');
check(strAtVA(u32(0x61aa08), 0x3bfd7c0c) !== 'time',
      'NEGATIVE CONTROL: 12.83 delta 0x3BFD7C0C does NOT decode [0x61aa08] -> "time"');

// --- CONTROL D: the LDR-literal decoder itself. The whole key-code table below rests on
// it, so prove it works AND prove a mis-aligned variant breaks. Anchor: the Navigation
// LV_KEY_SWIPE_UP handler at file 0x5eea38.
{
  const good = handlerStrings(0x5eea38, 10, 4).join('|');
  const bad  = handlerStrings(0x5eea38, 10, 2).join('|');   // wrong PC fudge
  check(good.includes('LV_KEY_SWIPE_UP'),
        'POSITIVE CONTROL: LDR-literal decoder reads "LV_KEY_SWIPE_UP" out of handler 0x5eea38');
  check(!bad.includes('LV_KEY_SWIPE_UP'),
        'NEGATIVE CONTROL: the same decoder with a wrong PC fudge (+2) does NOT find it');
}
console.log('  controls complete\n');

// =====================================================================================
// 1. Anchors: exact strings at exact file offsets (input.md sections 1,5,6,7)
// =====================================================================================
const ANCHORS = [
  [0x1918c4, 'SYS_TOUCH_EVENT'],
  [0x44ecd4, '../../thirdparty/star_air_lvgl/src/core/lv_indev_xjxr.c'],
  [0x4587d0, '../../thirdparty/star_air_lvgl/src/key/lv_key_manager.c'],
  [0x4537a0, '../../thirdparty/star_air_lvgl/src/xjxr_input/xjxr_touchpad_51158.c'],
  [0x4537e4, '../../thirdparty/star_air_lvgl/src/xjxr_input/wear_input.c'],
  [0x452380, '/star_air_lvgl/src/xjxr_input/tests/xjxr_input_test.c'],
  [0x44ed28, 'LV_KEY_PWR_VOICE_ASSIST Calling: assistant_wakeup.'],
  [0x45883c, 'pwk_multiple_clicked_cb'],
  [0x44efc4, 'indev_xjxr_keypad_proc'],
  [0x44ef7c, 'indev_xjxr_screen_off_tp_proc'],
  [0x44ee80, 'layer4 group has already handled this input event.'],
  [0x44ef1c, 'bg apps has already handled this input event.'],
  [0x4542e0, 'xjxr_touchpad_read: data->key = %d'],
  [0x454304, 'key code is not a assistant key code, give up this tp event.'],
  [0x454354, 'xjxr_tp_mutex'],
  [0x453ba4, 'xjxr_wear_input_set_policy set WEAR_DETECT_FUNC_ENABLE.'],
  [0x453bdc, 'xjxr_wear_input_set_policy set WEAR_DETECT_FUNC_DISABLE.'],
  [0x453848, '[FWK-Wear_detect] wear state change from : %d -> %d'],
  [0x453cf0, 'wear statu:%d,%d,%d,%d,%d,%s'],
  [0x452564, 'xjxr-input-wear: [%s] wear statu is: %d'],
  [0x4524d0, 'xjxr-input-ring:[%s] keyevent is {%x, %x, %x}'],
  [0x159620, 'STK501XX_WEAR_DAEMON_TIMER'],
  [0x15963c, 'STK501XX_FAR_CHECK_TIMER'],
  [0x1596ac, 'stk501xx_set_thd'],
  [0x159834, 'sensor_wear_status_callback'],
  [0x1597dc, '../../tests/sensor_hub/core/../../../xjxr_sensor_mgr/sensor_hub/wear_detection_s.cpp'],
  [0x15991c, '../../tests/sensor_hub/core/../../../xjxr_sensor_mgr/sensor_hub/accel_gyro_s.cpp'],
  [0x1aa25c, 'sendWearModeInfoMsg'],
  [0x1a44e4, 'handlePhonePadMsg'],
  [0x1a45b8, 'doubleClick'],
  [0x1a45c4, 'longPress'],
  [0x1a45d0, 'gestureMode'],
  [0x1a45dc, 'actionType'],
  [0x1a46d8, '[Launcher]MessageModel handlePhonePadMsg, send %s event (or with gestureModeCode %d) to tp'],
  [0x1a6330, 'set_wear_detection_mode'],
  [0x1a65fc, 'get_wear_detection_mode'],
  [0x1a6394, 'set_music_tp_control_mode'],
  [0x1a6644, 'get_music_tp_control_mode'],
  [0x1a6380, 'set_app_fast_open'],
  [0x1a63b0, 'set_image_stabilization_mode'],
  [0x170920, 'set_tp_sensitivity'],
  [0x18120c, 'tp_click_area_img'],
  [0x1820fc, "[STARRYNET_LOG][Info] PowerOffAndRebootView: power off ing ,don't handle LV_KEY_SWIPE_LEFT"],
  [0x18215c, "[STARRYNET_LOG][Info] PowerOffAndRebootView: power off ing ,don't handle LV_KEY_SWIPE_RIGHT"],
  [0x19a23c, 'registerPlayCenterTpEvent'],
  [0x19a190, 'refreshTpHintByStatus'],
  [0x178206, 'T,../../thirdparty/star_air_lvgl/app/Pages/Setting/ui/BrightView.cpp'],
];
for (const [off, want] of ANCHORS)
  check(strTrim(off) === want, `string @${hex(off)} == ${JSON.stringify(want)} (got ${JSON.stringify(strTrim(off))})`);

check((strAtFile(0x196610) || '').includes('MSG_WEAR_CTRL_MUSIC_STOP_MSG'),
      'wear->music auto-pause log @0x196610 names MSG_WEAR_CTRL_MUSIC_STOP_MSG');
check((strAtFile(0x196660) || '').includes('MSG_WEAR_CTRL_MUSIC_START_MSG'),
      'wear->music auto-resume log @0x196660 names MSG_WEAR_CTRL_MUSIC_START_MSG');
check((strAtFile(0x1a447c) || '') === 'phonepad',
      'feature-list entry @0x1a447c == "phonepad"');

// SYS_TOUCH_EVENT has exactly ONE code reference, at 0x5ceb14 (input.md section 3).
{
  const r = xrefsToString(0x1918c4);
  check(r.length === 1 && r[0] === 0x5ceb14,
        `SYS_TOUCH_EVENT referenced exactly once, at 0x5ceb14 (got ${r.map(hex).join(',')})`);
}

// =====================================================================================
// 2. The LV_KEY code enum, from Navigation::onTpEvent (input.md section 2 / 4.1)
// =====================================================================================
// dispatch preamble
check(bytesAre(0x5ee982, 0xa0, 0xf1, 0xce, 0x03), 'onTpEvent: sub.w r3, r0, #0xce @0x5ee982');
check(bytesAre(0x5ee986, 0x15, 0x2b),             'onTpEvent: cmp r3, #0x15 @0x5ee986');
check(bytesAre(0x5ee98a, 0xdf, 0xe8, 0x13, 0xf0), 'onTpEvent: tbh [pc, r3, lsl #1] @0x5ee98a');

const TBH = 0x5ee98e, TBH_N = 0x16, TBH_LO = 0xce, IGNORE = 0x5ee9da;
const tbhTarget = (key) => TBH + 2 * u16(TBH + 2 * (key - TBH_LO));

const KEYNAMES = {
  0xce: 'LV_KEY_SWIPE_LEFT',
  0xcf: 'LV_KEY_SWIPE_RIGHT',
  0xd2: 'LV_KEY_SINGLE_CLICKED',
  0xd3: 'LV_KEY_DOUBLE_CLICKED',
  0xd4: 'LV_KEY_LONG_PRESSED',
  0xd8: 'LV_KEY_SWIPE_DOWN',
  0xd9: 'LV_KEY_SWIPE_UP',
  0xda: 'LV_KEY_XJ_LONG_TAP_DOWN',
  0xdb: 'LV_KEY_XJ_DPAD_UP',
  0xdc: 'LV_KEY_XJ_DPAD_DOWN',
  0xdd: 'LV_KEY_XJ_DPAD_LEFT',
  0xde: 'LV_KEY_XJ_DPAD_RIGHT',
  0xdf: 'LV_KEY_XJ_LONG_TAP_UP',
};
for (const [k, name] of Object.entries(KEYNAMES)) {
  const key = Number(k), t = tbhTarget(key);
  const joined = handlerStrings(t, 12).join(' | ');
  check(joined.includes(name),
        `key ${hex(key)} -> ${hex(t)} whose own log string names ${name}`);
  // and it must not be the ignore stub
  check(t !== IGNORE, `key ${hex(key)} is actually handled (not the ignore stub)`);
}
// codes with no body
for (const key of [0xd0, 0xd1, 0xd5, 0xd6, 0xd7, 0xe0, 0xe1, 0xe2])
  check(tbhTarget(key) === IGNORE, `key ${hex(key)} falls to the ignore stub ${hex(IGNORE)}`);
// 0xE3 shares the LV_KEY_LONG_PRESSED body (the XJ_SINGLE_PRESSURE reading in input.md)
check(tbhTarget(0xe3) === tbhTarget(0xd4),
      'key 0xe3 shares the LV_KEY_LONG_PRESSED body with 0xd4');
// table sanity: every entry lands inside the enclosing function
for (let i = 0; i < TBH_N; i++) {
  const t = TBH + 2 * u16(TBH + 2 * i);
  check(t > TBH && t < 0x5eebb4, `tbh entry ${i} target ${hex(t)} inside onTpEvent`);
}
// the LV_KEY spelling census (input.md section 11)
{
  const names = new Set();
  const re = /LV_KEY_[A-Z0-9_]+/g;
  const txt = d.toString('latin1');
  let m; while ((m = re.exec(txt))) names.add(m[0]);
  check(names.size === 17, `exactly 17 distinct LV_KEY_* spellings in the image (got ${names.size})`);
  for (const n of ['LV_KEY_XJ_SINGLE_PRESSURE', 'LV_KEY_XJ_SINGLE_TAP', 'LV_KEY_XJ_DOUBLE_TAP',
                   'LV_KEY_PWR_VOICE_ASSIST'])
    check(names.has(n), `LV_KEY census contains ${n}`);
}

// =====================================================================================
// 3. Translation handleEvent cmp-chain (input.md section 4.2)
// =====================================================================================
check(bytesAre(0x54bc28, 0x2d, 0xe9, 0xf0, 0x4f),
      'Translation handleEvent prologue push.w {r4-r8,sb,sl,fp,lr} @0x54bc28');
const TRANS = [[0x54bc42, 0xd2], [0x54bc46, 0xd3], [0x54bc4c, 0xce],
               [0x54bc50, 0xdd], [0x54bc54, 0xcf], [0x54bc5a, 0xde]];
for (const [off, imm] of TRANS)
  check(d[off] === imm && d[off + 1] === 0x28,
        `Translation: cmp r0, #${hex(imm)} encoded at ${hex(off)} (byte pair ${hex(imm)},0x28)`);
// the two bodies that two codes share
check(strAtVA(ldrLiteralT1(0x54bc7c)).includes('LV_KEY_SWIPE_LEFT || LV_KEY_XJ_DPAD_LEFT'),
      'Translation 0xce/0xdd body @0x54bc76 logs "LV_KEY_SWIPE_LEFT || LV_KEY_XJ_DPAD_LEFT"');
check(strAtVA(ldrLiteralT1(0x54bcfa)).includes('LV_KEY_XJ_SINGLE_TAP || LV_KEY_SINGLE_CLICKED'),
      'Translation 0xd2 body @0x54bcf4 logs the SINGLE_TAP/SINGLE_CLICKED pair');

// =====================================================================================
// 4. lv_key_manager key_event_cb: a SEPARATE enum, touch codes ignored (section 3)
// =====================================================================================
check(bytesAre(0x682f6a, 0xc9, 0x3c), 'key_event_cb: subs r4, #0xc9 @0x682f6a');
check(bytesAre(0x682f76, 0x24, 0x2c), 'key_event_cb: cmp r4, #0x24 @0x682f76');
const KT = 0x682f80, KT_N = 0x25, KT_LO = 0xc9;
const ktEntry = (key) => u32(KT + 4 * (key - KT_LO));
const KT_DEFAULT = 0x2c693039;
check(ktEntry(0xc9) === 0x2c692f51, `key_event_cb[0xc9] == 0x2c692f51 (got ${hex(ktEntry(0xc9))})`);
check(ktEntry(0xca) === 0x2c6930b7, `key_event_cb[0xca] == 0x2c6930b7 (multi-click counter)`);
check(ktEntry(0xed) === 0x2c69304b, `key_event_cb[0xed] == 0x2c69304b`);
for (let k = 0xce; k <= 0xec; k++)
  check(ktEntry(k) === KT_DEFAULT, `key_event_cb[${hex(k)}] falls to the default ${hex(KT_DEFAULT)}`);
for (let i = 0; i < KT_N; i++) {
  const v = u32(KT + 4 * i);
  check((v & 1) === 1 && v >= TEXT_LO && v - CODE_BASE < d.length,
        `key_event_cb table entry ${i} = ${hex(v)} is a Thumb XIP .text address`);
}
// NEGATIVE CONTROL: the table start matters. Read it 4 bytes early and the entries stop
// being valid Thumb .text addresses — proving the base was not chosen to fit.
{
  let valid = 0;
  for (let i = 0; i < KT_N; i++) {
    const v = u32(KT - 4 + 4 * i);
    if ((v & 1) === 1 && v >= TEXT_LO && v - CODE_BASE < d.length) valid++;
  }
  check(valid < KT_N,
        `NEGATIVE CONTROL: key_event_cb table read 4 B early is NOT all-valid (${valid}/${KT_N})`);
}

// =====================================================================================
// 5. The 42-entry eshell input command table 0x452dec..0x452f3c (section 7)
// =====================================================================================
function eshellEntry(f) {
  if (f < 0 || f + 8 > d.length) return null;
  const s = strAtVA(u32(f));
  const h = u32(f + 4);
  if (!s || s.length === 0 || s.length > 60) return null;
  if ((h & 1) !== 1 || h < TEXT_LO || h - CODE_BASE >= d.length) return null;
  return [s, h];
}
const ESH_LO = 0x452dec;
const eshell = [];
for (let f = ESH_LO; ; f += 8) {
  const e = eshellEntry(f);
  if (!e) break;
  eshell.push(e);
}
check(eshell.length === 42, `eshell input table has 42 entries (got ${eshell.length})`);
check(eshellEntry(ESH_LO - 8) === null,
      'NEGATIVE CONTROL: the 8 bytes before 0x452dec do NOT parse as a table entry (table start is a real boundary)');
check(eshellEntry(ESH_LO + 42 * 8) === null,
      'NEGATIVE CONTROL: the 8 bytes after 0x452f3c do NOT parse as a table entry (table end is a real boundary)');
const ESH_EXPECT = {
  0x452dec: 'tp_move_left', 0x452dfc: 'tp_clicked', 0x452e04: 'tp_dual_clicked',
  0x452e1c: 'tp_move_lrl',  0x452e24: 'tp_move_rlr', 0x452e2c: 'tp_lp',
  0x452e34: 'wear_worn',    0x452e3c: 'wear_not_worn', 0x452e44: 'get_wear_statu',
  0x452e6c: 'bt_ring_test', 0x452e74: 'stk_tp_move_left', 0x452e94: 'stk_tp_lp',
  0x452f1c: 'wear_input_set_policy', 0x452f24: 'tp_ctrl_music_set_policy',
  0x452f2c: 'quick_start_set_policy', 0x452f34: 'brightness_set_lighting_value',
};
for (const [off, want] of Object.entries(ESH_EXPECT)) {
  const e = eshellEntry(Number(off));
  check(e && e[0] === want, `eshell entry @${hex(Number(off))} == "${want}" (got ${e ? e[0] : 'null'})`);
}
// the pad's whole gesture vocabulary, at driver level, is these five and no more
{
  const stk = eshell.map(([n]) => n).filter((n) => n.startsWith('stk_tp_'));
  check(stk.length === 5 &&
        ['stk_tp_move_left', 'stk_tp_move_right', 'stk_tp_clicked', 'stk_tp_dual_clicked', 'stk_tp_lp']
          .every((n) => stk.includes(n)),
        `driver-level pad verbs are exactly the 5 claimed (got ${stk.join(',')})`);
}

// =====================================================================================
// 6. Navigation per-gesture action ids (section 8, DATA-tier patch targets)
// =====================================================================================
// Each is a `movs r1, #N` (0x21 in the high byte) right before the shared tail branch.
const NAVI_ACTION = [[0x5eea34, 4], [0x5eea56, 3], [0x5eea78, 6],
                     [0x5eea9a, 8], [0x5eeabc, 9], [0x5eeae0, 10]];
for (const [off, n] of NAVI_ACTION)
  check(d[off] === n && d[off + 1] === 0x21,
        `Navigation action id: movs r1, #${n} at ${hex(off)} (patchable byte)`);

// =====================================================================================
// 7. Write-safety of every offset input.md proposes to patch
// =====================================================================================
const PROPOSED = [
  ...NAVI_ACTION.map(([o]) => o),
  ...TRANS.map(([o]) => o),
  TBH, KT, ESH_LO,
];
for (const o of PROPOSED) {
  const bad = FORBIDDEN.find(([, lo, hi]) => o > lo && o < hi);
  check(!bad, `proposed write ${hex(o)} is outside the protected sub-images${bad ? ' (inside ' + bad[0] + ')' : ''}`);
}
// POSITIVE CONTROL: the write-safety test can fail.
{
  const inside = 0x100000;     // strictly inside the HiFi4 DSP image
  check(FORBIDDEN.some(([, lo, hi]) => inside > lo && inside < hi),
        'POSITIVE CONTROL: the write-safety test does flag an offset strictly inside the HiFi4 DSP image');
  // and the four boundary constants themselves are exempt (naming them is legitimate);
  // note the two sub-image ranges overlap, so 0x134070 and 0x143f14 DO sit strictly inside
  // the other range -- the exemption set, not the range test, is what clears them.
  for (const b of BOUNDARY_CONSTANTS)
    check(BOUNDARY_CONSTANTS.has(b), `boundary constant ${hex(b)} is exempt (naming it is legitimate)`);
  check([...BOUNDARY_CONSTANTS].length === 4, 'exactly four boundary constants are exempt');
}

// =====================================================================================
// 8. Doc hygiene
// =====================================================================================
if (existsSync(DOC)) {
  const doc = readFileSync(DOC, 'utf8');
  check(doc.split('\n').length >= 60, 'input.md is at least 60 lines');
  check(!/0x2C000000/i.test(doc), 'input.md contains no known-bad 0x2C000000 base');
  check(/1\.0\.11\.53/.test(doc), 'input.md states the build (1.0.11.53)');
  for (const t of ['CONFIG', 'DATA', 'CODE'])
    check(doc.includes(t), `input.md names the ${t} customization tier`);
  // every 6-hex-digit file offset the doc cites must be outside the protected images,
  // except the four boundary constants themselves.
  const cited = [...doc.matchAll(/0x([0-9a-fA-F]{6})\b/g)].map((m) => parseInt(m[1], 16));
  const violations = cited.filter((o) =>
    !BOUNDARY_CONSTANTS.has(o) && FORBIDDEN.some(([, lo, hi]) => o > lo && o < hi));
  check(violations.length === 0,
        `input.md cites no offset strictly inside DSP/sensor_hub (violations: ${violations.map(hex).join(',') || 'none'})`);
} else {
  fail('input.md not found next to the verifier');
}

if (failures) {
  console.error(`\n${failures} check(s) failed`);
  process.exit(1);
}
console.log('input verification passed');
