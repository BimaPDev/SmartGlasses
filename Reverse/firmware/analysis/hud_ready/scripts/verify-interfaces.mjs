#!/usr/bin/env node
/**
 * Cross-leaf address agreement for hud_ready inventories.
 * Success token: interface verification passed
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const BASE = path.resolve(__dirname, "..");

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

function load(rel) {
  const p = path.join(BASE, rel);
  if (!fs.existsSync(p)) fail(`missing ${rel}`);
  return JSON.parse(fs.readFileSync(p, "utf8"));
}

const strings = load("strings/strings_inventory.json");
const standby = load("standby_view/standby_view.json");
const splash = load("splash_vs_idle/splash_vs_idle.json");
const page = load("page_ready/page_ready.json");

const byAscii = new Map();
for (const s of strings.strings || []) {
  const prev = byAscii.get(s.ascii);
  if (prev && prev !== s.file_off) {
    fail(`string ${s.ascii} has conflicting file_off ${prev} vs ${s.file_off}`);
  }
  byAscii.set(s.ascii, s.file_off);
}

function agree(ascii, off, src) {
  if (!ascii || !off) return;
  const known = byAscii.get(ascii);
  if (known && known !== off) {
    fail(`${src} file_off ${off} disagrees with strings inventory ${known} for ${ascii}`);
  }
}

for (const e of page.lifecycle || []) {
  agree(e.string_ascii, e.string_file_off, "page_ready");
}
if (splash.ctor_file_off !== "0x5d931c" && splash.ctor_file_off !== "0x5D931C") {
  fail(`splash ctor_file_off ${splash.ctor_file_off} is not the known widget ctor`);
}
if (!Array.isArray(standby.functions) || standby.functions.length < 4) {
  fail("standby_view.functions missing after strings leaf");
}

console.log("interface verification passed");
