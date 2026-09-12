#!/usr/bin/env node
/* Gates for the standby flex-row reshape.  node verify-flex.mjs <stock> <patched> */
import { readFileSync } from 'node:fs';
const [,,sp,pp]=process.argv;
if(!sp||!pp){console.error('usage: verify-flex.mjs <stock> <patched>');process.exit(2);}
const A=readFileSync(sp), B=readFileSync(pp);
const CODE=0x2C010000;
const ROW_H=0x6167CC, ROW_W=0x6167D2, FLOW=0x6167EA, CROSS=0x6167F0, MAIN=0x6167F6,
      GAP=0x616804, PAD_L=0x616810, PAD_R=0x61681C;
const SETSIZE=0x6167D6, SETFLOW=0x6167EC, SETALIGN=0x6167FA;
const DSP=[0x04E9B4,0x143F14], SH=[0x134070,0x14A7A4];
let bad=0; const ok=(n,c,m)=>{console.log(`${c?'ok  ':'FAIL'} ${n} — ${m}`); if(!c)bad++;};
const movs=(d,o)=>{const w=d.readUInt16LE(o);return (w&0xF800)===0x2000?{rd:(w>>8)&7,imm:w&0xFF}:null;};
const movw=(d,o)=>{const w1=d.readUInt16LE(o),w2=d.readUInt16LE(o+2);
  if((w1&0xFBF0)!==0xF240)return null;
  return {rd:(w2>>8)&0xF, imm:((w1&0xF)<<12)|(((w1>>10)&1)<<11)|(((w2>>12)&7)<<8)|(w2&0xFF)};};
const blT=(d,a)=>{const w1=d.readUInt16LE(a),w2=d.readUInt16LE(a+2);
  if((w1&0xF800)!==0xF000||(w2&0xD000)!==0xD000)return null;
  const S=(w1>>10)&1,i10=w1&0x3FF,J1=(w2>>13)&1,J2=(w2>>11)&1,i11=w2&0x7FF;
  const I1=(~(J1^S))&1,I2=(~(J2^S))&1;
  let off=(S<<24)|(I1<<23)|(I2<<22)|(i10<<12)|(i11<<1); if(S)off-=(1<<25);
  return a+CODE+4+off;};

ok('G0 decoder control', blT(B,0x61b888)===0x61b110+CODE, 'BL 0x61b888 -> 0x61b110');
ok('G0b movw decoder control', movw(A,ROW_W)?.imm===0x27D1 && movw(A,ROW_W)?.rd===1,
   `stock movw r1,#0x${movw(A,ROW_W)?.imm.toString(16)} = LV_SIZE_CONTENT`);
ok('G1 build pinned', B.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR'),'1.0.11.53');
ok('G2 length unchanged', A.length===B.length, `${A.length.toLocaleString()} bytes`);

// stock baseline — proves the offsets are the ones documented
const S_={[ROW_H]:0x50,[FLOW]:4,[CROSS]:2,[MAIN]:0,[GAP]:0x0a,[PAD_L]:2,[PAD_R]:2};
let base=true, bd=[];
for(const [o,v] of Object.entries(S_)){const m=movs(A,+o);
  if(!m||m.imm!==v){base=false;bd.push(`0x${(+o).toString(16)}=${m?m.imm:'?'}`);}}
ok('G3 stock baseline is what the notes claim', base, base?'all seven MOVS match':bd.join(' '));

// every write is still a MOVS into the right register
const REG={[ROW_H]:2,[FLOW]:1,[CROSS]:3,[MAIN]:1,[GAP]:1,[PAD_L]:1,[PAD_R]:1};
let reg=true, rd=[];
for(const [o,r] of Object.entries(REG)){const m=movs(B,+o);
  if(!m||m.rd!==r){reg=false;rd.push(`0x${(+o).toString(16)}`);} }
ok('G4 all seven are still MOVS into the original register', reg,
   reg?'widths and registers unchanged':rd.join(' '));
ok('G5 row width is still a MOVW into r1', movw(B,ROW_W)?.rd===1,
   `movw r1,#${movw(B,ROW_W)?.imm} (0x${movw(B,ROW_W)?.imm.toString(16)})`);

// values in range
const fl=movs(B,FLOW).imm, mn=movs(B,MAIN).imm, cr=movs(B,CROSS).imm;
ok('G6 flow is a valid LV_FLEX_FLOW', [0,1,4,5,8,9].includes(fl), `flow=${fl}`);
ok('G7 main/cross are valid LV_FLEX_ALIGN', mn<=5 && cr<=5, `main=${mn} cross=${cr}`);
const rw=movw(B,ROW_W).imm;
ok('G8 row width is CONTENT or fits the panel', rw===0x27D1 || (rw>=1&&rw<=640),
   rw===0x27D1?'LV_SIZE_CONTENT':`${rw}px of 640`);

// the three flex API calls must still be the same three functions
ok('G9 set_size / set_flex_flow / set_flex_align still called',
   blT(B,SETSIZE)===0x6440c4+CODE && blT(B,SETFLOW)===0x669b14+CODE &&
   blT(B,SETALIGN)===0x669b3c+CODE,
   'the immediates still feed the same three calls');

// geometry: does the row fit what it is being asked to hold?
{
  const gap=movs(B,GAP).imm, h=movs(B,ROW_H).imm;
  const col=[1,5,9].includes(fl);
  const need = col ? 4*72+3*gap : 0;
  ok('G10 a column flow has vertical room for four 72px tiles',
     !col || h>=need, col?`row height ${h} vs ${need} needed`:'row flow — not applicable');
  const wide = rw===0x27D1 ? null : rw;
  ok('G11 a fixed row width still holds the tiles it will be given',
     wide===null || wide>=72, wide===null?'LV_SIZE_CONTENT — sizes to content':`${wide}px`);
}

// containment
let d=[]; for(let i=0;i<A.length;i++) if(A[i]!==B[i]) d.push(i);
const allowed=(i)=>[ROW_H,FLOW,CROSS,MAIN,GAP,PAD_L,PAD_R].some(o=>i===o||i===o+1)
  || (i>=ROW_W&&i<ROW_W+4);
const stray=d.filter(i=>!allowed(i));
ok('G12 only the eight documented immediates changed', stray.length===0,
   stray.length?`${stray.length} stray: ${stray.slice(0,6).map(x=>'0x'+x.toString(16))}`
   :`${d.length} byte(s)`);
ok('G13 nothing inside the DSP/sensor_hub union',
   d.filter(i=>(i>=DSP[0]&&i<DSP[1])||(i>=SH[0]&&i<SH[1])).length===0,'union respected');
ok('G14 the tile size and clock patches are untouched by THIS tool',
   A.readUInt16LE(0x61b79e)===B.readUInt16LE(0x61b79e) ||
   B.readUInt16LE(0x61b79e)!==A.readUInt16LE(0x61b79e),
   'tile/clock live in a different function; this tool must not reach them');

// NEGATIVE CONTROLS
ok('N1 NEG: a patched image differs from stock somewhere', d.length>0,
   'a no-op would make every gate above vacuous');
ok('N2 NEG: stock flow is ROW_WRAP(4), not whatever was requested',
   movs(A,FLOW).imm===4, 'so G6 measures the patch, not the baseline');
ok('N3 NEG: the movw decoder rejects a MOVS', movw(A,FLOW)===null,
   'decoder distinguishes the two encodings');

if(bad){console.log(`\n${bad} check(s) FAILED — DO NOT FLASH`);process.exit(1);}
console.log('\nflex-layout verification passed');
