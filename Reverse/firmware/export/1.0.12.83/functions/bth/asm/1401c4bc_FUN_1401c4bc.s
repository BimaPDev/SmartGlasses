; FUN_1401c4bc @ 0x1401c4bc size=546
  ldrsh.w r5,[r0,#0x5e]
  mul r7,r2,r7
  ldr r2,[sp,#0x288]
  add.w r7,r7,r12, asr #0xf
  mul r12,r6,r2
  ldr r2,[sp,#0x284]
  ldrsh.w r4,[r0,#0x7e]
  mul r6,r2,r6
  ldr r2,[sp,#0x290]
  add.w r6,r6,r12, asr #0xf
  add r7,r6
  mul r6,r5,r2
  ldr r2,[sp,#0x28c]
  ldrsh.w r0,[r0,#0x9e]
  mul r5,r2,r5
  ldr r2,[sp,#0x298]
  add.w r5,r5,r6, asr #0xf
  add r7,r5
  mul r5,r4,r2
  ldr r2,[sp,#0x294]
  mul r4,r2,r4
  ldr r2,[sp,#0x2a0]
  add.w r4,r4,r5, asr #0xf
  add r7,r4
  mul r4,r0,r2
  ldr r2,[sp,#0x29c]
  mul r0,r2,r0
  add.w r0,r0,r4, asr #0xf
  asr.w r4,lr, asr #0xf
  str r4,[sp,#0x14]
  ubfx r4,lr,#0x0,#0xf
  str r4,[sp,#0x18]
  asr.w r4,r8, asr #0xf
  ldr r2,[sp,#0x4]
  str r4,[sp,#0x4]
  ubfx r4,r8,#0x0,#0xf
  add r7,r0
  str r4,[sp,#0x1c]
  ldr r0,[sp,#0xc]
  asr.w r4,r9, asr #0xf
  str r4,[sp,#0x8]
  ubfx r4,r9,#0x0,#0xf
  str r4,[sp,#0x20]
  asrs r4,r0,#0xf
  ubfx r0,r0,#0x0,#0xf
  str.w r7,[r10,#0x7f8]
  str r0,[sp,#0x24]
  str.w r10,[sp,#0x40]
  mov r10,r4
  asr.w r8,r3, asr #0xf
  ubfx r3,r3,#0x0,#0xf
  str r3,[sp,#0x2c]
  ubfx r3,r1,#0x0,#0xf
  subs r2,r2,r7
  str r3,[sp,#0x30]
  ldr r3,[sp,#0x38]
  asr.w r9,r2, asr #0xf
  ubfx r2,r2,#0x0,#0xf
  str r2,[sp,#0x28]
  asr.w lr,r1, asr #0xf
  add.w r12,r3,#0x20
  ldr.w r4,[r11,#0x4]!
  ldr r7,[sp,#0x14]
  asrs r3,r4,#0xf
  ubfx r4,r4,#0x0,#0xf
  mul r4,r7,r4
  mul r7,r3,r7
  add.w r4,r7,r4, asr #0xf
  ldr r7,[sp,#0x18]
  ldr.w r0,[r11,#0x20]
  mul r3,r7,r3
  ldr r5,[sp,#0x4]
  add.w r3,r4,r3, asr #0xf
  ldr r4,[sp,#0x4]
  asrs r6,r0,#0xf
  ubfx r0,r0,#0x0,#0xf
  mul r4,r6,r4
  mul r0,r5,r0
  add.w r0,r4,r0, asr #0xf
  ldr r4,[sp,#0x1c]
  ldr.w r2,[r11,#0x60]
  mul r6,r4,r6
  ldr.w r1,[r11,#0x40]
  add.w r0,r0,r6, asr #0xf
  str r2,[sp,#0xc]
  add r3,r0
  ldr r2,[sp,#0x8]
  ldr r0,[sp,#0x8]
  asrs r5,r1,#0xf
  ubfx r1,r1,#0x0,#0xf
  mul r0,r5,r0
  mul r1,r2,r1
  add.w r1,r0,r1, asr #0xf
  ldr r0,[sp,#0x20]
  ldr r2,[sp,#0xc]
  mul r5,r0,r5
  asrs r6,r2,#0xf
  add.w r1,r1,r5, asr #0xf
  ubfx r2,r2,#0x0,#0xf
  add r3,r1
  mul r2,r10,r2
  mul r1,r6,r10
  add.w r2,r1,r2, asr #0xf
  ldr r1,[sp,#0x24]
  ldr.w r4,[r11,#0x120]
  mul r6,r1,r6
  add.w r2,r2,r6, asr #0xf
  add r3,r2
  ldr r2,[sp,#0x10]
  asrs r0,r4,#0xf
  ubfx r4,r4,#0x0,#0xf
  add r3,r2
  mul r4,r9,r4
  mul r2,r0,r9
  add.w r4,r2,r4, asr #0xf
  ldr r2,[sp,#0x28]
  ldr.w r7,[r11,#0x140]
  mul r0,r2,r0
  ldr.w r1,[r11,#0x160]
  add.w r4,r4,r0, asr #0xf
  ldr r0,[sp,#0x2c]
  asrs r5,r7,#0xf
  asrs r2,r1,#0xf
  ubfx r1,r1,#0x0,#0xf
  mul r6,r5,r8
  mul r1,lr,r1
  mul r5,r0,r5
  mul r0,r2,lr
  ubfx r7,r7,#0x0,#0xf
  add.w r1,r0,r1, asr #0xf
  mul r7,r8,r7
  ldr r0,[sp,#0x30]
  add.w r7,r6,r7, asr #0xf
  mul r2,r0,r2
  add r3,r4
  add.w r7,r7,r5, asr #0xf
  add r3,r7
  add.w r1,r1,r2, asr #0xf
  add r3,r1
  str.w r3,[r12,#0x4]!
  ldr r3,[0x1401c6e0]
  cmp r11,r3
  bne.w 0x1401c578
  ldr r3,[sp,#0x34]
  ldr.w r10,[sp,#0x40]
  adds r3,#0x20
  uxth r3,r3
  str r3,[sp,#0x34]
  b.w 0x1401be00
  add.w r4,r2,#0x10
  ldrh.w r0,[r2],#0x2
  cmp r2,r4
  strh r0,[r1,#-0x2]!
  bne 0x1401c696
  b.w 0x1401b5b0
  ldr r0,[sp,#0x2a8]
  addw r3,r10,#0x546
  ldrh.w r1,[r3,#0x2]!
  cmp r0,r3
  strh.w r1,[r3,#0xa0]
  bne 0x1401c6ac
  mov.w r3,#0x5d8
  movs r1,#0x48
  b.w 0x1401b58c
  ldr r0,[sp,#0x2ac]
  addw r2,r10,#0x686
  ldrh.w r1,[r2,#0x2]!
  cmp r0,r2
  strh.w r1,[r2,#0xa0]
  bne 0x1401c6c8
  mov.w r2,#0x718
  movs r1,#0x48
  b.w 0x1401be40
