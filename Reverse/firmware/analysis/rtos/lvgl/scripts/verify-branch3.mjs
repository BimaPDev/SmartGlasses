#!/usr/bin/env node
// branch-3 verifier — integrates leaves 3.1–3.4.
//
// usage: node verify-branch3.mjs [--children|--corroborate|--decode|--map|--all]

import { readFileSync, existsSync } from "node:fs";
import { resolve, dirname, join } from "node:path";
import { fileURLToPath } from "node:url";
import { execFileSync } from "node:child_process";

const HERE = dirname(fileURLToPath(import.meta.url));
const LEAF = resolve(HERE, "..");
const RTOS = resolve(LEAF, "..");
const ROOT = resolve(LEAF, "..", "..", "..", "..", "..");
const BIN = join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");
const UNLAZY = join(ROOT, ".agents/skills/unlazy/scripts/gate-check.mjs");
const MAP = join(RTOS, "RTOS_MAP.md");
const DOC = join(LEAF, "LVGL_THREAD.md");

const CHILDREN = ["GATES-3.1.md", "GATES-3.2.md", "GATES-3.3.md", "GATES-3.4.md"];

function die(msg) {
  console.error("FAIL: " + msg);
  process.exit(1);
}
function ok(cond, msg) {
  if (!cond) die(msg);
}

function H(s) {
  const v = parseInt(String(s), 16);
  ok(Number.isFinite(v), "not hex: " + s);
  return v >>> 0;
}

function loadJson(p) {
  ok(existsSync(p), "missing " + p);
  return JSON.parse(readFileSync(p, "utf8"));
}

const B = readFileSync(BIN);
const N = B.length;
const u16 = (o) => B.readUInt16LE(o);
const u32 = (o) => B.readUInt32LE(o);

function isPrologue(f) {
  if (f < 0 || f + 4 > N) return false;
  const h = u16(f);
  return h === 0xe92d || (h >= 0xb400 && h <= 0xb5ff) || h === 0xed2d;
}

function decodeBranch(f, T) {
  if (f + 2 > N) return null;
  const hw1 = u16(f);
  if ((hw1 & 0xf800) === 0xe000) {
    let imm = hw1 & 0x7ff;
    if (imm & 0x400) imm -= 0x800;
    return { kind: "b", tgt: (f + T + 4 + imm * 2) >>> 0, size: 2 };
  }
  if ((hw1 & 0xf000) === 0xd000) {
    const cond = (hw1 >> 8) & 0xf;
    if (cond < 0xe) {
      let imm = hw1 & 0xff;
      if (imm & 0x80) imm -= 0x100;
      return { kind: "bcond", tgt: (f + T + 4 + imm * 2) >>> 0, size: 2 };
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
  if (top === 0xd000) return { kind: "bl", tgt, size: 4 };
  if (top === 0x9000) return { kind: "b.w", tgt, size: 4 };
  if ((hw2 & 0xd000) === 0x8000) return { kind: "bcond.w", tgt, size: 4 };
  return null;
}

function gChildren() {
  ok(existsSync(UNLAZY), "unlazy gate-check missing");
  for (const g of CHILDREN) {
    const p = join(LEAF, g);
    ok(existsSync(p), "child ledger missing: " + g);
    const text = readFileSync(p, "utf8");
    ok(!/EVIDENCE:\s*pending/i.test(text), g + " still has pending EVIDENCE");
    ok(/^- \[x\] G0:/m.test(text) || /^- \[x\] G1:/m.test(text), g + " has no checked gate");
    const out = execFileSync("node", [UNLAZY, "--status", g], {
      cwd: LEAF,
      encoding: "utf8",
    });
    ok(/ALL MET/i.test(out), g + " status is not ALL MET:\n" + out);
  }
  console.log("BRANCH3_CHILDREN_OK");
}

function fileFrom31(vaHex, codeBaseHex) {
  return (H(vaHex) - H(codeBaseHex)) >>> 0;
}

function gCorroborate() {
  const s31 = loadJson(join(LEAF, "intern_sites.json"));
  const s32 = loadJson(join(LEAF, "thread_create_sites.json"));
  const s33 = loadJson(join(LEAF, "service_loops.json"));
  const base31 = s31.code_va_base || "0x2c000000";

  const from31 = {
    lvgl_async: fileFrom31(
      s31.threads.lvgl_async_handler_thread.functions_logging_enter_or_waiting[0],
      base31,
    ),
    lvgl_ui: fileFrom31(
      s31.threads.lvgl_task_handler_thread.functions_logging_running_or_stopped[0],
      base31,
    ),
  };

  const from32 = {};
  for (const t of s32.threads) {
    from32[t.name] = H(t.packed_def.entry_fn_file_off);
  }
  const from33 = {};
  const va33 = {};
  for (const t of s33.threads) {
    from33[t.name] = H(t.entry_file_off);
    va33[t.name] = H(t.entry_va);
  }

  for (const name of ["lvgl_async", "lvgl_ui"]) {
    ok(from31[name] === from32[name], `${name}: 3.1 file ${from31[name].toString(16)} != 3.2 ${from32[name].toString(16)}`);
    ok(from32[name] === from33[name], `${name}: 3.2 file != 3.3`);
    // Runtime VA under 3.2/3.3 text base must match.
    const t32 = s32.threads.find((x) => x.name === name);
    ok(H(t32.packed_def.entry_fn_va) === va33[name], `${name}: 3.2/3.3 VA disagree`);
  }

  // Document must state the agreeing runtime VAs.
  ok(existsSync(DOC), "LVGL_THREAD.md missing");
  const doc = readFileSync(DOC, "utf8");
  ok(/0x2[Cc]63[Ff]0[Dd]8/.test(doc), "doc missing lvgl_async runtime VA");
  ok(/0x2[Cc]63[Ff]228/.test(doc), "doc missing lvgl_ui runtime VA");
  ok(/corroborat/i.test(doc), "doc missing corroboration section");

  console.log("BRANCH3_CORROBORATION_OK");
}

function gDecode() {
  const s33 = loadJson(join(LEAF, "service_loops.json"));
  const T = H(s33.address_model.text_base);
  ok(T === 0x2c010000, "unexpected text base " + s33.address_model.text_base);
  for (const t of s33.threads) {
    const entry = H(t.entry_file_off);
    ok(isPrologue(entry), t.name + " entry not prologue");
    const loop = t.service_loop;
    const br = decodeBranch(H(loop.branch_file_off), T);
    ok(br, t.name + " branch decode failed");
    ok(br.kind === loop.branch_kind, t.name + " branch kind");
    ok(br.tgt === H(loop.target_va), t.name + " branch target");
    ok(H(loop.target_file_off) <= H(loop.branch_file_off), t.name + " not back-edge");
  }
  console.log("BRANCH3_DECODE_OK");
}

function gMap() {
  ok(existsSync(MAP), "RTOS_MAP.md missing");
  const text = readFileSync(MAP, "utf8");
  // Locate the high-confidence entry VA table in §2.
  const m = text.match(/### High-confidence entry VAs \((\d+)\)([\s\S]*?)(?=\n### |\n## )/);
  ok(m, "high-confidence entry VA section not found");
  const claimed = parseInt(m[1], 10);
  const section = m[2];
  // Table data rows: first backticked token after the leading pipe (skips header).
  const rows = [];
  for (const line of section.split("\n")) {
    const mrow = line.match(/^\| `([^`]+)` /);
    if (!mrow) continue;
    if (mrow[1] === "Thread") continue;
    rows.push(mrow[1]);
  }
  ok(rows.length === claimed,
     `count line says ${claimed} but table has ${rows.length} rows`);
  ok(rows.includes("lvgl_async"), "RTOS_MAP missing lvgl_async row");
  ok(rows.includes("lvgl_ui"), "RTOS_MAP missing lvgl_ui row");
  // Runtime VAs in the LVGL rows must use the 0x2C63F… form (not 0x2C62F…).
  ok(/`lvgl_async`\s*\|\s*`0x2[Cc]63[Ff]0[Dd]8`/.test(section), "lvgl_async VA wrong in map");
  ok(/`lvgl_ui`\s*\|\s*`0x2[Cc]63[Ff]228`/.test(section), "lvgl_ui VA wrong in map");
  ok(/lvgl\/LVGL_THREAD\.md/.test(text), "RTOS_MAP does not link LVGL_THREAD.md");
  console.log(`BRANCH3_MAP_OK (${claimed} rows)`);
}

const MODES = {
  "--children": gChildren,
  "--corroborate": gCorroborate,
  "--decode": gDecode,
  "--map": gMap,
};
const args = process.argv.slice(2);
if (args.length === 0 || args[0] === "--all") {
  for (const k of Object.keys(MODES)) MODES[k]();
} else {
  const f = MODES[args[0]];
  if (!f) die("unknown mode " + args[0]);
  f();
}
