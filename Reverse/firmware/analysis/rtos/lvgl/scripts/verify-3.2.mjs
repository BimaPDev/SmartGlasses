#!/usr/bin/env node
// leaf-3.2 verifier.
//
// Re-reads the STOCK image and independently re-proves every offset, VA,
// osThreadAttr_t field, LDR/BL create site, and peeler claim in
// thread_create_sites.json. Both address bases are re-derived from image
// bytes; lv_core_map.json is never consulted as proof.
//
// Prerequisites: node >= 18.  --regen additionally needs python3.
//
// usage: node verify-3.2.mjs [--image|--bases|--strings|--attrs|--entries
//                             |--creates|--distinct|--regen|--labels|--all]

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
const ART = join(LEAF, "thread_create_sites.json");
const GEN = join(HERE, "find_thread_create.py");
const WANT = ["lvgl_async", "lvgl_ui"];

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
  if (!existsSync(ART)) die("thread_create_sites.json missing: " + ART);
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

function countTrueStarts(text) {
  const pat = Buffer.from(text + "\0", "latin1");
  let n = 0, i = B.indexOf(pat, 0);
  while (i >= 0) {
    if (isStrStart(i, 2)) n++;
    i = B.indexOf(pat, i + 1);
  }
  return n;
}

function countLE32(v) {
  const pat = Buffer.alloc(4);
  pat.writeUInt32LE(v >>> 0, 0);
  let c = 0, i = B.indexOf(pat, 0);
  while (i >= 0) { c++; i = B.indexOf(pat, i + 1); }
  return c;
}

function findLE32(v) {
  const pat = Buffer.alloc(4);
  pat.writeUInt32LE(v >>> 0, 0);
  const out = [];
  let i = B.indexOf(pat, 0);
  while (i >= 0) { out.push(i); i = B.indexOf(pat, i + 1); }
  return out;
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
  // Score like the Python generator: sort by hits, runner-up is 0 when unique.
  const scores = [...inter].map((d) => [hits.get(d) || 0, d]).sort((a, b) => b[0] - a[0]);
  const bestHits = scores[0][0];
  const best = scores[0][1];
  const second = scores.length > 1 ? scores[1][0] : 0;
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

function inRam(v) {
  return (v >= 0x20000000 && v < 0x20200000) || (v >= 0x3c000000 && v < 0x3e000000);
}

function findLdrLiteralTo(pool) {
  const out = [];
  const lo = Math.max(0, pool - 0x1010);
  for (let off = lo; off < pool; off += 2) {
    const hw = u16(off);
    if ((hw & 0xf800) !== 0x4800) continue;
    const tgt = ((off + 4) & ~3) + (hw & 0xff) * 4;
    if (tgt === pool) out.push({ site: off, rt: (hw >> 8) & 7 });
  }
  return out;
}

function threadByName(A, name) {
  const t = (A.threads || []).find((x) => x.name === name);
  ok(t, "thread missing from artifact: " + name);
  return t;
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
  ok(A.address_model.derivation_data.runner_up_hits === d.second,
     `data runner_up claimed ${A.address_model.derivation_data.runner_up_hits} != ${d.second}`);
  ok(A.address_model.derivation_data.intersection_size === d.interSize,
     `intersection_size claimed ${A.address_model.derivation_data.intersection_size} != ${d.interSize}`);
  ok(A.address_model.derivation_text.pairs_tested === pairs.length,
     `pairs_tested claimed ${A.address_model.derivation_text.pairs_tested} != ${pairs.length}`);
  ok(A.address_model.derivation_text.winner_hits === t.hits,
     `text winner_hits claimed ${A.address_model.derivation_text.winner_hits} != ${t.hits}`);
  ok(A.address_model.derivation_text.runner_up_hits === t.second,
     `text runner_up claimed ${A.address_model.derivation_text.runner_up_hits} != ${t.second}`);
  ok(t.hits > t.second && t.hits * 2 > pairs.length,
     `text-base winner ${t.hits}/${pairs.length} is not a majority over runner-up ${t.second}`);
  console.log(`G2-BASES-REPROVED (text ${hex(t.T)} data ${hex(d.D)}, ${t.hits}/${pairs.length} prologue hits)`);
}

function gStrings() {
  const A = loadArt();
  const D = H(A.address_model.data_alias_base);
  ok(A.threads && A.threads.length === WANT.length, "threads length != WANT");
  for (let i = 0; i < WANT.length; i++) {
    const name = WANT[i];
    const t = threadByName(A, name);
    ok(t.name === name, `threads[${i}] order/name`);
    const off = findStringStart(name);
    ok(off >= 0, "name string missing: " + name);
    ok(countTrueStarts(name) === 1, `${name}: true-start count != 1`);
    ok(H(t.name_string_file_off) === off, `${name}: name_string_file_off`);
    ok(H(t.name_string_va) === ((off + D) >>> 0), `${name}: name_string_va`);
    ok(t.name_true_start_count === 1, `${name}: name_true_start_count`);
    const bytes = Buffer.from(name, "ascii");
    ok(B.compare(bytes, 0, bytes.length, off, off + bytes.length) === 0, `${name}: bytes`);
    ok(B[off + bytes.length] === 0, `${name}: not NUL-terminated`);
    ok(isStrStart(off, 2), `${name}: not a true string start`);
  }
  console.log("G3-STRINGS-REPROVED");
}

function gAttrs() {
  const A = loadArt();
  const D = H(A.address_model.data_alias_base);
  const T = H(A.address_model.text_base);
  for (const name of WANT) {
    const t = threadByName(A, name);
    const nameOff = findStringStart(name);
    const nameVa = (nameOff + D) >>> 0;
    const attr = t.osThreadAttr_t;
    ok(attr && attr.struct === "osThreadAttr_t", `${name}: struct`);
    const r = H(attr.descriptor_file_off);
    ok(u32(r) === nameVa, `${name}: dword at descriptor is not name VA`);
    ok(H(attr.descriptor_va) === ((r + D) >>> 0), `${name}: descriptor_va`);
    ok(Array.isArray(attr.raw_words) && attr.raw_words.length === 9, `${name}: raw_words`);
    const w = [];
    for (let k = 0; k < 9; k++) {
      w.push(u32(r + 4 * k));
      ok(H(attr.raw_words[k]) === w[k], `${name}: raw_words[${k}]`);
    }
    ok(H(attr.fields["+0x00 name"]) === w[0], `${name}: +0x00 name`);
    ok(H(attr.fields["+0x10 stack_mem"]) === w[4], `${name}: stack_mem`);
    ok(inRam(w[4]), `${name}: stack_mem not in RAM`);
    const stackSize = parseInt(String(attr.fields["+0x14 stack_size"]).split(" ")[0], 16);
    const prio = parseInt(String(attr.fields["+0x18 priority"]).split(" ")[0], 16);
    ok(stackSize === w[5], `${name}: stack_size`);
    ok(prio === w[6], `${name}: priority`);
    ok(w[5] >= 0x100 && w[5] <= 0x40000, `${name}: stack_size range`);
    ok(w[6] >= 1 && w[6] <= 56, `${name}: priority range`);
    // preceding packed entry must be Thumb-odd prologue under T
    const prev = u32(r - 4);
    ok((prev & 1) && (prev >>> 24) === 0x2c, `${name}: packed entry not Thumb-odd 0x2c*`);
    ok(isPrologue(((prev & ~1) - T) >>> 0), `${name}: packed entry not a prologue`);
  }
  console.log("G4-ATTRS-REPROVED");
}

function gEntries() {
  const A = loadArt();
  const T = H(A.address_model.text_base);
  for (const name of WANT) {
    const t = threadByName(A, name);
    const p = t.packed_def;
    const packedOff = H(p.file_off);
    const entryWord = u32(packedOff);
    ok(H(p.entry_word) === entryWord, `${name}: entry_word`);
    ok((entryWord & 1) === 1, `${name}: entry word not Thumb-odd`);
    const entryFile = ((entryWord & ~1) - T) >>> 0;
    ok(H(p.entry_fn_file_off) === entryFile, `${name}: entry_fn_file_off`);
    ok(H(p.entry_fn_va) === ((entryWord & ~1) >>> 0), `${name}: entry_fn_va`);
    ok(isPrologue(entryFile), `${name}: entry is not a PUSH{..,lr} prologue`);
    const pro = B.slice(entryFile, entryFile + 4).toString("hex");
    ok(p.prologue_bytes === pro, `${name}: prologue_bytes claimed ${p.prologue_bytes} != ${pro}`);
  }
  console.log("G5-ENTRIES-REPROVED");
}

function gCreates() {
  const A = loadArt();
  const D = H(A.address_model.data_alias_base);
  const T = H(A.address_model.text_base);
  const wrap = A.osThreadNew_wrapper;
  ok(wrap, "osThreadNew_wrapper missing");
  const peelerFile = H(wrap.peeler_file_off);
  const peelerVa = H(wrap.peeler_va);
  ok(peelerVa === ((peelerFile + T) >>> 0), "peeler_va != file + text_base");
  const sig = Buffer.from(wrap.peeler_signature_hex, "hex");
  ok(sig.length === 8, "peeler signature length");
  ok(B.compare(sig, 0, 8, peelerFile, peelerFile + 8) === 0, "peeler signature bytes");
  const ostVa = decodeBl(peelerFile + 8, T);
  ok(ostVa !== null, "peeler branch decode failed");
  ok(H(wrap.osThreadNew_va) === ostVa, "osThreadNew_va");
  ok(H(wrap.osThreadNew_file_off) === ((ostVa - T) >>> 0), "osThreadNew_file_off");

  const peelerTargets = new Set();
  for (const name of WANT) {
    const t = threadByName(A, name);
    const packed = t.packed_def;
    const packedOff = H(packed.file_off);
    const packedVa = (packedOff + D) >>> 0;
    const attrVa = (H(t.osThreadAttr_t.descriptor_file_off) + D) >>> 0;
    ok(H(packed.va) === packedVa, `${name}: packed va`);

    const packedHits = findLE32(packedVa);
    const attrHits = findLE32(attrVa);
    ok(packedHits.length === 1, `${name}: packed-def VA hits ${packedHits.length} != 1`);
    ok(attrHits.length === 0, `${name}: attr-alone VA hits ${attrHits.length} != 0`);
    ok(packed.literal_pool_hits === 1, `${name}: literal_pool_hits`);
    ok(packed.attr_alone_va_hits === 0, `${name}: attr_alone_va_hits`);
    ok(H(packed.literal_pool_file_off) === packedHits[0], `${name}: literal_pool_file_off`);

    // Positive control: the packed-def scanner is live because it found the hit.
    ok(countLE32(packedVa) === 1, `${name}: countLE32 packed != 1`);

    const ldrs = findLdrLiteralTo(packedHits[0]);
    ok(ldrs.length === 1, `${name}: LDR(literal) count ${ldrs.length} != 1`);
    const { site, rt } = ldrs[0];
    ok(rt === 0, `${name}: LDR rt != r0`);
    const cs = t.create_site;
    ok(H(cs.ldr_literal_file_off) === site, `${name}: ldr_literal_file_off`);
    ok(H(cs.ldr_literal_va) === ((site + T) >>> 0), `${name}: ldr_literal_va`);
    ok(cs.ldr_rt === 0, `${name}: ldr_rt`);
    ok(cs.ldr_bytes === B.slice(site, site + 2).toString("hex"), `${name}: ldr_bytes`);

    const blSite = site + 2;
    const blTgt = decodeBl(blSite, T);
    ok(blTgt !== null, `${name}: BL after LDR missing`);
    ok(H(cs.bl_file_off) === blSite, `${name}: bl_file_off`);
    ok(H(cs.bl_target_va) === blTgt, `${name}: bl_target_va`);
    ok(blTgt === peelerVa, `${name}: BL does not target shared peeler`);
    peelerTargets.add(blTgt);

    const helper = H(cs.helper_prologue_file_off);
    ok(isPrologue(helper), `${name}: helper prologue`);
    ok(helper <= site && site - helper < 0x200, `${name}: helper not enclosing`);
    ok(cs.helper_prologue_bytes === B.slice(helper, helper + 4).toString("hex"),
       `${name}: helper_prologue_bytes`);
  }
  ok(peelerTargets.size === 1, "create sites do not share one peeler");
  console.log(`G6-CREATES-REPROVED (peeler ${hex(peelerFile)} -> osThreadNew ${hex(H(wrap.osThreadNew_file_off))})`);
}

function gDistinct() {
  const A = loadArt();
  const a = threadByName(A, "lvgl_async");
  const u = threadByName(A, "lvgl_ui");
  ok(a.name_string_file_off !== u.name_string_file_off, "name strings not distinct");
  ok(a.packed_def.entry_fn_file_off !== u.packed_def.entry_fn_file_off, "entries not distinct");
  ok(a.osThreadAttr_t.fields["+0x10 stack_mem"] !== u.osThreadAttr_t.fields["+0x10 stack_mem"],
     "stack buffers not distinct");
  const asz = parseInt(String(a.osThreadAttr_t.fields["+0x14 stack_size"]).split(" ")[0], 16);
  const usz = parseInt(String(u.osThreadAttr_t.fields["+0x14 stack_size"]).split(" ")[0], 16);
  ok(asz !== usz, "stack sizes not distinct");
  ok(a.create_site.ldr_literal_file_off !== u.create_site.ldr_literal_file_off,
     "create sites not distinct");
  console.log(`G7-DISTINCT-REPROVED (async stack ${hex(asz)}, ui stack ${hex(usz)})`);
}

function gRegen() {
  ok(existsSync(GEN), "generator missing: " + GEN);
  const dir = mkdtempSync(join(tmpdir(), "leaf32-"));
  const out = join(dir, "regen.json");
  try {
    execFileSync("python3", [GEN, "--out", out], { stdio: ["ignore", "pipe", "pipe"] });
    const a = readFileSync(out);
    const b = readFileSync(ART);
    ok(Buffer.compare(a, b) === 0,
       "regenerating from the stock image alone does not reproduce thread_create_sites.json byte-for-byte");
  } finally {
    rmSync(dir, { recursive: true, force: true });
  }
  console.log("G8-REGEN-REPROVED");
}

function gLabels() {
  const A = loadArt();
  const inf = A.inferences;
  ok(Array.isArray(inf) && inf.length >= 4, "inferences too short");
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
  for (let i = 1; i <= 3; i++) ok(ids.has("INF-" + i), "INF-" + i + " missing");
  console.log(`G9-LABELS-REPROVED (${inf.length} labelled claims)`);
}

const MODES = {
  "--image": gImage, "--bases": gBases, "--strings": gStrings,
  "--attrs": gAttrs, "--entries": gEntries, "--creates": gCreates,
  "--distinct": gDistinct, "--regen": gRegen, "--labels": gLabels,
};
const args = process.argv.slice(2);
if (args.length === 0 || args[0] === "--all") {
  for (const k of Object.keys(MODES)) MODES[k]();
} else {
  const f = MODES[args[0]];
  if (!f) die("unknown mode " + args[0]);
  f();
}
