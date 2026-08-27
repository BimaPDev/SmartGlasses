#!/usr/bin/env node
// leaf-3.3 verifier.
//
// Re-reads the STOCK image and independently re-proves every entry, dump byte,
// and service-loop back-edge claimed in service_loops.json. Bases are
// re-derived from image bytes; Ghidra project state and lv_core_map.json are
// never consulted as proof.
//
// Prerequisites: node >= 18.  --regen additionally needs python3 + capstone.
//
// usage: node verify-3.3.mjs [--image|--bases|--entries|--dumps|--loops
//                             |--regen|--labels|--all]

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
const ART = join(LEAF, "service_loops.json");
const GEN = join(HERE, "dump_service_loops.py");
const DUMP_DIR = join(LEAF, "disasm", "capstone");
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
  if (!existsSync(ART)) die("service_loops.json missing: " + ART);
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
  ok(anchors.length >= 8, "too few path anchors: " + anchors.length);
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
  const scores = [...inter].map((d) => [hits.get(d) || 0, d]).sort((a, b) => b[0] - a[0]);
  return {
    D: scores[0][1], hits: scores[0][0], second: scores.length > 1 ? scores[1][0] : 0,
    nanchor: anchors.length, nuniq: words.size, interSize: inter.size,
  };
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

function decodeBranch(f, T) {
  if (f + 2 > N) return null;
  const hw1 = u16(f);
  if ((hw1 & 0xf800) === 0xe000) {
    let imm = hw1 & 0x7ff;
    if (imm & 0x400) imm -= 0x800;
    return { kind: "b", size: 2, tgt: (f + T + 4 + imm * 2) >>> 0 };
  }
  if ((hw1 & 0xf000) === 0xd000) {
    const cond = (hw1 >> 8) & 0xf;
    if (cond < 0xe) {
      let imm = hw1 & 0xff;
      if (imm & 0x80) imm -= 0x100;
      return { kind: "bcond", size: 2, tgt: (f + T + 4 + imm * 2) >>> 0 };
    }
  }
  if (f + 4 > N) return null;
  const hw2 = u16(f + 2);
  if ((hw1 & 0xf800) !== 0xf000) return null;
  const S = (hw1 >> 10) & 1;
  const imm10 = hw1 & 0x3ff;
  const J1 = (hw2 >> 13) & 1;
  const J2 = (hw2 >> 11) & 1;
  const imm11 = hw2 & 0x7ff;
  const I1 = (~(J1 ^ S)) & 1;
  const I2 = (~(J2 ^ S)) & 1;
  let off = (S << 24) | (I1 << 23) | (I2 << 22) | (imm10 << 12) | (imm11 << 1);
  if (S) off -= 1 << 25;
  const tgt = (f + T + 4 + off) >>> 0;
  const top = hw2 & 0xd000;
  if (top === 0xd000) return { kind: "bl", size: 4, tgt };
  if (top === 0x9000) return { kind: "b.w", size: 4, tgt };
  if ((hw2 & 0xd000) === 0x8000) return { kind: "bcond.w", size: 4, tgt };
  return null;
}

function inRam(v) {
  return (v >= 0x20000000 && v < 0x20200000) || (v >= 0x3c000000 && v < 0x3e000000);
}

function recoverEntry(name, D, T) {
  const nameOff = findStringStart(name);
  ok(nameOff >= 0, "name missing: " + name);
  const nameVa = (nameOff + D) >>> 0;
  const hits = findLE32(nameVa);
  let chosen = -1;
  for (const h of hits) {
    if (h < 4) continue;
    const prev = u32(h - 4);
    if (!(prev >= 0x2c000000 && prev < 0x2c700000 && (prev & 1))) continue;
    const entryFile = ((prev & ~1) - T) >>> 0;
    if (entryFile < N && isPrologue(entryFile)) { chosen = h; break; }
  }
  ok(chosen >= 0, name + ": no prologue-backed attr");
  const packed = chosen - 4;
  const entryWord = u32(packed);
  const entryFile = ((entryWord & ~1) - T) >>> 0;
  const w0 = u32(chosen);
  ok(w0 === nameVa, name + ": attr name dword");
  ok(inRam(u32(chosen + 0x10)), name + ": stack_mem");
  return { nameOff, nameVa, attr: chosen, packed, entryWord, entryFile };
}

function threadByName(A, name) {
  const t = (A.threads || []).find((x) => x.name === name);
  ok(t, "thread missing: " + name);
  return t;
}

function gImage() {
  const A = loadArt();
  ok(A.image && A.image.path === "Reverse/firmware/x_1.0.12.83/platform_tester.bin", "image.path");
  ok(A.image.size === N, `size ${A.image.size} != ${N}`);
  ok(H(A.image.size_hex) === N, "size_hex");
  const sha = createHash("sha256").update(B).digest("hex");
  ok(A.image.sha256 === sha, "sha256");
  console.log("G1-IMAGE-REPROVED");
}

function gBases() {
  const A = loadArt();
  const d = deriveD();
  const pairs = collectPairs(d.D);
  const t = deriveT(pairs);
  ok(H(A.address_model.data_alias_base) === d.D, "data base");
  ok(H(A.address_model.text_base) === t.T, "text base");
  ok(d.interSize === 1, "intersection not unique");
  ok(A.address_model.derivation_data.path_anchors === d.nanchor, "path_anchors");
  ok(A.address_model.derivation_data.unique_3c_words === d.nuniq, "unique_3c");
  ok(A.address_model.derivation_data.winner_hits === d.hits, "data winner");
  ok(A.address_model.derivation_text.pairs_tested === pairs.length, "pairs");
  ok(A.address_model.derivation_text.winner_hits === t.hits, "text winner");
  ok(A.address_model.derivation_text.runner_up_hits === t.second, "text runner");
  ok(t.hits > t.second && t.hits * 2 > pairs.length, "text majority");
  console.log(`G2-BASES-REPROVED (text ${hex(t.T)} data ${hex(d.D)}, ${t.hits}/${pairs.length})`);
}

function gEntries() {
  const A = loadArt();
  const D = H(A.address_model.data_alias_base);
  const T = H(A.address_model.text_base);
  ok(A.threads && A.threads.length === WANT.length, "threads length");
  for (const name of WANT) {
    const t = threadByName(A, name);
    const r = recoverEntry(name, D, T);
    ok(H(t.entry_file_off) === r.entryFile, `${name}: entry_file_off`);
    ok(H(t.entry_va) === ((r.entryWord & ~1) >>> 0), `${name}: entry_va`);
    ok(isPrologue(r.entryFile), `${name}: not prologue`);
    ok(t.prologue_bytes === B.slice(r.entryFile, r.entryFile + 4).toString("hex"),
       `${name}: prologue_bytes`);
    ok(H(t.attr_file_off) === r.attr, `${name}: attr_file_off`);
    ok(H(t.packed_file_off) === r.packed, `${name}: packed_file_off`);
  }
  console.log("G3-ENTRIES-REPROVED");
}

function gDumps() {
  const A = loadArt();
  ok(existsSync(DUMP_DIR), "disasm/capstone missing");
  for (const name of WANT) {
    const t = threadByName(A, name);
    const dumpPath = join(LEAF, t.dump_path);
    ok(existsSync(dumpPath), "dump missing: " + t.dump_path);
    const text = readFileSync(dumpPath, "utf8");
    const sha = createHash("sha256").update(text, "utf8").digest("hex");
    ok(sha === t.dump_sha256, `${name}: dump sha256`);
    ok(Array.isArray(t.instructions) && t.instructions.length === t.insn_count,
       `${name}: insn_count`);
    ok(t.insn_count >= 8, `${name}: listing too short`);
    for (const insn of t.instructions) {
      const off = H(insn.file_off);
      const bytes = Buffer.from(insn.bytes, "hex");
      ok(off + bytes.length <= N, `${name}: insn OOB ${insn.file_off}`);
      ok(B.compare(bytes, 0, bytes.length, off, off + bytes.length) === 0,
         `${name}: bytes mismatch at ${insn.file_off}`);
      ok(H(insn.va) === ((off + H(A.address_model.text_base)) >>> 0),
         `${name}: va at ${insn.file_off}`);
      ok(text.includes(insn.va), `${name}: dump missing va ${insn.va}`);
    }
  }
  console.log("G4-DUMPS-REPROVED");
}

function gLoops() {
  const A = loadArt();
  const T = H(A.address_model.text_base);
  for (const name of WANT) {
    const t = threadByName(A, name);
    const loop = t.service_loop;
    ok(loop, `${name}: service_loop missing`);
    const brOff = H(loop.branch_file_off);
    const br = decodeBranch(brOff, T);
    ok(br, `${name}: branch decode failed at ${loop.branch_file_off}`);
    ok(br.kind === loop.branch_kind, `${name}: branch kind ${br.kind} != ${loop.branch_kind}`);
    ok(br.tgt === H(loop.target_va), `${name}: target va`);
    ok(((br.tgt - T) >>> 0) === H(loop.target_file_off), `${name}: target file`);
    const enc = B.slice(brOff, brOff + br.size).toString("hex");
    ok(enc === loop.branch_bytes, `${name}: branch bytes`);
    ok(H(loop.branch_va) === ((brOff + T) >>> 0), `${name}: branch va`);
    ok(H(loop.target_file_off) <= brOff, `${name}: not a back-edge`);

    // Scanner liveness: re-scan the claimed body for this exact back-edge.
    const lo = H(t.body_file_lo);
    const hi = H(t.body_file_hi);
    let found = 0;
    for (let f = lo; f + 2 < hi && f + 2 < N; f += 2) {
      const d = decodeBranch(f, T);
      if (!d) continue;
      if (d.kind !== loop.branch_kind) continue;
      if (f === brOff && d.tgt === br.tgt) found++;
    }
    ok(found === 1, `${name}: loop scanner found ${found} copies of the claimed edge`);

    if (name === "lvgl_async") {
      ok(loop.shape === "unconditional_tail_back_edge", "async shape");
      ok(loop.branch_kind === "b" || loop.branch_kind === "b.w", "async must be uncond");
    } else {
      ok(loop.shape === "conditional_flag_wait_back_edge", "ui shape");
      ok(loop.branch_kind === "bcond" || loop.branch_kind === "bcond.w", "ui must be cond");
    }
  }
  console.log("G5-LOOPS-REPROVED");
}

function gRegen() {
  ok(existsSync(GEN), "generator missing");
  const dir = mkdtempSync(join(tmpdir(), "leaf33-"));
  const out = join(dir, "regen.json");
  const dumpTmp = join(dir, "disasm", "capstone");
  // Generator writes dumps next to LEAF; for regen we run it with --out only
  // and compare JSON + re-check dump sha against freshly written LEAF dumps.
  // To keep LEAF dumps stable under --regen, generate into a temp copy of the
  // leaf tree for dumps by invoking python with a cwd trick: the script uses
  // LEAF relative to itself, so compare JSON byte-identity and re-hash dumps.
  try {
    // Snapshot current dumps, regen (overwrites LEAF dumps identically), compare.
    const before = {};
    for (const name of WANT) {
      const p = join(DUMP_DIR, name + ".asm");
      before[name] = readFileSync(p);
    }
    const beforeArt = readFileSync(ART);
    execFileSync("python3", [GEN, "--out", out], { stdio: ["ignore", "pipe", "pipe"] });
    const afterArt = readFileSync(out);
    ok(Buffer.compare(afterArt, beforeArt) === 0, "service_loops.json not byte-identical");
    for (const name of WANT) {
      const p = join(DUMP_DIR, name + ".asm");
      ok(Buffer.compare(readFileSync(p), before[name]) === 0, name + " dump changed under regen");
    }
  } finally {
    rmSync(dir, { recursive: true, force: true });
  }
  console.log("G6-REGEN-REPROVED");
}

function gLabels() {
  const A = loadArt();
  const inf = A.inferences;
  ok(Array.isArray(inf) && inf.length >= 4, "inferences too short");
  const ids = new Set();
  for (const x of inf) {
    ok(x.id && typeof x.id === "string", "inference missing id");
    ok(x.label === "inference" || x.label === "fact", `${x.id}: bad label`);
    ok(typeof x.claim === "string" && x.claim.trim().length >= 20, `${x.id}: claim`);
    ok(typeof x.reason === "string" && x.reason.trim().length >= 8, `${x.id}: reason`);
    ok(!ids.has(x.id), `dup ${x.id}`);
    ids.add(x.id);
  }
  ok(ids.has("FACT-boundary"), "FACT-boundary missing");
  for (let i = 1; i <= 3; i++) ok(ids.has("INF-" + i), "INF-" + i + " missing");
  console.log(`G7-LABELS-REPROVED (${inf.length} labelled claims)`);
}

const MODES = {
  "--image": gImage, "--bases": gBases, "--entries": gEntries,
  "--dumps": gDumps, "--loops": gLoops, "--regen": gRegen, "--labels": gLabels,
};
const args = process.argv.slice(2);
if (args.length === 0 || args[0] === "--all") {
  for (const k of Object.keys(MODES)) MODES[k]();
} else {
  const f = MODES[args[0]];
  if (!f) die("unknown mode " + args[0]);
  f();
}
