#!/usr/bin/env node
// G3: enumerate the BLE file-transfer protocol from the binary.
import { d, BUILD, mk } from "./_fslib.mjs";
const { ok, done } = mk();
ok("image is the expected build", d.includes(BUILD));

const ops = [...new Set((d.toString("latin1").match(/SHARE_STREAM_TYPE__[A-Z_0-9]+/g) || [])
  .map(s => s.replace("SHARE_STREAM_TYPE__", "")))].sort();
console.log("  ShareMessage operations: " + ops.join(", "));
ok("the ShareMessage operation enum is present", ops.length > 0, `${ops.length} operations`);
ok("it carries exactly the 15 known operations", ops.length === 15, `${ops.length}`);
for (const need of ["SENDER_SYN", "SENDER_DATA", "SENDER_FINISH", "RECEIVER_ACK",
                    "RECEIVER_DATA_ACK", "PULL", "CANCEL"])
  ok(`operation present: ${need}`, ops.includes(need));

const fields = ["dirPath", "taskId", "fileInfos", "fileName", "md5", "chunkData",
                "chunkSize", "chunkStart", "chunkEnd", "totalSize", "count", "packageName"];
for (const f of fields) ok(`ShareMessage field present: ${f}`, d.includes(f));
for (const f of ["share_message__pack", "share_message__get_packed_size",
                 "share_message__free_unpacked"])
  ok(`protobuf-c codec present: ${f}`, d.includes(f));
for (const f of ["starrynet_send_file", "receive_file_transfer_message",
                 "confirm_received_file_md5", "process_chunk_data"])
  ok(`transfer implementation present: ${f}`, d.includes(f));
done("file transfer verification passed");
