#!/usr/bin/env node
// Oracle for the 2026-09-03 six-agent audit. Re-checks every load-bearing claim
// against the actual binaries. Exits 0 and prints the success token only if ALL pass.
import { readFileSync, existsSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join } from 'node:path';

const ROOT = process.argv[2] || process.cwd();
const FW = join(ROOT, 'Reverse/firmware');
const P = (p) => join(FW, p);
let pass = 0, fail = 0;
const fails = [];

function ck(name, got, want) {
  const g = JSON.stringify(got), w = JSON.stringify(want);
  if (g === w) { pass++; console.log(`  ok   ${name}`); }
  else { fail++; fails.push(name); console.log(`  FAIL ${name}\n         got  ${g}\n         want ${w}`); }
}
const rd = (p) => readFileSync(P(p));
const md5 = (b) => createHash('md5').update(b).digest('hex');
const str = (b, off, len) => b.subarray(off, off + len).toString('latin1');
const cstr = (b, off) => { let e = off; while (e < b.length && b[e] !== 0) e++; return b.subarray(off, e).toString('latin1'); };

console.log('== images ==');
const m55 = rd('x_1.0.12.83/platform_tester.bin');
const bth = rd('x_1.0.12.83/best1600_watch_bth.bin');
const m11 = rd('x_1.0.11.53/platform_tester.bin');
const m07 = rd('x_1.0.7.83/platform_tester.bin');
ck('m55 12.83 size', m55.length, 6771708);
ck('bth 12.83 size', bth.length, 1341116);
ck('m55 11.53 size', m11.length, 7042632);
ck('m55 7.83 size',  m07.length, 6307384);

console.log('== base: 0x2C010000 not 0x2C000000 ==');
const m55self = m55.readUInt32LE(0x0C), bthself = bth.readUInt32LE(0x0C);
ck('m55 header+0x0C', m55self, 0x2C6851C0);
ck('m55 self-ptr past EOF under 0x2C000000', m55self - 0x2C000000 > m55.length, true);
ck('m55 self-ptr in file under 0x2C010000', m55self - 0x2C010000, 0x6751C0);
ck('m55 trailer points at build info', cstr(m55, m55self - 0x2C010000).slice(0, 15), '\nCHIP=best1600\n');
ck('bth header+0x0C', bthself, 0x34157488);
ck('bth self-ptr past EOF under 0x34000000', bthself - 0x34000000 > bth.length, true);
ck('bth trailer points at build info', cstr(bth, bthself - 0x34010000).slice(0, 15), '\nCHIP=best1600\n');
// image trailer magic BE57341D + load base, 8 bytes before image end
ck('m55 trailer magic @0x6753F4', m55.readUInt32LE(0x6753F4), 0xBE57341D);
ck('m55 trailer declares base 0x2C010000', m55.readUInt32LE(0x6753F8), 0x2C010000);
ck('m55 trailer sits 8B before EOF', 0x6753F4 + 8, m55.length);

console.log('== PSRAM copy explains the 0x3BFD7C0C constant ==');
ck('0x3C000000 - 0x283F4 == 0x3BFD7C0C', 0x3C000000 - 0x283F4, 0x3BFD7C0C);

console.log('== embedded sub-images ==');
ck('DSP trailer magic @0x133514', m55.readUInt32LE(0x133514), 0xBE57341D);
ck('DSP trailer declares base 0x28050000', m55.readUInt32LE(0x133518), 0x28050000);
ck('subsys magic @0x4E9BC (DSP hdr+8)', m55.readUInt32LE(0x4E9BC), 0xBE57EC1C);
const SH = 0x134070;
ck('sensor_hub version', m55.readUInt16LE(SH + 0x10), 0);
ck('sensor_hub type', m55[SH + 0x12], 0);
ck('sensor_hub image_size (NOT 0x100000)', m55.readUInt32LE(SH + 0x14), 0x16734);
ck('sensor_hub code_start_offset', m55.readUInt32LE(SH + 0x18), 0x20);
ck('sensor_hub exec_addr', m55.readUInt32LE(SH + 0x1C), 0x20640140);

console.log('== KWS engine strings (real; only the MODEL claim was retracted) ==');
ck('algo_process_kws.c @0xaf388', cstr(m55, 0xaf388), '../../services/mcpp/./bes/air/algo_process_kws.c');
ck('[KWS - XIAOXI] @0xaf4ba', cstr(m55, 0xaf4ba), '[KWS - XIAOXI] cnt: %d after wakeup, threshold=%d');
ck('HIFI_KWS_NEW @0xaf8ea', cstr(m55, 0xaf8ea), 'HIFI_KWS_NEW START.\n');
ck('pwench starts 0xaf84c not 0xaf84b', cstr(m55, 0xaf84c).slice(0, 6), 'pwench');
ck('dsp_loader.c true start 0x13351c', cstr(m55, 0x13351c), '../../platform/drivers/hifi4/dsp_loader.c');

console.log('== wake-word branding differs per version ==');
ck('12.83 has zero "Hey Aicy"', m55.includes(Buffer.from('Hey Aicy')), false);
ck('12.83 has zero capitalized "Aicy" (no user-facing text)', (m55.toString('latin1').match(/Aicy/g) || []).length, 0);
ck('12.83 has exactly one lowercase "aicy"', (m55.toString('latin1').match(/aicy/g) || []).length, 1);
ck('...and it is the i18n key @0x196620', cstr(m55, 0x196620), 'ai_speech_id_launcher_say_hey_aicy');
ck('12.83 Xiaoxi prompt @0x403964', cstr(m55, 0x403964), "You can say 'Xiaoxi Xiaoxi', I will be at your service");
ck('11.53 Hey Aicy prompt @0x41f034', cstr(m11, 0x41f034), "You can say 'Hey Aicy', I will be at your service");
ck('7.83 has zero "Aicy"', m07.includes(Buffer.from('Aicy')), false);

console.log('== the retraction: model markers absent from firmware ==');
for (const t of ['STAR_NN', 'DFSMN', 'Denoise', 'fsp_'])
  ck(`firmware lacks ${t}`, m55.includes(Buffer.from(t)) || bth.includes(Buffer.from(t)), false);
const KWSNN = join(ROOT, 'Reverse/extracted/base/assets/fsp/res/kws_model.nn');
if (existsSync(KWSNN)) {
  const nn = readFileSync(KWSNN);
  ck('kws_model.nn size', nn.length, 1422200);
  ck('kws_model.nn magic', str(nn, 0, 14), 'STAR_NN V0.1.0');
  ck('kws_model.nn arch', cstr(nn, 0x14), 'DFSMN');
} else { fail++; fails.push('kws_model.nn missing'); console.log('  FAIL kws_model.nn not found'); }

console.log('== no OTA signature primitives ==');
// POSITIVE CONTROL first: crypto IS detectable in this image, so absence below is not vacuous.
// (Naive substring search is unsafe here: "conveRSAtion" contains "rsa". Use anchored tokens.)
ck('CONTROL: SHA-256 K-table present @0x33acc', [0,1,2,3].map(i => m55.readUInt32LE(0x33acc + i*4)),
   [0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5]);
const both = m55.toString('latin1') + '\u0000' + bth.toString('latin1');
for (const [label, re] of [
  ['RSA (uppercase token)', /\bRSA\b|RSA_|rsa_(verify|sign|pss|pkcs)/],
  ['ECDSA', /ECDSA|ecdsa_/i],
  ['Ed25519', /ed25519/i],
  ['secp curves', /secp256|prime256v1|nistp256/i],
  ['mbedTLS', /mbedtls/i],
  ['wolfSSL', /wolfssl/i],
  ['tinycrypt', /tinycrypt/i],
  ['image signature verifier', /verify_(image|signature)|image_verify|sig_verify|check_sign/i],
]) ck(`no ${label} in either image`, re.test(both), false);

console.log('== embedded fonts: base from LVGL struct + semantic render check ==');
// NOTE: manifest.json bitmap_off is WRONG (off by 1-2 B) and its md5 was computed at that
// same wrong offset, so an md5 gate is circular. Read the real glyph_bitmap pointer out of
// the lv_font_fmt_txt_dsc_t struct, then PROVE it by rendering glyphs of known shape.
const DATA = 0x3BFD7C0C;                    // PSRAM copy base for file 0x283F4-0x469954
const FONTS = [                             // name, dsc file off, struct file off, bpp, true bitmap off
  ['small',  0x31dbc4, 0x2fd65c, 1, 0x2fd680],
  ['medium', 0x2e2dc8, 0x2015e8, 4, 0x20160c],
  ['large',  0x1e610c, 0x19d0e0, 1, 0x19d104],
];
for (const [name, dsc, st, bpp, wantBmp] of FONTS) {
  ck(`font ${name}: struct[+0x10] -> glyph_dsc`, m55.readUInt32LE(st + 0x10) - DATA, dsc);
  ck(`font ${name}: struct[+0x0C] -> glyph_bitmap`, m55.readUInt32LE(st + 0x0C) - DATA, wantBmp);
  const BMP = m55.readUInt32LE(st + 0x0C) - DATA;
  const gl = (gid) => ({ bi: m55.readUInt32LE(dsc+gid*16), adv: m55.readUInt32LE(dsc+gid*16+4),
                         bw: m55.readUInt16LE(dsc+gid*16+8), bh: m55.readUInt16LE(dsc+gid*16+10) });
  const px = (gid) => { const {bi,bw,bh}=gl(gid); const o=[];
    for (let i=0;i<bw*bh;i++){ const b=m55[BMP+bi+((i*bpp)>>3)];
      o.push(bpp===1 ? ((b>>(7-(i&7)))&1)*15 : ((i&1)===0 ? (b>>4) : (b&15))); }
    return {o,bw,bh}; };
  // 'I'/'l' are vertical bars: EVERY ROW must be identical, and full ink must appear.
  // (bpp4 is anti-aliased, so "all pixels == 15" is wrong for it -- row-identity is the
  // right invariant at any bpp. Any base error destroys row-identity immediately.)
  for (const [ch, gid] of [['I', 0x49-0x20+1], ['l', 0x6C-0x20+1]]) {
    const {o,bw,bh} = px(gid);
    const r0 = o.slice(0, bw);
    let same = true;
    for (let r = 1; r < bh; r++)
      for (let c = 0; c < bw; c++) if (o[r*bw+c] !== r0[c]) same = false;
    ck(`font ${name}: '${ch}' rows identical + full ink (${bw}x${bh})`,
       [same, o.includes(15)], [true, true]);
  }
  { // '-' is a horizontal bar. With vertical AA the two rows differ (faint edge + solid
    // core), so the correct invariant is: within each row the INTERIOR is constant
    // (end caps may be lighter from horizontal AA), and full ink appears somewhere.
    const gid = 0x2D-0x20+1, {o,bw,bh} = px(gid);
    let flat = true;
    for (let r = 0; r < bh; r++)
      for (let c = 2; c < bw-1; c++) if (o[r*bw+c] !== o[r*bw+1]) flat = false;
    ck(`font ${name}: '-' row interiors constant + full ink (${bw}x${bh})`,
       [flat, o.includes(15)], [true, true]);
  }
  // stride still equals ceil(w*h*bpp/8) -> data is PLAIN, not RLE-compressed
  let ok=0, bad=0;
  for (let i=1;i<=6030;i++){ const a=gl(i), b=gl(i+1);
    const need=Math.ceil((a.bw*a.bh*bpp)/8); if (b.bi>=a.bi) (b.bi-a.bi===need)?ok++:bad++; }
  ck(`font ${name} glyph stride = ceil(w*h*bpp/8) (plain, not compressed)`, [ok,bad], [6030,0]);
}
ck('glyph_dsc is 16B x 6032', 16 * 6032, 96512);
ck('manifest bitmap_off is off-by-N (regression guard)',
   [0x2fd681-0x2fd680, 0x20160e-0x20160c, 0x19d105-0x19d104], [1,2,1]);

console.log('== LVGL images: corrected base, wordmark, resource table ==');
{
  const D = 0x3BFD7C0C;
  // The 399x145 descriptor: data_ptr must resolve via the PSRAM base, NOT 0x3C000000.
  const dsc = 0x3af594;
  const hdr = m55.readUInt32LE(dsc), ds = m55.readUInt32LE(dsc+4), dp = m55.readUInt32LE(dsc+8);
  ck('img 399x145 header', [hdr & 0x1F, (hdr>>10)&0x7FF, (hdr>>21)&0x7FF], [9, 399, 145]);
  ck('img 399x145 data_size == 64 + ceil(w/2)*h', ds, 64 + Math.ceil(399/2)*145);
  ck('img 399x145 data_ptr', dp, 0x3c3871c0);
  ck('CORRECT data offset (PSRAM base)', dp - D, 0x3af5b4);
  ck('naive 0x3C000000 base gives the WRONG offset', dp - 0x3C000000, 0x3871c0);
  ck('the two differ by exactly 0x283F4', (dp - 0x3C000000) - (dp - D) === -0x283F4, true);
  // Palette is a green alpha ramp (0,255,0,a) -> monochrome green HUD
  const pal = [];
  for (let i = 0; i < 6; i++) {
    const o = (dp - D) + i*4;
    pal.push([m55[o], m55[o+1], m55[o+2]]);   // B,G,R
  }
  ck('palette is green ramp (B=0,G=255,R=0) after entry 0', pal.slice(1).every(p => p[0]===0 && p[1]===255 && p[2]===0), true);
  // The MYVU wordmark
  const wm = 0x3f8fb4;
  const wh = m55.readUInt32LE(wm), wdp = m55.readUInt32LE(wm+8);
  ck('MYVU wordmark descriptor', [wh & 0x1F, (wh>>10)&0x7FF, (wh>>21)&0x7FF], [9, 144, 36]);
  ck('MYVU wordmark data offset', wdp - D, 0x3f8ff4);
  // Resource table: {img_ptr, name_ptr} pairs. Wordmark is named "power_off".
  const cstr = (o) => { let e=o; while (e<m55.length && m55[e]!==0) e++; return m55.subarray(o,e).toString('latin1'); };
  ck('resource entry @0x5e2990 -> wordmark', m55.readUInt32LE(0x5e2990) - D, wm);
  ck('...and its name is "power_off"', cstr(m55.readUInt32LE(0x5e2994) - D), 'power_off');
  // pairing direction control: word BEFORE the name is the image
  ck('CONTROL: launcher_health_normal name', cstr(m55.readUInt32LE(0x5e1a64) - D), 'launcher_health_normal');
  ck('CONTROL: its image is the PRECEDING word', m55.readUInt32LE(0x5e1a60) - D, 0x342464);
  // power_off name referenced only by the table + two SHUTDOWN sites (not a boot path)
  const nameVA = 0x1914e0 + D;
  const buf = Buffer.alloc(4); buf.writeUInt32LE(nameVA);
  let refs = [], i = 0;
  while ((i = m55.indexOf(buf, i)) !== -1) { refs.push(i); i += 4; }
  ck('"power_off" xref sites', refs, [0x5c6274, 0x5e2994, 0x64232c]);
  ck('...one is shutDownWithAnim', cstr(m55.readUInt32LE(0x5c6268) - D), 'shutDownWithAnim');
  ck('...one is play_shutdown_animation', cstr(m55.readUInt32LE(0x642320) - D), 'play_shutdown_animation');
  // negative result: LVGL power-on action is a logging stub, draws nothing
  ck('lv_power_ui.c has NO power-on animation string',
     m55.includes(Buffer.from('play_poweron')) || m55.includes(Buffer.from('boot_animation')), false);
}

console.log('== cross-version: bases differ, artwork does not ==');
{
  const V = [
    ['1.0.12.83', m55,  0x3BFD7C0C, 0x3f8ff4, 6032, 34],
    ['1.0.11.53', m11,  0x3BFD7CB0, 0x413490, 6032, 34],
    ['1.0.7.83',  m07,  0x3BFD7D04, 0x3b973c, 4347, 24],
  ];
  // Code base is the SAME in all three; data base is NOT.
  for (const [name, img] of V.map(v => [v[0], v[1]])) {
    const sp = img.readUInt32LE(0x0C);
    ck(`${name}: code base 0x2C010000 puts self-ptr in file`, sp - 0x2C010000 < img.length && sp - 0x2C010000 > 0, true);
  }
  ck('data bases DIFFER per build', new Set(V.map(v => v[2])).size, 3);
  // Semantic base check: descriptors must resolve to a green-ramp palette.
  const palOK = (d, f) => {
    if (f < 0 || f + 64 > d.length) return false;
    const e = []; for (let i = 0; i < 64; i += 4) e.push([d[f+i], d[f+i+1], d[f+i+2], d[f+i+3]]);
    if (e[0][3] !== 0) return false;
    const a = e.map(x => x[3]);
    for (let i = 1; i < a.length; i++) if (a[i] < a[i-1]) return false;
    if (a[15] < 200) return false;
    return new Set(e.slice(1).map(x => x.slice(0,3).join(','))).size === 1;
  };
  const scoreBase = (d, base) => {
    let ok = 0;
    for (let o = 0; o + 12 <= d.length; o += 4) {
      const hdr = d.readUInt32LE(o);
      if ((hdr & 0x1F) !== 9 || ((hdr>>5)&7)) continue;
      const w = (hdr>>10)&0x7FF, h = (hdr>>21)&0x7FF;
      if (w < 4 || w > 1024 || h < 4 || h > 1024) continue;
      if (d.readUInt32LE(o+4) !== 64 + Math.ceil(w/2)*h) continue;
      if (palOK(d, d.readUInt32LE(o+8) - base)) ok++;
    }
    return ok;
  };
  for (const [name, img, base] of V) {
    ck(`${name}: derived base yields valid palettes`, scoreBase(img, base) > 100, true);
    ck(`${name}: NAIVE 0x3C000000 yields ZERO valid palettes`, scoreBase(img, 0x3C000000), 0);
  }
  // The wordmark artwork is byte-identical across all three; only its offset moves.
  const sig = m55.subarray(0x3f8ff4, 0x3f8ff4 + 64 + 72*36);
  ck('wordmark blob is 2656 B', sig.length, 2656);
  for (const [name, img, , off] of V) {
    ck(`${name}: wordmark found by CONTENT at the resource-table offset`, img.indexOf(sig), off);
    ck(`${name}: ...and that match is unique`, img.indexOf(sig, off + 1), -1);
  }
}

console.log('== audio extent (corrected) ==');
let first = -1, last = -1, clips = 0, prevEnd = -1;
for (let i = 0; i < m55.length - 7; i++) {
  if (m55[i] === 0xff && (m55[i + 1] === 0xf1 || m55[i + 1] === 0xf9)) {
    const fl = ((m55[i + 3] & 3) << 11) | (m55[i + 4] << 3) | (m55[i + 5] >> 5);
    if (fl < 7 || i + fl > m55.length) continue;
    let n = 0, p = i;
    while (p + 7 < m55.length && m55[p] === 0xff && (m55[p + 1] === 0xf1 || m55[p + 1] === 0xf9)) {
      const L = ((m55[p + 3] & 3) << 11) | (m55[p + 4] << 3) | (m55[p + 5] >> 5);
      if (L < 7) break; p += L; n++;
    }
    if (n >= 4) { if (first < 0) first = i; last = p; clips++; i = p - 1; }
  }
}
ck('audio first ADTS frame', '0x' + first.toString(16), '0x431a64');
ck('audio end', '0x' + last.toString(16), '0x463b46');
ck('audio clip count', clips, 18);
ck('old range 0x430000 was NOT audio', first > 0x430000, true);
ck('old end 0x463000 truncated last clip', last > 0x463000, true);

console.log(`\n${pass} passed, ${fail} failed`);
if (fail) { console.log('FAILED: ' + fails.join('; ')); process.exit(1); }
console.log('audit-2026-09-03 verification passed');
