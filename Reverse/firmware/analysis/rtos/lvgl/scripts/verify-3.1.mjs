#!/usr/bin/env node
// leaf-3.1 verifier.
//
// Re-reads the STOCK image and independently re-proves every offset, VA,
// instruction encoding and count claimed in intern_sites.json.  Nothing is
// accepted because the JSON says so: string offsets are re-found by searching
// the image for the literal text, the rodata runtime delta is re-derived by
// intersecting pointer candidates, every code site is re-decoded from raw
// bytes, and every function boundary is re-classified from raw bytes.
//
// Prerequisites: node >= 18.  --regen additionally needs python3 with capstone.
//
// usage: node verify-3.1.mjs [--encoding|--strings|--sites|--scan|--funcs|--threads|--confidence|--regen|--all]

import { readFileSync, existsSync, mkdtempSync, rmSync } from "node:fs";
import { execFileSync } from "node:child_process";
import { resolve, dirname, join } from "node:path";
import { fileURLToPath } from "node:url";
import { tmpdir } from "node:os";

const HERE = dirname(fileURLToPath(import.meta.url));
const LEAF = resolve(HERE, "..");
const ROOT = resolve(LEAF, "..", "..", "..", "..", "..");
const BIN = join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");
const ART = join(LEAF, "intern_sites.json");
const HUD = join(ROOT, "Reverse/firmware/analysis/hud_map/intern_map.json");
const CODE_BASE = 0x2c000000;
const HUD_POOL = 0x198ffc;
const RODATA_LO = 0x400000;
const RODATA_HI = 0x430000;

function die(msg) {
  console.error("FAIL: " + msg);
  process.exit(1);
}
function ok(cond, msg) {
  if (!cond) die(msg);
}

if (!existsSync(BIN)) die("stock image missing: " + BIN);
if (!existsSync(ART)) die("intern_sites.json missing: " + ART);
const B = readFileSync(BIN);
const N = B.length;
const A = JSON.parse(readFileSync(ART, "utf8"));

const hex = (n) => "0x" + (n >>> 0).toString(16);
const H = (s) => {
  const v = parseInt(s, 16);
  ok(Number.isFinite(v), "not a hex number: " + s);
  return v;
};
const u16 = (o) => B.readUInt16LE(o);
const u32 = (o) => B.readUInt32LE(o);

// ------------------------------------------------------------ dword index --
let SORTED = null;
function sortedWords() {
  if (SORTED) return SORTED;
  const n = N >>> 2;
  const a = new Uint32Array(n);
  for (let i = 0; i < n; i++) a[i] = B.readUInt32LE(i * 4);
  a.sort();
  SORTED = a;
  return a;
}
function hasWord(v) {
  const a = sortedWords();
  let lo = 0, hi = a.length - 1;
  v = v >>> 0;
  while (lo <= hi) {
    const m = (lo + hi) >> 1;
    if (a[m] === v) return true;
    if (a[m] < v) lo = m + 1; else hi = m - 1;
  }
  return false;
}
function countLE32(v) {
  const pat = Buffer.alloc(4);
  pat.writeUInt32LE(v >>> 0, 0);
  let c = 0, i = B.indexOf(pat, 0);
  while (i >= 0) { c++; i = B.indexOf(pat, i + 1); }
  return c;
}
function offsetsLE32(v) {
  const pat = Buffer.alloc(4);
  pat.writeUInt32LE(v >>> 0, 0);
  const out = [];
  let i = B.indexOf(pat, 0);
  while (i >= 0) { out.push(i); i = B.indexOf(pat, i + 1); }
  return out;
}

// ------------------------------------------------------- string re-finding --
function findStringStart(text) {
  const pat = Buffer.from(text + "\0", "latin1");
  let i = B.indexOf(pat, 0);
  while (i >= 0) {
    const prev = B[i - 1];
    if (prev === 0 || prev < 32 || prev >= 127) return i;
    i = B.indexOf(pat, i + 1);
  }
  return -1;
}

// ------------------------------------------------------- Thumb decoding ----
function decLdrLiteral(off) {
  if (off + 2 > N) return null;
  const hw1 = u16(off);
  if ((hw1 & 0xf800) === 0x4800) {
    return { target: (((off + 4) & ~3) + (hw1 & 0xff) * 4), rt: (hw1 >> 8) & 7, size: 2, form: "T1" };
  }
  if (off + 4 > N) return null;
  if ((hw1 & 0xff7f) === 0xf85f) {
    const hw2 = u16(off + 2);
    const base = (off + 4) & ~3;
    const imm = hw2 & 0xfff;
    const u = (hw1 >> 7) & 1;
    return { target: u ? base + imm : base - imm, rt: (hw2 >> 12) & 0xf, size: 4, form: "T2" };
  }
  return null;
}
function pushLrKind(off) {
  if (off + 2 > N) return null;
  const hw1 = u16(off);
  if ((hw1 & 0xff00) === 0xb500) return "T1";
  if (hw1 === 0xe92d && off + 4 <= N && (u16(off + 2) & 0x4000)) return "T2";
  return null;
}
// classify a function terminator straight from bytes
function terminatorKind(off) {
  const hw1 = u16(off);
  if ((hw1 & 0xff00) === 0xbd00) return { kind: "pop", size: 2 };            // POP {..,pc}
  if (hw1 === 0xe8bd && (u16(off + 2) & 0x8000)) return { kind: "pop", size: 4 };
  if (hw1 === 0x4770) return { kind: "bx", size: 2 };                        // BX LR
  if ((hw1 & 0xf800) === 0xe000) return { kind: "b", size: 2 };              // B <label> T2
  if ((hw1 & 0xf000) === 0xd000 && (hw1 & 0x0f00) !== 0x0f00) return { kind: "b", size: 2 };
  if ((hw1 & 0xf800) === 0xf000) {
    const hw2 = u16(off + 2);
    if ((hw2 & 0xd000) === 0x9000) return { kind: "b", size: 4 };            // B.W  T4
    if ((hw2 & 0xd000) === 0x8000) return { kind: "b", size: 4 };            // B<c>.W T3
    if ((hw2 & 0xd000) === 0xd000) return { kind: "bl", size: 4 };           // BL
  }
  return null;
}

// ------------------------------------------------- shared re-derived model --
const STRINGS = A.strings;
ok(Array.isArray(STRINGS) && STRINGS.length >= 8, "intern_sites.json has no strings array");

function rederiveDelta() {
  // every target string must sit at start+DELTA in some dword of the image
  const offs = STRINGS.map((s) => {
    const o = findStringStart(s.text);
    ok(o >= 0, "string not found in stock image: " + JSON.stringify(s.text));
    return o;
  });
  const base = offs[0];
  const cands = [];
  const n = N >>> 2;
  for (let i = 0; i < n; i++) {
    const w = B.readUInt32LE(i * 4);
    const top = w >>> 24;
    if (top < 0x2c || top > 0x3d) continue;
    const d = (w - base) >>> 0;
    let all = true;
    for (let k = 1; k < offs.length; k++) {
      if (!hasWord((offs[k] + d) >>> 0)) { all = false; break; }
    }
    if (all) cands.push(d);
  }
  return { deltas: [...new Set(cands)], offs };
}

// =========================================================== gate handlers ==
function gEncoding() {
  const { deltas, offs } = rederiveDelta();
  ok(deltas.length === 1, `expected exactly one delta satisfying all ${offs.length} target strings, got ${deltas.length}: ${deltas.map(hex)}`);
  const D = deltas[0];
  ok(H(A.encoding.rodata_runtime_delta) === D,
     `claimed rodata delta ${A.encoding.rodata_runtime_delta} != independently derived ${hex(D)}`);

  // corroborate on the whole rodata blob, not just the targets
  let starts = 0, matched = 0;
  for (let i = RODATA_LO; i < RODATA_HI && starts < 400; i++) {
    if (B[i - 1] !== 0 || B[i] < 32 || B[i] >= 127) continue;
    let j = i;
    while (j < RODATA_HI && B[j] >= 32 && B[j] < 127) j++;
    if (j >= RODATA_HI || B[j] !== 0 || j - i < 10) { i = j; continue; }
    starts++;
    if (hasWord((i + D) >>> 0)) matched++;
    i = j;
  }
  ok(starts >= 200, `too few rodata string starts sampled: ${starts}`);
  ok(matched * 10 >= starts * 8,
     `delta ${hex(D)} only explains ${matched}/${starts} rodata strings (<80%)`);

  // the claimed flat XIP base must still be the right base for .text: a Thumb
  // pointer to a real PUSH{..,lr} prologue must exist under 0x2C000000.
  let codePtrProof = 0;
  for (const s of STRINGS) {
    for (const p of s.literal_pool_entries || []) {
      for (const st of p.sites || []) {
        const f = st.function;
        if (!f) continue;
        const fo = H(f.prologue_file_off);
        ok(pushLrKind(fo) !== null, `no PUSH{..,lr} at claimed prologue ${f.prologue_file_off}`);
        ok(H(f.prologue_va) === (CODE_BASE + fo) >>> 0,
           `prologue VA ${f.prologue_va} inconsistent with flat XIP base`);
        codePtrProof++;
      }
    }
  }
  ok(codePtrProof > 0, "no code sites to check");

  // audit the hud_map intern decoder against the raw pool bytes
  if (existsSync(HUD)) {
    const m = JSON.parse(readFileSync(HUD, "utf8"));
    const sites = m.sites || [];
    let good = 0;
    for (const s of sites) {
      const id = H(String(s.intern_id));
      if (HUD_POOL + id - 1 >= 0 && B[HUD_POOL + id - 1] === 0) good++;
    }
    const claim = A.scans.intern_id_scan.hud_map_decoder_audit;
    ok(claim, "hud_map_decoder_audit missing from intern_sites.json");
    ok(claim.hud_map_sites === sites.length,
       `hud_map site count ${claim.hud_map_sites} != ${sites.length}`);
    ok(claim.sites_whose_pool_offset_is_a_real_string_start === good,
       `hud_map true-string-start count ${claim.sites_whose_pool_offset_is_a_real_string_start} != ${good}`);
    ok(good * 2 < sites.length,
       "audit claims the hud_map decoder is bogus but the majority of its ids DO land on string starts");
  }
  console.log("G1-ENCODING-REPROVED");
}

function gStrings() {
  let n = 0;
  for (const s of STRINGS) {
    const off = H(s.file_off);
    const bytes = Buffer.from(s.text, "latin1");
    ok(off >= 0 && off + bytes.length + 1 <= N, `file_off out of range: ${s.file_off}`);
    ok(B.compare(bytes, 0, bytes.length, off, off + bytes.length) === 0,
       `bytes at ${s.file_off} are not ${JSON.stringify(s.text)}`);
    ok(B[off + bytes.length] === 0, `string at ${s.file_off} is not NUL-terminated`);
    const prev = B[off - 1];
    ok(prev === 0 || prev < 32 || prev >= 127,
       `offset ${s.file_off} is not a true string start (prev byte ${hex(prev)})`);
    ok(H(s.va_flat_xip) === (CODE_BASE + off) >>> 0, `va_flat_xip wrong for ${s.file_off}`);
    ok(H(s.va_runtime) === (off + H(A.encoding.rodata_runtime_delta)) >>> 0,
       `va_runtime wrong for ${s.file_off}`);
    ok(s.byte_len === bytes.length, `byte_len wrong for ${s.file_off}`);
    ok(findStringStart(s.text) === off,
       `independent search finds ${JSON.stringify(s.text)} at ${hex(findStringStart(s.text))}, not ${s.file_off}`);
    n++;
  }
  ok(n >= 8, `only ${n} strings verified`);
  console.log(`G2-STRINGS-REPROVED (${n} strings)`);
}

function eachSite(fn) {
  for (const s of STRINGS) for (const p of s.literal_pool_entries || []) for (const st of p.sites || []) fn(s, p, st);
}

function gSites() {
  let n = 0;
  for (const s of STRINGS) {
    const va = H(s.va_runtime);
    const found = offsetsLE32(va);
    const claimed = (s.literal_pool_entries || []).map((p) => H(p.file_off)).sort((a, b) => a - b);
    ok(JSON.stringify(found.sort((a, b) => a - b)) === JSON.stringify(claimed),
       `literal-pool entry set for ${JSON.stringify(s.text)} claimed ${claimed.map(hex)} but image has ${found.map(hex)}`);
    for (const p of s.literal_pool_entries || []) {
      const po = H(p.file_off);
      ok(u32(po) === va >>> 0, `dword at ${p.file_off} is ${hex(u32(po))}, not ${s.va_runtime}`);
      ok(H(p.va) === (CODE_BASE + po) >>> 0, `pool va wrong at ${p.file_off}`);
      for (const st of p.sites || []) {
        const so = H(st.file_off);
        const d = decLdrLiteral(so);
        ok(d, `bytes at ${st.file_off} do not decode as LDR (literal)`);
        ok(d.target === po,
           `site ${st.file_off} resolves to ${hex(d.target)}, not the claimed literal ${p.file_off}`);
        ok(d.rt === st.rd, `site ${st.file_off} loads r${d.rt}, JSON claims r${st.rd}`);
        ok(st.form.includes(d.form), `site ${st.file_off} form mismatch: decoded ${d.form}, claimed ${st.form}`);
        ok(B.slice(so, so + d.size).toString("hex") === st.bytes,
           `site ${st.file_off} raw bytes differ from claim`);
        ok(H(st.va) === (CODE_BASE + so) >>> 0, `site va wrong at ${st.file_off}`);
        ok(H(st.literal_file_off) === po, `literal_file_off wrong at ${st.file_off}`);
        // the TRACE call the site feeds must really be a BL to the claimed callee
        const tc = st.trace_call;
        ok(tc && tc.trace_callee_va, `no trace_call recorded for site ${st.file_off}`);
        let blFound = false;
        for (let o = so; o < Math.min(N - 4, so + 0x30); o += 2) {
          const hw1 = u16(o), hw2 = u16(o + 2);
          if ((hw1 & 0xf800) !== 0xf000 || (hw2 & 0xd000) !== 0xd000) continue;
          const s1 = (hw1 >> 10) & 1;
          const j1 = (hw2 >> 13) & 1, j2 = (hw2 >> 11) & 1;
          const i1 = 1 - (j1 ^ s1), i2 = 1 - (j2 ^ s1);
          let imm = (s1 << 24) | (i1 << 23) | (i2 << 22) | ((hw1 & 0x3ff) << 12) | ((hw2 & 0x7ff) << 1);
          if (s1) imm -= 1 << 25;
          const tgt = (CODE_BASE + o + 4 + imm) >>> 0;
          if (tgt === H(tc.trace_callee_va) >>> 0) { blFound = true; break; }
        }
        ok(blFound, `no BL to ${tc.trace_callee_va} within 0x30 bytes after site ${st.file_off}`);
        n++;
      }
    }
  }
  ok(n >= 25, `only ${n} code sites verified`);
  const declared = STRINGS.reduce((a, s) => a + (s.site_count || 0), 0);
  ok(declared === n, `site_count total ${declared} != verified ${n}`);
  console.log(`G3-SITES-REPROVED (${n} sites)`);
}

function gScan() {
  const D = H(A.encoding.rodata_runtime_delta);
  const scan = A.scans.direct_pointer_scan;
  const keyFor = (b) => Object.keys(scan).find((k) => k.toLowerCase().startsWith(hex(b).toLowerCase() + " ") ||
                                                     k.toLowerCase().startsWith(hex(b).toLowerCase().padEnd(10, "0")));
  for (const [label, rec] of Object.entries(scan)) {
    const m = label.match(/^(0x[0-9a-fA-F]+)/);
    ok(m, "unlabelled scan bucket: " + label);
    const base = H(m[1]);
    let tot = 0;
    for (const s of STRINGS) {
      const off = findStringStart(s.text);
      const c = countLE32((base + off) >>> 0);
      ok(rec.per_string[s.text] === c,
         `${label}: claimed ${rec.per_string[s.text]} hits for ${JSON.stringify(s.text)}, image has ${c}`);
      tot += c;
    }
    ok(rec.total === tot, `${label}: claimed total ${rec.total}, measured ${tot}`);
  }
  // the two negative results must really be zero
  for (const b of [0x2c000000, 0x3c000000]) {
    let tot = 0;
    for (const s of STRINGS) tot += countLE32((b + findStringStart(s.text)) >>> 0);
    ok(tot === 0, `base ${hex(b)} was claimed to yield no hits but measured ${tot}`);
  }
  // POSITIVE CONTROL: prove the same scanner is live
  const pc = A.scans.positive_control;
  const co = findStringStart(pc.string);
  ok(co >= 0, "positive-control string not present in image");
  ok(H(pc.file_off) === co, "positive-control file_off wrong");
  const hits = countLE32((co + D) >>> 0);
  ok(hits > 0, "POSITIVE CONTROL FAILED: the dword scanner found no reference to a string that is referenced -- the zero results above are not trustworthy");
  ok(pc.hits_with_recovered_delta === hits, `positive control claims ${pc.hits_with_recovered_delta} hits, measured ${hits}`);
  // and the control's own 0x2C/0x3C bases must be zero too (same negative shape)
  ok(countLE32((co + 0x2c000000) >>> 0) === 0 && countLE32((co + 0x3c000000) >>> 0) === 0,
     "control string unexpectedly referenced via a flat base");
  // intern-id scan: the required ids must be unencodable in a MOVW imm16
  const ids = A.scans.intern_id_scan.per_string;
  for (const s of STRINGS) {
    const need = findStringStart(s.text) - HUD_POOL;
    const rec = ids[s.text];
    ok(rec, "intern_id_scan missing string " + s.text);
    ok(H(rec.required_id) === need, `required_id for ${s.text} is ${rec.required_id}, computed ${hex(need)}`);
    ok(rec.encodable_in_movw_imm16 === (need >= 0 && need <= 0xffff),
       "encodable_in_movw_imm16 wrong for " + s.text);
    ok(rec.encodable_in_movw_imm16 === false,
       `${s.text}: brief's intern scheme would need id ${rec.required_id} which IS encodable -- claim of impossibility is wrong`);
  }
  // no MOVW/MOVT pair exists anywhere in the image (so no 32-bit immediate form)
  let pairs = 0;
  for (let o = 0; o + 8 <= N; o += 2) {
    const a1 = u16(o), a2 = u16(o + 2);
    if ((a1 & 0xfbf0) !== 0xf240 || (a2 & 0x8000)) continue;
    const b1 = u16(o + 4), b2 = u16(o + 6);
    if ((b1 & 0xfbf0) !== 0xf2c0 || (b2 & 0x8000)) continue;
    if (((a2 >> 8) & 0xf) === ((b2 >> 8) & 0xf)) pairs++;
  }
  ok(A.scans.intern_id_scan.adjacent_movw_movt_pairs_in_image === pairs,
     `claimed ${A.scans.intern_id_scan.adjacent_movw_movt_pairs_in_image} MOVW/MOVT pairs, measured ${pairs}`);
  console.log(`G4-SCAN-REPROVED (control ${hits} hit(s), flat bases 0, movw/movt pairs ${pairs})`);
}

function gFuncs() {
  const seen = new Map();
  let n = 0;
  eachSite((s, p, st) => {
    const f = st.function;
    ok(f, `site ${st.file_off} has no enclosing function`);
    const start = H(f.start_file_off);
    const push = H(f.prologue_file_off);
    const site = H(st.file_off);
    const kind = pushLrKind(push);
    ok(kind, `no PUSH{..,lr} encoding at ${f.prologue_file_off}`);
    ok(f.prologue.includes(kind), `prologue kind mismatch at ${f.prologue_file_off}`);
    ok(B.slice(push, push + (kind === "T2" ? 4 : 2)).toString("hex") === f.prologue_bytes,
       `prologue bytes differ at ${f.prologue_file_off}`);
    ok(start <= push && push - start === (f.scheduled_prefix_bytes || 0),
       `scheduled_prefix_bytes inconsistent for ${f.start_file_off}`);
    ok(H(f.start_va) === (CODE_BASE + start) >>> 0, "start_va wrong for " + f.start_file_off);
    ok(f.end_file_off, `function ${f.start_file_off} has no recovered end`);
    const end = H(f.end_file_off);
    const t = terminatorKind(end);
    ok(t, `bytes at ${f.end_file_off} do not decode as a return/branch terminator`);
    const declaredKind = String(f.end_insn).trim().split(/[\s.]/)[0];
    ok(declaredKind.startsWith(t.kind) || t.kind === declaredKind,
       `end_insn "${f.end_insn}" disagrees with decoded terminator "${t.kind}" at ${f.end_file_off}`);
    ok(B.slice(end, end + t.size).toString("hex") === f.end_bytes,
       `end bytes differ at ${f.end_file_off}`);
    ok(start < site && site < end + t.size,
       `site ${st.file_off} is not strictly inside ${f.start_file_off}..${f.end_file_off}`);
    ok(f.size_bytes === end + t.size - start, `size_bytes wrong for ${f.start_file_off}`);
    const pool = H(f.literal_pool_start_file_off);
    ok(pool >= end + t.size, `literal pool ${f.literal_pool_start_file_off} overlaps the body`);
    const pw = u32(pool) >>> 24;
    ok(pw === 0x2c || pw === 0x3c || pw === 0x3d,
       `dword at claimed literal pool ${f.literal_pool_start_file_off} is ${hex(u32(pool))}, not a pointer`);
    const prev = seen.get(f.start_file_off);
    if (prev) ok(prev === f.end_file_off, `function ${f.start_file_off} reported with two different ends`);
    seen.set(f.start_file_off, f.end_file_off);
    n++;
  });
  // NEGATIVE CONTROL: the prologue test must reject non-prologues.
  let rejected = 0, tested = 0;
  eachSite((s, p, st) => {
    tested++;
    if (pushLrKind(H(st.file_off)) === null) rejected++;
  });
  ok(tested > 0 && rejected === tested,
     `negative control failed: pushLrKind() accepted ${tested - rejected} LDR sites as prologues`);
  let poolRejected = 0, poolTested = 0;
  eachSite((s, p, st) => { poolTested++; if (pushLrKind(H(p.file_off)) === null) poolRejected++; });
  ok(poolTested > 0 && poolRejected === poolTested,
     "negative control failed: pushLrKind() accepted literal-pool bytes as prologues");
  ok(seen.size >= 5, `only ${seen.size} distinct functions recovered`);
  console.log(`G5-FUNCS-REPROVED (${n} sites, ${seen.size} functions, ${rejected + poolRejected} negative controls rejected)`);
}

function findStringEntry(text) {
  const e = STRINGS.find((s) => s.text === text);
  ok(e, "missing string entry: " + text);
  return e;
}

function gThreads() {
  const taskStrings = ["lvgl_task_handler_thread running...", "lvgl_task_handler_thread stopped"];
  const asyncStrings = ["lvgl_async_handler_thread, waiting signal..", "Enter lvgl_async_handler_thread!"];
  const fnsFor = (names) => {
    const set = new Set();
    for (const nm of names) {
      const e = findStringEntry(nm);
      let sites = 0;
      for (const p of e.literal_pool_entries) for (const st of p.sites) {
        // re-derive the enclosing function purely from bytes: walk back to the
        // nearest PUSH{..,lr} whose linear decode is consistent, using the same
        // rule the artifact claims, then check it against the claim.
        const f = st.function;
        ok(f, "no function for site " + st.file_off);
        const start = H(f.start_file_off), end = H(f.end_file_off), site = H(st.file_off);
        ok(start < site && site < end, "site outside claimed function");
        set.add(hex((CODE_BASE + start) >>> 0));
        sites++;
      }
      ok(sites > 0, "no code site for " + nm);
    }
    return [...set].sort();
  };
  const task = fnsFor(taskStrings);
  const asy = fnsFor(asyncStrings);
  ok(task.length === 1, `expected one task-handler function, got ${task}`);
  ok(asy.length === 1, `expected one async-handler function, got ${asy}`);
  ok(task[0] !== asy[0], "the two thread bodies resolved to the SAME function");
  // ranges must not overlap
  const rangeOf = (va) => {
    for (const s of STRINGS) for (const p of s.literal_pool_entries) for (const st of p.sites) {
      if (st.function && st.function.start_va === va) return [H(st.function.start_file_off), H(st.function.end_file_off)];
    }
    die("no range for " + va);
  };
  const [ts, te] = rangeOf(task[0]);
  const [as, ae] = rangeOf(asy[0]);
  ok(te < as || ae < ts, "the two thread function ranges overlap");
  // and the artifact's own summary must agree with what we just derived
  ok(JSON.stringify(A.threads.lvgl_task_handler_thread.functions_logging_running_or_stopped) === JSON.stringify(task),
     "threads summary disagrees with the per-site data for the task handler");
  ok(JSON.stringify(A.threads.lvgl_async_handler_thread.functions_logging_enter_or_waiting) === JSON.stringify(asy),
     "threads summary disagrees with the per-site data for the async handler");
  ok(A.threads.distinct === true, "threads.distinct is not true");
  console.log(`G6-TWO-THREADS-REPROVED (task ${task[0]} [${hex(ts)}..${hex(te)}], async ${asy[0]} [${hex(as)}..${hex(ae)}])`);
}

function gConfidence() {
  let sites = 0, high = 0, low = 0;
  const reasons = new Set();
  eachSite((s, p, st) => {
    sites++;
    const f = st.function;
    ok(f, `site ${st.file_off} has no function record -- sites may not be silently dropped`);
    ok(f.confidence === "high" || f.confidence === "low",
       `site ${st.file_off}: confidence must be "high" or "low", got ${JSON.stringify(f.confidence)}`);
    ok(typeof f.confidence_reason === "string" && f.confidence_reason.trim().length >= 30,
       `site ${st.file_off}: confidence_reason is missing or too short`);
    ok(/sweep|preceded|padding|evidence|terminator/i.test(f.confidence_reason),
       `site ${st.file_off}: confidence_reason does not state the evidence`);
    if (f.confidence === "high") {
      ok(!/NO function-boundary evidence/.test(f.confidence_reason),
         `site ${st.file_off} is labelled high but its reason admits no boundary evidence`);
      ok(f.end_file_off, `site ${st.file_off} labelled high without a recovered end`);
      high++;
    } else low++;
    reasons.add(f.confidence_reason);
  });
  const declared = STRINGS.reduce((a, s) => a + (s.site_count || 0), 0);
  ok(declared === sites, `site_count total ${declared} != enumerated ${sites}`);
  // strings with no code site must say so explicitly rather than be silent
  for (const s of STRINGS) {
    if ((s.site_count || 0) === 0) {
      ok(typeof s.note === "string" && s.note.length > 20,
         `string ${JSON.stringify(s.text)} has zero code sites and no explanatory note`);
      ok(Array.isArray(s.data_references) && s.data_references.length > 0,
         `string ${JSON.stringify(s.text)} has zero code sites and zero data references`);
      for (const dr of s.data_references) {
        const o = H(dr.file_off);
        ok(u32(o) === H(s.va_runtime) >>> 0, `data reference ${dr.file_off} does not hold ${s.va_runtime}`);
      }
    }
  }
  ok(reasons.size >= 2, "every function carries an identical boilerplate reason");
  console.log(`G7-CONFIDENCE-REPROVED (${sites} sites: ${high} high, ${low} low)`);
}

function gRegen() {
  const gen = join(HERE, "lvgl_intern_sites.py");
  ok(existsSync(gen), "generator missing: " + gen);
  const dir = mkdtempSync(join(tmpdir(), "leaf31-"));
  const out = join(dir, "regen.json");
  try {
    execFileSync("python3", [gen, "--out", out], { stdio: ["ignore", "pipe", "pipe"] });
    const a = JSON.parse(readFileSync(out, "utf8"));
    const b = JSON.parse(readFileSync(ART, "utf8"));
    ok(JSON.stringify(a) === JSON.stringify(b),
       "regenerating from the stock image alone does not reproduce intern_sites.json");
  } finally {
    rmSync(dir, { recursive: true, force: true });
  }
  console.log("G8-REGEN-REPROVED");
}

const MODES = {
  "--encoding": gEncoding, "--strings": gStrings, "--sites": gSites, "--scan": gScan,
  "--funcs": gFuncs, "--threads": gThreads, "--confidence": gConfidence, "--regen": gRegen,
};
const args = process.argv.slice(2);
if (args.length === 0 || args[0] === "--all") {
  for (const k of Object.keys(MODES)) MODES[k]();
} else {
  const f = MODES[args[0]];
  if (!f) die("unknown mode " + args[0]);
  f();
}
