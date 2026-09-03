#!/usr/bin/env node
// Firmware address auditor v2 — structural JSON walk (no proximity guessing).
// Per hand-authored JSON object:
//   - file_off + stock/stock_hex/bytes  -> byte-check against image
//   - va + evidence:"code" (or file_off) -> range + Thumb-prologue plausibility
//   - va + string/ascii  (rodata, not intern-pool) -> string-at (va-0x2c000000)
//   - file_off vs va mismatch of window delta -> flag
// MD files: range-check every 0x2C/0x3C token against the doc's image.
import { readFileSync, existsSync, readdirSync, statSync } from "node:fs";
import { resolve, join, relative } from "node:path";

const ROOT = resolve(process.argv[2] || process.cwd());
const SCOPE = resolve(process.argv[3] || join(ROOT, "Reverse/firmware"));

const IMAGES = {
  m55_12: "Reverse/firmware/x_1.0.12.83/platform_tester.bin",
  m55_7:  "Reverse/firmware/x_1.0.7.83/platform_tester.bin",
  m55_11: "Reverse/firmware/x_1.0.11.53/platform_tester.bin",
  bth_12: "Reverse/firmware/x_1.0.12.83/best1600_watch_bth.bin",
  sensor: "Reverse/firmware/analysis/rtos/sensor_hub/sensor_hub.bin",
  hall:   "Reverse/firmware/Halliday/HallidayOfficialOTA.bin",
};
const bin = {};
for (const [k, p] of Object.entries(IMAGES)) { const f = resolve(ROOT, p); bin[k] = existsSync(f) ? readFileSync(f) : null; }

const M55_XIP = 0x2c000000;
const M55_DELTAS = new Set([0x2c000000, 0x2c010000, 0x2c010001, 0x3bfd7c0c]);
const toInt = (h) => parseInt(String(h).replace(/[_\s]/g, ""), 16);
const hx = (n) => "0x" + (n >>> 0).toString(16);

function imageFor(text, path) {
  const t = text.toLowerCase(), p = path.toLowerCase();
  if (/halliday/.test(p)) return "hall";
  if (/1\.0\.7\.83/.test(t) && !/1\.0\.12\.83/.test(t)) return "m55_7";
  if (/1\.0\.11\.53/.test(t) && !/1\.0\.12\.83/.test(t)) return "m55_11";
  if (/best1600_watch_bth|0x14000000/.test(t) && !/platform_tester/.test(t)) return "bth_12";
  return "m55_12";
}
function isProlog(b, off) {
  if (!b || off < 0 || off + 2 > b.length) return false;
  const b0 = b[off], b1 = b[off + 1];
  if (b1 === 0xb5) return true;                 // push {list,lr}
  if (b0 === 0x2d && b1 === 0xe9) return true;   // push.w
  if (b1 === 0xb4) return true;                  // push {list}
  if (b1 === 0xb0) return true;                  // sub sp,#imm  (leaf)
  if (b0 === 0x00 && b1 === 0xbf) return true;   // nop pad before fn (tolerate)
  if ((b1 & 0xf0) === 0x40 || (b1 & 0xf8) === 0x46) return true; // mov/data reg-shuffle prologs
  if (b0 === 0x0d && b1 === 0x46) return true;   // mov r5,sp etc
  return false;
}

const SKIP = [/\/decomp\//, /\/functions\//, /\/export\//, /\/strings\//, /\/extracted_/,
  /\/images_extracted\//, /\/audio_extracted/, /\/ghidra_proj\//, /\/node_modules\//,
  /-strings\.txt$/, /img_decoder_hunt\.txt$/];
function walk(dir, out = []) {
  for (const e of readdirSync(dir)) {
    const p = join(dir, e), rel = "/" + relative(ROOT, p);
    if (SKIP.some((r) => r.test(rel))) continue;
    const st = statSync(p);
    if (st.isDirectory()) walk(p, out);
    else if (/\.(md|json)$/.test(e)) out.push(p);
  }
  return out;
}

const flags = [];
const stat = { docs: 0, byte: 0, code: 0, prologMiss: 0, str: 0, range: 0, tok: 0 };
const flag = (path, kind, msg, extra) => flags.push({ path: relative(ROOT, path), kind, msg, ...extra });

function walkObj(node, ctx, path, img, b, internPool) {
  if (Array.isArray(node)) { for (const x of node) walkObj(x, ctx, path, img, b, internPool); return; }
  if (!node || typeof node !== "object") return;

  const va = node.va != null ? toInt(node.va) : null;
  const fo = node.file_off != null ? toInt(node.file_off) : null;
  const ev = node.evidence;

  // byte evidence
  for (const k of ["stock_hex", "stock", "bytes", "hex"]) {
    if (typeof node[k] === "string" && /^[0-9a-fA-F\s]+$/.test(node[k]) && node[k].replace(/\s/g,"").length >= 2) {
      const off = fo != null ? fo : (va != null && img.startsWith("m55") ? va - M55_XIP : null);
      if (off == null || !b) continue;
      stat.byte++;
      const want = Buffer.from(node[k].replace(/\s+/g, ""), "hex");
      if (off < 0 || off + want.length > b.length) { flag(path, "byte-range", `${k} at ${hx(off)} OOR (${img} size ${hx(b.length)})`); continue; }
      const got = b.slice(off, off + want.length);
      if (!got.equals(want)) flag(path, "byte-mismatch", `${k} @${hx(off)} [${img}]: have ${got.toString("hex")} want ${want.toString("hex")}`);
    }
  }

  // file_off vs va delta
  if (va != null && fo != null && img.startsWith("m55")) {
    const d = (va - fo) >>> 0;
    if (!M55_DELTAS.has(d)) flag(path, "delta", `va ${hx(va)} - file_off ${hx(fo)} = ${hx(d)} (not a known window base)`);
  }

  // code VA -> range + prolog
  if (va != null && img.startsWith("m55") && (ev === "code" || node.decomp || /^FUN_|::|_init$|Widget|View|Provider/.test(node.name || ""))) {
    if (b) {
      const off = va - M55_XIP;
      stat.code++;
      if (off < 0 || off + 2 > b.length) flag(path, "va-range", `code va ${hx(va)} (${node.name||""}) -> file ${hx(off)} OOR for ${img}`);
      else if (!isProlog(b, off) && ev === "code") { stat.prologMiss++; flag(path, "prolog", `va ${hx(va)} (${node.name||""}) file ${hx(off)}: first bytes ${b.slice(off,off+4).toString("hex")} not a Thumb prologue`, { soft: true }); }
    }
  }

  // rodata string (skip intern-pool files: their ascii is pool-relative)
  if (!internPool && va != null && img.startsWith("m55")) {
    const s = node.string || node.ascii || (node.role && /string$/.test(node.role) ? node.help || null : null);
    if (typeof s === "string" && s.length >= 3 && !/\\x|\\u/.test(s) && b) {
      stat.str++;
      const off = va - M55_XIP;
      const want = Buffer.from(s, "latin1");
      if (off >= 0 && off + want.length <= b.length) {
        const got = b.slice(off, off + want.length);
        if (!got.equals(want)) flag(path, "string-mismatch", `${JSON.stringify(s).slice(0,44)} not at va ${hx(va)} (file ${hx(off)}) [${img}]`);
      }
    }
  }

  for (const v of Object.values(node)) if (v && typeof v === "object") walkObj(v, ctx, path, img, b, internPool);
}

for (const path of walk(SCOPE)) {
  const text = readFileSync(path, "utf8");
  const img = imageFor(text, path);
  const b = bin[img];
  stat.docs++;
  if (path.endsWith(".json")) {
    let j; try { j = JSON.parse(text); } catch { flag(path, "json-parse", "invalid JSON"); continue; }
    const internPool = typeof j.intern_pool_file === "string";
    walkObj(j, {}, path, img, b, internPool);
  } else {
    // md: range-check tokens
    if (!b || !img.startsWith("m55")) continue;
    const toks = new Set((text.match(/0x2[cC][0-9a-fA-F]{6}/g) || []));
    for (const t of toks) { stat.tok++; const off = toInt(t) - M55_XIP; if (off < 0 || off >= b.length) { stat.range++; flag(path, "md-range", `${t} -> file ${hx(off)} OOR for ${img} (size ${hx(b.length)})`); } }
  }
}

const byKind = {};
for (const f of flags) byKind[f.kind] = (byKind[f.kind] || 0) + 1;
console.log("=== addr_audit v2 ===");
console.log(`docs:${stat.docs} byteClaims:${stat.byte} codeVAs:${stat.code} strClaims:${stat.str} mdTokens:${stat.tok}`);
console.log("flags:", flags.length, JSON.stringify(byKind));
const hard = flags.filter((f) => !f.soft);
console.log("HARD flags (non-prolog):", hard.length);
console.log("");
for (const f of hard) console.log(`[${f.kind}] ${f.path}\n    ${f.msg}`);
console.log("\n--- soft (prolog plausibility, sample 25) ---");
for (const f of flags.filter((f)=>f.soft).slice(0,25)) console.log(`[${f.kind}] ${f.path}: ${f.msg}`);
