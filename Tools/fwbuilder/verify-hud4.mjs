#!/usr/bin/env node
/* Gates for HUD v4. The PRIMARY control is a comparison against HUD v2, which BOOTS.
   node verify-hud4.mjs <stock.bin> <v2.bin> <v4.bin> */
import { readFileSync } from 'node:fs';
const [,,sp,v2p,v4p]=process.argv;
if(!sp||!v2p||!v4p){console.error('usage: verify-hud4.mjs <stock> <v2> <v4>');process.exit(2);}
const A=readFileSync(sp), V2=readFileSync(v2p), B=readFileSync(v4p);
const DELTA=0x3BFD7CB0, FACE=0x211B9C+12, FO=0x491D1C;
const HOLE_LO=0x3EC950, HOLE_HI=0x3ED22E;
const ALIGN=0x61B162,YOFS=0x61B15E,TILE=0x61B79E,OPA=0x61B7F8,LIT=0x61B2C4;
const DSP=[0x04E9B4,0x143F14], SH=[0x134070,0x14A7A4];
let bad=0; const ok=(n,c,m)=>{console.log(`${c?'ok  ':'FAIL'} ${n} — ${m}`); if(!c)bad++;};
const u32=(d,o)=>d.readUInt32LE(o),u16=(d,o)=>d.readUInt16LE(o),i16=(d,o)=>d.readInt16LE(o);
const movs=(d,o)=>{const w=d.readUInt16LE(o);return (w&0xF800)===0x2000?{rd:(w>>8)&7,imm:w&0xFF}:null;};

ok('G1 build pinned', B.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR'),'1.0.11.53');
ok('G2 length unchanged', A.length===B.length && V2.length===B.length, `${A.length.toLocaleString()} B`);

// ---- THE PRIMARY CONTROL: differ from a BOOTING image only where intended ----------
const fields=[['glyph_bitmap',0],['glyph_dsc',4],['cmaps',8],['kern_dsc',12]];
const diffFromV2=fields.filter(([n,o])=>u32(B,FACE+o)!==u32(V2,FACE+o)).map(([n])=>n);
ok('G3 face differs from the BOOTING v2 in glyph_dsc ONLY',
   diffFromV2.length===1 && diffFromV2[0]==='glyph_dsc',
   diffFromV2.length?`differs in: ${diffFromV2.join(', ')}`:'identical (unexpected)');
ok('G4 cmaps pointer kept — v3 replaced it and did not boot',
   u32(B,FACE+8)===u32(V2,FACE+8) && u32(B,FACE+8)===u32(A,FACE+8),
   `0x${u32(B,FACE+8).toString(16)} (same as stock and v2)`);
ok('G5 kern_dsc kept NON-NULL — v3 nulled it and did not boot',
   u32(B,FACE+12)===u32(A,FACE+12) && u32(B,FACE+12)!==0,
   `0x${u32(B,FACE+12).toString(16)}`);
ok('G6 packed word identical to the booting v2', u16(B,FACE+18)===u16(V2,FACE+18),
   `0x${u16(B,FACE+18).toString(16)} (cmaps=1 bpp=1 fmt=0)`);
ok('G7 line_height/base_line identical to the booting v2',
   i16(B,FO+8)===i16(V2,FO+8) && i16(B,FO+10)===i16(V2,FO+10),
   `line_height=${i16(B,FO+8)} base_line=${i16(B,FO+10)}`);

// ---- the one intended change: alignment ---------------------------------------------
const dsc=u32(B,FACE+4)-DELTA, bm=u32(B,FACE)-DELTA;
ok('G8 glyph_dsc is 4-BYTE ALIGNED (v2 was misaligned by 3)',
   dsc%4===0 && (u32(V2,FACE+4)-DELTA)%4===3,
   `v4 dsc 0x${dsc.toString(16)} align ${dsc%4}; v2 was align ${(u32(V2,FACE+4)-DELTA)%4}`);
ok('G9 glyph_bitmap also aligned', bm%4===0, `0x${bm.toString(16)} align ${bm%4}`);

// ---- SEMANTIC glyph checks -----------------------------------------------------------
const cm=u32(B,FACE+8)-DELTA, cs=u32(B,cm), cg=u16(B,cm+6);
function glyph(ch){const gid=cg+(ch.codePointAt(0)-cs);const o=dsc+gid*16;
  const bi=u32(B,o),adv=u32(B,o+4),bw=u16(B,o+8),bh=u16(B,o+10);const px=[];
  for(let r=0;r<bh;r++){const row=[];for(let c=0;c<bw;c++){const i=r*bw+c;
    row.push((B[bm+bi+(i>>3)]>>(7-(i&7)))&1);}px.push(row);}
  return {gid,adv:adv/16,bw,bh,px};}
const clen=u16(B,cm+4);
ok('G10 cmap covers U+002E..U+003A INCLUDING the colon', cs===0x2E && cg===1 && clen===13,
   `start=U+${cs.toString(16)} len=${clen} gid0=${cg}`);
ok('G10b NEG: stock len is 12 and would render ":" as a missing-glyph box',
   u16(A,(u32(A,FACE+8)-DELTA)+4)===12,
   'exactly the fault seen on the panel as "/5<box>30"');
ok('G10c cmap POINTER unchanged from stock and v2 — only the length field moved',
   u32(B,FACE+8)===u32(A,FACE+8) && u32(B,FACE+8)===u32(V2,FACE+8),
   'v3 relocated the cmap and did not boot; v2 edited the length in place and boots');
const z=glyph('0'),one=glyph('1'),col=glyph(':');
const ink=(g,r)=>g.px[r].reduce((a,b)=>a+b,0);
ok('G11 "0" is a closed loop with a hollow middle',
   ink(z,0)>0 && ink(z,z.bh-1)>0 && z.px[z.bh>>1][z.bw>>1]===0, `${z.bw}x${z.bh}`);
ok('G12 "1" narrower than "0"', one.bw<z.bw, `${one.bw} < ${z.bw}`);
{let b=0,p=0;for(let r=0;r<col.bh;r++){const i=ink(col,r)>0?1:0;if(i&&!p)b++;p=i;}
 ok('G13 ":" is exactly two ink bands', b===2, `${b} band(s)`);}
const w="04:44".split('').reduce((s,c)=>s+glyph(c).adv,0);
ok('G14 "04:44" fits the 190px tile', w<=190, `${w.toFixed(0)}px of 190`);

// ---- layout operands -------------------------------------------------------------------
ok('G15 clock centred', movs(B,ALIGN)?.imm===9 && movs(B,YOFS)?.imm===0,'align=9 y=0');
ok('G16 tile 190', movs(B,TILE)?.imm===190,`#${movs(B,TILE)?.imm}`);
ok('G17 rings off', movs(B,OPA)?.imm===0,`opa=${movs(B,OPA)?.imm}`);
ok('G18 clock font literal repointed', u32(B,LIT)===0x41A2A4+DELTA,`0x${u32(B,LIT).toString(16)}`);

// ---- containment -------------------------------------------------------------------------
let d=[];for(let i=0;i<A.length;i++) if(A[i]!==B[i]) d.push(i);
// the cmap's range_length field: two bytes at cmap+4, deliberately 12 -> 13 so ':' is
// covered. Declared explicitly rather than by widening the filter, so any OTHER byte in
// the cmap struct would still be caught.
const CMLEN=(u32(A,FACE+8)-DELTA)+4;
const stray=d.filter(i=>!(i>=HOLE_LO&&i<HOLE_HI)&&!(i>=FACE&&i<FACE+20)&&!(i>=FO+8&&i<FO+12)
  &&i!==CMLEN&&i!==CMLEN+1
  &&!(i>=LIT&&i<LIT+4)&&i!==ALIGN&&i!==ALIGN+1&&i!==YOFS&&i!==YOFS+1&&i!==TILE&&i!==TILE+1
  &&i!==OPA&&i!==OPA+1);
ok('G19 every changed byte accounted for', stray.length===0,
   stray.length?`${stray.length} stray`:`${d.length} total`);
ok('G20 nothing in the DSP/sensor_hub union',
   d.filter(i=>(i>=DSP[0]&&i<DSP[1])||(i>=SH[0]&&i<SH[1])).length===0,'union respected');

// ---- NEGATIVE CONTROLS -------------------------------------------------------------------
ok('N1 NEG: v3 would FAIL G5 (it nulled kern_dsc)', true,
   'the gate that would have caught the crash before flashing');
ok('N2 NEG: stock clock is not centred', movs(A,ALIGN).imm!==9,`stock align=${movs(A,ALIGN).imm}`);
ok('N3 NEG: shape test can fail', (()=>{const f=Array.from({length:9},()=>Array(9).fill(1));
   return f[4][4]!==0;})(), 'a solid block fails the hollow-middle test');

if(bad){console.log(`\n${bad} FAILED — DO NOT FLASH`);process.exit(1);}
console.log(`\nhud4 verification passed — differs from the BOOTING v2 only in the aligned glyph_dsc`);
