#!/usr/bin/env node
// G7: the LittleFS adapter is READ-ONLY, and the config layout is located.
// (Replaces abandoned G1: the geometry is built at runtime and is not in the image.)
import { d, BUILD, mk } from "./_fslib.mjs";
const { ok, done } = mk();
ok("image is the expected build", d.includes(BUILD));

const RO = "error: Write is not supported!!!";
ok("the LittleFS flash adapter refuses writes", d.includes(RO), JSON.stringify(RO));
const at = d.indexOf(RO);
const ctx = d.toString("latin1", Math.max(0, at - 0x90), at);
ok("that string sits in lfs_adapt_flash.c", ctx.includes("lfs_adapt_flash.c"));

for (const s of ["lfs_flash_open1", "lfs_flash_open2",
                 "Load all data to psram start:%08x", "Load all data to psram end:%08x"])
  ok(`flash->PSRAM load path present: ${s}`, d.includes(s));

// The config is a RUNTIME struct: block_size*block_count is computed with ldrd+mul from
// [r4,#0x1c]. Assert those exact opcode bytes exist, which is what makes the geometry
// unavailable statically.  ldrd r5,r3,[r4,#0x1c] = e9 d4 53 07 ; mul r5,r3,r5 = 03 fb 05 f5
const LDRD = Buffer.from([0xd4, 0xe9, 0x07, 0x53]);   // ldrd r5,r3,[r4,#0x1c]
const MUL  = Buffer.from([0x03, 0xfb, 0x05, 0xf5]);
const li = d.indexOf(LDRD);
ok("ldrd of block_size/block_count from the config struct is present", li >= 0,
   li >= 0 ? `file 0x${li.toString(16)}` : "");
ok("it is immediately followed by the mul (size = block_size * block_count)",
   li >= 0 && d.indexOf(MUL, li) === li + 6, li >= 0 ? `mul at 0x${(li + 6).toString(16)}` : "");

// NEGATIVE with a POSITIVE CONTROL: no STATIC lfs_config exists in the data region.
// The control proves the matcher can find such a struct when one is planted.
function findConfig(buf, lo, hi) {
  const pow2 = new Set([256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536]);
  const small = new Set([1, 2, 4, 8, 16, 32, 64, 128, 256, 512]);
  const cache = new Set([16, 32, 64, 128, 256, 512, 1024]);
  const look = new Set([8, 16, 32, 64, 128, 256, 512]);
  for (let o = lo; o < hi - 28; o += 4) {
    const v = i => buf.readUInt32LE(o + i * 4);
    if (small.has(v(0)) && small.has(v(1)) && pow2.has(v(2)) && v(3) >= 8 && v(3) <= 65536 &&
        (v(4) === 0xffffffff || (v(4) >= 1 && v(4) <= 10000)) && cache.has(v(5)) && look.has(v(6)))
      return o;
  }
  return -1;
}
ok("no static lfs_config in the PSRAM data region", findConfig(d, 0x28350, 0x4a1270) === -1);
const planted = Buffer.alloc(64);
[16, 16, 4096, 1024, 0xffffffff, 256, 64].forEach((v, i) => planted.writeUInt32LE(v, 16 + i * 4));
ok("control: the same matcher DOES find a planted lfs_config", findConfig(planted, 0, 64) === 16,
   "so the absence above is a real absence, not a broken matcher");
done("lfs readonly verification passed");
