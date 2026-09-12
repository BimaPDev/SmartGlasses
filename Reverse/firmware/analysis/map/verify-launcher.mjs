#!/usr/bin/env node
// verify-launcher.mjs — oracle for Reverse/firmware/analysis/map/launcher.md (leaf-1.2)
//
// Target: Reverse/firmware/x_1.0.11.53/platform_tester.bin ONLY.
// Address model: code VA = file + 0x2C010000 ; data file = VA - 0x3BFD7CB0
//
// Every claim in launcher.md that can be reduced to bytes is re-derived here from the
// binary. Controls are declared first and reported first, per PLAN.md method rules.
//
// Prints exactly "launcher verification passed" on success; exits non-zero on failure.

import { readFileSync, existsSync } from 'node:fs';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const HERE = dirname(fileURLToPath(import.meta.url));
const ROOT = resolve(HERE, '../../../..');            // repo root
const BIN  = resolve(ROOT, 'Reverse/firmware/x_1.0.11.53/platform_tester.bin');
const DOC  = resolve(HERE, 'launcher.md');

const CODE_BASE = 0x2c010000;
const DATA_DELTA = 0x3bfd7cb0;      // 1.0.11.53. NOT 0x3BFD7C0C (12.83), NOT 0x3C000000 (known-bad).
const BIN_SIZE = 7042632;

// forbidden sub-images (PLAN.md): never propose a write inside these
const FORBIDDEN = [
  ['HiFi4 DSP',  0x04e9b4, 0x143f14],
  ['sensor_hub', 0x134070, 0x14a7a4],
];

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

/** read a NUL-terminated ASCII string at a DATA virtual address */
function strAtVA(va, delta = DATA_DELTA) {
  const f = (va >>> 0) - delta;
  if (f < 0 || f >= d.length) return null;
  const e = d.indexOf(0, f);
  if (e < 0 || e - f > 128) return null;
  const s = d.subarray(f, e);
  if (s.length === 0) return null;
  for (const c of s) if (c < 0x20 || c > 0x7e) return null;
  return s.toString('latin1');
}
const strAtFile = (f) => strAtVA(f + DATA_DELTA);

/** bytes at file offset equal this hex string? */
function bytesAre(f, hexstr) {
  const want = Buffer.from(hexstr.replace(/\s+/g, ''), 'hex');
  return d.subarray(f, f + want.length).equals(want);
}

/** decode a Thumb-2 BL at file offset -> absolute target VA */
function blTarget(f) {
  const hw1 = u16(f), hw2 = u16(f + 2);
  if ((hw1 & 0xf800) !== 0xf000 || (hw2 & 0xd000) !== 0xd000) return null;
  const S = (hw1 >> 10) & 1, imm10 = hw1 & 0x3ff;
  const J1 = (hw2 >> 13) & 1, J2 = (hw2 >> 11) & 1, imm11 = hw2 & 0x7ff;
  const I1 = (~(J1 ^ S)) & 1, I2 = (~(J2 ^ S)) & 1;
  let off = (S << 24) | (I1 << 23) | (I2 << 22) | (imm10 << 12) | (imm11 << 1);
  if (S) off -= 1 << 25;
  return ((f + CODE_BASE + 4) + off) >>> 0;
}

/** count occurrences of an ASCII needle in the whole image */
function countStr(s) {
  const n = Buffer.from(s, 'latin1');
  let c = 0, i = 0;
  for (;;) { i = d.indexOf(n, i); if (i < 0) break; c++; i++; }
  return c;
}

// =====================================================================================
// CONTROLS FIRST — a search that cannot fail proves nothing (PLAN.md).
// =====================================================================================
console.log('controls:');

// POSITIVE CONTROL A — the string search finds things that are definitely present.
// If the whole-image search method broke, these would read 0 and every "absent" claim
// in section 5 / 3.4 of launcher.md would be worthless.
const posStrings = ['change_dock_items', 'set_standby_widget_lists', 'createFlexContent',
                    'createFlexRootView', 'Pages/Prompt'];
for (const s of posStrings) {
  check(countStr(s) >= 1, `POSITIVE CONTROL: "${s}" is present (found ${countStr(s)})`);
}
console.log(`  POSITIVE CONTROL string search: ${posStrings.length}/${posStrings.length} known-present needles found`);

// NEGATIVE CONTROL B — names that must NOT exist. These are the plausible-but-wrong
// spellings launcher.md claims are absent, plus the page PLAN.md says does not exist.
// If the search method degenerated into "always found", this block would fail.
const negStrings = ['set_dock_items', 'get_dock_items', 'set_standby_widgets',
                    'add_dock_item', 'Pages/Todo', 'adjustFlexPadColumn'];
for (const s of negStrings) {
  check(countStr(s) === 0, `NEGATIVE CONTROL: "${s}" is absent (found ${countStr(s)})`);
}
console.log(`  NEGATIVE CONTROL string search: ${negStrings.length}/${negStrings.length} known-absent needles correctly absent`);

// NEGATIVE CONTROL C — the data delta. The word at 0x61aa08 resolves to "time" under
// the 11.53 delta and must NOT resolve to "time" under the two other deltas in play.
// This is what keeps every pointer table in launcher.md honest.
check(strAtVA(u32(0x61aa08), DATA_DELTA) === 'time',
      'POSITIVE CONTROL: delta 0x3BFD7CB0 decodes [0x61aa08] -> "time"');
check(strAtVA(u32(0x61aa08), 0x3c000000) !== 'time',
      'NEGATIVE CONTROL: known-bad delta 0x3C000000 does NOT decode [0x61aa08] -> "time"');
check(strAtVA(u32(0x61aa08), 0x3bfd7c0c) !== 'time',
      'NEGATIVE CONTROL: 12.83 delta 0x3BFD7C0C does NOT decode [0x61aa08] -> "time"');

// NEGATIVE CONTROL D — the tbb decoder. Decoding the widget-id table with the wrong
// base (tbb address instead of tbb address + 4) must NOT yield the six widget names.
// Guards §3.1 against a plausible off-by-4.
{
  const good = 0x61a9e0, bad = 0x61a9dc;
  const nameAt = (base, b) => {
    const t = base + 2 * b;                 // ldr r0,[pc,#0x1c] ; bx lr
    if (!bytesAre(t, '0748')) return null;   // not the expected 2-insn arm
    return strAtVA(u32(((t + 4) & ~3) + 0x1c));
  };
  check(nameAt(good, 0x05) === 'time', 'POSITIVE CONTROL: tbb base 0x61a9e0 decodes byte 0x05 -> "time"');
  check(nameAt(bad, 0x05) !== 'time',  'NEGATIVE CONTROL: wrong tbb base 0x61a9dc does not decode to "time"');
}

console.log('checks:');

// =====================================================================================
// §1  Page / app registry
// =====================================================================================
const REGISTRY = [
  ['Pages/StarryNetApp', 'StarryNetApp'],
  ['Pages/Launcher',     'Launcher'],
  ['Pages/SmartLife',    'SmartLife'],
  ['Pages/Navigation',   'Navigation'],
  ['Pages/Translation',  'Translation'],
  ['Pages/Phone',        'PhonePage'],
  ['Pages/AirMusic',     'AirMusic'],
  ['Pages/Ota',          'Ota'],
  ['Pages/Ring',         'Ring'],
  ['Pages/Settings',     'Setting'],
  ['Pages/Assistant',    'AssistantAppDelegate'],
  ['Pages/MMIPage',      'MMIPage'],
  ['Pages/Prompt',       'Prompt'],
];
const REG_BASE = 0x534de0;
REGISTRY.forEach(([page, cls], i) => {
  const f = REG_BASE + i * 8;
  check(strAtVA(u32(f)) === page,     `registry[${i}].page @${hex(f)} == "${page}"`);
  check(strAtVA(u32(f + 4)) === cls,  `registry[${i}].class @${hex(f + 4)} == "${cls}"`);
});
check(REGISTRY.length === 13, 'registry has exactly 13 Pages/* entries');
// the entry after the table must not be another Pages/* pointer (bounds the table)
check(!(strAtVA(u32(REG_BASE + 13 * 8)) || '').startsWith('Pages/'),
      `registry ends at ${hex(REG_BASE + 13 * 8)} (14th slot is not a Pages/* pointer)`);

// literal block 0x176b90-0x176ce0 really holds the 13 Pages/* literals
const litBlock = d.subarray(0x176b90, 0x176ce0).toString('latin1');
for (const [page] of REGISTRY) {
  check(litBlock.includes(page), `literal block 0x176b90-0x176ce0 contains "${page}"`);
}

// the 12-entry registration list (registry minus StarryNetApp)
const REG12 = ['Pages/Launcher','Pages/SmartLife','Pages/Navigation','Pages/Translation',
               'Pages/Phone','Pages/AirMusic','Pages/Ota','Pages/Assistant','Pages/Ring',
               'Pages/MMIPage','Pages/Settings','Pages/Prompt'];
REG12.forEach((p, i) => check(strAtVA(u32(0x534ed0 + i * 4)) === p,
                              `reg-list[${i}] @${hex(0x534ed0 + i * 4)} == "${p}"`));

// =====================================================================================
// §2  DOCK — createAppInfo at 0x613758
// =====================================================================================
check(bytesAre(0x613758, '10b50c46'), 'DockviewV2::createAppInfo prologue @0x613758 == push{r4,lr};mov r4,r1');

// each arm: movw r3,#txtid @movwF ; movs r3,#appid @idF ; page/icon literal slots
const DOCK = [
  // pkg,                                        appId, txtId, movwF,    idF,      pageSlot, iconSlot, page,               icon
  ['com.upuphone.star.launcher.music_player', 1, 0x1004, 0x61386c, 0x613878, 0x6138f0, 0x6138f4, 'Pages/AirMusic',    'launcher_dock_music_intl'],
  ['com.upuphone.ar.navi.glass',              2, 0x1003, 0x61380c, 0x613818, 0x6138e0, 0x6138e4, 'Pages/Navigation',  'launcher_dock_navi'],
  ['com.upuphone.ar.translation.glasses',     3, 0x1002, 0x6137e0, 0x6137ec, 0x6138d8, 0x6138dc, 'Pages/Translation', 'launcher_dock_trans'],
  ['com.upuphone.ar.tici',                    4, 0x1035, 0x6137b4, 0x6137c0, 0x6138d0, 0x6138d4, 'Pages/Prompt',      'launcher_dock_prompt'],
  ['com.upuphone.star.launcher.setting',      6, 0x1024, 0x613838, 0x613844, 0x6138e8, 0x6138ec, 'Pages/Settings',    'launcher_dock_set'],
];
for (const [pkg, appId, txtId, movwF, idF, pageSlot, iconSlot, page, icon] of DOCK) {
  check(countStr(pkg) >= 1, `dock package literal "${pkg}" present`);
  // MOVW T3: 11110 i 10 0100 imm4 | 0 imm3 Rd imm8   -> imm16 = imm4:i:imm3:imm8
  const hw1 = u16(movwF), hw2 = u16(movwF + 2);
  const imm16 = ((hw1 & 0x000f) << 12) | (((hw1 >> 10) & 1) << 11) | (((hw2 >> 12) & 7) << 8) | (hw2 & 0xff);
  check((hw1 & 0xfbf0) === 0xf240, `dock ${page}: @${hex(movwF)} is MOVW`);
  check(imm16 === txtId,            `dock ${page}: txt id @${hex(movwF)} == ${hex(txtId)}`);
  // MOVS Rd,#imm8 (T1): 00100 Rd imm8, here movs r3,#appId -> 0x23xx
  check((u16(idF) & 0xff00) === 0x2300, `dock ${page}: @${hex(idF)} is movs r3,#imm8`);
  check((u16(idF) & 0x00ff) === appId,  `dock ${page}: app id @${hex(idF)} == ${appId}`);
  check(strAtVA(u32(pageSlot)) === page, `dock page ptr @${hex(pageSlot)} -> "${page}"`);
  check(strAtVA(u32(iconSlot)) === icon, `dock icon ptr @${hex(iconSlot)} -> "${icon}"`);
}
// ringmanager is compared but yields no AppInfo: cbz r0,#0x2c6237cc at 0x613788
check(u16(0x613788) === 0xb130 || (u16(0x613788) & 0xfd00) === 0xb100,
      'createAppInfo @0x613788 is a CBZ (ringmanager -> no dock entry)');
check(countStr('com.upuphone.xr.ringmanager') >= 1, 'ringmanager package literal present (it IS compared)');
// app id 5 is the hole
check(!DOCK.some(x => x[1] === 5), 'dock app ids are {1,2,3,4,6} — 5 is unused (Ring removed)');

// STORE_SEQ_APP_SIZE = 16: both storeValues and extractValues log exactly 16 %d
for (const [f, label] of [[0x1a8468, 'storeValues'], [0x1aaa8, null], [0x1a8aa8, 'extractValues']]) {
  if (label === null) continue;
  const s = strAtFile(f);
  check(s !== null && (s.match(/%d/g) || []).length === 16,
        `${label} format @${hex(f)} has exactly 16 slot %d (got ${s ? (s.match(/%d/g) || []).length : 'null'})`);
}
for (const s of ['STORE_SEQ_APP_SIZE', 'saveAppSeq', 'initAppSeq', 'sortAppVectorSeq', 'changeAppPos',
                 'restoreFlexLayout', 'launcher_dock_indicator', 'onAppItemClicked'])
  check(countStr(s) >= 1, `dock symbol "${s}" present`);

// =====================================================================================
// §3.1  widget id -> name  (tbb at 0x61a9dc, table 0x61a9e0)
// =====================================================================================
check(bytesAre(0x61a9d4, '436d013b'), 'StandByWidget::name @0x61a9d4 == ldr r3,[r0,#0x54]; subs r3,#1');
check(bytesAre(0x61a9d8, '052bf4d8') || u16(0x61a9d8) === 0x2b05,
      'name(): cmp r3,#5 @0x61a9d8 (enum capped at 6 widgets)');
check(bytesAre(0x61a9dc, 'dfe803f0'), 'name(): tbb [pc,r3] @0x61a9dc');
check(bytesAre(0x61a9e0, '0503090b0d07'), 'name(): tbb table @0x61a9e0 == 05 03 09 0b 0d 07');

const WIDGETS = [
  [1, 0x05, 0x61a9ea, 0x61aa08, 'time'],
  [2, 0x03, 0x61a9e6, 0x61aa04, 'weather_1x1'],
  [3, 0x09, 0x61a9f2, 0x61aa10, 'weather_1x2'],
  [4, 0x0b, 0x61a9f6, 0x61aa14, 'steps'],
  [5, 0x0d, 0x61a9fa, 0x61aa18, 'weekday'],
  [6, 0x07, 0x61a9ee, 0x61aa0c, 'aiBall'],
];
for (const [id, tb, arm, slot, name] of WIDGETS) {
  check(d[0x61a9e0 + (id - 1)] === tb, `widget id ${id}: tbb byte == ${hex(tb)}`);
  check(0x61a9e0 + 2 * tb === arm,     `widget id ${id}: tbb target == ${hex(arm)}`);
  check(bytesAre(arm, '0748'),         `widget id ${id}: arm @${hex(arm)} is ldr r0,[pc,#0x1c]`);
  check(u16(arm + 2) === 0x4770,       `widget id ${id}: arm @${hex(arm + 2)} is bx lr`);
  check(((arm + 4) & ~3) + 0x1c === slot, `widget id ${id}: literal slot resolves to ${hex(slot)}`);
  check(strAtVA(u32(slot)) === name,   `widget id ${id} -> "${name}"`);
}
// the five contiguous names really sit at 0x1aae5c..
for (const [f, n] of [[0x1aae5c, 'weather_1x2'], [0x1aae68, 'steps'], [0x1aae70, 'weekday'],
                      [0x1aae78, 'aiBall'], [0x1aae80, 'weather_1x1']])
  check(strAtFile(f) === n, `widget name literal @${hex(f)} == "${n}"`);

// =====================================================================================
// §3.2  StandByWidget base ctor 0x61b784 — the 72 px answer + the DATA knobs
// =====================================================================================
check(bytesAre(0x61b784, '70b5'), 'StandByWidget ctor @0x61b784 == push {r4,r5,r6,lr}');
check(bytesAre(0x61b78a, '0276'), 'ctor: strb r2,[r0,#0x18] (widget TYPE) @0x61b78a');
check(u16(0x61b798) === 0x6565, 'ctor: str r5,[r4,#0x54] (widget ID, read back by name()) @0x61b798');

// THE headline: an explicit square size, not LV_SIZE_CONTENT
check(bytesAre(0x61b79e, '4822'), 'ctor: movs r2,#0x48 @0x61b79e  <-- 72 px tile size (DATA knob)');
check(u16(0x61b7a6) === 0x4611,  'ctor: mov r1,r2 @0x61b7a6 (width := height, so tiles are square)');
check(bytesAre(0x61b7ac, 'a4f84020'), 'ctor: strh.w r2,[r4,#0x40] @0x61b7ac (72 cached as tile height)');
check(blTarget(0x61b7c8) === 0x2c6540c4, `ctor: bl size-setter @0x61b7c8 -> ${hex(0x2c6540c4)}`);
// the cached 0x40 is re-read and halved for the radius -> one number, two consumers
check(bytesAre(0x61b7cc, 'b4f94010'), 'ctor: ldrsh.w r1,[r4,#0x40] @0x61b7cc (re-reads the cached 72)');
check(u16(0x61b7da) === 0x1049, 'ctor: asrs r1,r1,#1 @0x61b7da (radius = height/2)');

// ring style knobs (inherited facts, re-verified as bytes)
check(bytesAre(0x61b7ee, '0221'), 'ctor: movs r1,#2 @0x61b7ee   -> border_width = 2 (DATA knob)');
check(bytesAre(0x61b7f8, '5c21'), 'ctor: movs r1,#0x5c @0x61b7f8 -> border_opa = 92 (DATA knob, ->00 removes rings)');

// =====================================================================================
// §3.3  widget TYPE dispatch — tbb at 0x61b806, table 0x61b80a
// =====================================================================================
check(bytesAre(0x61b800, '227e'),        'dispatch: ldrb r2,[r4,#0x18] @0x61b800');
check(u16(0x61b802) === 0x2a08,          'dispatch: cmp r2,#8 @0x61b802 (9 widget constructors)');
check(bytesAre(0x61b806, 'dfe802f0'),    'dispatch: tbb [pc,r2] @0x61b806');
check(bytesAre(0x61b80a, '242c0538424950' + '5e10'), 'dispatch: tbb table @0x61b80a == 24 2c 05 38 42 49 50 5e 10');
const TYPES = [[0,0x24,0x61b852],[1,0x2c,0x61b862],[2,0x05,0x61b814],[3,0x38,0x61b87a],
               [4,0x42,0x61b88e],[5,0x49,0x61b89c],[6,0x50,0x61b8aa],[7,0x5e,0x61b8c6],[8,0x10,0x61b82a]];
for (const [t, b, target] of TYPES) {
  check(d[0x61b80a + t] === b, `widget type ${t}: tbb byte == ${hex(b)}`);
  check(0x61b80a + 2 * b === target, `widget type ${t}: target == ${hex(target)}`);
}
// type 3 is the clock ctor 0x61b110 (inherited fact, re-derived from the BL encoding)
check(blTarget(0x61b888) === (0x61b110 + CODE_BASE) >>> 0,
      `widget type 3 -> clock ctor: bl @0x61b888 targets ${hex(0x61b110 + CODE_BASE)} (file 0x61b110)`);
check(bytesAre(0x61b888, 'fff742fc'), 'bl @0x61b888 raw bytes == f7 ff 42 fc');
// type 6 arm is the createTextWidget error path
check(strAtVA(u32(((0x61b8b8 + 4) & ~3) + 0x78)) === 'createTextWidget',
      'widget type 6 arm @0x61b8aa references "createTextWidget"');

// the tile container factory stays borderless (leaf-1.1 fact, spot-checked)
check(bytesAre(0x6120c8, '38b5'), 'tile container factory @0x6120c8 == push {r3,r4,r5,lr}');

// =====================================================================================
// §3.4 / §3.5  manager + standby resources
// =====================================================================================
for (const s of ['createWidget', 'createSpecWidgets', 'createDefaultWidgets', 'changeStandbyWidgetSeq',
                 'unBondReset', 'isSupportStepCountWidget', 'remoteDeviceTypeChangeCallback',
                 'createNormalWidget', 'createTextWidget', 'customTimeAndBatteryWidget',
                 'createWeather1x2Widget', 'KEY_LAUNCHER_STANDBY_MOVE_HINT_COUNT'])
  check(countStr(s) >= 1, `standby symbol "${s}" present`);
check(strAtFile(0x1ab224) === '[Launcher]createSpecWidgets, no space left, return',
      'slot-limit guard string @0x1ab224');
check((strAtFile(0x1ab420) || '').includes('%lld'), 'changeStandbyWidgetSeq stores a %lld @0x1ab420');
check((strAtFile(0x1ab32c) || '').includes('%lld'), 'createDefaultWidgets reads a %lld @0x1ab32c');

for (const [f, n] of [[0x1aac6c, 'launcher_standby_zen_mode'],
                      [0x1ab1a0, 'launcher_standby_hear_imp_mode'],
                      [0x1ab1c0, 'launcher_standby_disconnect'],
                      [0x1a9138, 'launcher_standby_demo_mode'],
                      [0x1aaf28, 'launcher_standby_battery_empty'],
                      [0x1aac88, 'launcher_standby_battery_charge_lightning'],
                      [0x1a8d5c, 'launcher_standby_move_indicator'],
                      [0x1a9418, 'launcher_standby_freestyle_pip'],
                      [0x1a97cc, 'launcher_standby_freestyle_default'],
                      [0x1aae2c, 'launcher_health_normal']])
  check(strAtFile(f) === n, `standby resource name @${hex(f)} == "${n}"`);
for (let lvl = 10; lvl <= 90; lvl += 10)
  check(strAtFile(0x1a80a0 + ((90 - lvl) / 10) * 0x1c) === `launcher_standby_battery_${lvl}`,
        `battery ladder rung ${lvl} present`);

// =====================================================================================
// §4  models
// =====================================================================================
for (const m of ['MessageModel', 'StatusModel', 'TimeModel', 'TipsModel', 'WeatherModel'])
  check(countStr(m) >= 1, `launcher model "${m}" present`);
for (const p of ['../../thirdparty/star_air_lvgl/app/Pages/Launcher/model/MessageModel.cpp',
                 '../../thirdparty/star_air_lvgl/app/Pages/Launcher/view/DockviewV2.cpp',
                 '../../thirdparty/star_air_lvgl/app/Pages/Launcher/view/StandByView.cpp',
                 '../../thirdparty/star_air_lvgl/app/Pages/Launcher/view/LauncherViewController.cpp',
                 '../../thirdparty/star_air_lvgl/app/Pages/Launcher/widget/StandByWidget.cpp',
                 '../../thirdparty/star_air_lvgl/app/Pages/Launcher/widget/StandByWidgetManager.cpp'])
  check(countStr(p) >= 1, `source path "${p.split('/').slice(-2).join('/')}" present`);

// =====================================================================================
// §5  handleSystemMsg action table — the CONFIG surface
// =====================================================================================
const ACTIONS = ['get_device_info','do_recovery','get_language','set_language','get_zen_mode',
  'set_zen_mode','set_device_name','get_screen_off_time','set_screen_off_time','get_brightness',
  'set_brightness','set_brightness_finish','get_volume','set_volume','change_dock_items',
  'get_wear_detection_mode','set_wear_detection_mode','set_standby_position','get_standby_position',
  'get_volume_stream_type','get_music_tp_control_mode','set_music_tp_control_mode',
  'notify_privacy_expired','notify_statement_change','sync_clone_data','set_glass_sound_effect_mode',
  'get_glass_sound_effect_mode','set_standby_widget_lists','get_standby_widget_lists'];
ACTIONS.forEach((a, i) => {
  const slot = 0x60ed78 + i * 4;
  check(strAtVA(u32(slot)) === a, `handleSystemMsg action pool[${i}] @${hex(slot)} == "${a}"`);
});
check(ACTIONS.length === 29, 'handleSystemMsg accepts exactly 29 actions');
// bound the pool: the slot after the table is a log format, not an action
check((strAtVA(u32(0x60ed78 + 29 * 4)) || '').startsWith('[Launcher]'),
      `action pool ends at ${hex(0x60ed78 + 29 * 4)} (next slot is a log string)`);
// the three launcher knobs
for (const a of ['change_dock_items', 'set_standby_position', 'set_standby_widget_lists'])
  check(ACTIONS.includes(a), `launcher CONFIG knob "${a}" is in the accepted action list`);
// sync_clone_data-only actions
for (const [slot, a] of [[0x60e748, 'set_hear_impairment_mode'], [0x60e74c, 'set_app_fast_open'],
                         [0x60e754, 'set_image_stabilization_mode'], [0x60e758, 'set_image_adjustment_mode'],
                         [0x60e760, 'set_font_mode']]) {
  check(strAtVA(u32(slot)) === a, `clone-only action @${hex(slot)} == "${a}"`);
  check(!ACTIONS.includes(a), `clone-only action "${a}" is NOT in the handleSystemMsg chain`);
}
// envelope keys
check(strAtFile(0x1a6428) === 'widgets', 'set_standby_widget_lists payload key "widgets" @0x1a6428');
check(strAtFile(0x1a5730) === 'setStandbyPosistionInner', 'setStandbyPosistionInner symbol @0x1a5730');
check(strAtFile(0x1a5684) === 'setDockItemsInner', 'setDockItemsInner symbol @0x1a5684');
check((strAtFile(0x1a578c) || '').includes('value is not number'),
      'set_standby_position requires a numeric value (guard string @0x1a578c)');

// =====================================================================================
// §6  write-safety: nothing proposed lands in a forbidden sub-image
// =====================================================================================
const PROPOSED = [0x534de0, 0x6138d0, 0x6138d4, 0x6138d8, 0x6138dc, 0x6138e0, 0x6138e4,
                  0x6138e8, 0x6138ec, 0x6138f0, 0x6138f4, 0x61379e, 0x613788,
                  0x61a9d8, 0x61a9e0, 0x61b79e, 0x61b7ee, 0x61b7f8, 0x1a7098, 0x1aae5c];
for (const f of PROPOSED)
  for (const [name, lo, hi] of FORBIDDEN)
    check(!(f >= lo && f < hi), `proposed write ${hex(f)} is outside ${name} [${hex(lo)},${hex(hi)})`);
// positive control on the safety check itself: a byte inside the DSP must be rejected
{
  const inside = 0x100000;
  const rejected = FORBIDDEN.some(([, lo, hi]) => inside >= lo && inside < hi);
  check(rejected, 'POSITIVE CONTROL: the write-safety test does flag an offset inside the HiFi4 DSP image');
}

// =====================================================================================
// doc hygiene: no 0x2C000000-based addressing, doc exists and is substantial
// =====================================================================================
if (existsSync(DOC)) {
  const doc = readFileSync(DOC, 'utf8');
  check(doc.split('\n').length >= 60, 'launcher.md is at least 60 lines');
  check(!/0x2C000000/i.test(doc), 'launcher.md contains no known-bad 0x2C000000 base');
  check(/1\.0\.11\.53/.test(doc), 'launcher.md states the build (1.0.11.53)');
  for (const t of ['CONFIG', 'DATA', 'CODE'])
    check(doc.includes(t), `launcher.md names the ${t} customization tier`);
} else {
  fail('launcher.md not found next to the verifier');
}

if (failures) {
  console.error(`\n${failures} check(s) failed`);
  process.exit(1);
}
console.log('launcher verification passed');
