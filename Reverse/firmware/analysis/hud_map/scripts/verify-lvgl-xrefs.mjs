#!/usr/bin/env node
import { readFileSync, existsSync } from "node:fs";
import { resolve } from "node:path";

const ROOT = resolve(new URL("../../../../../", import.meta.url).pathname);
const ART = resolve(ROOT, "Reverse/firmware/analysis/hud_map/lvgl_xrefs.json");
const BIN = resolve(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

if (!existsSync(ART)) fail("lvgl_xrefs.json missing");
if (!existsSync(BIN)) fail("platform_tester.bin missing");

const data = JSON.parse(readFileSync(ART, "utf8"));
const wrappers = data.wrappers;
if (!wrappers || typeof wrappers !== "object") fail("wrappers object missing");

const required = [
  "lv_obj_set_size",
  "lv_obj_set_pos",
  "lv_obj_set_style_text_font",
  "lv_obj_set_style_radius",
  "lv_style_set_width",
  "lv_style_set_height",
];

for (const name of required) {
  const w = wrappers[name];
  if (!w) fail(`missing wrapper ${name}`);
  if (!w.va || !w.file_off) fail(`${name} missing va/file_off`);
  const xrefs = Array.isArray(w.xrefs) ? w.xrefs : [];
  if (typeof w.xref_count !== "number" || w.xref_count !== xrefs.length) {
    fail(`${name} xref_count ${w.xref_count} != xrefs.length ${xrefs.length}`);
  }
}

const pos = wrappers.lv_obj_set_pos.xref_count;
const size = wrappers.lv_obj_set_size.xref_count;
if (pos + size < 1) fail("no xrefs to set_pos or set_size");

const font = wrappers.lv_obj_set_style_text_font.xref_count;
if (font < 1) fail("no xrefs to set_style_text_font");

console.log("lvgl xref verification passed");
