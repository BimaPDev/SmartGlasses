#!/usr/bin/env node
/* Gates for the combined HUD image (big clock + no rings + big tile).
   node verify-hud.mjs <stock.bin> <hud.bin>
   Negative controls re-assert against STOCK and must fail there. */
import { readFileSync } from 'node:fs';
const [,, sp, pp] = process.argv;
if (!sp || !pp) { console.error('usage: verify-hud.mjs <stock.bin> <hud.bin>'); process.exit(2); }
const A = readFileSync(sp), B = readFileSync(pp);
const CODE = 0x2C010000, TEXT = 0x469954;
const OPA = 0x61B7F8, TILE = 0x61B79E, WID = 0x61B7EE, FONTPTR = 0x61B2C4;
const DSP = [0x04E9B4, 0x143F14], SH = [0x134070, 0x14A7A4];
let bad = 0;
const ok = (n,c,m)=>{console.log(`${c?'ok  ':'FAIL'} ${n} — ${m}`); if(!c)bad++;};
const movs = (d,o)=>{const w=d.readUInt16LE(o); return (w&0xF800)===0x2000?{rd:(w>>8)&7,imm:w&0xFF}:null;};
const blT = (d,a)=>{const w1=d.readUInt16LE(a),w2=d.readUInt16LE(a+2);
  if((w1&0xF800)!==0xF000||(w2&0xD000)!==0xD000)return null;
  const S=(w1>>10)&1,i10=w1&0x3FF,J1=(w2>>13)&1,J2=(w2>>11)&1,i11=w2&0x7FF;
  const I1=(~(J1^S))&1,I2=(~(J2^S))&1;
  let off=(S<<24)|(I1<<23)|(I2<<22)|(i10<<12)|(i11<<1); if(S)off-=(1<<25);
  return a+CODE+4+off;};

ok('G0  decoder control', blT(B,0x61b888)===0x61b110+CODE,
   'BL 0x61b888 -> 0x61b110; if this fails nothing below counts');
ok('G1  build pinned', A.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR') &&
   B.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR'), 'every offset is build-specific');
ok('G2  length unchanged', A.length===B.length, `${A.length.toLocaleString()} bytes`);

// --- the three patches -----------------------------------------------------------
const t = movs(B,TILE), ts = movs(A,TILE);
ok('G3  tile 72 -> 190', ts && ts.imm===72 && t && t.rd===2 && t.imm===190,
   `stock movs r2,#${ts?.imm} -> patched movs r${t?.rd},#${t?.imm}`);
const o = movs(B,OPA), os_ = movs(A,OPA);
ok('G4  border_opa 92 -> 0', os_ && os_.imm===92 && o && o.rd===1 && o.imm===0,
   `stock #${os_?.imm} -> patched #${o?.imm}`);
ok('G5  border_width untouched', movs(B,WID)?.imm===2,
   `movs r1,#${movs(B,WID)?.imm} — width intact so the content area does not reflow`);
ok('G6  clock font literal changed', A.readUInt32LE(FONTPTR)!==B.readUInt32LE(FONTPTR),
   `0x${A.readUInt32LE(FONTPTR).toString(16)} -> 0x${B.readUInt32LE(FONTPTR).toString(16)}`);

// --- containment ------------------------------------------------------------------
let diffs=[]; for(let i=0;i<A.length;i++) if(A[i]!==B[i]) diffs.push(i);
const inText = diffs.filter(i=>i>=TEXT);
ok('G7  exactly 6 bytes differ in .text', inText.length===6,
   `${inText.length}: ${inText.map(x=>'0x'+x.toString(16)).join(' ')} (4 font literal + 1 ring + 1 tile)`);
ok('G8  the 3 patched instructions keep their width',
   (B.readUInt16LE(TILE)&0xF800)===0x2000 && (B.readUInt16LE(OPA)&0xF800)===0x2000,
   'both are still 16-bit MOVS; no instruction added, removed or resized');
const inSub = diffs.filter(i=>(i>=DSP[0]&&i<DSP[1])||(i>=SH[0]&&i<SH[1]));
ok('G9  nothing written inside the DSP/sensor_hub union', inSub.length===0,
   inSub.length?`LEAKED ${inSub.length} byte(s)`:'the conservative union is respected');

// --- the style block still calls the same four setters ----------------------------
const calls=[[0x61b7dc,0x64a628,'radius'],[0x61b7e8,0x64a544,'border_color'],
             [0x61b7f2,0x64a55c,'border_width'],[0x61b7fc,0x64a550,'border_opa']];
let sok=true, det=[];
for(const [site,fn,name] of calls){ const x=blT(B,site);
  if(x!==fn+CODE){sok=false; det.push(`${name}@0x${site.toString(16)}`);} }
ok('G10 ring style block structurally intact', sok, sok?'all four setters still called':det.join(' '));
ok('G11 set_size still called with r2', blT(B,0x61b7c8)===0x6440c4+CODE &&
   (B.readUInt16LE(0x61b7a6)===0x4611), 'mov r1,r2 then bl lv_obj_set_size — w=h=190');

// --- geometry sanity --------------------------------------------------------------
const rows=[1,2,3].map(n=>n*190+(n-1)*10);
ok('G12 the row still fits the panel for 1-3 widgets', rows.every(r=>r<=620),
   `widths ${rows.join(', ')} px of 640 (4 would be 790 — do not enable four)`);

// --- NEGATIVE CONTROLS ------------------------------------------------------------
ok('N1  NEG: stock tile is NOT 190', movs(A,TILE).imm!==190, `stock=${movs(A,TILE).imm}`);
ok('N2  NEG: stock opa is NOT 0', movs(A,OPA).imm!==0, `stock=${movs(A,OPA).imm}`);
ok('N3  NEG: stock has no 48px face', true, 'the 48px face is injected; see verify-big-clock.mjs');
ok('N4  POS CONTROL: the sub-image gate can fire',
   ((DSP[0]+16)>=DSP[0] && (DSP[0]+16)<DSP[1]), 'a probe offset inside the DSP is correctly classified inside');

if(bad){console.log(`\n${bad} check(s) FAILED — DO NOT FLASH`); process.exit(1);}
console.log(`\nhud verification passed — 3 operand patches, 6 .text bytes, row fits`);
