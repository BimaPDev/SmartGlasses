#!/usr/bin/env node
/**
 * Confirm the stock onLauncherEnterCallback delay is catalogued as a delay.
 * Usage: node verify-delay-named.mjs <strings|standby|both>
 * Success token: stock delay named verification passed
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const BASE = path.resolve(__dirname, "..");
const mode = process.argv[2] || "both";

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

function read(rel) {
  const p = path.join(BASE, rel);
  if (!fs.existsSync(p)) fail(`missing ${rel}`);
  return fs.readFileSync(p, "utf8");
}

function stringsOk() {
  const t = read("strings/STRINGS.md") + read("strings/strings_inventory.json");
  if (!/onLauncherEnterCallback/i.test(t)) fail("strings leaf missing onLauncherEnterCallback");
  if (!/delay/i.test(t)) fail("strings leaf does not name that callback as a delay");
}

function standbyOk() {
  const t = read("standby_view/STANDBY_VIEW.md") + read("standby_view/standby_view.json");
  if (!/onLauncherEnterCallback/i.test(t)) fail("standby leaf missing onLauncherEnterCallback");
  if (!/"kind"\s*:\s*"delay"/i.test(t) && !/kind delay/i.test(t) && !/role": "[^"]*delay/i.test(t)) {
    fail("standby leaf must record onLauncherEnterCallback as kind/role delay");
  }
}

if (mode === "strings") stringsOk();
else if (mode === "standby") standbyOk();
else if (mode === "both") {
  stringsOk();
  standbyOk();
} else fail("usage: node verify-delay-named.mjs <strings|standby|both>");

console.log("stock delay named verification passed");
