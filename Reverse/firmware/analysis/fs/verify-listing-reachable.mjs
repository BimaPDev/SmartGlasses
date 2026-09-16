#!/usr/bin/env node
// G4: DECIDE whether the phone can make the glasses enumerate a directory.
//
// This is a negative finding, so it carries a positive control: the same extractor is
// pointed at an enum family that DOES contain list operations. If it can find those, an
// absence in the file-transfer family is a measurement rather than a broken search.
import { d, BUILD, mk } from "./_fslib.mjs";
const { ok, done } = mk();
ok("image is the expected build", d.includes(BUILD));

const txt = d.toString("latin1");
const fam = p => [...new Set((txt.match(new RegExp(p + "[A-Z_0-9]+", "g")) || [])
  .map(s => s.replace(new RegExp("^" + p), "")))].sort();

const share = fam("SHARE_STREAM_TYPE__");
const reply = fam("REPLY_STREAM_TYPE__");
console.log("  file-transfer ops : " + share.join(", "));
console.log("  reply-channel ops : " + reply.join(", "));

const LISTY = /(^|_)(LIST|LS|ENUM|ENUMERATE|DIR|READDIR|SCAN|BROWSE|INDEX)($|_)/;
const shareListy = share.filter(o => LISTY.test(o));
const replyListy = reply.filter(o => LISTY.test(o));

ok("the file-transfer enum was extracted", share.length === 15, `${share.length} ops`);
ok("the reply-channel enum was extracted", reply.length === 13, `${reply.length} ops`);

// POSITIVE CONTROL first: the detector finds list-shaped ops where they exist.
ok("control: the detector DOES find list operations in the reply channel",
   replyListy.length >= 3, replyListy.join(", "));

// THE FINDING
ok("no directory-listing operation exists in the file-transfer protocol",
   shareListy.length === 0, shareListy.join(", ") || "none of the 15 ops is list-shaped");

// PULL exists -- a file can be requested BY NAME, which is not the same as enumerating.
ok("a PULL operation does exist (fetch by name, not enumerate)", share.includes("PULL"));

// The LVGL dir-open entry is present but is not wired to a phone-facing handler: its
// name string is referenced exactly once, by the driver's own callback table.
const nameAt = txt.indexOf("lv_lfs_dir_open");
ok("lv_lfs_dir_open exists in the binary", nameAt >= 0, `0x${nameAt.toString(16)}`);
const va = nameAt + 0x3bfd7cb0;
let refs = 0;
for (let o = 0; o + 4 <= d.length; o += 4) if (d.readUInt32LE(o) === va) refs++;
ok("its name string has exactly one reference (the driver table, not a dispatcher)",
   refs === 1, `${refs} reference(s)`);
done("listing reachability verification passed");
