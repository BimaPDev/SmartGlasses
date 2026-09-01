#!/usr/bin/env node
/**
 * Halliday full_rev leaf verifier — paths under Reverse/firmware/Halliday/
 * Usage: node verify-leaf.mjs <leaf-id>
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const SCRIPTS = path.dirname(fileURLToPath(import.meta.url));
const HALLIDAY = path.resolve(SCRIPTS, "../..");
const FULL = path.join(HALLIDAY, "analysis", "full_rev");
const EXPORT = path.join(HALLIDAY, "export");

const LEAVES = {
  "1.1": { exportCheck: true },
  "1.2": {
    dir: null,
    ghidraCheck: true,
    minFuncs: 500,
  },
  "1.3": {
    dir: "firmware_map",
    need: ["FIRMWARE_MAP.md", "manifest.json"],
    minMd: 60,
    mustContainMd: ["ATS3089", "0x1000", "AOTA"],
  },
  "1.4": {
    dir: "ui_launcher",
    need: ["UI_LAUNCHER.md", "view_catalog.md", "manifest.json"],
    minMd: 80,
    mustContainMd: ["LVGL", "launcher", "bt_watch"],
  },
  "1.5": {
    dir: "ble_connectivity",
    need: ["BLE_CONNECTIVITY.md", "manifest.json"],
    minMd: 60,
    mustContainMd: ["BLE", "Halliday"],
  },
  "1.6": {
    dir: "ota_security",
    need: ["OTA_SECURITY.md", "manifest.json"],
    minMd: 50,
    mustContainMd: ["AOTA", "OTA"],
  },
  "1.7": {
    dir: "audio_display",
    need: ["AUDIO_DISPLAY.md", "manifest.json"],
    minMd: 50,
    mustContainMd: ["display", "0x10"],
  },
  "1.8": {
    dir: "sensors_health",
    need: ["SENSORS_HEALTH.md", "manifest.json"],
    minMd: 50,
    mustContainMd: ["health", "0x10"],
  },
  "1.9": {
    dir: "power_battery",
    need: ["POWER_BATTERY.md", "manifest.json"],
    minMd: 50,
    mustContainMd: ["battery", "0x10"],
  },
  "1.10": {
    dir: "factory_shell",
    need: ["FACTORY_SHELL.md", "manifest.json"],
    minMd: 50,
    mustContainMd: ["factory", "shell"],
  },
  "1.11": {
    dir: "zephyr_rtos",
    need: ["ZEPHYR_RTOS.md", "manifest.json"],
    minMd: 50,
    mustContainMd: ["Zephyr", "thread"],
  },
  "1.12": {
    dir: "xs_vendor",
    need: ["XS_VENDOR.md", "manifest.json"],
    minMd: 50,
    mustContainMd: ["vendor", "xs_"],
  },
  "1.13": {
    dir: "custom_diff",
    need: ["CUSTOM_DIFF.md", "diff_regions.json", "manifest.json"],
    minMd: 40,
    mustContainMd: ["custom", "app.bin"],
  },
};

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

const id = process.argv[2];
if (!id || !LEAVES[id]) {
  fail(`usage: node verify-leaf.mjs <${Object.keys(LEAVES).join("|")}>`);
}

const spec = LEAVES[id];

if (spec.exportCheck) {
  for (const v of ["official", "custom"]) {
    const app = path.join(EXPORT, v, "layer3", "app.bin");
    if (!fs.existsSync(app) || fs.statSync(app).size < 1_000_000) {
      fail(`missing or tiny ${app}`);
    }
  }
  if (!fs.existsSync(path.join(EXPORT, "README.md"))) fail("missing export README");
  if (!fs.existsSync(path.join(EXPORT, "missing.txt"))) fail("missing export missing.txt");
  console.log(`leaf ${id} verification passed`);
  process.exit(0);
}

if (spec.ghidraCheck) {
  const csv = path.join(EXPORT, "functions", "app", "functions.csv");
  if (!fs.existsSync(csv)) fail(`missing ${csv}`);
  const lines = fs.readFileSync(csv, "utf8").trim().split(/\n/).length - 1;
  if (lines < spec.minFuncs) fail(`only ${lines} functions, need ${spec.minFuncs}`);
  const decomp = path.join(EXPORT, "functions", "app", "decomp");
  if (!fs.existsSync(decomp)) fail(`missing ${decomp}`);
  console.log(`leaf ${id} verification passed`);
  process.exit(0);
}

const dir = path.join(FULL, spec.dir);
if (!fs.existsSync(dir)) fail(`missing dir ${dir}`);

for (const name of spec.need) {
  const p = path.join(dir, name);
  if (!fs.existsSync(p)) fail(`missing file ${p}`);
  if (fs.statSync(p).size < 20) fail(`too small: ${p}`);
}

const primaryMd =
  spec.need.find((n) => n.endsWith(".md") && n === n.toUpperCase()) ||
  spec.need.find((n) => n.endsWith(".md"));
const md = fs.readFileSync(path.join(dir, primaryMd), "utf8");
if (md.split(/\r?\n/).length < spec.minMd) fail(`md too short`);
for (const needle of spec.mustContainMd) {
  if (!md.includes(needle)) fail(`md missing token: ${needle}`);
}

let man;
try {
  man = JSON.parse(fs.readFileSync(path.join(dir, "manifest.json"), "utf8"));
} catch (e) {
  fail(`manifest.json invalid: ${e.message}`);
}
const funcs = man.functions || man.anchors;
if (!Array.isArray(funcs) || funcs.length < 3) {
  fail("manifest.functions (or anchors) needs >= 3 entries");
}

console.log(`leaf ${id} verification passed`);
