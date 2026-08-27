#!/usr/bin/env node
import { readFileSync, existsSync } from "node:fs";
import { resolve } from "node:path";

const ROOT = resolve(new URL("../../../../../", import.meta.url).pathname);
const CAT = resolve(ROOT, "Reverse/firmware/analysis/hud_map/patch_catalog.json");
const BIN = resolve(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin");
const TIME = resolve(ROOT, "Reverse/firmware/analysis/hud_map/time_widget.json");

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

if (!existsSync(CAT) || !existsSync(BIN) || !existsSync(TIME)) {
  fail("catalog, time pin, or stock bin missing");
}

const bin = readFileSync(BIN);
const cat = JSON.parse(readFileSync(CAT, "utf8"));
const pin = JSON.parse(readFileSync(TIME, "utf8"));

function check(offHex, stockHex, label) {
  const off = parseInt(offHex, 16);
  const stock = Buffer.from(String(stockHex).replace(/\s+/g, ""), "hex");
  if (!Number.isFinite(off) || off < 0 || off + stock.length > bin.length) {
    fail(`${label} offset out of range`);
  }
  const got = bin.slice(off, off + stock.length);
  if (!got.equals(stock)) {
    fail(`${label} stock mismatch at ${offHex}: ${got.toString("hex")} vs ${stock.toString("hex")}`);
  }
}

check(pin.file_off, pin.stock_hex, "time pin");
for (const s of cat.sites || []) {
  check(s.file_off, s.stock_hex, `catalog ${s.purpose}`);
}

console.log("stock bytes verification passed");
