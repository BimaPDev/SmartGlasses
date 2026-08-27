#!/usr/bin/env node
/**
 * Portable leaf artifact verifier for firmware-rev unlazy gates.
 * Usage: node verify-leaf.mjs <leaf-id>
 * Exit 0 + prints "leaf <id> verification passed" only when all checks hold.
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const FULL = path.resolve(__dirname, "..");

const LEAVES = {
  "1.1.1": {
    dir: "touch_input",
    need: ["TOUCH_INPUT.md", "touch_reconstructed.c", "manifest.json"],
    minMd: 80,
    minC: 120,
    mustContainMd: ["STK5115", "wear", "0x2C"],
  },
  "1.1.2": {
    dir: "audio_smartpa",
    need: ["AUDIO_SMARTPA.md", "audio_reconstructed.c", "manifest.json"],
    minMd: 80,
    minC: 120,
    mustContainMd: ["AW883", "0x2C"],
  },
  "1.1.3": {
    dir: "sensors_imu",
    need: ["SENSORS_IMU.md", "sensors_reconstructed.c", "manifest.json"],
    minMd: 80,
    minC: 100,
    mustContainMd: ["IMU", "0x2C"],
  },
  "1.1.4": {
    dir: "power_battery",
    need: ["POWER_BATTERY.md", "power_reconstructed.c", "manifest.json"],
    minMd: 80,
    minC: 100,
    mustContainMd: ["battery", "0x2C"],
  },
  "1.2.1": {
    dir: "ble_starrynet",
    need: ["BLE_STARRYNET.md", "starrynet_handlers.md", "manifest.json"],
    minMd: 100,
    minC: 0,
    mustContainMd: ["handleSystemMsg", "StarryNet"],
  },
  "1.2.2": {
    dir: "factory_eshell",
    need: ["FACTORY_ESHELL.md", "fac_cmd_map.md", "manifest.json"],
    minMd: 80,
    minC: 0,
    mustContainMd: ["fac_cmd", "eshell"],
  },
  "1.2.3": {
    dir: "ota_security",
    need: ["OTA_SECURITY.md", "ota_verify_path.md", "manifest.json"],
    minMd: 80,
    minC: 0,
    mustContainMd: ["OTA", "rollback"],
  },
  "1.3.1": {
    dir: "launcher_ui",
    need: ["LAUNCHER_UI.md", "domain_map.md", "manifest.json"],
    minMd: 100,
    minC: 0,
    mustContainMd: ["Launcher", "Domain"],
  },
  "1.3.2": {
    dir: "bth_m33",
    need: ["BTH_M33.md", "bth_reconstructed.c", "manifest.json"],
    minMd: 80,
    minC: 80,
    mustContainMd: ["BTH", "0x"],
  },
  "1.3.3": {
    dir: "ring_accessory",
    need: ["RING.md", "ring_reconstructed.c", "manifest.json"],
    minMd: 60,
    minC: 60,
    mustContainMd: ["ring", "0x2C"],
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
const dir = path.join(FULL, spec.dir);
if (!fs.existsSync(dir)) fail(`missing dir ${dir}`);

for (const name of spec.need) {
  const p = path.join(dir, name);
  if (!fs.existsSync(p)) fail(`missing file ${p}`);
  if (fs.statSync(p).size < 40) fail(`too small: ${p}`);
}

const mdName = spec.need.find((n) => n.endsWith(".md") && !n.includes("_map") && !n.includes("handlers") && !n.includes("verify_path") && n === n.toUpperCase().replace(/_/g, (m, i, s) => s[i]) || true);
// Prefer primary overview md (first .md in need list)
const mdPath = path.join(dir, spec.need.find((n) => n.endsWith(".md")));
const md = fs.readFileSync(mdPath, "utf8");
const mdLines = md.split(/\r?\n/).length;
if (mdLines < spec.minMd) fail(`md too short: ${mdLines} < ${spec.minMd}`);
for (const needle of spec.mustContainMd) {
  if (!md.includes(needle)) fail(`md missing required token: ${needle}`);
}

const cName = spec.need.find((n) => n.endsWith(".c"));
if (cName && spec.minC > 0) {
  const c = fs.readFileSync(path.join(dir, cName), "utf8");
  const cLines = c.split(/\r?\n/).length;
  if (cLines < spec.minC) fail(`c too short: ${cLines} < ${spec.minC}`);
  if (!/\/\*|\/\/|void |int |uint/.test(c)) fail(`c looks empty/non-code`);
}

let man;
try {
  man = JSON.parse(fs.readFileSync(path.join(dir, "manifest.json"), "utf8"));
} catch (e) {
  fail(`manifest.json invalid: ${e.message}`);
}
if (!Array.isArray(man.functions) || man.functions.length < 3) {
  fail("manifest.functions must list at least 3 mapped VAs");
}
for (const f of man.functions.slice(0, 3)) {
  if (!f.va || !f.name) fail("manifest entry needs va+name");
}

console.log(`leaf ${id} verification passed`);
