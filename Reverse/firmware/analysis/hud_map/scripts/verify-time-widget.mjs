#!/usr/bin/env node
import { readFileSync, existsSync } from "node:fs";
import { resolve } from "node:path";

const ROOT = resolve(new URL("../../../../../", import.meta.url).pathname);
const ART = resolve(ROOT, "Reverse/firmware/analysis/hud_map/time_widget.json");
const BIN = resolve(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

if (!existsSync(ART)) fail("time_widget.json missing");
if (!existsSync(BIN)) fail("platform_tester.bin missing");

const pin = JSON.parse(readFileSync(ART, "utf8"));
const bin = readFileSync(BIN);

const kinds = new Set([
  "bl_ctor",
  "size_imm",
  "font_ptr",
  "transform_zoom",
  "label_fmt",
  "obj_pos",
]);
if (!kinds.has(pin.evidence_kind)) fail(`bad evidence_kind ${pin.evidence_kind}`);

if (pin.unique !== true) fail("pin.unique must be true");
if (!pin.file_off || !pin.va || !pin.stock_hex) fail("missing file_off/va/stock_hex");

const off = parseInt(pin.file_off, 16);
const stock = Buffer.from(String(pin.stock_hex).replace(/\s+/g, ""), "hex");
if (!Number.isFinite(off) || off < 0 || off + stock.length > bin.length) {
  fail("file_off out of range");
}
const got = bin.slice(off, off + stock.length);
if (!got.equals(stock)) {
  fail(`stock bytes mismatch at ${pin.file_off}: have ${got.toString("hex")} want ${stock.toString("hex")}`);
}

const rejected = Array.isArray(pin.rejected_false_positives) ? pin.rejected_false_positives : [];
if (rejected.length < 2) {
  fail("must list at least 2 rejected false positives with reasons");
}

if (!pin.why_clock_digits || String(pin.why_clock_digits).length < 20) {
  fail("why_clock_digits must explain why this site is HH:MM digits, not dock chrome");
}

console.log("time widget pin verification passed");
