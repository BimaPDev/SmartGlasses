#!/usr/bin/env node
/**
 * Uniden R/TACH leaf verifier — paths under Reverse/Uniden/
 * Usage: node verify-leaf.mjs <leaf-id>
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const SCRIPTS = path.dirname(fileURLToPath(import.meta.url));
const UNIDEN = path.resolve(SCRIPTS, "../..");
const FULL = path.join(UNIDEN, "analysis", "full_rev");
const DECOMPILED = path.join(UNIDEN, "decompiled");

const LEAVES = {
  "1.1": { decompileCheck: true },
  "1.2": {
    dir: "architecture",
    need: ["ARCHITECTURE.md", "manifest.json"],
    minMd: 60,
    mustContainMd: ["AndroidManifest", "com.uniden.rtach", "Hilt"],
  },
  "1.3": {
    dir: "bluetooth",
    need: ["BLUETOOTH.md", "manifest.json"],
    minMd: 60,
    mustContainMd: ["Bluetooth", "UUID", "connect"],
  },
  "1.4": {
    dir: "device_protocol",
    need: ["DEVICE_PROTOCOL.md", "manifest.json"],
    minMd: 80,
    mustContainMd: ["write_index", "radar", "byte"],
  },
  "1.5": {
    dir: "network_api",
    need: ["NETWORK_API.md", "manifest.json"],
    minMd: 40,
    mustContainMd: ["http", "OkHttp"],
  },
  "1.6": {
    dir: "ui_features",
    need: ["UI_FEATURES.md", "manifest.json"],
    minMd: 60,
    mustContainMd: ["Activity", "com.uniden.rtach"],
  },
  "1.7": {
    dir: "location_maps",
    need: ["LOCATION_MAPS.md", "manifest.json"],
    minMd: 50,
    mustContainMd: ["location", "GPS"],
  },
  "1.8": {
    dir: "storage_data",
    need: ["STORAGE_DATA.md", "manifest.json"],
    minMd: 50,
    mustContainMd: ["R.json", "Room"],
  },
  "1.9": {
    dir: "native_sdks",
    need: ["NATIVE_SDKS.md", "manifest.json"],
    minMd: 40,
    mustContainMd: ["Firebase", "SDK"],
  },
};

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

function countFiles(dir, pred) {
  if (!fs.existsSync(dir)) return 0;
  let n = 0;
  const stack = [dir];
  while (stack.length) {
    const cur = stack.pop();
    let entries;
    try {
      entries = fs.readdirSync(cur, { withFileTypes: true });
    } catch {
      continue;
    }
    for (const e of entries) {
      const p = path.join(cur, e.name);
      if (e.isDirectory()) stack.push(p);
      else if (pred(p)) n += 1;
    }
  }
  return n;
}

const id = process.argv[2];
if (!id || !LEAVES[id]) {
  fail(`usage: node verify-leaf.mjs <${Object.keys(LEAVES).join("|")}>`);
}

const spec = LEAVES[id];

if (spec.decompileCheck) {
  const apk = path.join(UNIDEN, "xapk", "com.uniden.rtach.apk");
  if (!fs.existsSync(apk) || fs.statSync(apk).size < 1_000_000) {
    fail(`missing or tiny base apk: ${apk}`);
  }
  const fp = path.join(UNIDEN, "analysis", "fingerprint.md");
  if (!fs.existsSync(fp) || fs.statSync(fp).size < 200) {
    fail(`missing fingerprint.md`);
  }
  const fpText = fs.readFileSync(fp, "utf8");
  for (const needle of ["com.uniden.rtach", "Kotlin", "1.0.9"]) {
    if (!fpText.includes(needle)) fail(`fingerprint.md missing token: ${needle}`);
  }
  const manifestCandidates = [
    path.join(DECOMPILED, "resources", "AndroidManifest.xml"),
    path.join(DECOMPILED, "AndroidManifest.xml"),
    path.join(DECOMPILED, "resources", "base", "AndroidManifest.xml"),
  ];
  const manifest = manifestCandidates.find((p) => fs.existsSync(p));
  if (!manifest) fail(`missing AndroidManifest.xml under ${DECOMPILED}`);
  const sources = path.join(DECOMPILED, "sources");
  const javaCount = countFiles(sources, (p) => p.endsWith(".java") || p.endsWith(".kt"));
  if (javaCount < 50) fail(`only ${javaCount} decompiled source files, need >= 50`);
  const appSources = countFiles(path.join(sources, "com", "uniden"), () => true);
  if (appSources < 5) fail(`too few com.uniden sources: ${appSources}`);
  console.log(`leaf ${id} verification passed`);
  process.exit(0);
}

const dir = path.join(FULL, spec.dir);
if (!fs.existsSync(dir)) fail(`missing dir ${dir}`);

for (const name of spec.need) {
  const p = path.join(dir, name);
  if (!fs.existsSync(p)) fail(`missing file ${p}`);
  if (fs.statSync(p).size < 40) fail(`too small: ${p}`);
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
const anchors = man.anchors || man.sources || man.functions;
if (!Array.isArray(anchors) || anchors.length < 3) {
  fail("manifest.anchors (or sources) needs >= 3 entries");
}

console.log(`leaf ${id} verification passed`);
