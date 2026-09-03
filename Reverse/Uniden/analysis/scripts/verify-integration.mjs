#!/usr/bin/env node
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const UNIDEN = path.resolve(path.dirname(fileURLToPath(import.meta.url)), "../..");
const FULL = path.join(UNIDEN, "analysis", "full_rev");

const leaves = [
  "architecture/ARCHITECTURE.md",
  "bluetooth/BLUETOOTH.md",
  "device_protocol/DEVICE_PROTOCOL.md",
  "network_api/NETWORK_API.md",
  "ui_features/UI_FEATURES.md",
  "location_maps/LOCATION_MAPS.md",
  "storage_data/STORAGE_DATA.md",
  "native_sdks/NATIVE_SDKS.md",
];

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

for (const rel of leaves) {
  const p = path.join(FULL, rel);
  if (!fs.existsSync(p)) fail(`missing ${p}`);
  if (fs.statSync(p).size < 200) fail(`too small ${p}`);
}

const map = path.join(FULL, "FULL_APP_MAP.md");
if (!fs.existsSync(map)) fail(`missing ${map}`);
const text = fs.readFileSync(map, "utf8");
for (const token of [
  "architecture",
  "bluetooth",
  "device_protocol",
  "network_api",
  "ui_features",
  "location_maps",
  "storage_data",
  "native_sdks",
  "com.uniden.rtach",
]) {
  if (!text.includes(token)) fail(`map missing ${token}`);
}
if (text.split(/\r?\n/).length < 80) fail("FULL_APP_MAP.md too short");

const readme = path.join(UNIDEN, "README.md");
if (!fs.existsSync(readme) || fs.statSync(readme).size < 100) {
  fail("missing Uniden README.md");
}

console.log("uniden integration verification passed");
