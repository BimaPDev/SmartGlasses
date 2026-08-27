; FUN_1401c2f4 @ 0x1401c2f4 size=455
  mul r7,r5,r7
  mul r5,r2,r5
  ldr r2,[sp,#0x1e8]
  add.w r5,r5,r7, asr #0xf
  mul r7,r6,r2
  ldr r2,[sp,#0x1e4]
  ldrsh.w r4,[r0,#0x56]
  mul r6,r2,r6
  ldr r2,[sp,#0x1f0]
  add.w r6,r6,r7, asr #0xf
  mul r7,r4,r2
  ldr r2,[sp,#0x1ec]
  ldrsh.w r1,[r0,#0x76]
  mul r4,r2,r4
  ldr r2,[sp,#0x1f8]
  add.w r4,r4,r7, asr #0xf
  add r5,r6
  add r5,r4
  mul r4,r1,r2
  ldr r2,[sp,#0x1f4]
  ldrsh.w r6,[r0,#0x96]
  mul r1,r2,r1
  ldr r2,[sp,#0x200]
  add.w r1,r1,r4, asr #0xf
  add r5,r1
  mul r1,r6,r2
  ldr r2,[sp,#0x1fc]
  mul r6,r2,r6
  add.w r1,r6,r1, asr #0xf
  add r1,r5
  str.w r1,[r10,#0x7e8]
  ldrsh.w r6,[r0,#0x18]
  ldr r2,[sp,#0x208]
  ldrsh.w r7,[r0,#0x38]
  mul r12,r6,r2
  ldr r2,[sp,#0x204]
  ldrsh.w r5,[r0,#0x58]
  mul r6,r2,r6
  ldr r2,[sp,#0x210]
  add.w r6,r6,r12, asr #0xf
  mul r12,r7,r2
  ldr r2,[sp,#0x20c]
  ldrsh.w r4,[r0,#0x78]
  mul r7,r2,r7
  add.w r7,r7,r12, asr #0xf
  add r6,r7
  ldrsh.w r7,[r0,#0x98]
  ldr r2,[sp,#0x218]
  mul r12,r5,r2
  ldr r2,[sp,#0x214]
  mul r5,r2,r5
  ldr r2,[sp,#0x220]
  add.w r5,r5,r12, asr #0xf
  add r6,r5
  mul r5,r4,r2
  ldr r2,[sp,#0x21c]
  mul r4,r2,r4
  ldr r2,[sp,#0x228]
  add.w r4,r4,r5, asr #0xf
  add r6,r4
  mul r4,r7,r2
  ldr r2,[sp,#0x224]
  mul r7,r2,r7
  add.w r7,r7,r4, asr #0xf
  add r7,r6
  str.w r7,[r10,#0x7ec]
  ldrsh.w r6,[r0,#0x1a]
  ldr r2,[sp,#0x230]
  ldrsh.w r7,[r0,#0x3a]
  mul r12,r6,r2
  ldr r2,[sp,#0x22c]
  ldrsh.w r5,[r0,#0x5a]
  mul r6,r2,r6
  ldr r2,[sp,#0x238]
  add.w r6,r6,r12, asr #0xf
  mul r12,r7,r2
  ldr r2,[sp,#0x234]
  ldrsh.w r4,[r0,#0x7a]
  mul r7,r2,r7
  ldr r2,[sp,#0x240]
  add.w r7,r7,r12, asr #0xf
  mul r12,r5,r2
  ldr r2,[sp,#0x23c]
  add r6,r7
  mul r5,r2,r5
  ldr r2,[sp,#0x248]
  add.w r5,r5,r12, asr #0xf
  add r6,r5
  mul r5,r4,r2
  ldr r2,[sp,#0x244]
  ldrsh.w r7,[r0,#0x9a]
  mul r4,r2,r4
  ldr r2,[sp,#0x250]
  add.w r4,r4,r5, asr #0xf
  add r6,r4
  mul r4,r7,r2
  ldr r2,[sp,#0x24c]
  mul r7,r2,r7
  add.w r7,r7,r4, asr #0xf
  add r7,r6
  str.w r7,[r10,#0x7f0]
  ldrsh.w r6,[r0,#0x1c]
  ldr r2,[sp,#0x258]
  subs r1,r1,r7
  mul r12,r6,r2
  ldr r2,[sp,#0x254]
  ldrsh.w r7,[r0,#0x3c]
  mul r6,r2,r6
  ldr r2,[sp,#0x260]
  add.w r6,r6,r12, asr #0xf
  mul r12,r7,r2
  ldr r2,[sp,#0x25c]
  ldrsh.w r5,[r0,#0x5c]
  mul r7,r2,r7
  add.w r7,r7,r12, asr #0xf
  ldrsh.w r4,[r0,#0x7c]
  add r6,r7
  ldrsh.w r7,[r0,#0x9c]
  ldr r2,[sp,#0x268]
  mul r12,r5,r2
  ldr r2,[sp,#0x264]
  mul r5,r2,r5
  ldr r2,[sp,#0x270]
  add.w r5,r5,r12, asr #0xf
  add r6,r5
  mul r5,r4,r2
  ldr r2,[sp,#0x26c]
  mul r4,r2,r4
  ldr r2,[sp,#0x278]
  add.w r4,r4,r5, asr #0xf
  add r6,r4
  mul r4,r7,r2
  ldr r2,[sp,#0x274]
  mul r7,r2,r7
  add.w r7,r7,r4, asr #0xf
  add r7,r6
  str.w r7,[r10,#0x7f4]
  ldr r2,[sp,#0x280]
  subs r3,r3,r7
  ldrsh.w r7,[r0,#0x1e]
  ldrsh.w r6,[r0,#0x3e]
  mul r12,r7,r2
  ldr r2,[sp,#0x27c]
