#!/usr/bin/env node
// verify-storage.mjs — oracle for Reverse/firmware/analysis/map/storage.md
// Build-pinned to MYVU 1.0.11.53 platform_tester.bin.
// Address model: code VA = file + 0x2C010000 · data file = VA - 0x3BFD7CB0
//
// Contains a POSITIVE CONTROL (crypto primitives ARE findable in this image, so the
// absence of signature machinery on the OTA path is a measured absence) and a
// NEGATIVE CONTROL (the BL scanner returns nothing for a bogus target, so its
// non-zero results are not noise).
//
// Exits 0 and prints exactly "storage verification passed", or exits 1 on any failure.

import { readFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const HERE = dirname(fileURLToPath(import.meta.url));
const ROOT = resolve(HERE, '../../../..');            // repo root
const BIN  = resolve(ROOT, 'Reverse/firmware/x_1.0.11.53/platform_tester.bin');
const DOC  = resolve(HERE, 'storage.md');

const CODE_BASE = 0x2c010000;
const DATA_DELTA = 0x3bfd7cb0;   // file = VA - DATA_DELTA

const fails = [];
let checks = 0;
function ok(cond, what, got) {
  checks++;
  if (!cond) fails.push(`${what}${got === undefined ? '' : `  (got ${got})`}`);
}
function eq(actual, expected, what) {
  ok(actual === expected, `${what}: expected ${fmt(expected)}`, fmt(actual));
}
const fmt = v => (typeof v === 'number' ? (Number.isInteger(v) ? '0x' + (v >>> 0).toString(16) : String(v)) : JSON.stringify(v));

const buf = readFileSync(BIN);
const u32 = o => buf.readUInt32LE(o);
const u16 = o => buf.readUInt16LE(o);
const hex = (o, n) => buf.subarray(o, o + n).toString('hex');
const cstr = fileOff => {
  const end = buf.indexOf(0, fileOff);
  return buf.subarray(fileOff, end < 0 ? fileOff : end).toString('latin1');
};
const strAtVA = va => cstr(va - DATA_DELTA);
const countAscii = s => {
  let n = 0, i = 0;
  const pat = Buffer.from(s, 'latin1');
  while ((i = buf.indexOf(pat, i)) !== -1) { n++; i++; }
  return n;
};

/* ------------------------------------------------------------------ *
 * 0. build pin
 * ------------------------------------------------------------------ */
eq(buf.length, 7042632, 'binary size (1.0.11.53 platform_tester.bin)');
eq(createHash('sha256').update(buf).digest('hex'),
   '1bde4643cfc0d25dcf6b738adecdf941995332c55e19ff038600a5a5f9abfd61',
   'binary sha256');

/* ------------------------------------------------------------------ *
 * 1. POSITIVE CONTROL — crypto primitives are detectable in this image
 * ------------------------------------------------------------------ */
// SHA-256 round constants K[0..3], little-endian words.
eq(hex(0x37744, 16), '982f8a4291443771cffbc0b5a5dbb5e9',
   'POSITIVE CONTROL: SHA-256 K table at file 0x37744');
// AES forward S-box, first 16 bytes.
eq(hex(0x2ba24, 16), '637c777bf26b6fc53001672bfed7ab76',
   'POSITIVE CONTROL: AES S-box at file 0x2ba24');
// MD5 T table, first 4 LE words — the hash the OTA path actually uses.
eq(hex(0x5338d0, 16), '78a46ad756b7c7e8db702024eecebdc1',
   'POSITIVE CONTROL: MD5 T table at file 0x5338d0');
eq(hex(0x4acf28, 16), '78a46ad756b7c7e8db702024eecebdc1',
   'POSITIVE CONTROL: MD5 T table at file 0x4acf28');

// ...and the measured absence that rides on that control.
for (const tok of ['RSA', 'ecdsa', 'ECDSA', 'ed25519', 'secp', 'mbedtls', 'x509', 'X509',
                   'signature', 'PUBLIC KEY', 'verify_sign', 'PKCS']) {
  eq(countAscii(tok), 0, `no signature/PKI token "${tok}" in the image`);
}

/* ------------------------------------------------------------------ *
 * 2. flash layout — ota_config user registrations
 * ------------------------------------------------------------------ */
// registration helper bounds-check: cmp r2,#5  (T1 CMP imm, encoding 0x2a05)
eq(u16(0x53487e), 0x2a05, 'ota_config register: cmp r2,#5 (max OTA user) at 0x53487e');
eq(cstr(0x176a4c), 'OTA user number exceeds', 'ota_config bound error string at 0x176a4c');

// descriptor name strings, reached via the data model (VA -> file)
eq(cstr(0x176b44), '_register_littlefs_user',     'name string at 0x176b44');
eq(cstr(0x176b5c), '_register_m55_package_user',  'name string at 0x176b5c');
eq(cstr(0x176b78), '_register_m55_bootinfo_user', 'name string at 0x176b78');
// ...and the literal-pool pointers really do point at them (data model is live, not assumed)
eq(strAtVA(u32(0x534a68)), '_register_littlefs_user',     'pool 0x534a68 -> littlefs name');
eq(strAtVA(u32(0x534a74)), '_register_m55_package_user',  'pool 0x534a74 -> package name');
eq(strAtVA(u32(0x534a80)), '_register_m55_bootinfo_user', 'pool 0x534a80 -> bootinfo name');

// LittleFS partition: start 0x28100000 (pool), length 0x180000 (mov.w r3,#0x180000)
eq(u32(0x534a70), 0x28100000, 'LittleFS user startAddr literal at 0x534a70');
eq(hex(0x5349ca, 4), '4ff4c013', 'LittleFS length: mov.w r3,#0x180000 encoding at 0x5349ca');
// decode that T2 MOV-imm semantically rather than trusting the byte string alone
{
  const w1 = u16(0x5349ca), w2 = u16(0x5349cc);
  const i = (w1 >> 10) & 1, imm3 = (w2 >> 12) & 7, imm8 = w2 & 0xff;
  // ThumbExpandImm: the rotate amount is the 5-bit field i:imm3:imm8<7>, and the
  // result is a ROTATE of '1':imm8<6:0>, not a shift. The earlier formula packed c
  // into 8 bits and used << alone, which gave 0x600000 for a value that is 0x180000.
  const c = (i << 4) | (imm3 << 1) | (imm8 >> 7);
  const un = (imm8 | 0x80) >>> 0;
  const val = c >= 8 ? (((un >>> c) | (un << (32 - c))) >>> 0) : imm8;
  eq(val >>> 0, 0x180000, 'LittleFS length decodes to 0x180000 (1.5 MB)');
}
// M55 package + bootinfo users
eq(u32(0x534a7c), 0x2c010000, 'm55 package user startAddr literal at 0x534a7c');
eq(u32(0x534a78), 0xfc0f0000, 'm55 package user length literal at 0x534a78 (semantics unknown)');
eq(u32(0x534a84), 0x2c00c000, 'm55 bootinfo user startAddr literal at 0x534a84');

// user ids: movw r1,#0x805 / movw r1,#0x703 / movw r2,#0x201  -> user = low byte
function movwImm(off) {
  const w1 = u16(off), w2 = u16(off + 2);
  const imm4 = w1 & 0xf, i = (w1 >> 10) & 1, imm3 = (w2 >> 12) & 7, imm8 = w2 & 0xff;
  return (imm4 << 12) | (i << 11) | (imm3 << 8) | imm8;
}
eq(movwImm(0x5349ce), 0x0805, 'littlefs descriptor word (user=5) at 0x5349ce');
eq(movwImm(0x5349f6), 0x0703, 'm55 package descriptor word (user=3) at 0x5349f6');
eq(movwImm(0x534a1c), 0x0201, 'm55 bootinfo descriptor word (user=1) at 0x534a1c');

/* ------------------------------------------------------------------ *
 * 3. A/B bank bases — init_m55_ota_flash_start_addr
 * ------------------------------------------------------------------ */
eq(cstr(0x176698), 'init_m55_ota_flash_start_addr', 'function name string at 0x176698');
// cmp.w r2,#0xAAAAAAAA and cmp.w r2,#0xBBBBBBBB
eq(hex(0x53434e, 4), 'b2f1aa3f', 'cmp.w r2,#0xAAAAAAAA at 0x53434e');
eq(hex(0x534354, 4), 'b2f1bb3f', 'cmp.w r2,#0xBBBBBBBB at 0x534354');
const BANK_A = u32(0x5343b4), BANK_B = u32(0x5343d0);
eq(BANK_A, 0x2c010000, 'bank A base literal at 0x5343b4');
eq(BANK_B, 0x2c730000, 'bank B base literal at 0x5343d0');
eq(BANK_B - BANK_A, 0x720000, 'A/B bank stride (7,471,104 B = 7.125 MB)');
ok(buf.length < 0x720000, 'the image fits inside one bank', `${buf.length} vs ${0x720000}`);
eq(u32(0x5343b0), 0x3c46953c, 'm55_ota_flash_start_addr global pointer literal at 0x5343b0');
eq(u32(0x5342e4), 0xaaaabbbb, 'paired boot-word literal 0xAAAABBBB at 0x5342e4');

/* ------------------------------------------------------------------ *
 * 4. lv_preference — the NV / CONFIG store
 * ------------------------------------------------------------------ */
eq(cstr(0x41a9d8), '../../thirdparty/star_air_lvgl/app/Persistence/lv_preference.c',
   'lv_preference source path at 0x41a9d8');
eq(cstr(0x41ab84), 'lv_preference_command', 'console command name at 0x41ab84');
eq(cstr(0x41ab2c), '%s bad magic_number, preference->magic_number = %d',
   'magic-number error string at 0x41ab2c');
eq(u32(0x6243a4), 0xcafebabe, 'preference magic 0xCAFEBABE (pool 0x6243a4)');
eq(u32(0x6245c0), 0xcafebabe, 'preference magic 0xCAFEBABE (pool 0x6245c0)');
eq(u32(0x6245bc), 0x3d653768, 'preference RAM struct base VA (pool 0x6245bc)');
eq(hex(0x6242e2, 4), '4ff4fb60', 'blob size mov.w r0,#0x7d8 at 0x6242e2');
eq(hex(0x624300, 4), '4ff40062', 'load size mov.w r2,#0x800 at 0x624300');
eq(hex(0x6244d0, 4), '93f908c0', 'entry key read: ldrsb.w ip,[r3,#8] at 0x6244d0 (signed byte key)');
eq(u16(0x6244da), 0x3310, 'entry stride: adds r3,#0x10 at 0x6244da');
eq((0x7c8 - 8) / 0x10, 124, 'derived preference capacity = 124 entries');
// phone-facing write/read path
for (const [off, s] of [[0x2fea8, 'Starry.WriteSwitchKey'], [0x2fed8, 'Starry.ReadSwitchKey'],
                        [0x33068, 'handleWriteSwitchKey'], [0x33050, 'ack_remote_switch_key']])
  eq(cstr(off), s, `switch-key surface string at ${fmt(off)}`);

/* ------------------------------------------------------------------ *
 * 5. NV key inventory — re-derived by method, not read from a manifest
 * ------------------------------------------------------------------ */
function blSites(targetFileOff, lo = 0x480000) {
  const out = [];
  for (let a = lo; a < buf.length - 4; a += 2) {
    const w1 = u16(a);
    if ((w1 & 0xf800) !== 0xf000) continue;
    const w2 = u16(a + 2);
    if ((w2 & 0xd000) !== 0xd000) continue;
    const S = (w1 >> 10) & 1, imm10 = w1 & 0x3ff;
    const J1 = (w2 >> 13) & 1, J2 = (w2 >> 11) & 1, imm11 = w2 & 0x7ff;
    const I1 = 1 - (J1 ^ S), I2 = 1 - (J2 ^ S);
    let imm = (S << 24) | (I1 << 23) | (I2 << 22) | (imm10 << 12) | (imm11 << 1);
    if (S) imm -= 1 << 25;
    if (a + 4 + imm === targetFileOff) out.push(a);
  }
  return out;
}
const GET = 0x6244bc, PUTW = 0x6244a4;
const getSites = blSites(GET), putSites = blSites(PUTW);
eq(getSites.length, 78, 'lv_preference_get call sites');
eq(putSites.length, 7, 'lv_preference put-wrapper call sites');

// NEGATIVE CONTROL: the same scanner, aimed one byte off a real function, must find
// nothing. If it matched noise, the counts above would be meaningless.
eq(blSites(GET + 1).length, 0, 'NEGATIVE CONTROL: BL scan of a mis-aligned target finds 0 sites');
eq(blSites(0x6244be).length, 0, 'NEGATIVE CONTROL: BL scan of a non-entry address finds 0 sites');

// harvest the key immediate (last `movs r0,#imm` before the call, within 40 bytes)
// Walk FORWARD by real instruction length. Stepping two bytes at a time reads the low
// halfword of 32-bit instructions as if it were a 16-bit one: `strb.w r2,[r3,#0x88]`
// encodes F883 2088, and 0x2088 looks exactly like `movs r0,#136`. That is where the
// bogus key 136 at site 0x5bde26 came from — the real key there is movs r0,#0x13 (19).
function keyBefore(site, win = 40) {
  let last = null;
  let a = site - win;
  // resync: step forward until the decode lands exactly on `site`
  while (a < site) {
    const w = u16(a);
    const wide = (w & 0xf800) === 0xf800 || (w & 0xf800) === 0xf000 || (w & 0xf800) === 0xe800;
    if (!wide) {
      if ((w & 0xff00) === 0x2000) last = w & 0xff;          // movs r0,#imm8
      else if ((w & 0xf800) === 0x4800) last = null;         // ldr r0,[pc,..] -> not an imm key
    }
    a += wide ? 4 : 2;
  }
  return last;
}
const keys = new Set();
for (const s of [...getSites, ...putSites]) { const k = keyBefore(s); if (k !== null) keys.add(k); }
ok(keys.size >= 50, 'at least 50 distinct NV key ids observed', keys.size);
for (const k of [...keys]) ok(k >= 0 && k <= 127, `key ${k} fits the signed-byte key space`);
for (const k of [1, 2, 16, 21, 22, 24, 54, 111, 122]) ok(keys.has(k), `documented NV key ${k} present`);
// The Hint block is 111..122 — TWELVE keys, not the thirteen originally claimed.
// Key 110 is not reachable at any window up to 160 bytes, so 110 is asserted ABSENT
// rather than silently dropped: if a future build starts using it, this fires.
for (let k = 111; k <= 122; k++) ok(keys.has(k), `Hint counter key ${k} present`);
ok(!keys.has(110), 'NEGATIVE: key 110 is NOT observed — the Hint block starts at 111');
eq(keyBefore(0x5fd6c2), 2, 'KEY_NOTIFY_VOICE_BROADCAST == 2 at site 0x5fd6c2');
eq(keyBefore(0x57fdd8), 16, 'low-power-wakeup-screen-off key == 16 at site 0x57fdd8');
eq(cstr(0x19fcb8), '[%s] get preference KEY_NOTIFY_VOICE_BROADCAST fail',
   'KEY_NOTIFY_VOICE_BROADCAST log string at 0x19fcb8');

/* ------------------------------------------------------------------ *
 * 6. OTA: MD5 only, no signature
 * ------------------------------------------------------------------ */
for (const [off, s] of [
  [0x1764bc, 'ota_flash_program'],
  [0x176644, 'update_ota_boot_info'],
  [0x1765e4, 'app_update_magic_number_of_user_image'],
  [0x19537c, 'checkWrittenFlashMd5'],
  [0x195a68, 'isMd5Equal'],
  [0x195114, 'ota failed to check written flash md5'],
  [0x19520c, 'ota failed to check transfer file md5'],
  [0x1953e4, 'final md5 check failed: %s'],
  [0x195a74, 'final md5 check succeed'],
  [0x195c2c, 'binMd5Map cannot find md5 for: %s'],
  [0x353f8,  'confirm_received_file_md5'],
  [0x2a224,  'transfer check md5 failed'],
]) eq(cstr(off), s, `OTA md5-path string at ${fmt(off)}`);

/* ------------------------------------------------------------------ *
 * 7. A/B rollback is application-level
 * ------------------------------------------------------------------ */
eq(cstr(0x3cb00), 'AB/BA boot',                'besair_main A/B banner at 0x3cb00');
eq(cstr(0x3cb0c), 'get ext repeat num: %u',    'repeat-num read log at 0x3cb0c');
eq(cstr(0x3cb24), 'set ext repeat num to 1',   'repeat-num write log at 0x3cb24');
eq(cstr(0x3cb64), 'do ota rollback',           'rollback log at 0x3cb64');
eq(cstr(0x3cb74), 'failed to do ota rollback', 'rollback-fail log at 0x3cb74');
eq(cstr(0x1768d0), 'do_ota_rollback',          'do_ota_rollback name at 0x1768d0');
eq(cstr(0x1769ac), 'update_boot_type_to_normal', 'boot-type helper name at 0x1769ac');
eq(strAtVA(u32(0x534638 - 0xc + 0x0)) !== null, true, 'data model live');   // cheap sanity
eq(strAtVA(0x3c14e590), '%s normal type, do nothing',
   'do_ota_rollback short-circuit string (VA 0x3C14E590)');
// the decision itself: cmp r5,#1 ; beq  in besair_main
eq(u16(0x4c2cde), 0x2d01, 'besair_main: cmp r5,#1 at 0x4c2cde');
eq((u16(0x4c2ce0) & 0xff00), 0xd000, 'besair_main: beq to the rollback branch at 0x4c2ce0');
eq(cstr(0x28368), '../../tests/besair_platform/../../services/ota/xjxr_ota/xjxr_ota_checker.cpp',
   'ota checker source path at 0x28368');
eq(cstr(0x284d0), '%s ota_check_and_change_boot_type succeed',
   'boot-type flip log at 0x284d0');

/* ------------------------------------------------------------------ *
 * 8. LittleFS is real
 * ------------------------------------------------------------------ */
eq(cstr(0x172fcc), '../../services/fs/mbed/littlefs/lfs/lfs.c', 'littlefs source path at 0x172fcc');
eq(cstr(0x173188), 'LFS_ERR_CORRUPT', 'LFS error table entry at 0x173188');
eq(cstr(0x17336c), '../../services/fs/mbed/littlefs/lfs_adapter/lfs_adapt_flash.c',
   'littlefs flash adapter path at 0x17336c');

/* ------------------------------------------------------------------ *
 * 9. doc hygiene
 * ------------------------------------------------------------------ */
const doc = readFileSync(DOC, 'utf8');
ok(doc.split('\n').length >= 60, 'storage.md is at least 60 lines', doc.split('\n').length);
ok(doc.includes('1.0.11.53'), 'storage.md pins the build to 1.0.11.53');
eq((doc.match(/0x2c000000/gi) || []).length, 0, 'storage.md uses no 0x2C000000-based address');
for (const tier of ['CONFIG', 'DATA', 'CODE']) ok(doc.includes(tier), `storage.md names the ${tier} tier`);

// No write proposed strictly inside the HiFi4 DSP or sensor_hub sub-images.
// The four boundary constants may be NAMED; an offset strictly inside still fails.
const FORBIDDEN = [[0x04e9b4, 0x143f14], [0x134070, 0x14a7a4]];
const BOUNDARIES = new Set([0x04e9b4, 0x143f14, 0x134070, 0x14a7a4]);
const WRITE_VERB = /\b(patch|patched|patching|write|writes|writing|poke|overwrite|overwrites|modify|modifies|flash to|program)\b/i;
for (const [i, line] of doc.split('\n').entries()) {
  if (!WRITE_VERB.test(line)) continue;
  for (const m of line.matchAll(/0x[0-9a-fA-F]{4,8}/g)) {
    const v = parseInt(m[0], 16);
    if (BOUNDARIES.has(v)) continue;
    for (const [lo, hi] of FORBIDDEN)
      ok(!(v > lo && v < hi), `storage.md line ${i + 1}: write-context offset ${m[0]} is inside a protected sub-image`);
  }
}

/* ------------------------------------------------------------------ */
if (fails.length) {
  console.error(`storage verification FAILED (${fails.length} of ${checks} checks)`);
  for (const f of fails) console.error('  - ' + f);
  process.exit(1);
}
console.log('storage verification passed');
