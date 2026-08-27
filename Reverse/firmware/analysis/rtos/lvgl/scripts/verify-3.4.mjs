#!/usr/bin/env node
// leaf-3.4 verifier.
//
// Re-reads the STOCK image and independently re-proves every offset, VA,
// struct field, instruction encoding and count claimed in lv_core_map.json.
// Nothing is accepted because the JSON says so: both address bases are
// re-derived from image bytes, strings are re-found, descriptors are
// re-decoded, and the tick / flush / absence claims are re-measured.
//
// Prerequisites: node >= 18.  --regen additionally needs python3.
//
// usage: node verify-3.4.mjs [--image|--bases|--strings|--descriptors|--tick
//                             |--flush|--absence|--crossrefs|--regen|--labels|--all]

import { createHash } from "node:crypto";
import { readFileSync, existsSync, mkdtempSync, rmSync } from "node:fs";
import { execFileSync } from "node:child_process";
import { resolve, dirname, join } from "node:path";
import { fileURLToPath } from "node:url";
import { tmpdir } from "node:os";

const HERE = dirname(fileURLToPath(import.meta.url));
const LEAF = resolve(HERE, "..");
const ROOT = resolve(LEAF, "..", "..", "..", "..", "..");
const BIN = join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");
const ART = join(LEAF, "lv_core_map.json");
const INV = join(ROOT, "Reverse/firmware/analysis/rtos/m55/ipc_inventory.json");
const GEN = join(HERE, "lv_core_map.py");

const WANT = [
  "lv_ipc_mailbox", "lv_to_async_ipc_mailbox", "jbd_mailbox", "JBD_TIMER",
  "display_frame_mutex", "display_mgr_mutex", "display_ctrl_mutex",
  "lvgl_os_tick_timer", "lvgl_async", "lvgl_ui", "jbd_thread",
];

function die(msg) {
  console.error("FAIL: " + msg);
  process.exit(1);
}
function ok(cond, msg) {
  if (!cond) die(msg);
}

if (!existsSync(BIN)) die("stock image missing: " + BIN);
const B = readFileSync(BIN);
const N = B.length;
const hex = (n) => "0x" + (n >>> 0).toString(16);
const H = (s) => {
  const v = parseInt(String(s), 16);
  ok(Number.isFinite(v), "not a hex number: " + s);
  return v >>> 0;
};
const u16 = (o) => B.readUInt16LE(o);
const u32 = (o) => B.readUInt32LE(o);

function loadArt() {
  if (!existsSync(ART)) die("lv_core_map.json missing: " + ART);
  return JSON.parse(readFileSync(ART, "utf8"));
}

function isStrStart(f, minlen) {
  if (f <= 0 || f >= N) return false;
  const prev = B[f - 1];
  if (!(prev === 0 || prev < 32 || prev >= 127)) return false;
  let j = f;
  while (j < N && B[j] >= 0x20 && B[j] < 0x7f) j++;
  return j - f >= minlen && j < N && B[j] === 0;
}

function isPrologue(f) {
  if (f < 0 || f + 4 > N) return false;
  const h = u16(f);
  return h === 0xe92d || (h >= 0xb400 && h <= 0xb5ff) || h === 0xed2d;
}
function isPrologueOrScheduled(f) {
  if (isPrologue(f)) return true;
  for (let d = 2; d <= 8; d += 2) if (isPrologue(f + d)) return true;
  return false;
}

function cstr(p, limit) {
  const e = B.indexOf(0, p);
  if (e < 0 || e - p > (limit || 512) || e === p) return null;
  for (let i = p; i < e; i++) if (B[i] < 0x20 || B[i] >= 0x7f) return null;
  return B.slice(p, e).toString("ascii");
}

function findStringStart(text) {
  const pat = Buffer.from(text + "\0", "latin1");
  let i = B.indexOf(pat, 0);
  while (i >= 0) {
    if (isStrStart(i, 2)) return i;
    i = B.indexOf(pat, i + 1);
  }
  return -1;
}

function countLE32(v) {
  const pat = Buffer.alloc(4);
  pat.writeUInt32LE(v >>> 0, 0);
  let c = 0, i = B.indexOf(pat, 0);
  while (i >= 0) { c++; i = B.indexOf(pat, i + 1); }
  return c;
}

function unique3cWords() {
  const s = new Set();
  const n = N >>> 2;
  for (let i = 0; i < n; i++) {
    const w = u32(i * 4);
    if (w >= 0x3c000000 && w < 0x3c700000) s.add(w);
  }
  return s;
}

function pathAnchors() {
  const re = /\.\.\/\.\.\/thirdparty\/star_air_lvgl\/src\/[A-Za-z0-9_/]+\.[ch](pp)?\x00/g;
  const out = [];
  const s = B.toString("latin1");
  let m;
  while ((m = re.exec(s)) !== null) {
    if (isStrStart(m.index, 8)) out.push(m.index);
  }
  return out;
}

function deriveD() {
  const anchors = pathAnchors();
  ok(anchors.length >= 8, "too few star_air_lvgl path anchors: " + anchors.length);
  const words = unique3cWords();
  let inter = null;
  const hits = new Map();
  for (const s of anchors) {
    const cand = new Set();
    for (const w of words) {
      const d = (w - s) >>> 0;
      cand.add(d);
      hits.set(d, (hits.get(d) || 0) + 1);
    }
    inter = inter === null ? cand : new Set([...inter].filter((x) => cand.has(x)));
  }
  ok(inter && inter.size >= 1, "data-base intersection empty");
  let best = 0, bestHits = -1, second = 0;
  for (const d of inter) {
    const h = hits.get(d) || 0;
    if (h > bestHits) { second = bestHits; bestHits = h; best = d; }
    else if (h > second) second = h;
  }
  return { D: best, hits: bestHits, second, nanchor: anchors.length, nuniq: words.size, interSize: inter.size };
}

function collectPairs(D) {
  const n = N >>> 2;
  const out = [];
  const ident = /^[A-Za-z_][A-Za-z0-9_]{3,48}$/;
  for (let i = 0; i < n - 1; i++) {
    const a = u32(i * 4), b = u32((i + 1) * 4);
    if (!(a >= 0x3c000000 && a < 0x3c700000)) continue;
    if (!(b >= 0x2c000000 && b < 0x2c700000 && (b & 1))) continue;
    const f = (a - D) >>> 0;
    if (!(f > 4 && f < N - 64 && isStrStart(f, 4))) continue;
    const s = cstr(f, 64);
    if (s && ident.test(s)) out.push([i * 4, a, b, s]);
  }
  return out;
}

function deriveT(pairs) {
  let best = 0, bestHits = -1, second = 0;
  for (let k = 0; k < 0x700; k++) {
    const T = (0x2c000000 + k * 0x1000) >>> 0;
    let c = 0;
    for (const p of pairs) {
      if (isPrologue(((p[2] & ~1) - T) >>> 0)) c++;
    }
    if (c > bestHits) { second = bestHits; bestHits = c; best = T; }
    else if (c > second) second = c;
  }
  return { T: best, hits: bestHits, second };
}

function decodeBl(f, T) {
  if (f + 4 > N) return null;
  const hw1 = u16(f), hw2 = u16(f + 2);
  if ((hw1 & 0xf800) !== 0xf000) return null;
  if ((hw2 & 0xd000) !== 0xd000 && (hw2 & 0xd000) !== 0x9000) return null;
  const S = (hw1 >> 10) & 1;
  const imm10 = hw1 & 0x3ff;
  const J1 = (hw2 >> 13) & 1;
  const J2 = (hw2 >> 11) & 1;
  const imm11 = hw2 & 0x7ff;
  const I1 = (~(J1 ^ S)) & 1;
  const I2 = (~(J2 ^ S)) & 1;
  let off = (S << 24) | (I1 << 23) | (I2 << 22) | (imm10 << 12) | (imm11 << 1);
  if (S) off -= 1 << 25;
  return (f + T + 4 + off) >>> 0;
}

function countBlTo(tgt, T) {
  let n = 0, site = null;
  for (let f = 0; f + 4 <= N; f += 2) {
    const t = decodeBl(f, T);
    if (t === tgt) { n++; site = f; }
  }
  return { n, site };
}

function inRam(v) {
  return (v >= 0x20000000 && v < 0x20200000) || (v >= 0x3c000000 && v < 0x3e000000);
}

function decodeMutexBits(v) {
  const names = [];
  if (v & 1) names.push("osMutexRecursive");
  if (v & 2) names.push("osMutexPrioInherit");
  if (v & 8) names.push("osMutexRobust");
  return names;
}

function mailboxWrap(r) {
  const pre = r - 0x24;
  if (pre < 0) return null;
  const p0 = u32(pre), p1 = u32(pre + 4), p2 = u32(pre + 8);
  if (!(p0 > 0 && p0 <= 0x400 && p1 > 0 && p1 <= 0x400 && p2 >= 0x3d000000 && p2 < 0x3e000000)) return null;
  for (let k = 3; k < 9; k++) if (u32(pre + 4 * k) !== 0) return null;
  return { pre, p0, p1, p2 };
}

function classifyAt(r, D, T) {
  const w = [];
  for (let k = 0; k < 9; k++) w.push(u32(r + 4 * k));
  const prev = r >= 4 ? u32(r - 4) : 0;
  const prevIsCode = prev >= 0x2c000000 && prev < 0x2c700000 && (prev & 1)
    && isPrologue(((prev & ~1) - T) >>> 0);
  const prevIsTimerCb = prev >= 0x2c000000 && prev < 0x2c700000 && (prev & 1)
    && isPrologueOrScheduled(((prev & ~1) - T) >>> 0);
  const wrap = mailboxWrap(r);
  if (prevIsCode && inRam(w[4]) && w[5] >= 0x100 && w[5] <= 0x40000 && w[6] >= 1 && w[6] <= 56) {
    return { struct: "osThreadAttr_t", w, prev };
  }
  if (prevIsTimerCb && w[1] === 0 && w[2] === 0 && w[3] === 0 && !inRam(w[4])) {
    return { struct: "osTimerAttr_t", w, prev };
  }
  if ((w[1] & 0x0b) && w[2] === 0 && w[3] === 0 && !inRam(w[4]) && !wrap) {
    return { struct: "osMutexAttr_t", w, prev };
  }
  if (wrap) return { struct: "osMessageQueueAttr_t", w, prev, wrap };
  return null;
}

function sweepPorting(D) {
  const pathRe = /\.\.\/\.\.\/thirdparty\/star_air_lvgl\/src\/[A-Za-z0-9_/]+\.[ch](pp)?\x00/g;
  const anyRe = /\.\.\/\.\.\/[A-Za-z0-9_/.]+\.[ch](pp)?\x00/g;
  const s = B.toString("latin1");
  const src = [];
  let m;
  while ((m = pathRe.exec(s)) !== null) {
    if (isStrStart(m.index, 8)) src.push(m.index);
  }
  src.sort((a, b) => a - b);
  const all = [];
  while ((m = anyRe.exec(s)) !== null) {
    if (isStrStart(m.index, 4)) all.push(m.index);
  }
  all.sort((a, b) => a - b);
  let files = 0, strings = 0, portingFiles = 0, portingStrings = 0;
  const listed = [];
  for (let idx = 0; idx < src.length; idx++) {
    const p = src[idx];
    const path = cstr(p, 256);
    let end = N;
    for (const q of all) if (q > p) { end = q; break; }
    files++;
    const isPort = path && path.includes("star_air_lvgl/src/porting/");
    if (isPort) portingFiles++;
    const run = /[\x20-\x7e]{2,}/g;
    const slice = s.slice(p, end);
    run.lastIndex = 0;
    let rm;
    const local = [];
    while ((rm = run.exec(slice)) !== null) {
      const f = p + rm.index;
      if (!isStrStart(f, 2)) continue;
      const t = cstr(f, 512);
      if (t === null) continue;
      strings++;
      if (isPort) { portingStrings++; local.push({ off: f, text: t }); }
    }
    if (isPort) listed.push({ path, p, end, local });
  }
  return { files, strings, portingFiles, portingStrings, listed };
}

// =========================================================== gates
function gImage() {
  const A = loadArt();
  ok(A.image && A.image.path === "Reverse/firmware/x_1.0.12.83/platform_tester.bin", "image.path wrong");
  ok(A.image.size === N, `claimed size ${A.image.size} != disk ${N}`);
  ok(H(A.image.size_hex) === N, "size_hex disagrees with size");
  const sha = createHash("sha256").update(B).digest("hex");
  ok(A.image.sha256 === sha, `sha256 claimed ${A.image.sha256} != measured ${sha}`);
  console.log("G1-IMAGE-REPROVED");
}

function gBases() {
  const A = loadArt();
  const d = deriveD();
  const pairs = collectPairs(d.D);
  const t = deriveT(pairs);
  ok(H(A.address_model.data_alias_base) === d.D,
     `data base claimed ${A.address_model.data_alias_base} != derived ${hex(d.D)}`);
  ok(H(A.address_model.text_base) === t.T,
     `text base claimed ${A.address_model.text_base} != derived ${hex(t.T)}`);
  ok(d.interSize === 1, `data-base intersection size ${d.interSize}, expected a unique winner`);
  ok(A.address_model.derivation_data.path_anchors === d.nanchor,
     `path_anchors claimed ${A.address_model.derivation_data.path_anchors} != ${d.nanchor}`);
  ok(A.address_model.derivation_data.unique_3c_words === d.nuniq,
     `unique_3c_words claimed ${A.address_model.derivation_data.unique_3c_words} != ${d.nuniq}`);
  ok(A.address_model.derivation_data.winner_hits === d.hits,
     `data winner_hits claimed ${A.address_model.derivation_data.winner_hits} != ${d.hits}`);
  ok(A.address_model.derivation_text.pairs_tested === pairs.length,
     `pairs_tested claimed ${A.address_model.derivation_text.pairs_tested} != ${pairs.length}`);
  ok(A.address_model.derivation_text.winner_hits === t.hits,
     `text winner_hits claimed ${A.address_model.derivation_text.winner_hits} != ${t.hits}`);
  ok(A.address_model.derivation_text.runner_up_hits === t.second,
     `text runner_up claimed ${A.address_model.derivation_text.runner_up_hits} != ${t.second}`);
  ok(t.hits > t.second && t.hits * 2 > pairs.length,
     `text-base winner ${t.hits}/${pairs.length} is not a majority over runner-up ${t.second}`);
  // conflict claim: jbd_thread word independently
  const jbd = findStringStart("jbd_thread");
  ok(jbd >= 0, "jbd_thread string missing");
  const nameVa = (jbd + d.D) >>> 0;
  let wordOff = -1;
  for (let i = 0; i + 8 <= N; i += 4) {
    if (u32(i + 4) === nameVa && (u32(i) & 1) && (u32(i) >>> 24) === 0x2c) {
      wordOff = i;
      break;
    }
  }
  ok(wordOff >= 0, "no Thumb pointer sitting next to the jbd_thread name VA");
  const entry = (u32(wordOff) & ~1) >>> 0;
  ok(entry === (0x499270 + t.T) >>> 0,
     `jbd_thread entry word ${hex(entry)} != file 0x499270 + text base`);
  ok(isPrologue(0x499270), "file 0x499270 is not a PUSH.W prologue");
  console.log(`G2-BASES-REPROVED (text ${hex(t.T)} data ${hex(d.D)}, ${t.hits}/${pairs.length} prologue hits)`);
}

function gStrings() {
  const A = loadArt();
  const D = H(A.address_model.data_alias_base);
  const sw = sweepPorting(D);
  ok(A.A_porting_layer_strings.source_file_count === sw.files,
     `source_file_count claimed ${A.A_porting_layer_strings.source_file_count} != recounted ${sw.files}`);
  ok(A.A_porting_layer_strings.total_string_count === sw.strings,
     `total_string_count claimed ${A.A_porting_layer_strings.total_string_count} != recounted ${sw.strings}`);
  ok(A.A_porting_layer_strings.porting_file_count === sw.portingFiles,
     `porting_file_count claimed ${A.A_porting_layer_strings.porting_file_count} != recounted ${sw.portingFiles}`);
  ok(A.A_porting_layer_strings.porting_string_count === sw.portingStrings,
     `porting_string_count claimed ${A.A_porting_layer_strings.porting_string_count} != recounted ${sw.portingStrings}`);
  ok(sw.portingFiles >= 5 && sw.portingStrings >= 40,
     `porting inventory too small: ${sw.portingFiles} files / ${sw.portingStrings} strings`);
  let n = 0;
  for (const f of A.A_porting_layer_strings.files) {
    for (const s of f.strings) {
      const off = H(s.file_off);
      const bytes = Buffer.from(s.text, "latin1");
      ok(off + bytes.length + 1 <= N, `file_off out of range ${s.file_off}`);
      ok(B.compare(bytes, 0, bytes.length, off, off + bytes.length) === 0,
         `bytes at ${s.file_off} are not ${JSON.stringify(s.text)}`);
      ok(B[off + bytes.length] === 0, `not NUL-terminated at ${s.file_off}`);
      ok(isStrStart(off, 2), `${s.file_off} is not a true string start`);
      ok(H(s.va) === (off + D) >>> 0, `va wrong at ${s.file_off}`);
      ok(s.len === bytes.length, `len wrong at ${s.file_off}`);
      n++;
    }
  }
  ok(n === sw.strings, `enumerated ${n} claimed strings != recounted ${sw.strings}`);
  console.log(`G3-STRINGS-REPROVED (${n} strings, ${sw.portingFiles} porting files / ${sw.portingStrings} porting strings)`);
}

function gDescriptors() {
  const A = loadArt();
  const D = H(A.address_model.data_alias_base);
  const T = H(A.address_model.text_base);
  ok(A.B_ipc_objects.length === WANT.length, "B_ipc_objects length != WANT");
  let n = 0;
  for (let i = 0; i < WANT.length; i++) {
    const o = A.B_ipc_objects[i];
    ok(o.name === WANT[i], `object[${i}] name ${o.name} != ${WANT[i]}`);
    const nameOff = findStringStart(o.name);
    ok(nameOff >= 0, "name string missing: " + o.name);
    ok(o.descriptors && o.descriptors.length === 1,
       `${o.name}: expected exactly one decoded descriptor, got ${o.descriptors && o.descriptors.length}`);
    const d = o.descriptors[0];
    const r = H(d.descriptor_file_off);
    const nameVa = (nameOff + D) >>> 0;
    ok(u32(r) === nameVa, `${o.name}: dword at ${d.descriptor_file_off} is ${hex(u32(r))}, not name VA ${hex(nameVa)}`);
    ok(H(d.name_string_file_off) === nameOff, `${o.name}: name_string_file_off wrong`);
    ok(H(d.name_string_va) === nameVa, `${o.name}: name_string_va wrong`);
    ok(H(d.descriptor_va) === (r + D) >>> 0, `${o.name}: descriptor_va wrong`);
    const cls = classifyAt(r, D, T);
    ok(cls, `${o.name}: independent classifier rejected the descriptor at ${hex(r)}`);
    ok(cls.struct === d.struct, `${o.name}: claimed ${d.struct}, classifier ${cls.struct}`);
    ok(Array.isArray(d.raw_words) && d.raw_words.length === 9, `${o.name}: raw_words missing`);
    for (let k = 0; k < 9; k++) {
      ok(H(d.raw_words[k]) === cls.w[k],
         `${o.name}: raw_words[${k}] claimed ${d.raw_words[k]} != ${hex(cls.w[k])}`);
    }
    if (d.struct === "osThreadAttr_t") {
      ok(H(d.fields["+0x10 stack_mem"]) === cls.w[4], `${o.name}: stack_mem`);
      ok(cls.w[5] === parseInt(String(d.fields["+0x14 stack_size"]).split(" ")[0], 16), `${o.name}: stack_size`);
      ok(cls.w[6] === parseInt(String(d.fields["+0x18 priority"]).split(" ")[0], 16), `${o.name}: priority`);
      ok(d.entry_fn_file_off && isPrologue(H(d.entry_fn_file_off)), `${o.name}: entry is not a prologue`);
      ok(H(d.entry_fn_va) === ((cls.prev & ~1) >>> 0), `${o.name}: entry_fn_va`);
    }
    if (d.struct === "osTimerAttr_t") {
      ok(d.callback_file_off && H(d.callback_va) === ((cls.prev & ~1) >>> 0), `${o.name}: callback_va`);
    }
    if (d.struct === "osMutexAttr_t") {
      const bits = decodeMutexBits(cls.w[1]);
      ok(JSON.stringify(d.attr_bits_decoded) === JSON.stringify(bits), `${o.name}: attr_bits_decoded`);
    }
    if (d.struct === "osMessageQueueAttr_t") {
      ok(cls.wrap, `${o.name}: mailbox wrapper missing`);
      ok(H(d.wrapper_file_off) === cls.wrap.pre, `${o.name}: wrapper_file_off`);
      ok(d.wrapper["+0x00 msg_count"] === cls.wrap.p0, `${o.name}: msg_count`);
      ok(d.wrapper["+0x04 msg_size"] === cls.wrap.p1, `${o.name}: msg_size`);
    }
    n++;
  }
  ok(n === WANT.length, "not all WANT names verified");
  console.log(`G4-DESCRIPTORS-REPROVED (${n} objects)`);
}

function gTick() {
  const A = loadArt();
  const D = H(A.address_model.data_alias_base);
  const T = H(A.address_model.text_base);
  const C = A.C_tick_source;
  ok(C.determined === true, "tick not determined");
  const nameOff = findStringStart("lvgl_os_tick_timer");
  ok(nameOff >= 0, "lvgl_os_tick_timer string missing");
  const nameVa = (nameOff + D) >>> 0;
  let desc = -1;
  for (let i = 0; i + 4 <= N; i += 4) if (u32(i) === nameVa) { desc = i; break; }
  ok(desc >= 0, "no descriptor dword for lvgl_os_tick_timer");
  const cls = classifyAt(desc, D, T);
  ok(cls && cls.struct === "osTimerAttr_t", "lvgl_os_tick_timer is not osTimerAttr_t");
  const cbFile = ((cls.prev & ~1) - T) >>> 0;
  ok(B[cbFile + 3] === 0x20, "callback+3 is not movs r0,#imm");
  const inc = B[cbFile + 2];
  ok(inc === 16, `tick increment is ${inc}, not 16`);
  let blOff = null, tgt = null;
  for (let o = cbFile; o < cbFile + 0x40; o += 2) {
    const t = decodeBl(o, T);
    if (t !== null) { blOff = o; tgt = t; break; }
  }
  ok(blOff !== null, "no BL in the osTimer callback");
  const { n: bln, site } = countBlTo(tgt, T);
  ok(bln === 1, `BL scanner found ${bln} calls to lv_tick_inc; expected exactly 1 (scanner liveness)`);
  ok(site === blOff, `unique BL site ${hex(site)} != callback BL ${hex(blOff)}`);
  ok(C.callback_tick_increment === inc, "map increment disagrees");
  ok(H(C.lv_tick_inc_file_off) === (tgt - T) >>> 0, "lv_tick_inc_file_off");
  ok(H(C.lv_tick_inc_va) === tgt, "lv_tick_inc_va");
  ok(C.lv_tick_inc_callers === 1, "map callers != 1");
  ok(H(C.lv_tick_inc_call_site_file_off) === blOff, "call site file_off");
  ok(C.systick_ascii_hits === 0, "map SysTick count != 0");
  const sysHits = (B.toString("latin1").match(/SysTick/g) || []).length;
  ok(sysHits === 0, `SysTick ASCII hits ${sysHits}, not 0`);
  // osTimerStart period: movs r1,#16 near the start function
  ok(C.osTimerStart_period && C.osTimerStart_period.length >= 1, "no osTimerStart period site");
  const per = C.osTimerStart_period[0];
  ok(per.period_ticks === 16, "osTimerStart period != 16");
  ok(B[H(per.movs_r1_file_off)] === 16 && B[H(per.movs_r1_file_off) + 1] === 0x21,
     "claimed movs r1,#16 bytes do not match the image");
  // live control for the SysTick-absence scanner: the same latin1 search MUST
  // find a known-present ASCII token.
  ok((B.toString("latin1").match(/lvgl_os_tick_timer/g) || []).length >= 1,
     "ASCII scanner failed to find lvgl_os_tick_timer (SysTick-zero is untrustworthy)");
  console.log(`G5-TICK-REPROVED (inc=${inc}, unique BL @ ${hex(blOff)} -> ${hex(tgt)})`);
}

function gFlush() {
  const A = loadArt();
  const T = H(A.address_model.text_base);
  const D = H(A.address_model.data_alias_base);
  const F = A.D_display_flush;
  const nameOff = findStringStart("disp_flush_area");
  ok(nameOff >= 0, "disp_flush_area string missing");
  const nameVa = (nameOff + D) >>> 0;
  const sites = [];
  for (let i = 0; i + 4 <= N; i += 4) if (u32(i) === nameVa) sites.push(i);
  ok(sites.length >= 1, "no literal-pool refs to disp_flush_area");
  let entry = null;
  let p = Math.min(...sites);
  while (p > 0) {
    if (isPrologue(p) && u16(p) === 0xe92d) { entry = p; break; }
    p -= 2;
  }
  ok(entry !== null, "no PUSH.W prologue behind disp_flush_area literals");
  ok(H(F.disp_flush_area_entry_file_off) === entry, "entry file_off");
  ok(H(F.disp_flush_area_entry_va) === (entry + T) >>> 0, "entry va");
  const pro = B.slice(entry, entry + 8);
  ok(F.prologue_bytes.replace(/\s+/g, "") === pro.toString("hex"),
     `prologue claimed ${F.prologue_bytes} != ${pro.toString("hex")}`);
  const pat = Buffer.from("03f1010303eb8303", "hex");
  const i = B.indexOf(pat, entry);
  ok(i >= 0 && i < entry + 0x900, "row-stride pattern missing in disp_flush_area");
  ok(H(F.row_stride_pattern_file_off) === i, "row_stride_pattern_file_off");
  // next halfword-pair should be lsl.w r5,r3,#7  =>  *640 = *5 << 7
  ok(F.row_stride_pixels === 640, `row_stride_pixels claimed ${F.row_stride_pixels}, expected 640`);
  ok(/640/.test(F.row_stride_encoding), "row_stride_encoding does not mention 640");
  const j = B.indexOf(Buffer.from("9b00", "hex"), entry);
  ok(j >= 0 && j < entry + 0x200, "lsls r3,#2 (4 bpp) missing");
  ok(H(F.bytes_per_pixel_shift_file_off) === j, "bytes_per_pixel_shift_file_off");
  ok(F.bytes_per_pixel === 4, "bytes_per_pixel != 4");
  ok(F.packed_dest_buffer.toLowerCase() === "0x2005d0d0",
     `packed dest claimed ${F.packed_dest_buffer}`);
  const destOff = H(F.packed_dest_literal_file_off);
  ok(u32(destOff) === 0x2005d0d0, `packed dest dword at ${hex(destOff)} is ${hex(u32(destOff))}`);
  ok(destOff >= entry && destOff < entry + 0x900, "packed dest literal outside the flush function");
  ok(F.lv_disp_draw_buf && F.lv_disp_draw_buf.determined === false,
     "lv_disp_draw_buf must stay undetermined (no static buffer located)");
  console.log(`G6-FLUSH-REPROVED (entry ${hex(entry)}, stride 640, 4bpp, dest 0x2005d0d0)`);
}

function gAbsence() {
  const A = loadArt();
  const D = H(A.address_model.data_alias_base);
  const T = H(A.address_model.text_base);
  const names = Object.keys(A.absence_check.per_name);
  ok(names.length >= 5, "absence per_name too small");
  let minAlias = Infinity;
  for (const nm of names) {
    const off = findStringStart(nm);
    ok(off >= 0, "absence name missing: " + nm);
    const rec = A.absence_check.per_name[nm];
    const tHits = countLE32((off + T) >>> 0);
    const xHits = countLE32((off + 0x2c000000) >>> 0);
    const dHits = countLE32((off + D) >>> 0);
    ok(tHits === 0, `${nm}: text-base form has ${tHits} hits, claimed absent`);
    ok(xHits === 0, `${nm}: plain-XIP form has ${xHits} hits, claimed absent`);
    ok(dHits >= 1, `${nm}: data-alias form has ${dHits} hits — scanner would be dead if this were 0`);
    ok(rec.text_base_form_word_hits === tHits, `${nm}: text hits`);
    ok(rec.xip_form_word_hits === xHits, `${nm}: xip hits`);
    ok(rec.data_alias_form_word_hits === dHits, `${nm}: alias hits`);
    if (dHits < minAlias) minAlias = dHits;
  }
  ok(A.absence_check.positive_control.min_data_alias_hits === minAlias,
     `min_data_alias_hits claimed ${A.absence_check.positive_control.min_data_alias_hits} != ${minAlias}`);
  ok(minAlias >= 1, "positive control failed: no data-alias hits");
  console.log(`G7-ABSENCE-REPROVED (${names.length} names, min alias hits ${minAlias})`);
}

function gCrossrefs() {
  const A = loadArt();
  ok(existsSync(INV), "ipc_inventory.json missing");
  const inv = JSON.parse(readFileSync(INV, "utf8"));
  ok(inv.entry_count === (inv.entries || []).length, "ipc_inventory entry_count disagrees with entries.length");
  ok(A.cross_references.m55_ipc_inventory.entry_count === inv.entry_count,
     "map entry_count does not match inventory");
  const by = {};
  for (const e of inv.entries) by[e.name] = e;
  const rows = A.cross_references.m55_ipc_inventory.rows || [];
  ok(rows.length === WANT.length, "crossref rows != WANT");
  const missing = [];
  const disagrees = [];
  for (const row of rows) {
    const e = by[row.name];
    const obj = A.B_ipc_objects.find((o) => o.name === row.name);
    const d = obj && obj.descriptors && obj.descriptors[0];
    const nameOff = d ? H(d.name_string_file_off) : -1;
    if (!e) {
      missing.push(row.name);
      ok(row.agrees === false, `${row.name} is missing from inventory but agrees=true`);
      ok(/not in ipc_inventory|thread/i.test(row.note || ""),
         `${row.name}: missing-from-inventory disagreement has no note`);
    } else {
      const invOff = e.file_offset; // decimal of name string
      const agree = invOff === nameOff;
      ok(row.agrees === agree, `${row.name}: agrees claimed ${row.agrees}, measured ${agree}`);
      if (!agree) disagrees.push(row.name);
    }
  }
  ok(missing.includes("lvgl_async") && missing.includes("lvgl_ui") && missing.includes("jbd_thread"),
     "thread-name disagreements were dropped: " + missing.join(","));
  const jbd = A.cross_references.jbd013;
  ok(jbd && /0x10000/.test(jbd.va_base_disagreement), "jbd013 VA disagreement not recorded");
  ok(H(jbd.jbd_thread_entry_word_file_off) === 0x4258c, "jbd word file_off");
  ok(H(jbd.jbd_thread_entry_word) === 0x2c4a9271, "jbd word value");
  ok(u32(0x4258c) === 0x2c4a9271, "image dword at 0x4258c is not 0x2c4a9271");
  const lay = A.cross_references.hud_map_layout_tables;
  const D = H(A.address_model.data_alias_base);
  const claimedFile = (0x3c43c8b4 - D) >>> 0;
  ok(H(lay.va_0x3c43c8b4_file_off) === claimedFile, "layout_tables file_off");
  ok(/flash|not BSS|not bss/i.test(lay.note), "layout_tables BSS disagreement not recorded");
  const extra = A.cross_references.m55_ipc_inventory.inventory_names_not_in_leaf34_want || [];
  ok(extra.includes("lvgl_async_handler_sem") || extra.includes("lv_startup_sync_sem"),
     "inventory-only (failure-log) names were dropped");
  console.log(`G8-CROSSREFS-REPROVED (missing ${missing.join(",")}, extra recorded)`);
}

function gRegen() {
  ok(existsSync(GEN), "generator missing: " + GEN);
  const dir = mkdtempSync(join(tmpdir(), "leaf34-"));
  const out = join(dir, "regen.json");
  try {
    execFileSync("python3", [GEN, "--out", out], { stdio: ["ignore", "pipe", "pipe"] });
    const a = readFileSync(out);
    const b = readFileSync(ART);
    ok(Buffer.compare(a, b) === 0,
       "regenerating from the stock image alone does not reproduce lv_core_map.json byte-for-byte");
  } finally {
    rmSync(dir, { recursive: true, force: true });
  }
  console.log("G9-REGEN-REPROVED");
}

function gLabels() {
  const A = loadArt();
  const inf = A.inferences;
  ok(Array.isArray(inf) && inf.length >= 5, "inferences too short");
  const ids = new Set();
  for (const x of inf) {
    ok(x.id && typeof x.id === "string", "inference missing id");
    ok(x.label === "inference" || x.label === "fact",
       `${x.id}: label must be inference|fact, got ${JSON.stringify(x.label)}`);
    ok(typeof x.claim === "string" && x.claim.trim().length >= 20, `${x.id}: claim missing`);
    ok(typeof x.reason === "string" && x.reason.trim().length >= 8, `${x.id}: reason missing`);
    ok(!ids.has(x.id), `duplicate inference id ${x.id}`);
    ids.add(x.id);
  }
  ok(ids.has("FACT-boundary"), "FACT-boundary missing");
  for (let i = 1; i <= 5; i++) ok(ids.has("INF-" + i), "INF-" + i + " missing");
  console.log(`G10-LABELS-REPROVED (${inf.length} labelled claims)`);
}

const MODES = {
  "--image": gImage, "--bases": gBases, "--strings": gStrings,
  "--descriptors": gDescriptors, "--tick": gTick, "--flush": gFlush,
  "--absence": gAbsence, "--crossrefs": gCrossrefs, "--regen": gRegen,
  "--labels": gLabels,
};
const args = process.argv.slice(2);
if (args.length === 0 || args[0] === "--all") {
  for (const k of Object.keys(MODES)) MODES[k]();
} else {
  const f = MODES[args[0]];
  if (!f) die("unknown mode " + args[0]);
  f();
}
