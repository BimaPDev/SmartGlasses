#!/usr/bin/env node
// Join leaf JSON artifacts into patch_catalog.json. Run only after leaves verify.
import { readFileSync, writeFileSync, existsSync } from "node:fs";
import { resolve } from "node:path";

const ROOT = resolve(new URL("../../../../../", import.meta.url).pathname);
const DIR = resolve(ROOT, "Reverse/firmware/analysis/hud_map");
const BIN = resolve(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");

function load(name) {
  const p = resolve(DIR, name);
  if (!existsSync(p)) throw new Error(`missing ${name}`);
  return JSON.parse(readFileSync(p, "utf8"));
}

function stockAt(bin, offHex, n) {
  const off = parseInt(offHex, 16);
  return bin.slice(off, off + n).toString("hex");
}

const intern = load("intern_map.json");
const lvgl = load("lvgl_xrefs.json");
const time = load("time_widget.json");
const layout = load("layout_tables.json");
const bin = readFileSync(BIN);

const sites = [];
const seen = new Set();

function addSite(purpose, fileOff, stockHex, patchHex, extra) {
  const stock = String(stockHex).replace(/\s+/g, "");
  const patch = String(patchHex).replace(/\s+/g, "");
  if (stock.length !== patch.length) {
    throw new Error(`length mismatch ${purpose} ${fileOff}`);
  }
  const key = String(fileOff).toLowerCase();
  if (seen.has(key)) return;
  seen.add(key);
  sites.push({
    purpose,
    file_off: fileOff,
    stock_hex: stock,
    patch_hex: patch,
    len_equal: true,
    ...extra,
  });
}

if (time.unique === true) {
  const pinStock = String(time.stock_hex).replace(/\s+/g, "");
  addSite(
    time.why_clock_digits ? `clock digits: ${time.evidence_kind}` : "clock digits",
    time.file_off,
    pinStock,
    pinStock,
    { va: time.va, evidence_kind: time.evidence_kind, note: "patch_hex is stock until a sized patch is chosen" }
  );
}

addSite(
  "1x1 dock tile size (width 140, lv_obj_set_size)",
  "0x50893c",
  stockAt(bin, "0x50893c", 2),
  stockAt(bin, "0x50893c", 2),
  { va: "0x2c50893c", bl: "0x2c508940", helper: "0x2c607048", note: "shared by five dock children; does not scale HH:MM glyphs" }
);

for (const t of layout.tables || []) {
  for (const r of t.records || []) {
    if (!r.name) continue;
    const n = String(r.name).toLowerCase();
    if (!(n.includes("time") || n.includes("weekday") || n.includes("weather") || n.includes("aiball") || n.includes("steps"))) {
      continue;
    }
    if (r.geom_file_off && r.geom_stock_hex) {
      const stock = String(r.geom_stock_hex).replace(/\s+/g, "");
      addSite(
        `${r.name} geometry`,
        r.geom_file_off,
        stock,
        stock,
        { table: t.id, slot: r.slot ?? r.i }
      );
    }
  }
}

const catalog = {
  bin: "Reverse/firmware/x_1.0.12.83/platform_tester.bin",
  va_base: "0x2C000000",
  sources: {
    intern_map: "Reverse/firmware/analysis/hud_map/intern_map.json",
    lvgl_xrefs: "Reverse/firmware/analysis/hud_map/lvgl_xrefs.json",
    time_widget: "Reverse/firmware/analysis/hud_map/time_widget.json",
    layout_tables: "Reverse/firmware/analysis/hud_map/layout_tables.json",
  },
  intern_site_count: Array.isArray(intern.sites) ? intern.sites.length : 0,
  lvgl_wrapper_names: Object.keys(lvgl.wrappers || {}),
  clock_digit_pin: time.unique === true ? "pinned" : "abandoned",
  clock_digit_note: time.unique === true ? time.why_clock_digits : time.notes,
  sites,
};

writeFileSync(resolve(DIR, "patch_catalog.json"), JSON.stringify(catalog, null, 2) + "\n");
console.log(`wrote patch_catalog.json with ${sites.length} site(s)`);
