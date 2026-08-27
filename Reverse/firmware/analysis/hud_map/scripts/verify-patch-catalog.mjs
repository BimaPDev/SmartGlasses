#!/usr/bin/env node
import { readFileSync, existsSync } from "node:fs";
import { resolve } from "node:path";

const ROOT = resolve(new URL("../../../../../", import.meta.url).pathname);
const CAT = resolve(ROOT, "Reverse/firmware/analysis/hud_map/patch_catalog.json");
const NEED = [
  "intern_map.json",
  "lvgl_xrefs.json",
  "time_widget.json",
  "layout_tables.json",
].map((n) => resolve(ROOT, "Reverse/firmware/analysis/hud_map", n));

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

if (!existsSync(CAT)) fail("patch_catalog.json missing");
for (const p of NEED) {
  if (!existsSync(p)) fail(`leaf artifact missing: ${p}`);
}

const cat = JSON.parse(readFileSync(CAT, "utf8"));
const sites = Array.isArray(cat.sites) ? cat.sites : [];
if (!sites.length) fail("catalog has no sites");

let layout = 0;
for (const s of sites) {
  if (!s.file_off || !s.stock_hex || !s.patch_hex || !s.purpose) {
    fail(`site missing fields: ${JSON.stringify(s)}`);
  }
  const stock = String(s.stock_hex).replace(/\s+/g, "");
  const patch = String(s.patch_hex).replace(/\s+/g, "");
  if (stock.length !== patch.length) fail(`length mismatch at ${s.file_off}`);
  if (stock.length < 4) fail(`site ${s.file_off} too short`);
  if (s.len_equal !== true) fail(`len_equal not true at ${s.file_off}`);
  const p = String(s.purpose).toLowerCase();
  if (p.includes("radius") || p.includes("outline")) {
    fail(`catalog must not use theme radius/outline as a layout site (${s.file_off})`);
  }
  if (
    p.includes("pos") ||
    p.includes("size") ||
    p.includes("font") ||
    p.includes("zoom") ||
    p.includes("coord") ||
    p.includes("digit")
  ) {
    layout++;
  }
}
if (layout < 1) fail("no unique layout (pos/size/font/zoom/digit) site in catalog");

const sources = cat.sources || {};
for (const k of ["intern_map", "lvgl_xrefs", "time_widget", "layout_tables"]) {
  if (!sources[k]) fail(`catalog.sources.${k} missing`);
}

console.log("patch catalog verification passed");
