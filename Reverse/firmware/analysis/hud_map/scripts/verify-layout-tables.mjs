#!/usr/bin/env node
import { readFileSync, existsSync } from "node:fs";
import { resolve } from "node:path";

const ROOT = resolve(new URL("../../../../../", import.meta.url).pathname);
const ART = resolve(ROOT, "Reverse/firmware/analysis/hud_map/layout_tables.json");
const BIN = resolve(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

if (!existsSync(ART)) fail("layout_tables.json missing");
if (!existsSync(BIN)) fail("platform_tester.bin missing");

const data = JSON.parse(readFileSync(ART, "utf8"));
const tables = Array.isArray(data.tables) ? data.tables : [];
if (!tables.length) fail("no tables");

let named = 0;
let geom = 0;
for (const t of tables) {
  if (!t.file_off || !t.stride || !Array.isArray(t.records) || t.records.length < 2) {
    fail(`table ${t.id || t.file_off} missing stride/records`);
  }
  for (const r of t.records) {
    if (r.name) named++;
    if (r.x != null || r.y != null || r.w != null || r.h != null || r.slot != null) geom++;
  }
}
if (named < 3) fail(`expected >= 3 named widget records, got ${named}`);
if (geom < 3) fail(`expected >= 3 geometry fields (x/y/w/h/slot), got ${geom}`);

const blob = JSON.stringify(data).toLowerCase();
if (!blob.includes("time") && !blob.includes("customtime") && !blob.includes("weekday")) {
  fail("tables do not mention time/customTime/weekday");
}

console.log("layout table verification passed");
