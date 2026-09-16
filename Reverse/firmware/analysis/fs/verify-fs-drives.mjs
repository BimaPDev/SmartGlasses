#!/usr/bin/env node
// G2: enumerate every LVGL filesystem drive letter actually used, from the binary.
import { d, BUILD, strings, mk } from "./_fslib.mjs";
const { ok, done } = mk();
ok("image is the expected build", d.includes(BUILD));

// A drive is used as "X:path" inside a real string. The path must look like a real
// filename: a loose /^[A-Z]:\S+$/ matches random binary ("D:Ds", "H:.eJE") and would
// have reported eleven imaginary drives.
const all = strings(d, 8);
const uses = all.filter(([o, s]) =>
  /^[A-Z]:[A-Za-z0-9_][A-Za-z0-9_./-]{4,}\.(bin|dat|txt|png|bmp|json|ttf|raw)$/.test(s)
  && d[o + s.length] === 0 && (o === 0 || d[o - 1] === 0));
const letters = [...new Set(uses.map(([, s]) => s[0]))].sort();
console.log("  drive-qualified paths found:");
for (const [o, s] of uses) console.log(`    0x${o.toString(16)}  ${s}`);

ok("at least one drive-qualified path exists", uses.length > 0, `${uses.length}`);
ok("exactly one drive letter is in use", letters.length === 1, letters.join(",") || "none");
ok("that drive is B:", letters[0] === "B", letters[0]);
ok("the only such path is the CN font binary",
   uses.length === 1 && uses[0][1] === "B:lv_font_air_full_cn_20_bpp1.bin", uses[0]?.[1]);

// the LVGL LittleFS driver is present, and so is its dir-open entry point
for (const s of ["lv_fs_lfs.c", "lv_lfs_file_open", "lv_lfs_dir_open", "lv_lfs_file_remove"])
  ok(`LVGL LittleFS driver symbol present: ${s}`, d.includes(s));

// CONTROL: the matcher would find another drive if one existed
const planted = Buffer.from("\0S:some/other/file.bin\0", "latin1");
const pl = strings(planted, 8).filter(([o, s]) =>
  /^[A-Z]:[A-Za-z0-9_][A-Za-z0-9_./-]{4,}\.(bin|dat|txt|png|bmp|json|ttf|raw)$/.test(s)
  && planted[o + s.length] === 0 && (o === 0 || planted[o - 1] === 0));
ok("control: the same matcher finds a planted S: path", pl.length === 1 && pl[0][1][0] === "S",
   "so 'only B:' is a measurement, not a matcher artefact");
done("fs drives verification passed");
