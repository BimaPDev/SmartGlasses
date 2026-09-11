#!/usr/bin/env node
/* Gates for the big-clock patch. Run BEFORE flashing anything.
 *
 *   node verify-big-clock.mjs <stock.bin> <patched.bin>
 *
 * Checks the patch did exactly what it claims and nothing else. Several gates are
 * negative controls: they are re-run against the STOCK image and must FAIL there,
 * because a gate that passes on both images is not measuring the patch.
 */
import { readFileSync } from 'node:fs';

const [, , stockPath, patchedPath] = process.argv;
if (!stockPath || !patchedPath) {
  console.error('usage: verify-big-clock.mjs <stock.bin> <patched.bin>');
  process.exit(2);
}
const A = readFileSync(stockPath);      // stock
const B = readFileSync(patchedPath);    // patched

const BASE = 0x3BFD7CB0;
const FREE = 0x3EC950, FREE_LEN = 2270;
const FACE = 0x211BA8, CMAP = 0x211B94, FONTOBJ = 0x491D1C, CLOCK_POOL = 0x61B2C4;
const NAME_EN32 = 0x41A2A4, NAME_DUMMY20 = 0x177B0C;
const DSP = [0x04E9B4, 0x143F14];
const SH  = [0x134070, 0x134070 + 0x16734];

let bad = 0;
const ok = (n, c, m) => { console.log(`${c ? 'ok  ' : 'FAIL'} ${n} — ${m}`); if (!c) bad++; };
const u32 = (d, o) => d.readUInt32LE(o);
const u16 = (d, o) => d.readUInt16LE(o);
const i16 = (d, o) => d.readInt16LE(o);

// ---------- identity ----------
ok('G1  both images are 1.0.11.53_Air_intl_FR',
   A.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR') &&
   B.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR'), 'offsets are build-specific');
ok('G2  length unchanged', A.length === B.length,
   `${A.length.toLocaleString()} -> ${B.length.toLocaleString()} (nothing appended)`);

// ---------- change containment ----------
const allowed = [
  [CMAP + 4, 2], [CMAP + 16, 2],
  [FACE, 4], [FACE + 4, 4], [FACE + 18, 2],
  [FREE, FREE_LEN],
  [FONTOBJ + 8, 2], [FONTOBJ + 10, 2],
  [CLOCK_POOL, 4],
];
const inAllowed = (o) => allowed.some(([s, l]) => o >= s && o < s + l);
let stray = [], changed = 0;
for (let i = 0; i < A.length; i++) {
  if (A[i] !== B[i]) { changed++; if (!inAllowed(i)) stray.push(i); }
}
ok('G3  every changed byte is inside a declared target', stray.length === 0,
   stray.length ? `STRAY at ${stray.slice(0, 6).map(x => '0x' + x.toString(16))}` :
   `${changed} bytes changed, all declared`);

// ---------- the sub-images must be untouched ----------
const same = (lo, hi) => A.subarray(lo, hi).equals(B.subarray(lo, hi));
ok('G4  HiFi4 DSP sub-image byte-identical', same(DSP[0], DSP[1]),
   `0x${DSP[0].toString(16)}-0x${DSP[1].toString(16)} — the veneer.ld trap`);
ok('G4b sensor_hub sub-image byte-identical', same(SH[0], SH[1]),
   `0x${SH[0].toString(16)}-0x${SH[1].toString(16)}`);

// ---------- clock retarget ----------
ok('G5  stock clock pool word was FONT_DUMMY_20', u32(A, CLOCK_POOL) === NAME_DUMMY20 + BASE,
   'precondition');
ok('G6  patched clock pool word is FONT_EN_32_NORMAL', u32(B, CLOCK_POOL) === NAME_EN32 + BASE,
   `0x${u32(B, CLOCK_POOL).toString(16)}`);

// exactly one LDR may reference that literal
const ldrSites = (d, pool) => {
  const out = [];
  for (let a = Math.max(0, pool - 1100); a < pool; a += 2) {
    const w = d.readUInt16LE(a);
    if ((w & 0xF800) !== 0x4800) continue;
    if (((((a + 0x2C010000) + 4) & ~3) + (w & 0xFF) * 4 - 0x2C010000) === pool) out.push(a);
  }
  return out;
};
const sites = ldrSites(B, CLOCK_POOL);
ok('G7  clock literal has exactly one LDR site', sites.length === 1,
   sites.map(x => '0x' + x.toString(16)).join(' ') + ' — retargets the clock alone');

// FONT_DUMMY_20 itself must be untouched: 176 sites across the UI depend on it
const countRefs = (d, nameOff) => {
  const needle = Buffer.alloc(4); needle.writeUInt32LE(nameOff + BASE);
  let n = 0, i = 0; for (;;) { i = d.indexOf(needle, i); if (i < 0) break; n++; i++; } return n;
};
ok('G8  FONT_DUMMY_20 literal count unchanged',
   countRefs(A, NAME_DUMMY20) - 1 === countRefs(B, NAME_DUMMY20),
   `${countRefs(A, NAME_DUMMY20)} -> ${countRefs(B, NAME_DUMMY20)} (only the clock moved off it)`);

// ---------- the donor must have had no users ----------
const donorUsers = (d) => countRefs(d, NAME_EN32) + countRefs(d, 0x41A290) - 2; // minus 2 registrations
ok('G9  donor names had zero UI users in stock', donorUsers(A) === 0,
   'FONT_EN_32_NORMAL + FONT_CN_32_NORMAL were registration-only');

// ---------- the new face ----------
const gb = u32(B, FACE), gd = u32(B, FACE + 4), packed = u16(B, FACE + 18);
const bpp = (packed >> 9) & 0xF, cmapNum = packed & 0x1FF, fmt = (packed >> 14) & 3;
ok('G10 face bpp is 1', bpp === 1, `packed 0x${packed.toString(16)} cmap_num=${cmapNum} fmt=${fmt}`);
ok('G10b face format still 0 (plain, not compressed)', fmt === 0, 'decoder path unchanged');
const gbF = gb - BASE, gdF = gd - BASE;
ok('G11 glyph_bitmap points into the free run',
   gbF >= FREE && gbF < FREE + FREE_LEN, `0x${gbF.toString(16)}`);
ok('G12 glyph_dsc points into the free run, after the blob',
   gdF > gbF && gdF < FREE + FREE_LEN, `0x${gdF.toString(16)}`);

// ---------- cmap covers the colon ----------
const rs = u32(B, CMAP), rl = u16(B, CMAP + 4), gid0 = u16(B, CMAP + 6);
const ll = u16(B, CMAP + 16), ctype = u16(B, CMAP + 18) & 0xFF;
ok('G13 cmap covers ":" (0x3A)', rs <= 0x3A && rs + rl > 0x3A,
   `range 0x${rs.toString(16)}..0x${(rs + rl - 1).toString(16)} len=${rl}`);
ok('G13b cmap is still dense type 0', ctype === 0 && ll === rl,
   `type=${ctype} list_length=${ll} — gid = ${gid0} + (cp - 0x${rs.toString(16)})`);

// ---------- every glyph we care about ----------
const glyph = (g) => {
  const o = gdF + g * 16;
  return { bi: u32(B, o), adv: u32(B, o + 4), w: u16(B, o + 8), h: u16(B, o + 10),
           ox: i16(B, o + 12), oy: i16(B, o + 14) };
};
let gErr = [], maxEnd = 0, heights = new Set(), advs = new Set(), oys = new Set();
for (const ch of '0123456789:') {
  const g = gid0 + (ch.charCodeAt(0) - rs);
  const m = glyph(g);
  const bytes = Math.ceil(m.w * m.h * bpp / 8);
  const end = gbF + m.bi + bytes;
  if (!m.w || !m.h) gErr.push(`${ch}: empty box`);
  else if (end > gdF) gErr.push(`${ch}: bitmap runs into glyph_dsc (ends 0x${end.toString(16)})`);
  else if (m.adv === 0) gErr.push(`${ch}: zero advance`);
  if (ch !== ':') { heights.add(m.h); advs.add(m.adv); oys.add(m.oy); }
  maxEnd = Math.max(maxEnd, end);
}
ok('G14 all of 0-9 and ":" have valid in-bounds bitmaps', gErr.length === 0,
   gErr.length ? gErr.join('; ') : `blob ends 0x${maxEnd.toString(16)}, dsc at 0x${gdF.toString(16)}`);

// The first version of this gate asserted uniform digit HEIGHT and failed: round
// digits overshoot the cap line (0/8 at 48px, 1/7 at 46px). That is correct
// typography, not a defect — so it now checks the two things that actually matter.
ok('G15 digits share one baseline', oys.size === 1,
   `ofs_y values: ${[...oys].join(',')} — differing baselines would stagger the clock`);
ok('G15b digits are TABULAR (equal advance)', advs.size === 1,
   `advance ${[...advs][0] / 16}px for every digit — 11:11 and 08:32 occupy identical width`);
ok('G15c height variance is overshoot only', Math.max(...heights) - Math.min(...heights) <= 3,
   `heights ${Math.min(...heights)}-${Math.max(...heights)}px`);

// tables must not overrun the free run
const dscEnd = gdF + (rl + 1) * 16;
ok('G16 glyph_dsc fits inside the free run', dscEnd <= FREE + FREE_LEN,
   `dsc ends 0x${dscEnd.toString(16)}, run ends 0x${(FREE + FREE_LEN).toString(16)}`);

// ---------- nothing else points into the free run ----------
let intruders = 0;
for (let o = 0; o + 4 <= B.length; o += 4) {
  const v = u32(B, o);
  if (v >= FREE + BASE && v < FREE + FREE_LEN + BASE) {
    if (o !== FACE && o !== FACE + 4) intruders++;
  }
}
ok('G17 only the face points into the new tables', intruders === 0,
   `${intruders} foreign pointer(s)`);

// ---------- font object ----------
const lh = u16(B, FONTOBJ + 8), bl = u16(B, FONTOBJ + 10);
const digitH = [...heights][0] || 0;
ok('G18 line_height >= digit height', lh >= digitH, `line_height=${lh} base_line=${bl} digit=${digitH}px`);
ok('G18b font object still points at the patched face', u32(B, FONTOBJ + 16) === FACE + BASE,
   `dsc -> 0x${(u32(B, FONTOBJ + 16) - BASE).toString(16)}`);

// ---------- registration order: the timing risk that bricked v5/v6 ----------
// v5/v6 bootlooped because patched CODE ran before the display was up. This patch adds
// no code, but it does make the clock ask for a different font NAME — so that name must
// be registered no later than the one it replaces. Both are registered by the same
// function at 0x622810; EN_32 is registered EARLIER in it than DUMMY_20, so if
// DUMMY_20 resolves when the clock is built, EN_32 necessarily does too.
const nameLdrAt = (d, nameOff) => {     // the LDR that loads this name inside the registrar
  for (let a = 0x622810; a < 0x622890; a += 2) {
    const w = d.readUInt16LE(a);
    if ((w & 0xF800) !== 0x4800) continue;
    const pool = ((((a + 0x2C010000) + 4) & ~3) + (w & 0xFF) * 4) - 0x2C010000;
    if (u32(d, pool) === nameOff + BASE) return a;
  }
  return -1;
};
const en32At = nameLdrAt(B, NAME_EN32), dummyAt = nameLdrAt(B, NAME_DUMMY20);
ok('G19 donor font registers no later than the one it replaces',
   en32At > 0 && dummyAt > 0 && en32At < dummyAt,
   `EN_32 @0x${en32At.toString(16)} before DUMMY_20 @0x${dummyAt.toString(16)} ` +
   `in the same registrar — availability is guaranteed, not assumed`);
ok('G19b patch adds NO code: nothing changed in the XIP .text region except one literal',
   (() => { let n = 0;
     for (let i = 0x469954; i < A.length; i++) if (A[i] !== B[i]) n++;
     return n === 4; })(),
   'only the 4-byte font-name literal at 0x61b2c4 — no instructions altered, ' +
   'which is the class of change that bootlooped v5/v6');

// ---------- NEGATIVE CONTROLS: these must FAIL on the stock image ----------
const stockRl = u16(A, CMAP + 4);
ok('N1  NEG: stock cmap does NOT cover ":"', !(u32(A, CMAP) <= 0x3A && u32(A, CMAP) + stockRl > 0x3A),
   `stock range_length=${stockRl} — proves G13 measures the patch`);
ok('N2  NEG: stock face bpp is NOT 1', ((u16(A, FACE + 18) >> 9) & 0xF) !== 1,
   `stock bpp=${(u16(A, FACE + 18) >> 9) & 0xF} — proves G10 measures the patch`);
ok('N3  NEG: stock free run is all zeros', A.subarray(FREE, FREE + FREE_LEN).every(x => x === 0),
   'the destination really was unused space');
ok('N4  NEG: stock donor face could not render "9"',
   (() => { const sgd = u32(A, FACE + 4) - BASE, g = 1 + (0x39 - u32(A, CMAP));
            const w = u16(A, sgd + g * 16 + 8); return w === 0 || w > 1000; })(),
   'the donor was a broken leftover — replacing it cannot regress anything');

if (bad) { console.log(`\n${bad} check(s) FAILED — DO NOT FLASH`); process.exit(1); }
console.log(`\nbig-clock verification passed — ${changed} bytes changed, all accounted for`);
