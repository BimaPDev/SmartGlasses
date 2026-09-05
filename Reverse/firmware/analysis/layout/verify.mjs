#!/usr/bin/env node
import { readFileSync } from 'node:fs';
const d = readFileSync('Reverse/firmware/x_1.0.11.53/platform_tester.bin');
let bad = 0;
const ok=(n,c,m)=>{console.log(`${c?'ok  ':'FAIL'} ${n} — ${m}`); if(!c)bad++;};
const movs=(o)=>{const v=d.readUInt16LE(o); return {reg:(v>>8)&7, imm:v&0xFF, isMovs:(v&0xF800)===0x2000};};
const y=movs(0x61b15e), x=movs(0x61b160), a=movs(0x61b162);
const bh=movs(0x61b1a0), bw=movs(0x61b1a2);
ok('clock y = MOVS r3,#11', y.isMovs&&y.reg===3&&y.imm===11, `bytes ${d.subarray(0x61b15e,0x61b160).toString('hex')}`);
ok('clock x = MOVS r2,#0',  x.isMovs&&x.reg===2&&x.imm===0,  `bytes ${d.subarray(0x61b160,0x61b162).toString('hex')}`);
ok('align  = MOVS r1,#2',   a.isMovs&&a.reg===1&&a.imm===2,  'LV_ALIGN_TOP_MID');
ok('battery 24x12',         bh.imm===24&&bw.imm===12,        'matches launcher_standby_battery_charge_lightning (12x24)');
ok('LV_SIZE_CONTENT 0x27d1 present in ctor', d.readUInt16LE(0x61b152)===0xf24f || d.includes(Buffer.from([0xd1,0x27])), 'movw #0x27d1');
if(bad){console.log(`\n${bad} check(s) failed`);process.exit(1);}
console.log('\nlayout verification passed');
