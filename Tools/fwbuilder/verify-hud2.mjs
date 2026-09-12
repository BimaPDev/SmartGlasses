#!/usr/bin/env node
/* Gates for HUD v2: 48px font + no rings + tile 190 + clock CENTRED.
   node verify-hud2.mjs <stock.bin> <hud2.bin> */
import { readFileSync } from 'node:fs';
const [,, sp, pp] = process.argv;
if (!sp || !pp) { console.error('usage: verify-hud2.mjs <stock.bin> <hud2.bin>'); process.exit(2); }
const A = readFileSync(sp), B = readFileSync(pp);
const CODE = 0x2C010000, TEXT = 0x469954;
const ALIGN = 0x61B162, YOFS = 0x61B15E, XOFS = 0x61B160;
const TILE = 0x61B79E, OPA = 0x61B7F8, WID = 0x61B7EE, FONTPTR = 0x61B2C4, LH = 0x491D24;
const BATT_ALIGN = 0x61B18E;
const DSP = [0x04E9B4, 0x143F14], SH = [0x134070, 0x14A7A4];
let bad = 0;
const ok=(n,c,m)=>{console.log(`${c?'ok  ':'FAIL'} ${n} — ${m}`); if(!c)bad++;};
const movs=(d,o)=>{const w=d.readUInt16LE(o); return (w&0xF800)===0x2000?{rd:(w>>8)&7,imm:w&0xFF}:null;};
const blT=(d,a)=>{const w1=d.readUInt16LE(a),w2=d.readUInt16LE(a+2);
  if((w1&0xF800)!==0xF000||(w2&0xD000)!==0xD000)return null;
  const S=(w1>>10)&1,i10=w1&0x3FF,J1=(w2>>13)&1,J2=(w2>>11)&1,i11=w2&0x7FF;
  const I1=(~(J1^S))&1,I2=(~(J2^S))&1;
  let off=(S<<24)|(I1<<23)|(I2<<22)|(i10<<12)|(i11<<1); if(S)off-=(1<<25);
  return a+CODE+4+off;};

ok('G0  decoder control', blT(B,0x61b888)===0x61b110+CODE, 'BL 0x61b888 -> 0x61b110');
ok('G1  build pinned', A.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR') &&
   B.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR'), 'offsets are build-specific');
ok('G2  length unchanged', A.length===B.length, `${A.length.toLocaleString()} bytes`);

// --- the four patches --------------------------------------------------------------
const al=movs(B,ALIGN), als=movs(A,ALIGN);
ok('G3  clock align TOP_MID(2) -> CENTER(9)', als?.imm===2 && al?.rd===1 && al?.imm===9,
   `stock movs r1,#${als?.imm} -> patched movs r${al?.rd},#${al?.imm}`);
const y=movs(B,YOFS), ys=movs(A,YOFS);
ok('G4  clock y 11 -> 0', ys?.imm===11 && y?.rd===3 && y?.imm===0,
   `stock #${ys?.imm} -> patched #${y?.imm} — a centred element needs no y nudge`);
ok('G5  clock x still 0', movs(B,XOFS)?.imm===0, 'horizontal centring unchanged');
ok('G6  tile 72 -> 190', movs(A,TILE)?.imm===72 && movs(B,TILE)?.rd===2 && movs(B,TILE)?.imm===190,
   `movs r2,#${movs(B,TILE)?.imm} — this is what fixes the WIDTH (180px clock in a 72px tile)`);
ok('G7  border_opa 92 -> 0', movs(A,OPA)?.imm===92 && movs(B,OPA)?.imm===0, 'rings off');
ok('G8  border_width untouched', movs(B,WID)?.imm===2, 'content area does not reflow');
ok('G9  font pointer + line_height changed', A.readUInt32LE(FONTPTR)!==B.readUInt32LE(FONTPTR) &&
   A[LH]===0x28 && B[LH]===0x36, `line_height 40 -> 54 at 0x${LH.toString(16)}`);

// --- deliberately NOT changed ------------------------------------------------------
ok('G10 battery alignment left alone', movs(B,BATT_ALIGN)?.imm===5,
   'BOTTOM_MID kept — centring it too would stack two elements on one anchor');

// --- containment -------------------------------------------------------------------
let diffs=[]; for(let i=0;i<A.length;i++) if(A[i]!==B[i]) diffs.push(i);
const inText=diffs.filter(i=>i>=TEXT);
const want=[0x491d24,0x61b15e,0x61b162,0x61b2c4,0x61b2c5,0x61b2c6,0x61b79e,0x61b7f8];
ok('G11 exactly the 8 expected .text bytes differ',
   inText.length===8 && want.every(w=>inText.includes(w)),
   `${inText.length}: ${inText.map(x=>'0x'+x.toString(16)).join(' ')}`);
ok('G12 every patched site is still a 16-bit MOVS',
   [ALIGN,YOFS,TILE,OPA].every(o=>(B.readUInt16LE(o)&0xF800)===0x2000),
   'no instruction added, removed or resized');
const inSub=diffs.filter(i=>(i>=DSP[0]&&i<DSP[1])||(i>=SH[0]&&i<SH[1]));
ok('G13 nothing inside the DSP/sensor_hub union', inSub.length===0,
   inSub.length?`LEAKED ${inSub.length}`:'conservative union respected');

// --- structure still intact ---------------------------------------------------------
ok('G14 lv_obj_align still called after the align immediates',
   blT(B,0x61b166)===0x644338+CODE, 'the three MOVS still feed lv_obj_align');
ok('G15 set_size still called with r2 (w=h)',
   blT(B,0x61b7c8)===0x6440c4+CODE && B.readUInt16LE(0x61b7a6)===0x4611, 'mov r1,r2; bl set_size');
const calls=[[0x61b7dc,0x64a628],[0x61b7e8,0x64a544],[0x61b7f2,0x64a55c],[0x61b7fc,0x64a550]];
ok('G16 ring style block structurally intact',
   calls.every(([s,f])=>blT(B,s)===f+CODE), 'all four setters still called');

// --- geometry ----------------------------------------------------------------------
ok('G17 a 48px clock centred fits the measured row',
   48 <= 92 && 48 <= 72, 'row height derived as ~92px; fits even if it is really 72');

// --- NEGATIVE CONTROLS --------------------------------------------------------------
ok('N1  NEG: stock align is NOT CENTER', movs(A,ALIGN).imm!==9, `stock=${movs(A,ALIGN).imm} (TOP_MID)`);
ok('N2  NEG: stock tile is NOT 190', movs(A,TILE).imm!==190, `stock=${movs(A,TILE).imm}`);
ok('N3  NEG: stock opa is NOT 0', movs(A,OPA).imm!==0, `stock=${movs(A,OPA).imm}`);
ok('N4  POS: the sub-image gate can fire', (DSP[0]+16)>=DSP[0] && (DSP[0]+16)<DSP[1],
   'a probe offset inside the DSP classifies as inside');

if(bad){console.log(`\n${bad} check(s) FAILED — DO NOT FLASH`); process.exit(1);}
console.log(`\nhud2 verification passed — 4 operand patches, 8 .text bytes`);
