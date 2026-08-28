#!/usr/bin/env node
/**
 * Re-measure hud_ready leaf artifacts against platform_tester.bin.
 * Usage: node verify-leaf.mjs <1.1.1|1.1.2|1.1.3|1.1.4>
 * Success token: "leaf <id> verification passed"
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

function readBin() {
  if (!fs.existsSync(BIN)) fail(`missing binary ${BIN}`);
  return fs.readFileSync(BIN);
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

function requireMd(p, minLines, needles) {
  if (!fs.existsSync(p)) fail(`missing ${p}`);
  const md = fs.readFileSync(p, "utf8");
  const lines = md.split(/\r?\n/).length;
  if (lines < minLines) fail(`${p} too short: ${lines} < ${minLines}`);
  for (const n of needles) {
    if (!md.includes(n)) fail(`${p} missing token: ${n}`);
  }
  return md;
}

function cstrAt(buf, off, text) {
  const need = Buffer.from(text, "ascii");
  if (off < 0 || off + need.length + 1 > buf.length) return false;
  if (!buf.subarray(off, off + need.length).equals(need)) return false;
  return buf[off + need.length] === 0;
}

function hexAt(buf, off, hex) {
  const need = Buffer.from(hex, "hex");
  if (off < 0 || off + need.length > buf.length) return false;
  return buf.subarray(off, off + need.length).equals(need);
}

const id = process.argv[2];
const buf = readBin();

if (id === "1.1.1") {
  const jsonPath = path.join(BASE, "strings/strings_inventory.json");
  const inv = loadJson(jsonPath);
  requireMd(path.join(BASE, "strings/STRINGS.md"), 40, [
    "onLauncherEnterCallback",
    "launcher_is_on_standby_view",
    "onViewDidAppear",
  ]);
  if (!Array.isArray(inv.strings) || inv.strings.length < 10) {
    fail("strings_inventory.strings must have >= 10 entries");
  }
  const required = [
    "onLauncherEnterCallback delay exec",
    "launcher_is_on_standby_view",
    "onViewDidAppear",
    "onPageSwitchFinish, show launcher",
    "createDefaultWidgets",
  ];
  const blob = JSON.stringify(inv);
  for (const r of required) {
    if (!blob.includes(r)) fail(`inventory missing required substring: ${r}`);
  }
  let verified = 0;
  let withSites = 0;
  for (const s of inv.strings) {
    if (!s.ascii || !s.file_off) fail("string entry needs ascii+file_off");
    const off = parseOff(s.file_off);
    if (off === null) fail(`bad file_off ${s.file_off}`);
    if (!cstrAt(buf, off, s.ascii)) {
      fail(`binary mismatch at ${s.file_off} for ${JSON.stringify(s.ascii).slice(0, 80)}`);
    }
    verified++;
    if (Array.isArray(s.code_sites) && s.code_sites.length) withSites++;
  }
  if (verified < 10) fail(`verified ${verified} strings, need >= 10`);
  if (withSites < 1) {
    fail("need at least one string with a recovered code_sites[] entry");
  }
  console.log(`leaf 1.1.1 verification passed`);
} else if (id === "1.1.2") {
  const jsonPath = path.join(BASE, "standby_view/standby_view.json");
  const inv = loadJson(jsonPath);
  requireMd(path.join(BASE, "standby_view/STANDBY_VIEW.md"), 50, [
    "StandByView",
    "onLauncherEnterCallback",
    "0x",
  ]);
  if (!Array.isArray(inv.functions) || inv.functions.length < 4) {
    fail("standby_view.functions must have >= 4 entries");
  }
  for (const f of inv.functions) {
    if (!f.name || !f.file_off || !f.prologue_hex) {
      fail("function needs name+file_off+prologue_hex");
    }
    const off = parseOff(f.file_off);
    if (off === null) fail(`bad file_off ${f.file_off}`);
    if (!/^[0-9a-fA-F]{4,}$/.test(f.prologue_hex)) fail(`bad prologue_hex ${f.prologue_hex}`);
    if (!hexAt(buf, off, f.prologue_hex)) {
      fail(`prologue mismatch at ${f.file_off} for ${f.name}`);
    }
  }
  const kinds = (inv.functions || []).concat(inv.callbacks || []);
  const delayNamed = kinds.some(
    (x) =>
      typeof x.name === "string" &&
      /onLauncherEnterCallback/i.test(x.name) &&
      (x.kind === "delay" || (x.role && /delay/i.test(x.role))),
  );
  if (!delayNamed) {
    fail("stock onLauncherEnterCallback must be recorded as kind/role delay");
  }
  const flags = inv.flags || [];
  if (!Array.isArray(flags) || flags.length < 1) {
    fail("standby_view.flags must list at least the standby-view flag hunt");
  }
  console.log(`leaf 1.1.2 verification passed`);
} else if (id === "1.1.3") {
  const jsonPath = path.join(BASE, "splash_vs_idle/splash_vs_idle.json");
  const inv = loadJson(jsonPath);
  requireMd(path.join(BASE, "splash_vs_idle/SPLASH_VS_IDLE.md"), 40, [
    "customTimeAndBatteryWidget",
    "splash",
    "idle",
  ]);
  const ctor = parseOff(inv.ctor_file_off);
  if (ctor !== 0x5d931c) fail(`ctor_file_off must be 0x5d931c, got ${inv.ctor_file_off}`);
  if (!hexAt(buf, ctor, inv.ctor_prologue_hex || "")) {
    fail("ctor prologue does not match binary at 0x5d931c");
  }
  if (!Array.isArray(inv.callers) || inv.callers.length < 1) {
    fail("splash_vs_idle.callers must be non-empty (include UNRECOVERED attempts)");
  }
  if (!inv.discriminator || typeof inv.discriminator !== "object") {
    fail("missing discriminator object");
  }
  if (inv.discriminator.kind === "delay") {
    fail("discriminator must not be a guessed delay");
  }
  console.log(`leaf 1.1.3 verification passed`);
} else if (id === "1.1.4") {
  const jsonPath = path.join(BASE, "page_ready/page_ready.json");
  const inv = loadJson(jsonPath);
  const pageMd = requireMd(path.join(BASE, "page_ready/PAGE_READY.md"), 40, [
    "onViewDidAppear",
    "onPageSwitchFinish",
    "lvgl_ui",
  ]);
  if (!pageMd.toLowerCase().includes("starrynet")) {
    fail("PAGE_READY.md must distinguish StarryNet pairing from idle HUD");
  }
  const events = inv.lifecycle || [];
  if (!Array.isArray(events) || events.length < 3) {
    fail("page_ready.lifecycle must have >= 3 events");
  }
  for (const e of events) {
    if (!e.name || !e.string_file_off) fail("lifecycle entry needs name+string_file_off");
    const off = parseOff(e.string_file_off);
    if (off === null) fail(`bad string_file_off ${e.string_file_off}`);
    if (e.string_ascii && !cstrAt(buf, off, e.string_ascii)) {
      fail(`lifecycle string mismatch at ${e.string_file_off}`);
    }
  }
  const names = events.map((e) => e.name).join(" ");
  if (!/DidAppear/i.test(names) || !/PageSwitchFinish/i.test(names)) {
    fail("lifecycle must include DidAppear and PageSwitchFinish");
  }
  if (inv.lvgl_wait_loop_is_idle_hud_ready === true) {
    fail("lvgl_ui wait loop must not be claimed as idle-HUD-ready without a discriminator");
  }
  if (inv.lvgl_wait_loop_is_idle_hud_ready !== false) {
    fail("lvgl_wait_loop_is_idle_hud_ready must be explicit false");
  }
  console.log(`leaf 1.1.4 verification passed`);
} else {
  fail("usage: node verify-leaf.mjs <1.1.1|1.1.2|1.1.3|1.1.4>");
}
