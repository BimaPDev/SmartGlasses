#!/usr/bin/env node
// Gates for: does the firmware SEND a StarryNet KEY_EVENT?
import { readFileSync } from 'node:fs';
const m = readFileSync('Reverse/firmware/x_1.0.12.83/platform_tester.bin');
const b = readFileSync('Reverse/firmware/x_1.0.12.83/best1600_watch_bth.bin');
const cs = (d,o)=>{let e=o;while(d[e])e++;return d.subarray(o,e).toString('latin1');};
const which = process.argv[2] || 'all';
let bad = 0;
const ok = (g,c,msg)=>{ if(c) console.log(`${g} ok — ${msg}`); else { console.log(`${g} FAIL — ${msg}`); bad++; } };

if (which==='g1'||which==='all') {
  // enum value table entry: {c_name, name, value} at 0x30674
  const cname = m.readUInt32LE(0x30674) - 0x3BFD7C0C;
  const lname = m.readUInt32LE(0x30678) - 0x3BFD7C0C;
  const val   = m.readUInt32LE(0x3067c);
  ok('G1', cs(m,cname)==='KEY_EVENT' && cs(m,lname)==='STARRY__MSG__CMD__KEY_EVENT' && val===906,
     `KEY_EVENT = ${val} (0x${val.toString(16)}) from the protobuf enum descriptor @0x30674`);
}
if (which==='g2'||which==='all') {
  // The immediate-scan method is INVALID: its positive control returns __LINE__ values.
  // Assert that invalidity explicitly so the ledger cannot claim a trustworthy negative.
  // NOTIFY=901=0x385 appears at 0x5ae188 immediately before the trace helper 0x62c82c.
  const traceCall = m.readUInt32LE(0x30678) > 0; // placeholder guard
  ok('G2', false,
     'method INVALID: scanning for immediate 906 finds only __LINE__ operands of trace calls; ' +
     'the NOTIFY(901) positive control is likewise __LINE__, so a "no writer" result proves nothing');
}
if (which==='g3'||which==='all') {
  // Facts that DO hold, stated as facts:
  const enumInM55 = m.includes(Buffer.from('STARRY__MSG__CMD__KEY_EVENT'));
  const enumInBth = b.includes(Buffer.from('STARRY__MSG__CMD__KEY_EVENT'));
  const packInM55 = m.includes(Buffer.from('starry__msg_data__pack'));
  const packInBth = b.includes(Buffer.from('starry__msg_data__pack'));
  ok('G3', false,
     `UNRESOLVED. Established: enum in M55=${enumInM55} BTH=${enumInBth}; pack() in M55=${packInM55} ` +
     `BTH=${packInBth}. NOT established: whether any code assigns msg_cmd=906. Needs a method ` +
     `validated against a real send path.`);
}
if (bad) { console.log(`\n${bad} gate(s) unmet — HANDOFF REQUIRED`); process.exit(1); }
console.log('\nkey-event gates passed');
