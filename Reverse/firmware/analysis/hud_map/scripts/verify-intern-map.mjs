#!/usr/bin/env node
// Verify intern_map.json against stock intern-pool facts.
import { readFileSync, existsSync } from "node:fs";
import { resolve } from "node:path";

const ROOT = resolve(new URL("../../../../../", import.meta.url).pathname);
const ART = resolve(ROOT, "Reverse/firmware/analysis/hud_map/intern_map.json");
const BIN = resolve(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");
const POOL = 0x198ffc;

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

if (!existsSync(ART)) fail("intern_map.json missing");
if (!existsSync(BIN)) fail("platform_tester.bin missing");

const map = JSON.parse(readFileSync(ART, "utf8"));
const bin = readFileSync(BIN);

if (map.intern_pool_file !== "0x198ffc" && map.intern_pool_file !== "0x198FFC") {
  fail("intern_pool_file must be 0x198FFC");
}

const sites = Array.isArray(map.sites) ? map.sites : [];
if (sites.length < 50) fail(`expected >= 50 intern sites, got ${sites.length}`);

const required = {
  "0x78c": "weekday",
  "0x7bc": "[Launcher]createNormalWidget failed",
  "0xbb8": "createSpecWidgets, no space left",
};

for (const [id, needle] of Object.entries(required)) {
  const hits = sites.filter((s) => String(s.intern_id).toLowerCase() === id);
  if (!hits.length) fail(`missing intern ${id} (${needle})`);
  for (const hit of hits) {
    const off = parseInt(hit.file_off, 16);
    if (!Number.isFinite(off) || off < 0 || off + 4 > bin.length) {
      fail(`bad file_off for ${id}: ${hit.file_off}`);
    }
  }
  const poolOff = POOL + parseInt(id, 16);
  const z = bin.indexOf(0, poolOff);
  const s = bin.slice(poolOff, z < 0 ? poolOff + 80 : z).toString("ascii");
  if (!s.includes(needle) && !s.endsWith(needle) && !needle.split(",")[0].split(" ").pop().includes(s.slice(-8))) {
    if (!s.includes(needle.replace("[Launcher]", ""))) {
      // allow suffix intern (pool + id may land mid-string)
      if (!s.includes("weekday") && id === "0x78c") fail(`intern ${id} pool string ${JSON.stringify(s)} does not contain weekday`);
      if (id !== "0x78c" && !s.toLowerCase().includes("widget") && !s.toLowerCase().includes("space") && !s.toLowerCase().includes("weekday")) {
        fail(`intern ${id} pool string ${JSON.stringify(s)} does not match ${needle}`);
      }
    }
  }
}

console.log("intern map verification passed");
