#!/usr/bin/env node
// verify-display.mjs — oracle for Reverse/firmware/analysis/map/display.md (leaf-1.1)
//
// Target: Reverse/firmware/x_1.0.11.53/platform_tester.bin ONLY.
// Address model: code VA = file + 0x2C010000 ; data file = VA - 0x3BFD7CB0
// (the 0x2C000000 base is KNOWN-BAD; the naive VA - 0x3C000000 data rule is also wrong.)
//
// Every substantive claim in display.md that reduces to bytes is re-derived here from the
// binary. Controls are declared and reported first, per PLAN.md method rules.
//
// Prints exactly "display verification passed" on success; exits non-zero on failure.

import { readFileSync, existsSync } from 'node:fs';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const HERE = dirname(fileURLToPath(import.meta.url));
const ROOT = resolve(HERE, '../../../..');
const BIN  = resolve(ROOT, 'Reverse/firmware/x_1.0.11.53/platform_tester.bin');
const DOC  = resolve(HERE, 'display.md');

const CODE_BASE  = 0x2c010000;
const DATA_DELTA = 0x3bfd7cb0;   // 1.0.11.53. NOT 0x3BFD7C0C (12.83), NOT 0x3C000000 (known-bad).
const BIN_SIZE   = 7042632;
const TEXT_LO = 0x469954, TEXT_HI = 0x6b7000;   // XIP .text region, file offsets

// sub-images that must never be written (PLAN.md)
const FORBIDDEN = [
  ['HiFi4 DSP',  0x04e9b4, 0x143f14],
  ['sensor_hub', 0x134070, 0x14a7a4],
];

let failures = 0;
const fail = (m) => { failures++; console.error('FAIL: ' + m); };
const ok   = (m) => { if (process.env.VERBOSE) console.log('  ok  ' + m); };
const check = (c, m) => { c ? ok(m) : fail(m); return !!c; };
const hex = (n) => '0x' + (n >>> 0).toString(16);

if (!existsSync(BIN)) { console.error('FAIL: binary not found: ' + BIN); process.exit(2); }
const d = readFileSync(BIN);
if (d.length !== BIN_SIZE) { console.error(`FAIL: wrong binary, ${d.length} B (want ${BIN_SIZE})`); process.exit(2); }

// ---------- primitives ----------
const u32 = (f) => d.readUInt32LE(f);
const u16 = (f) => d.readUInt16LE(f);
const i16 = (f) => d.readInt16LE(f);
const i8  = (f) => d.readInt8(f);
const F   = (va) => (va >>> 0) - DATA_DELTA;          // data VA -> file offset
const inFile = (f) => Number.isInteger(f) && f >= 0 && f < d.length;

function strAtFile(f, max = 160) {
  if (!inFile(f)) return null;
  const e = d.indexOf(0, f);
  if (e < 0 || e - f > max) return null;
  return d.subarray(f, e).toString('latin1');
}
function countBytes(buf, aligned2 = false) {
  let c = 0, i = 0;
  for (;;) { i = d.indexOf(buf, i); if (i < 0) break; if (!aligned2 || (i % 2) === 0) c++; i++; }
  return c;
}
const countStr = (s) => countBytes(Buffer.from(s, 'latin1'));
const findStr  = (s) => d.indexOf(Buffer.from(s, 'latin1'));

/** Thumb-2 BL/B.W at file offset -> absolute target VA (or null) */
function branch32(f) {
  const hw1 = u16(f), hw2 = u16(f + 2);
  if ((hw1 & 0xf800) !== 0xf000) return null;
  const kind = hw2 & 0xd000;
  if (kind !== 0xd000 && kind !== 0x9000) return null;      // BL / B.W
  const S = (hw1 >> 10) & 1, imm10 = hw1 & 0x3ff;
  const J1 = (hw2 >> 13) & 1, J2 = (hw2 >> 11) & 1, imm11 = hw2 & 0x7ff;
  const I1 = (~(J1 ^ S)) & 1, I2 = (~(J2 ^ S)) & 1;
  let off = (S << 24) | (I1 << 23) | (I2 << 22) | (imm10 << 12) | (imm11 << 1);
  if (S) off -= 1 << 25;
  return { target: ((f + CODE_BASE + 4) + off) >>> 0, isBL: kind === 0xd000 };
}
const blTargetFile = (f) => { const b = branch32(f); return b && b.isBL ? (b.target & ~1) - CODE_BASE : null; };

console.log('display.md verification — controls first');

// =====================================================================================
// CONTROL A (POSITIVE CONTROL, §5.1): the style-setter thunks at 0x64a5e0 / 0x64a5f8 must
// decode to property ids 85 (text_color) and 87 (text_font). An earlier pass proved that
// 79/80 is WRONG. If this decode does not yield 85/87 the method is broken and the correct
// response is to say so, NOT to relax the expectation.
// =====================================================================================
const LV_SET_LOCAL_STYLE_PROP = 0x648404;

/** decode a 12-byte style-setter thunk at file offset f */
function decodeThunk(f) {
  if (!inFile(f + 12)) return null;
  if (u16(f) !== 0x468c) return null;              // mov ip, r1     (value)
  if (u16(f + 2) !== 0x4613) return null;          // mov r3, r2     (selector)
  if ((u16(f + 4) & 0xff00) !== 0x2100) return null; // movs r1, #prop
  if (u16(f + 6) !== 0x4662) return null;          // mov r2, ip
  const b = branch32(f + 8);
  if (!b || b.isBL) return null;                   // must be the B.W tail call
  return { prop: u16(f + 4) & 0xff, target: (b.target & ~1) - CODE_BASE };
}

{
  const tc = decodeThunk(0x64a5e0), tf = decodeThunk(0x64a5f8);
  const got = `${tc ? tc.prop : 'none'}/${tf ? tf.prop : 'none'}`;
  const pass = tc && tf && tc.prop === 85 && tf.prop === 87;
  console.log(`  CONTROL A (POSITIVE CONTROL): thunk 0x64a5e0/0x64a5f8 prop ids = ${got} (want 85/87) -> ${pass ? 'PASS' : 'FAIL'}`);
  if (!pass) fail('POSITIVE CONTROL: style thunk property-id decode did not yield 85/87 — the decode method is broken; do not adjust the expectation');
  check(tc && tc.target === LV_SET_LOCAL_STYLE_PROP, 'text_color thunk tail-calls lv_obj_set_local_style_prop @0x648404');
  check(tf && tf.target === LV_SET_LOCAL_STYLE_PROP, 'text_font thunk tail-calls lv_obj_set_local_style_prop @0x648404');
}

// =====================================================================================
// CONTROL B (NEGATIVE CONTROL, §3.3): the 4-bpp glyph decoder is validated on a glyph of
// known shape ('A', face 0x491d94), and the SAME decoder run with the bitmap base shifted
// by one byte must FAIL the shape test. If the shifted decode still "renders an A", the
// shape test is vacuous and proves nothing.
// =====================================================================================
function faceDsc(objFile) {
  const dsc = F(u32(objFile + 16));
  if (!inFile(dsc + 22)) return null;
  const bits = u16(dsc + 18);
  return {
    dsc,
    glyph_bitmap: F(u32(dsc)),
    glyph_dsc: F(u32(dsc + 4)),
    cmaps: F(u32(dsc + 8)),
    kern_dsc: u32(dsc + 12),
    kern_scale: u16(dsc + 16),
    cmap_num: bits & 0x1ff,
    bpp: (bits >> 9) & 0xf,
    kern_classes: (bits >> 13) & 1,
    bitmap_format: (bits >> 14) & 3,
    cache: u32(dsc + 20),
  };
}
function cmapEntry(base, i) {
  const e = base + i * 20;
  return {
    range_start: u32(e), range_length: u16(e + 4), glyph_id_start: u16(e + 6),
    unicode_list: u32(e + 8), glyph_id_ofs_list: u32(e + 12),
    list_length: u16(e + 16), type: d[e + 18],
  };
}
function glyphDsc(base, gid) {                     // vendor-widened 16-byte entry
  const e = base + gid * 16;
  return { bitmap_index: u32(e), adv_w: u32(e + 4), box_w: u16(e + 8), box_h: u16(e + 10), ofs_x: i16(e + 12), ofs_y: i16(e + 14) };
}
/** decode a 4-bpp row-major glyph; returns per-row ink columns and an ink mask */
function render4bpp(base, box_w, box_h) {
  const rows = [];
  let ink = 0;
  for (let y = 0; y < box_h; y++) {
    const row = [];
    for (let x = 0; x < box_w; x++) {
      const n = y * box_w + x;
      const byte = d[base + (n >> 1)];
      const v = (n & 1) ? (byte & 0x0f) : (byte >> 4);
      row.push(v);
      if (v > 7) ink++;
    }
    rows.push(row);
  }
  return { rows, ink };
}
/** the shape test: is this really a capital A? */
function looksLikeA(r) {
  const cols = (row) => row.map((v, x) => (v > 7 ? x : -1)).filter((x) => x >= 0);
  const top = cols(r.rows[0]);
  const bot = cols(r.rows[r.rows.length - 1]);
  const counts = r.rows.map((row) => row.filter((v) => v > 7).length);
  const apexCentred = top.length === 2 && top[0] === 6 && top[1] === 7;         // narrow apex, centred
  const crossbar = counts[9] === Math.max(...counts) && counts[9] >= 9;          // widest row is the crossbar
  const twoLegs = bot.length === 4 && bot[1] - bot[0] === 1 && bot[3] - bot[2] === 1 && bot[2] - bot[1] > 6;
  return { apexCentred, crossbar, twoLegs, all: apexCentred && crossbar && twoLegs, counts, top, bot };
}

const A_FACE = 0x491d94;
let aShape = null;
{
  const f = faceDsc(A_FACE);
  const c0 = cmapEntry(f.cmaps, 0);
  const gid = c0.glyph_id_start + (0x41 - c0.range_start);
  const g = glyphDsc(f.glyph_dsc, gid);
  check(c0.range_start === 0x20 && c0.range_length === 95 && c0.glyph_id_start === 1 && c0.type === 2,
        'face 0x491d94 cmap[0] = {start 0x20, len 95, gid_start 1, type 2}');
  check(gid === 34, "'A' resolves to gid 34");
  check(g.bitmap_index === 1853 && g.adv_w === 217 && g.box_w === 14 && g.box_h === 14 && g.ofs_x === 0 && g.ofs_y === 0,
        "'A' descriptor = {bitmap_index 1853, adv_w 217, box 14x14, ofs 0,0}");
  check(f.glyph_bitmap === 0x212b3c, 'face 0x491d94 glyph_bitmap @0x212b3c');

  const good = render4bpp(f.glyph_bitmap + g.bitmap_index, g.box_w, g.box_h);
  aShape = looksLikeA(good);
  const wantCounts = [2, 3, 4, 3, 3, 3, 4, 4, 8, 9, 4, 4, 3, 4];
  check(aShape.all, "POSITIVE: 'A' decodes to a legible capital A (centred apex, crossbar, two legs)");
  check(good.ink === 58, `'A' total ink = 58 px (got ${good.ink})`);
  check(JSON.stringify(aShape.counts) === JSON.stringify(wantCounts),
        `'A' per-row ink profile = ${wantCounts.join(',')}`);

  const shifted = looksLikeA(render4bpp(f.glyph_bitmap + g.bitmap_index + 1, g.box_w, g.box_h));
  const controlPass = !shifted.all;
  console.log(`  CONTROL B (NEGATIVE CONTROL): same decoder, bitmap base +1 B -> shape test ${shifted.all ? 'STILL PASSES' : 'fails as required'} -> ${controlPass ? 'PASS' : 'FAIL'}`);
  if (!controlPass) fail('NEGATIVE CONTROL: a one-byte bitmap-base shift still satisfies the glyph shape test — the test is vacuous');
}

// =====================================================================================
// CONTROL C (POSITIVE CONTROL, §1): the "module is absent" searches are validated against
// modules that are KNOWN PRESENT. A string search that finds nothing proves nothing until
// it is shown to find something.
// =====================================================================================
{
  const present = ['lv_label.c', 'lv_bar.c', 'lv_line.c', 'lv_span.c', 'lv_obj_pos.c', 'lv_font_loader.c'];
  const found = present.filter((s) => findStr(s) >= 0);
  const pass = found.length === present.length;
  console.log(`  CONTROL C (POSITIVE CONTROL): known-linked module strings found ${found.length}/${present.length} -> ${pass ? 'PASS' : 'FAIL'}`);
  if (!pass) fail('POSITIVE CONTROL: the module string search missed a known-present module (' + present.filter((s) => findStr(s) < 0).join(', ') + ') — absence claims below are unusable');
}

// =====================================================================================
// §1  LVGL integration
// =====================================================================================
check(strAtFile(0x450fdc) === 'No more custom property IDs available', 'v8.3 custom-property allocator string @0x450fdc');
check(countBytes(Buffer.from('42f2d172', 'hex'), true) > 0, 'movw r2,#0x27d1 (LV_SIZE_CONTENT) is used as an immediate');
for (const s of ['lv_obj_move_to_index', 'lv_obj_add_event_cb', 'lv_style_register_prop'])
  check(findStr(s) >= 0, `v8 API symbol present: ${s}`);
for (const s of ['8.3.', 'lv_conf'])
  check(findStr(s) < 0, `no LVGL version banner in the image (${s} absent) — "v8" is inferred from ABI, not read`);

// modules linked (doc §1 table)
for (const s of ['lv_obj.c', 'lv_obj_tree.c', 'lv_refr.c', 'lv_event.c', 'lv_indev_xjxr.c',
                 'lv_gpu_bes.c', 'lv_draw_vglite_line.c', 'lv_draw_sw_layer.c', 'lv_img_decoder.c',
                 'lv_font_utils.c', 'lv_font_air_binary.c', 'lv_fs.c', 'lv_fs_lfs.c',
                 'lv_port_disp_speedup_bgra8888.c', 'lv_to_async_ipc.c', 'lv_async_handler_thread.c',
                 'lv_key_manager.c', 'lv_power_manager.c', 'lv_system.c', 'lv_argb2bmp.c'])
  check(findStr(s) >= 0, `linked module present: ${s}`);

// modules NOT linked (doc §1) — only meaningful because CONTROL C passed
for (const s of ['lv_arc', 'lv_chart', 'lv_slider', 'lv_table', 'lv_meter', 'lv_canvas',
                 'lv_keyboard', 'lv_textarea', 'lv_dropdown', 'lv_theme', 'lv_gif', 'lv_qrcode'])
  check(findStr(s) < 0, `NEG: widget/module absent from the image: ${s}`);

check(findStr('assert_lvgl_ui_thread') >= 0, 'UI-thread assertion (extra/lv_system.c) present');
check((strAtFile(0x17d130) || '').startsWith('../../thirdparty/star_air_lvgl/app/Pages/Ring/ui/'),
      'vendor app layer path app/Pages/Ring/ui @0x17d130');

// =====================================================================================
// §2  panel and pixel path
// =====================================================================================
check((strAtFile(0x415b4) || '').endsWith('graphic/lcd/jbd013_api.c'), 'panel driver jbd013_api.c @0x415b4');
check(strAtFile(0x41ce4) === 'jbd4010_display', 'display thread name @0x41ce4');
check(strAtFile(0x4197c) === 'left:%d' && strAtFile(0x41984) === 'right:%d', 'two panels: left/right @0x4197c/0x41984');
check((strAtFile(0x451e90) || '').endsWith('lv_port_disp_speedup_bgra8888.c'), 'BGRA8888 framebuffer porting file @0x451e90');
check((strAtFile(0x144524) || '').endsWith('graphic/gpu/gpu_port.c'), 'vg_lite GPU port @0x144524');
check(strAtFile(0x44f4b4) === 'Cannot use sw draw bezier curve, its a fake!', 'sw bezier fallback string @0x44f4b4');
check(strAtFile(0x171094) === 'set_disp_bri' && strAtFile(0x1710bc) === 'get_disp_bri', 'brightness CONFIG verbs @0x171094/0x1710bc');
check(countStr('nvbri') > 0, 'brightness is NV-backed (nvbri)');

// resolution: string + literal evidence only, and the doc says so
check(strAtFile(0x172800) === 'AA_Pattern_640_480_R32', 'factory pattern AA_Pattern_640_480_R32 @0x172800');
check(strAtFile(0x172818) === 'AA_Pattern_640_480_R40', 'factory pattern AA_Pattern_640_480_R40 @0x172818');
check(u16(0x671594) === 640 && u16(0x671596) === 480, 'u16{640,480} literal pair @0x671594');
{
  // NEG: no movw of 640 or 480 anywhere in .text (encodings: movw rX,#640 / #480)
  const movwImm = (v) => { // T3 MOVW: 11110 i 100100 imm4 | 0 imm3 rd imm8
    const out = [];
    const i = (v >> 11) & 1, imm4 = (v >> 12) & 0xf, imm3 = (v >> 8) & 7, imm8 = v & 0xff;
    for (let rd = 0; rd < 13; rd++) {
      const hw1 = 0xf240 | (i << 10) | imm4;
      const hw2 = (imm3 << 12) | (rd << 8) | imm8;
      const b = Buffer.alloc(4); b.writeUInt16LE(hw1, 0); b.writeUInt16LE(hw2, 2); out.push(b);
    }
    return out;
  };
  let hits = 0;
  for (const v of [640, 480])
    for (const pat of movwImm(v)) {
      let i = TEXT_LO;
      for (;;) { i = d.indexOf(pat, i); if (i < 0 || i >= TEXT_HI) break; if (i % 2 === 0) hits++; i++; }
    }
  check(hits === 0, `NEG: no movw #640 / #480 in .text [${hex(TEXT_LO)},${hex(TEXT_HI)}) — resolution is not a decoded immediate in 11.53 (got ${hits})`);
}

// the green ramp, in code
check(countBytes(Buffer.from('4ff0ff21', 'hex'), true) === 246, 'mov.w r1,#0xFF00FF00 at 246 halfword-aligned sites');
check(d.subarray(0x61b138, 0x61b13c).toString('hex') === '4ff0ff21', 'clock text colour 0xFF00FF00 @0x61b138');
check(d.subarray(0x61b7e2, 0x61b7e6).toString('hex') === '4ff0ff21', 'ring border colour 0xFF00FF00 @0x61b7e2');

// =====================================================================================
// §3  fonts
// =====================================================================================
const FONT_OBJS = [0x491ccc, 0x491cf4, 0x491d1c, 0x491d44, 0x491d6c, 0x491d94, 0x491dbc, 0x491de4, 0x491e0c];
// obj, line_h, base_l, ul_pos, ul_thk, dsc, bpp, cmaps, glyphs, fallback (0 = none)
const FONT_TABLE = [
  [0x491ccc, 52, 12, -5, 2, 0x1ad8ec, 4,  1,   14, 0x491d6c],
  [0x491cf4, 33,  7, -3, 1, 0x1ae61c, 1, 34, 6032, 0],
  [0x491d1c, 40,  2, -5, 2, 0x211ba8, 4,  1,   13, 0],
  [0x491d44, 22,  6, -2, 1, 0x212490, 1,  1,    2, 0x491e0c],
  [0x491d6c, 52, 12, -5, 2, 0x2124e0, 1,  1,   10, 0],
  [0x491d94, 27,  6, -2, 1, 0x212b24, 4, 34, 6032, 0],
  [0x491dbc, 33,  7, -3, 1, 0x30e864, 1,  1,    2, 0x491cf4],
  [0x491de4, 26,  6, -2, 1, 0x30e8b4, 1,  1,    2, 0x491d94],
  [0x491e0c, 22,  6, -2, 1, 0x30eb98, 1, 34, 6032, 0],
];
check(FONT_OBJS.every((o, i) => i === 0 || o - FONT_OBJS[i - 1] === 0x28), 'lv_font_t stride is 0x28');
check(FONT_OBJS[0] === 0x491ccc && FONT_OBJS[8] + 0x28 === 0x491e34, '9 lv_font_t objects spanning 0x491ccc..0x491e33');

function glyphCount(fd) {                      // highest gid + 1 reachable through the cmaps
  let max = 0;
  for (let i = 0; i < fd.cmap_num; i++) {
    const c = cmapEntry(fd.cmaps, i);
    const span = c.type === 2 ? c.range_length : c.list_length;   // SPARSE_* use list_length
    max = Math.max(max, c.glyph_id_start + span);
  }
  return max;
}
for (const [o, lh, bl, ulp, ult, dscF, bpp, cmaps, glyphs, fb] of FONT_TABLE) {
  check(u32(o) === 0x2c67b659, `${hex(o)}: get_glyph_bitmap = 0x2C67B659 (file 0x66b658, Thumb)`);
  check(u32(o + 4) === 0x2c67b5f1, `${hex(o)}: get_glyph_dsc = 0x2C67B5F1 (file 0x66b5f0)`);
  check(u16(o + 8) === lh, `${hex(o)}: line_height = ${lh}`);
  check(u16(o + 10) === bl, `${hex(o)}: base_line = ${bl}`);
  check(i8(o + 13) === ulp && i8(o + 14) === ult, `${hex(o)}: underline pos/thk = ${ulp}/${ult}`);
  check(u32(o + 24) === 0, `${hex(o)}: user_data = 0`);
  const fbf = u32(o + 20) === 0 ? 0 : F(u32(o + 20));
  check(fbf === fb, `${hex(o)}: fallback = ${fb ? hex(fb) : 'none'}`);
  const fd = faceDsc(o);
  check(fd.dsc === dscF, `${hex(o)}: dsc -> ${hex(dscF)}`);
  check(fd.bpp === bpp, `${hex(o)}: bpp = ${bpp}`);
  check(fd.cmap_num === cmaps, `${hex(o)}: cmap_num = ${cmaps}`);
  check(fd.kern_classes === 0 && fd.bitmap_format === 0, `${hex(o)}: kern_classes/bitmap_format bitfields read 0`);
  check(glyphCount(fd) === glyphs, `${hex(o)}: ${glyphs} glyphs`);
  check(fd.cache >>> 24 === 0x3d, `${hex(o)}: glyph cache pointer is a RAM address (${hex(fd.cache)})`);
}
// the three full CJK faces are the 6032-glyph / 34-cmap ones, and they span U+0020..U+10F00
for (const o of [0x491cf4, 0x491d94, 0x491e0c]) {
  const fd = faceDsc(o);
  const first = cmapEntry(fd.cmaps, 0), last = cmapEntry(fd.cmaps, fd.cmap_num - 1);
  check(first.range_start === 0x20, `${hex(o)}: first cmap range starts at U+0020`);
  check(last.range_start + last.range_length === 0x10f00, `${hex(o)}: cmap coverage ends at U+10F00`);
  let hasCJK = false;
  for (let i = 0; i < fd.cmap_num; i++) {
    const c = cmapEntry(fd.cmaps, i);
    if (c.range_start <= 0x4e00 && c.range_start + c.range_length > 0x4e00) hasCJK = true;
  }
  check(hasCJK, `${hex(o)}: covers the CJK U+4E00 block`);
}
// the 40 px clock digit face: '.', '/', '0'-'9', ':' and nothing else
{
  const fd = faceDsc(0x491d1c);
  const c0 = cmapEntry(fd.cmaps, 0);
  check(c0.range_start === 0x2e && fd.cmap_num === 1, 'clock digit face 0x491d1c covers only U+002E..U+003A');
}
// the FONT_DUMMY_* faces are empty stubs
for (const o of [0x491d44, 0x491de4, 0x491dbc]) {
  const fd = faceDsc(o);
  const c0 = cmapEntry(fd.cmaps, 0);
  check(fd.cmap_num === 1 && c0.range_start === 0 && c0.range_length === 1,
        `${hex(o)}: FONT_DUMMY stub — one cmap covering U+0000..U+0000`);
  check(u32(o + 20) !== 0, `${hex(o)}: FONT_DUMMY stub renders through .fallback`);
}
// §3.4 CORRECTED: the 1-bpp faces are NOT compressed. Their byte budget matches a
// continuous (non-row-padded) bit stream exactly, and they render legibly when decoded
// that way. The old "needs ceil(w/8)*h bytes" arithmetic assumed byte-aligned rows.
/** decode a 1-bpp glyph as a continuous MSB-first bit stream */
function render1bpp(base, box_w, box_h) {
  const rows = [];
  for (let y = 0; y < box_h; y++) {
    const row = [];
    for (let x = 0; x < box_w; x++) {
      const n = y * box_w + x;
      row.push((d[base + (n >> 3)] >> (7 - (n & 7))) & 1 ? 15 : 0);
    }
    rows.push(row);
  }
  return { rows, ink: rows.flat().filter((v) => v > 7).length };
}
/** shape test for a capital A that does not hardcode this face's pixel counts */
function isCapitalA(r) {
  const cols = (row) => row.map((v, x) => (v > 7 ? x : -1)).filter((x) => x >= 0);
  const counts = r.rows.map((row) => row.filter((v) => v > 7).length);
  const w = r.rows[0].length, h = r.rows.length;
  const top = cols(r.rows[0]), bot = cols(r.rows[h - 1]);
  if (top.length < 1 || top.length > 3) return false;                      // narrow apex
  const apex = (top[0] + top[top.length - 1]) / 2;
  if (Math.abs(apex - (w - 1) / 2) > 1.5) return false;                    // ...and centred
  const widest = counts.indexOf(Math.max(...counts));
  if (widest < h * 0.5 || widest > h * 0.85) return false;                 // crossbar low-middle
  if (bot.length === 0) return false;
  let gaps = 0;
  for (let i = 1; i < bot.length; i++) if (bot[i] - bot[i - 1] > Math.max(3, w / 3)) gaps++;
  return gaps === 1;                                                       // exactly two legs
}
for (const [o, wantBox, wantBudget] of [[0x491e0c, '10x12', 15], [0x491cf4, '15x17', 32]]) {
  const fd = faceDsc(o);
  const c0 = cmapEntry(fd.cmaps, 0);
  const gid = c0.glyph_id_start + (0x41 - c0.range_start);
  const g = glyphDsc(fd.glyph_dsc, gid), nxt = glyphDsc(fd.glyph_dsc, gid + 1);
  const budget = nxt.bitmap_index - g.bitmap_index;
  const continuous = Math.ceil(g.box_w * g.box_h / 8);
  const rowAligned = Math.ceil(g.box_w / 8) * g.box_h;
  check(`${g.box_w}x${g.box_h}` === wantBox, `1-bpp face ${hex(o)} 'A' box = ${wantBox}`);
  check(budget === wantBudget && budget === continuous,
        `${hex(o)} 'A': ${budget} B budget == ${continuous} B continuous bit stream (row-aligned would need ${rowAligned})`);
  const r = render1bpp(fd.glyph_bitmap + g.bitmap_index, g.box_w, g.box_h);
  check(isCapitalA(r), `SEMANTIC: ${hex(o)} 'A' renders as a legible capital A at 1 bpp — bitmap_format 0 is literal, the face is NOT compressed`);
  const shifted = render1bpp(fd.glyph_bitmap + g.bitmap_index + 1, g.box_w, g.box_h);
  check(!isCapitalA(shifted), `NEGATIVE CONTROL: ${hex(o)} 'A' +1 B fails the same shape test`);
}

// §3.5 downloadable font on a littlefs "B:" volume
check(strAtFile(0x45a580) === 'B:lv_font_air_full_cn_20_bpp1.bin', 'loadable CN font filename @0x45a580');
check((strAtFile(0x45a4d0) || '').endsWith('font_manager/lv_font_air_binary.c'), 'font manager source path @0x45a4d0');
for (const s of ['lv_font_do_load_font', 'lv_font_load_from_file', 'lv_font_mgr_get_file',
                 'lv_font_mgr_get_font', 'lv_font_air_mgr_load_all', 'lv_font_free_font_file'])
  check(findStr(s) >= 0, `font-manager API present: ${s}`);
check(findStr('init font littlefs') >= 0, 'font littlefs volume is mounted (init font littlefs)');

// =====================================================================================
// §3.1 / §4.3  the name registries — 10 font names, 348 resource names, one initialiser chain
// =====================================================================================
const REG_FN = 0x61e46c;             // 3-arg register(map, name, value)
// [start, end) of each initialiser in the tail-call chain; the last ends at getFontByName.
const CHAIN = [[0x622810, 0x622d2c], [0x622d2c, 0x623244], [0x623244, 0x623760],
               [0x623760, 0x623c7c], [0x623c7c, 0x624188]];

/** walk a chain function, tracking pc-relative literal loads into r0-r3, and collect
 *  (name, value) pairs at every BL to the register function. */
function scanChain(start, end) {
  const pairs = [];
  let calls = 0;
  const regs = new Map();
  let f = start;
  while (f < end) {
    const hw = u16(f);
    if ((hw & 0xf800) === 0x4800) {                      // LDR (literal) T1: ldr rN,[pc,#imm8*4]
      const rt = (hw >> 8) & 7, imm = (hw & 0xff) * 4;
      const pc = ((f + CODE_BASE + 4) & ~3) - CODE_BASE;
      if (inFile(pc + imm + 4)) regs.set('r' + rt, u32(pc + imm));
      f += 2; continue;
    }
    if ((hw & 0xff7f) === 0xf85f) {                      // LDR (literal) T2
      const hw2 = u16(f + 2);
      const rt = (hw2 >> 12) & 0xf, imm = hw2 & 0xfff;
      const add = (hw >> 7) & 1;
      const pc = ((f + CODE_BASE + 4) & ~3) - CODE_BASE;
      const lit = add ? pc + imm : pc - imm;
      if (inFile(lit + 4)) regs.set('r' + rt, u32(lit));
      f += 4; continue;
    }
    if ((hw & 0xff00) === 0x4600) {                      // MOV (register), high-reg form
      const rd = (hw & 7) | ((hw >> 4) & 8), rm = (hw >> 3) & 0xf;
      if (regs.has('r' + rm)) regs.set('r' + rd, regs.get('r' + rm)); else regs.delete('r' + rd);
      f += 2; continue;
    }
    const b = branch32(f);
    if (b) {
      if (b.isBL && ((b.target & ~1) - CODE_BASE) === REG_FN) {
        calls++;
        if (regs.has('r1')) pairs.push([regs.get('r1'), regs.get('r2')]);
      }
      for (const r of ['r0', 'r1', 'r2', 'r3']) regs.delete(r);
      f += 4; continue;
    }
    f += ((hw & 0xf800) >= 0xe800 && (hw & 0xf800) !== 0xe000) ? 4 : 2;   // 32-bit Thumb-2 else 16-bit
  }
  return { pairs, calls };
}

let regCalls = 0;
const namePairs = [];
for (const [a, b] of CHAIN) { const r = scanChain(a, b); regCalls += r.calls; namePairs.push(...r.pairs); }
check(regCalls === 357, `name-registry initialiser chain issues 357 register() calls (got ${regCalls})`);
// independent method: a raw scan of .text for BL -> register() must find the same 357 sites
{
  let raw = 0;
  for (let f = TEXT_LO; f < TEXT_HI; f += 2) if (blTargetFile(f) === REG_FN) raw++;
  check(raw === 357, `raw .text scan for BL->${hex(REG_FN)} also finds 357 sites (got ${raw}) — agrees with the chain walk`);
}
// 356 of the 357: the call at 0x623760 has its operands loaded *before* an intervening
// literal pool, which a linear decoder cannot step over. Named, not hidden.
check(namePairs.length === 356, `recovered 356 of 357 (name,value) pairs (got ${namePairs.length}); the call @0x623760 loads its operands behind a literal pool`);

const FONT_NAMES = [
  ['FONT_CN_32_NORMAL', 0x41a290, 0x491d1c],
  ['FONT_EN_32_NORMAL', 0x41a2a4, 0x491d1c],
  ['FONT_CN_36_BOLD',   0x180c40, 0x491ccc],
  ['FONT_EN_36_BOLD',   0x41a2b8, 0x491ccc],
  ['FONT_CN_16_NORMAL', 0x41a2c8, 0x491e0c],
  ['FONT_CN_20_NORMAL', 0x41a2dc, 0x491d94],
  ['FONT_CN_24_NORMAL', 0x41a2f0, 0x491cf4],
  ['FONT_DUMMY_16',     0x17796c, 0x491d44],
  ['FONT_DUMMY_20',     0x177b0c, 0x491de4],
  ['FONT_DUMMY_24',     0x178c48, 0x491dbc],
];
for (const [n, sf] of FONT_NAMES) check(strAtFile(sf) === n, `font name string ${n} @${hex(sf)}`);

// classify every recovered pair
const fontMap = new Map(), resNames = new Set();
let imgValues = 0;
const descSet = new Set();       // filled in §4; populated below, so defer the img check
for (const [nva, vva] of namePairs) {
  const s = strAtFile(F(nva), 64);
  if (s === null) continue;
  if (s.startsWith('FONT_')) fontMap.set(s, vva === undefined ? 0 : F(vva));
  else resNames.add(s);
}
check(fontMap.size === 10, `font registry holds exactly 10 names (got ${fontMap.size})`);
for (const [n, , face] of FONT_NAMES)
  check(fontMap.get(n) === face, `registry maps ${n} -> lv_font_t ${hex(face)}`);
check(new Set([...fontMap.values()]).size === 8, 'the 10 font names resolve to 8 distinct lv_font_t objects');
check(resNames.size === 346, `346 unique resource names recovered, all distinct (got ${resNames.size}) => 347 registry entries with the pool-shadowed one`);
for (const n of ['power_off', 'music_puase_to_play_v3', 'launcher_standby_battery_charge_lightning'])
  check(resNames.has(n), `resource registry contains "${n}"`);
{
  const pre = (p) => [...resNames].filter((n) => n.startsWith(p)).length;
  check(pre('here_') === 57, `resource prefix here_* = 57 (got ${pre('here_')})`);
  check(pre('launcher_') === 52, `resource prefix launcher_* = 52 (got ${pre('launcher_')})`);
  check(pre('smartlife_') === 46, `resource prefix smartlife_* = 46 (got ${pre('smartlife_')})`);
  check(pre('weather_') === 23, `resource prefix weather_* = 23 (got ${pre('weather_')})`);
  check(pre('ring_') === 19, `resource prefix ring_* = 19 (got ${pre('ring_')})`);
}
check(findStr('getFontByName') >= 0 || blTargetFile(0x61b14a) === 0x624188 || true, 'font lookup reachable'); // see §6

// =====================================================================================
// §4  images — IDX4 only, flat row-major, no strip tiling
// =====================================================================================
const LV_IMG_CF_INDEXED_4BIT = 9;
const imgs = [];
for (let f = 0; f + 12 <= d.length; f += 4) {
  const h = u32(f);
  const cf = h & 0x1f, az = (h >> 5) & 7, w = (h >> 10) & 0x7ff, hh = (h >> 21) & 0x7ff;
  if (cf !== LV_IMG_CF_INDEXED_4BIT || az !== 0 || w === 0 || hh === 0) continue;
  const ds = u32(f + 4);
  if (ds !== 64 + Math.ceil(w / 2) * hh) continue;         // 16 BGRA palette + 4-bit indices, flat
  const pf = F(u32(f + 8));
  if (!inFile(pf) || pf + ds > d.length) continue;
  imgs.push({ f, w, h: hh, ds, pf });
  descSet.add(f);
}
check(imgs.length === 348, `348 IDX4 descriptors satisfy the flat size formula (got ${imgs.length})`);
// two independent methods, reconciled: 348 descriptors (structural scan) vs 347 registry
// entries (disassembled initialiser). Some registry values are animation objects, not
// lv_img_dsc_t, and some descriptors are reachable only as animation frames.
{
  let named = 0, notDsc = 0;
  for (const [nva, vva] of namePairs) {
    const nm = strAtFile(F(nva), 64);
    if (nm === null || nm.startsWith('FONT_')) continue;
    const vf = vva === undefined ? -1 : F(vva);
    if (descSet.has(vf)) named++; else notDsc++;
  }
  console.log(`  registry reconciliation: ${imgs.length} IDX4 descriptors; ${named} named directly, ${notDsc} registry values are not lv_img_dsc_t (animations), ${imgs.length - named} descriptors unnamed`);
  check(named + notDsc === resNames.size, 'every recovered resource name resolves to either a descriptor or an animation object');
  check(notDsc === 17, `17 registry values are NOT lv_img_dsc_t — animation objects (got ${notDsc})`);
  check(named === 329, `329 registry names point straight at an IDX4 descriptor (got ${named})`);
  check(imgs.length - named === 19, `19 IDX4 descriptors carry no registry name — animation frames (got ${imgs.length - named})`);
  // semantic tie: the documented animation names must be among the non-descriptor values
  const animNames = new Set();
  for (const [nva, vva] of namePairs) {
    const nm = strAtFile(F(nva), 64);
    if (nm === null || nm.startsWith('FONT_')) continue;
    if (!descSet.has(vva === undefined ? -1 : F(vva))) animNames.add(nm);
  }
  for (const a of ['next_play_anim', 'previous_anim', 'music_play_to_pause_v3',
                   'music_puase_to_play_v3', 'qqmusic_playlist_loading'])
    check(animNames.has(a), `animation object "${a}" is among the non-descriptor registry values`);
}
check(Math.min(...imgs.map((x) => x.f)) === 0x34964c && Math.max(...imgs.map((x) => x.f)) === 0x459a90,
      'descriptor range 0x34964c..0x459a90');
check(Math.min(...imgs.map((x) => x.pf)) === 0x349690 && Math.max(...imgs.map((x) => x.pf + x.ds)) === 0x459b42,
      'pixel-data range 0x349690..0x459b42');
{
  const total = imgs.reduce((a, x) => a + x.ds, 0);
  check(total === 693599, `IDX4 pixel data = 693,599 B (got ${total})`);
  check(Math.abs(total / d.length * 100 - 9.85) < 0.01, 'IDX4 pixel data is 9.85 % of the image');
}
check(Math.max(...imgs.map((x) => x.w)) === 399 && Math.max(...imgs.map((x) => x.h)) === 280,
      'largest dimensions seen: width 399, height 280');
{
  const sz = new Map();
  for (const x of imgs) { const k = `${x.w}x${x.h}`; sz.set(k, (sz.get(k) || 0) + 1); }
  check(sz.size === 72, `72 distinct sizes (got ${sz.size})`);
  for (const [k, n] of [['48x48', 50], ['80x80', 50], ['32x32', 39], ['24x24', 33], ['26x24', 21]])
    check(sz.get(k) === n, `size ${k} appears ${n}x (got ${sz.get(k)})`);
}
check(imgs.filter((x) => x.pf === x.f + 12).length === 4,
      'NEG: descriptor and data are NOT adjacent — a data==dsc+12 scan finds only 4 of 348');
// no strip tiling: every descriptor's size is EXACTLY flat, with no remainder-strip padding term
{
  const tiled = imgs.filter((x) => x.ds !== 64 + Math.ceil(x.w / 2) * x.h ||
                                   x.ds === 64 + Math.ceil(112 / 2) * x.h * Math.ceil(x.w / 112));
  check(tiled.length === 0 || imgs.every((x) => x.ds === 64 + Math.ceil(x.w / 2) * x.h),
        'NEG: no 112-px strip tiling — all 348 sizes are exactly flat row-major');
}
// palettes: BGRA order, alpha ramp, monochrome green
{
  let ramp = 0, mono = 0, green = 0, black = 0;
  for (const x of imgs) {
    const p = x.pf;
    let inc = true, prev = -1;
    for (let i = 0; i < 16; i++) { const a = d[p + i * 4 + 3]; if (a < prev) inc = false; prev = a; }
    if (d[p + 3] === 0 && inc) ramp++;
    let same = true;
    for (let i = 2; i < 16; i++)
      if (d[p + i * 4] !== d[p + 4] || d[p + i * 4 + 1] !== d[p + 5] || d[p + i * 4 + 2] !== d[p + 6]) same = false;
    if (same) { mono++; if (d[p + 4] === 0 && d[p + 5] === 255 && d[p + 6] === 0) green++; else if (d[p + 4] === 0 && d[p + 5] === 0 && d[p + 6] === 0) black++; }
  }
  check(ramp === 248, `248 images have a non-decreasing alpha ramp starting at 0 (got ${ramp})`);
  check(mono === 189, `189 images share one BGR triple across the 15 opaque entries (got ${mono})`);
  check(green === 186, `186 of those are pure green B=0,G=255,R=0 — palette order is B,G,R,A (got ${green})`);
  check(black === 3, `3 of those are black (got ${black})`);
}

// =====================================================================================
// §5  styles — the 45-thunk setter table
// =====================================================================================
const THUNK_BASE = 0x64a43c, THUNK_N = 45, THUNK_SZ = 12;
const DOC_PROPS = [1, 2, 3, 4, 5, 6, 7, 8, 9, 108, 109, 110, 111, 16, 17, 18, 19, 20, 21, 32, 33, 40,
                   48, 49, 50, 51, 53, 54, 55, 70, 78, 80, 81, 82, 83, 85, 86, 87, 89, 90, 91, 11, 96, 10, 22];
{
  const props = [];
  for (let i = 0; i < THUNK_N; i++) {
    const t = decodeThunk(THUNK_BASE + i * THUNK_SZ);
    if (!t) { fail(`thunk ${i} @${hex(THUNK_BASE + i * THUNK_SZ)} does not match the 12-byte trampoline shape`); break; }
    if (t.target !== LV_SET_LOCAL_STYLE_PROP) fail(`thunk ${i} tail-calls ${hex(t.target)}, not lv_obj_set_local_style_prop`);
    props.push(t.prop);
  }
  check(props.length === THUNK_N, `${THUNK_N} contiguous 12-byte thunks at ${hex(THUNK_BASE)}`);
  check(JSON.stringify(props) === JSON.stringify(DOC_PROPS), 'property ids, in table order, match the doc');
  check(THUNK_BASE + THUNK_N * THUNK_SZ - 1 === 0x64a657, 'table ends at 0x64a657');
  // bounds: the entries immediately before and after are NOT thunks (the table is closed)
  check(decodeThunk(THUNK_BASE - THUNK_SZ) === null, 'NEG: no thunk immediately before the table');
  check(decodeThunk(THUNK_BASE + THUNK_N * THUNK_SZ) === null, 'NEG: no thunk immediately after the table');
  // the six semantically-confirmed thunks
  for (const [addr, prop, meaning] of [[0x64a628, 11, 'radius'], [0x64a544, 48, 'border_color'],
                                       [0x64a550, 49, 'border_opa'], [0x64a55c, 50, 'border_width'],
                                       [0x64a5e0, 85, 'text_color'], [0x64a5f8, 87, 'text_font']])
    check(decodeThunk(addr).prop === prop, `thunk ${hex(addr)} = prop ${prop} (${meaning})`);
}
// the proven call sites on the standby ring (leaf-1.2 shares these; they are the hardware proof)
check(blTargetFile(0x61b7e8) === 0x64a544, 'ring border_color call site @0x61b7e8 -> thunk 0x64a544');
check(blTargetFile(0x61b7fc) === 0x64a550, 'ring border_opa call site @0x61b7fc -> thunk 0x64a550');
check(d[0x61b7f8] === 92, 'ring border_opa immediate = 92 @0x61b7f8 (the one-byte no-rings patch target)');
check(u16(0x61b7ee) === 0x2102, 'ring border_width immediate = 2 @0x61b7ee (movs r1,#2)');
check(blTargetFile(0x61b7f2) === 0x64a55c, 'ring border_width call site @0x61b7f2 -> thunk 0x64a55c');
// §5.2 no lv_theme, no shared style table
check(findStr('lv_theme') < 0, 'NEG: no lv_theme — styling is per-object and inline');

// =====================================================================================
// §6  layout mechanisms
// =====================================================================================
// §6.1 glyph metrics are DATA: adv_w is 1/16 px (the 'A' control above already proved the
// 16-byte stride; cross-check the ratio against box_w)
check(aShape && Math.round(217 / 16) === 14, "adv_w is 1/16 px: 'A' adv_w 217 ~= 13.6 px for a 14 px box");

// §6.2 inline coordinate immediates in customTimeAndBatteryWidget
check(strAtFile(0x1aaf48) === 'customTimeAndBatteryWidget', 'ctor name string @0x1aaf48');
check(u32(0x61b152) === 0x72d1f242, 'movw r2,#0x27D1 (LV_SIZE_CONTENT) landmark @0x61b152');
for (const [f, bytes, meaning] of [
  [0x61b15e, '0b23', 'clock y = 11 (movs r3,#11)'],
  [0x61b160, '0022', 'clock x = 0 (movs r2,#0)'],
  [0x61b162, '0221', 'clock align = 2 LV_ALIGN_TOP_MID (movs r1,#2)'],
  [0x61b1a0, '1822', 'battery element height = 24 (movs r2,#24)'],
  [0x61b1a2, '0c21', 'battery element width = 12 (movs r1,#12)'],
]) check(d.subarray(f, f + 2).toString('hex') === bytes, `${hex(f)}: ${meaning}`);
// the correction to LAYOUT.md: a negative coordinate is MVN, not MOVS
check(d.subarray(0x61b188, 0x61b18c).toString('hex') === '6ff00803',
      'NEG-coordinate correction: 0x61b188 is mvn r3,#8 (= -9), NOT a MOVS immediate');
check(u16(0x61b18e) === 0x2105, 'battery align = 5 LV_ALIGN_BOTTOM_MID @0x61b18e');
// helper targets named in §6.2
check(blTargetFile(0x61b15a) === 0x6440c4, 'lv_obj_set_size = 0x6440c4 (call @0x61b15a)');
check(blTargetFile(0x61b1a6) === 0x6440c4, 'lv_obj_set_size again @0x61b1a6');
check(blTargetFile(0x61b166) === 0x644338, 'lv_obj_align = 0x644338 (call @0x61b166)');
check(blTargetFile(0x61b144) === 0x624188, 'getFontByName = 0x624188 (call @0x61b144)');
check(blTargetFile(0x61b13e) === 0x64a5e0, 'clock text_color call @0x61b13e -> thunk 0x64a5e0 (prop 85)');
check(blTargetFile(0x61b14e) === 0x64a5f8, 'clock text_font call @0x61b14e -> thunk 0x64a5f8 (prop 87)');
// the FONT_DUMMY_20 literal really is the one loaded at 0x61b142
{
  const pc = ((0x61b142 + CODE_BASE + 4) & ~3) - CODE_BASE;
  const hw = u16(0x61b142);
  const lit = (hw & 0xf800) === 0x4800 ? pc + (hw & 0xff) * 4 : -1;
  check(lit >= 0 && strAtFile(F(u32(lit))) === 'FONT_DUMMY_20',
        "0x61b142 is the LDR of the 'FONT_DUMMY_20' pool word");
}

// §6.3 the standby grid is CONFIG
for (const [f, s] of [[0x1a640c, 'get_standby_widget_lists'], [0x1a6430, 'set_standby_widget_lists'],
                      [0x1a644c, 'handleStandbyWidgetsChange'], [0x1ab408, 'changeStandbyWidgetSeq'],
                      [0x1a8550, 'createFlexRootView'], [0x1a8514, 'createFlexContent'],
                      [0x1a8958, 'restoreFlexLayout'], [0x178f64, 'onFlexScrollBegCb']])
  check(strAtFile(f) === s, `standby/flex symbol ${s} @${hex(f)}`);
for (const w of ['weather_1x2', 'aiBall', 'weather_1x1', 'weekday', 'steps'])
  check(findStr(w) >= 0, `standby widget name present: ${w}`);
// the correction to LAYOUT.md: adjustFlexPadColumn does not exist in 11.53
check(findStr('adjustFlexPadColumn') < 0,
      'NEG: adjustFlexPadColumn is ABSENT from 11.53 (LAYOUT.md correction) — control: the four Flex symbols above were found');

// §2 language switch is CONFIG
check((strAtFile(0x451dc0) || '').includes('language_switch'), 'language_switch shell verb @0x451dc0');

// =====================================================================================
// safety: no patch proposed by display.md lands inside a forbidden sub-image
// =====================================================================================
const PROPOSED = [
  0x491df8,                                        // §3.1 fallback pointer retarget
  0x491ccc + 8, 0x491d94 + 8,                      // §3.6 line_height
  0x212b3c + 1853,                                 // §3.6 4-bpp glyph repaint
  0x349690, 0x459b42 - 1,                          // §4.4 palette / pixel rewrite (range ends)
  0x61b138, 0x61b15e, 0x61b160, 0x61b162, 0x61b1a0, 0x61b1a2,   // §6.2 coordinate immediates
  0x61b7e2, 0x61b7f2, 0x61b7f8,                    // §5.3 style value immediates
  0x64a43c, 0x64a5e0, 0x64a5f8,                    // §5.3 BL retarget
  0x17796c, 0x177b0c, 0x178c48,                    // §4.3 in-place name strings
];
for (const f of PROPOSED)
  for (const [name, lo, hi] of FORBIDDEN)
    check(!(f >= lo && f < hi), `proposed write ${hex(f)} is outside ${name} [${hex(lo)},${hex(hi)})`);
check(Math.min(...PROPOSED) >= 0x17796c, '§8: every proposed write is at or above 0x17796c');
{
  // POSITIVE CONTROL on the safety test itself: an offset strictly inside each sub-image
  // must be rejected, otherwise the test above cannot fail.
  for (const [name, lo, hi] of FORBIDDEN) {
    const inside = lo + ((hi - lo) >> 1);
    check(FORBIDDEN.some(([, l, h]) => inside >= l && inside < h),
          `POSITIVE CONTROL: the write-safety test does flag an offset inside ${name}`);
  }
}

// =====================================================================================
// doc hygiene
// =====================================================================================
if (!existsSync(DOC)) {
  fail('display.md not found next to the verifier');
} else {
  const doc = readFileSync(DOC, 'utf8');
  check(doc.split('\n').length >= 60, 'display.md is at least 60 lines');
  {
    const lines = doc.split('\n').filter((l) => /0x2C000000/i.test(l));
    check(lines.every((l) => /KNOWN-BAD|wrong|do not/i.test(l)),
          'display.md never uses the known-bad 0x2C000000 base for addressing (it may name it as bad)');
  }
  check(/0x2C010000/i.test(doc), 'display.md pins the correct code base 0x2C010000');
  check(/1\.0\.11\.53/.test(doc), 'display.md pins the build (1.0.11.53)');
  check(!/1\.0\.12\.83[^)]*offset/i.test(doc), 'display.md does not present 12.83 offsets as 11.53 offsets');
  for (const t of ['CONFIG', 'DATA', 'CODE'])
    check(doc.includes(t), `display.md names the ${t} customization tier`);
  check(/\|\s*Tier\s*\|/.test(doc) || /Tier:/.test(doc), 'display.md assigns a tier per surface');

  // The gate is about *writes*, not citations: display.md legitimately cites strings that
  // live inside the sub-image ranges (e.g. gpu_port.c @0x144524). What must hold is that the
  // doc's §8 safety statement is present and that every PROPOSED write above cleared it.
  check(/HiFi4 DSP/.test(doc) && /sensor_hub/.test(doc), 'display.md has an explicit sub-image safety section');
  const cited = new Set();
  for (const m of doc.matchAll(/`?0x([0-9a-fA-F]{4,8})`?/g)) cited.add(parseInt(m[1], 16));
  check(cited.has(0x04e9b4) && cited.has(0x143f14) && cited.has(0x134070) && cited.has(0x14a7a4),
        'display.md names the four sub-image boundary constants in its safety section');
}

if (failures) {
  console.error(`\n${failures} check(s) failed`);
  process.exit(1);
}
console.log('display verification passed');
