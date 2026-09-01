#!/usr/bin/env node
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const HALLIDAY = path.resolve(path.dirname(fileURLToPath(import.meta.url)), "../..");
const FULL = path.join(HALLIDAY, "analysis", "full_rev");

const leaves = [
  "firmware_map/FIRMWARE_MAP.md",
  "ui_launcher/UI_LAUNCHER.md",
  "ble_connectivity/BLE_CONNECTIVITY.md",
  "ota_security/OTA_SECURITY.md",
  "audio_display/AUDIO_DISPLAY.md",
  "sensors_health/SENSORS_HEALTH.md",
  "power_battery/POWER_BATTERY.md",
  "factory_shell/FACTORY_SHELL.md",
  "zephyr_rtos/ZEPHYR_RTOS.md",
  "xs_vendor/XS_VENDOR.md",
  "custom_diff/CUSTOM_DIFF.md",
];
for (const rel of leaves) {
  const p = path.join(FULL, rel);
  if (!fs.existsSync(p)) {
    console.error(`missing ${p}`);
    process.exit(1);
  }
}
const map = path.join(FULL, "FULL_FIRMWARE_MAP.md");
if (!fs.existsSync(map)) {
  console.error(`missing ${map}`);
  process.exit(1);
}
const text = fs.readFileSync(map, "utf8");
for (const token of [
  "firmware_map", "ui_launcher", "ble_connectivity", "ota_security",
  "audio_display", "sensors_health", "power_battery", "factory_shell",
  "zephyr_rtos", "xs_vendor", "custom_diff",
]) {
  if (!text.includes(token)) {
    console.error(`map missing ${token}`);
    process.exit(1);
  }
}
const csv = path.join(HALLIDAY, "export", "functions", "app", "functions.csv");
if (!fs.existsSync(csv)) {
  console.error(`missing ghidra export ${csv}`);
  process.exit(1);
}
console.log("halliday integration verification passed");
