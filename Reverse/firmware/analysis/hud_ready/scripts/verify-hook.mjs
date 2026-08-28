#!/usr/bin/env node
/**
 * Re-measure the ranked idle-HUD-ready hook against the binary and child artifacts.
 * Usage: node verify-hook.mjs
 * Success token: hook ranking verification passed
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const ROOT = path.resolve(__dirname, "../../../../..");
const BIN = path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");
const BASE = path.join(ROOT, "Reverse/firmware/analysis/hud_ready");

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

function parseOff(s) {
  if (typeof s !== "string" || !/^0x[0-9a-fA-F]+$/.test(s)) return null;
  return Number.parseInt(s, 16);
}

function loadJson(p) {
  if (!fs.existsSync(p)) fail(`missing ${p}`);
  try {
    return JSON.parse(fs.readFileSync(p, "utf8"));
  } catch (e) {
    fail(`invalid JSON ${p}: ${e.message}`);
  }
}

const buf = fs.readFileSync(BIN);
const hook = loadJson(path.join(BASE, "hook/hook_candidates.json"));
const mdPath = path.join(BASE, "hook/HUD_READY.md");
if (!fs.existsSync(mdPath)) fail("missing HUD_READY.md");
const md = fs.readFileSync(mdPath, "utf8");
if (md.split(/\r?\n/).length < 60) fail("HUD_READY.md too short");
for (const n of ["idle HUD", "delay", "splash", "hook"]) {
  if (!md.toLowerCase().includes(n.toLowerCase())) fail(`HUD_READY.md missing ${n}`);
}

const rec = hook.recommended;
if (!rec || typeof rec !== "object") fail("missing recommended");
const allowed = new Set(["flag", "function", "event", "callback", "state"]);
if (!allowed.has(rec.kind)) {
  fail(`recommended.kind must be one of ${[...allowed].join(",")}, not ${rec.kind}`);
}
if (rec.kind === "delay" || rec.splash_safe !== true) {
  fail("recommended hook must be splash-safe and not a delay");
}
const off = parseOff(rec.hook_file_off);
if (off === null) fail("recommended.hook_file_off required");
if (off < 0 || off + 4 > buf.length) fail("hook_file_off out of range");
if (rec.prologue_hex) {
  const need = Buffer.from(rec.prologue_hex, "hex");
  if (!buf.subarray(off, off + need.length).equals(need)) {
    fail("recommended prologue_hex does not match binary");
  }
} else if (rec.stock_bl_hex) {
  const need = Buffer.from(rec.stock_bl_hex, "hex");
  if (!buf.subarray(off, off + need.length).equals(need)) {
    fail("recommended stock_bl_hex does not match binary");
  }
} else {
  fail("recommended needs prologue_hex or stock_bl_hex measured from the image");
}

if (!Array.isArray(hook.rejected) || hook.rejected.length < 2) {
  fail("rejected must list >= 2 discarded candidates");
}
const rej = JSON.stringify(hook.rejected).toLowerCase();
if (!rej.includes("100") && !rej.includes("lv_timer") && !rej.includes("delay")) {
  fail("rejected must include the v6 100 ms / delay guess");
}
if (!rej.includes("5d9426") && !rej.includes("customtimeandbattery")) {
  fail("rejected must include the widget-ctor hook 0x5d9426");
}

const enter = hook.rejected.some(
  (r) =>
    typeof r.name === "string" &&
    /onLauncherEnterCallback/i.test(r.name) &&
    (r.kind === "delay" || /delay/i.test(r.why || "")),
);
if (!enter) {
  fail("rejected must include stock onLauncherEnterCallback delay exec");
}

console.log("hook ranking verification passed");
