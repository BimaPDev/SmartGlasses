#!/usr/bin/env node
/* Gate L4: the battery's position inside the clock tile.
   node verify-battery-pos.mjs <stock.bin> <patched.bin> */
import { readFileSync } from 'node:fs';
const [,,sp,pp]=process.argv;
if(!sp||!pp){console.error('usage: verify-battery-pos.mjs <stock> <patched>');process.exit(2);}
const A=readFileSync(sp), B=readFileSync(pp);
const CODE=0x2C010000, Y=0x61B188, X=0x61B18C, AL=0x61B18E, ALIGNCALL=0x61B192;
const DSP=[0x04E9B4,0x143F14], SH=[0x134070,0x14A7A4];
let bad=0; const ok=(n,c,m)=>{console.log(`${c?'ok  ':'FAIL'} ${n} — ${m}`); if(!c)bad++;};
const movs=(d,o)=>{const w=d.readUInt16LE(o);return (w&0xF800)===0x2000?{rd:(w>>8)&7,imm:w&0xFF}:null;};
const blT=(d,a)=>{const w1=d.readUInt16LE(a),w2=d.readUInt16LE(a+2);
  if((w1&0xF800)!==0xF000||(w2&0xD000)!==0xD000)return null;
  const S=(w1>>10)&1,i10=w1&0x3FF,J1=(w2>>13)&1,J2=(w2>>11)&1,i11=w2&0x7FF;
  const I1=(~(J1^S))&1,I2=(~(J2^S))&1;
  let off=(S<<24)|(I1<<23)|(I2<<22)|(i10<<12)|(i11<<1); if(S)off-=(1<<25);
  return a+CODE+4+off;};
function readY(d){const w1=d.readUInt16LE(Y), w2=d.readUInt16LE(Y+2);
  const imm=((w1>>10)&1)<<11 | ((w2>>12)&7)<<8 | (w2&0xFF);
  if((w1&0xFBEF)===0xF06F) return {v:-(imm+1),kind:'MVN.W'};
  if((w1&0xFBEF)===0xF04F) return {v:imm,kind:'MOV.W'};
  return {v:null,kind:'?'};}

ok('G0 decoder control', blT(B,0x61b888)===0x61b110+CODE, 'BL 0x61b888 -> 0x61b110');
ok('G1 build pinned', B.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR'), '1.0.11.53');
ok('G2 length unchanged', A.length===B.length, `${A.length.toLocaleString()} bytes`);

const sy=readY(A), py=readY(B);
ok('G3 stock is the expected baseline',
   sy.v===-9 && movs(A,X)?.imm===0 && movs(A,AL)?.imm===5,
   `stock y=${sy.v} (${sy.kind}) x=${movs(A,X)?.imm} align=${movs(A,AL)?.imm} (BOTTOM_MID)`);
ok('G4 align is a valid LV_ALIGN', [1,2,3,4,5,6,7,8,9].includes(movs(B,AL)?.imm),
   `align=${movs(B,AL)?.imm}`);
ok('G5 align still targets r1', movs(B,AL)?.rd===1, `r${movs(B,AL)?.rd}`);
ok('G6 x still targets r2 and is a MOVS', movs(B,X)?.rd===2, `movs r2,#${movs(B,X)?.imm}`);
ok('G7 y is still a 4-byte wide-immediate into r3',
   ['MVN.W','MOV.W'].includes(py.kind) && (B.readUInt16LE(Y+2)&0x0F00)===0x0300,
   `${py.kind} r3, y=${py.v} — width unchanged so nothing downstream shifts`);
ok('G8 lv_obj_align is still the very next call', blT(B,ALIGNCALL)===0x644338+CODE,
   'the three immediates still feed lv_obj_align');

// containment
let d=[]; for(let i=0;i<A.length;i++) if(A[i]!==B[i]) d.push(i);
const allowed=(i)=>(i>=Y&&i<Y+4)||i===X||i===X+1||i===AL||i===AL+1;
const stray=d.filter(i=>!allowed(i));
ok('G9 only the three position immediates changed', stray.length===0,
   stray.length?`${stray.length} stray: ${stray.slice(0,6).map(x=>'0x'+x.toString(16))}`
   :`${d.length} byte(s), all inside the align arguments`);
ok('G10 battery ICON size untouched',
   A.readUInt16LE(0x61b1a0)===B.readUInt16LE(0x61b1a0) &&
   A.readUInt16LE(0x61b1a2)===B.readUInt16LE(0x61b1a2), '12x24 left alone');
ok('G11 the CLOCK label is untouched',
   A.readUInt16LE(0x61b15e)===B.readUInt16LE(0x61b15e) &&
   A.readUInt16LE(0x61b162)===B.readUInt16LE(0x61b162),
   'this patch moves the battery only');
ok('G12 nothing inside the DSP/sensor_hub union',
   d.filter(i=>(i>=DSP[0]&&i<DSP[1])||(i>=SH[0]&&i<SH[1])).length===0, 'union respected');

// NEGATIVE CONTROLS
ok('N1 NEG: a patched image must differ from stock somewhere', d.length>0,
   'a no-op would make every gate above vacuous');
ok('N2 NEG: stock align is BOTTOM_MID, not whatever was requested',
   movs(A,AL).imm===5, 'so G4 measures the patch, not the baseline');
ok('N3 NEG: the y decoder distinguishes the two encodings',
   readY(A).kind==='MVN.W', 'stock is MVN.W; a MOV.W would read as a positive y');

if(bad){console.log(`\n${bad} check(s) FAILED — DO NOT FLASH`);process.exit(1);}
console.log('\nbattery-position verification passed');
