#!/usr/bin/env node
/**
 * Prove reverse outputs live under Reverse/Uniden, not sibling Reverse/ paths.
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const UNIDEN = path.resolve(path.dirname(fileURLToPath(import.meta.url)), "../..");
const REVERSE = path.resolve(UNIDEN, "..");

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

const requiredInside = [
  "decompiled",
  "xapk/com.uniden.rtach.apk",
  "analysis/fingerprint.md",
  "analysis/full_rev/FULL_APP_MAP.md",
  "analysis/full_rev/architecture/ARCHITECTURE.md",
  "analysis/full_rev/bluetooth/BLUETOOTH.md",
  "analysis/full_rev/device_protocol/DEVICE_PROTOCOL.md",
  "analysis/full_rev/network_api/NETWORK_API.md",
  "analysis/full_rev/ui_features/UI_FEATURES.md",
  "analysis/full_rev/location_maps/LOCATION_MAPS.md",
  "analysis/full_rev/storage_data/STORAGE_DATA.md",
  "analysis/full_rev/native_sdks/NATIVE_SDKS.md",
];

for (const rel of requiredInside) {
  const p = path.join(UNIDEN, rel);
  if (!fs.existsSync(p)) fail(`required Uniden artifact missing: ${rel}`);
}

const bannedNames = [
  "R_TACH-decompiled",
  "com.uniden.rtach-decompiled",
  "uniden-decompiled",
  "rtach-decompiled",
];
let entries;
try {
  entries = fs.readdirSync(REVERSE);
} catch (e) {
  fail(`cannot read Reverse/: ${e.message}`);
}
for (const name of entries) {
  if (name === "Uniden" || name === ".DS_Store") continue;
  if (bannedNames.includes(name) || /uniden|rtach|R_TACH/i.test(name)) {
    fail(`reverse artifact leaked outside Uniden: Reverse/${name}`);
  }
}

console.log("uniden containment verification passed");
