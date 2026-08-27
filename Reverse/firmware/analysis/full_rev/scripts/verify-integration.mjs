#!/usr/bin/env node
/** Branch integration: all leaf dirs present + inventory index. */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const FULL = path.resolve(__dirname, "..");
const INDEX = path.join(FULL, "FULL_FIRMWARE_MAP.md");

const DIRS = [
  "touch_input",
  "audio_smartpa",
  "sensors_imu",
  "power_battery",
  "ble_starrynet",
  "factory_eshell",
  "ota_security",
  "launcher_ui",
  "bth_m33",
  "ring_accessory",
];

for (const d of DIRS) {
  const p = path.join(FULL, d, "manifest.json");
  if (!fs.existsSync(p)) {
    console.error(`missing ${p}`);
    process.exit(1);
  }
}
if (!fs.existsSync(INDEX) || fs.statSync(INDEX).size < 500) {
  console.error("missing or short FULL_FIRMWARE_MAP.md");
  process.exit(1);
}
const text = fs.readFileSync(INDEX, "utf8");
for (const d of DIRS) {
  if (!text.includes(d)) {
    console.error(`FULL_FIRMWARE_MAP.md missing section ${d}`);
    process.exit(1);
  }
}
console.log("firmware-rev integration verification passed");
