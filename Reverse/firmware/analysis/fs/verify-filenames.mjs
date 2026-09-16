#!/usr/bin/env node
// G5: enumerate every filename the firmware references, and decide the boot-logo question.
import { d, BUILD, strings, mk } from "./_fslib.mjs";
import { readFileSync } from "node:fs";
import { BTH } from "./_fslib.mjs";
const { ok, done } = mk();
ok("image is the expected build", d.includes(BUILD));

// Filenames: a basename with a data-ish extension, NUL-terminated, not a source file.
const SRC = /\.(c|h|cpp|hpp|cc)$/;
const names = strings(d, 5)
  .filter(([o, s]) => /^[A-Za-z0-9_][A-Za-z0-9_.\-]{2,60}\.[a-z0-9]{2,5}$/.test(s)
                      && !SRC.test(s) && d[o + s.length] === 0)
  .map(([o, s]) => [o, s]);
console.log("  data filenames referenced by the firmware:");
for (const [o, s] of names) console.log(`    0x${o.toString(16)}  ${s}`);
ok("at least one data filename is referenced", names.length > 0, `${names.length}`);

const LOGOISH = /(logo|splash|boot|brand|myvu|startup|poweron|welcome)/i;
const logoNames = names.filter(([, s]) => LOGOISH.test(s));
ok("no referenced filename is boot-logo shaped", logoNames.length === 0,
   logoNames.map(x => x[1]).join(", ") || "none");

// CONTROL: the same filter finds a logo-shaped name when one is present.
const planted = Buffer.from("\0boot_logo.bin\0", "latin1");
const pn = strings(planted, 5).filter(([o, s]) =>
  /^[A-Za-z0-9_][A-Za-z0-9_.\-]{2,60}\.[a-z0-9]{2,5}$/.test(s) && planted[o + s.length] === 0);
ok("control: the same filter finds a planted boot_logo.bin",
   pn.length === 1 && LOGOISH.test(pn[0][1]), "so the absence above is a measurement");

// And the other OTA file carries no filenames or images either.
const bth = readFileSync(BTH);
const bthNames = strings(bth, 5).filter(([, s]) => LOGOISH.test(s) && /\.[a-z0-9]{2,5}$/.test(s));
ok("the bth image references no boot-logo file either", bthNames.length === 0,
   bthNames.map(x => x[1]).join(", ") || "none");
done("filenames verification passed");
