; FUN_2c629ed8 @ 0x2c629ed8 size=436
  push {r4,r5,r6,r7,r8,lr}
  ldrsh.w r0,[sp,#0x18]
  ldrb.w lr,[sp,#0x20]
  mla r3,r2,r0,r3
  cmp.w lr,#0xfc
  add.w r2,r1,r3, lsl #0x2
  ldr.w r0,[r1,r3,lsl #0x2]
  ldrb.w r12,[r2,#0x3]
  bhi 0x2c629f1a
  cmp.w r12,#0x2
  bls 0x2c629f1a
  cmp.w lr,#0x2
  bhi 0x2c629f2a
  strb.w r0,[r1,r3,lsl #0x2]
  ubfx r4,r0,#0x8,#0x8
  ubfx r0,r0,#0x10,#0x8
  strb r4,[r2,#0x1]
  strb r0,[r2,#0x2]
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r0,[sp,#0x1c]
  strb.w lr,[r2,#0x3]
  cmp.w lr,#0x2
  bhi 0x2c629f06
  pop.w {r4,r5,r6,r7,r8,pc}
  cmp.w r12,#0xfc
  bhi 0x2c629ff2
  ldr.w r8,[0x2c62a0a0]
  ldr r6,[0x2c62a08c]
  ldrb.w r5,[r8,#0x0]
  cmp r5,lr
  beq.w 0x2c62a062
  ldr r7,[0x2c62a090]
  ldr r5,[0x2c62a094]
  ldr r4,[sp,#0x1c]
  strb.w r12,[r6,#0x0]
  rsb.w r12,r12,#0xff
  str r4,[r7,#0x0]
  rsb.w r4,lr,#0xff
  strb.w lr,[r8,#0x0]
  uxth.w lr,lr
  smulbb r12,r4,r12
  str r0,[r5,#0x0]
  ldr r7,[sp,#0x1c]
  ubfx r5,r0,#0x10,#0x8
  eor r4,r12,#0xff00
  rsb r12,lr,lr, lsl #0x8
  ubfx r7,r7,#0x10,#0x8
  ubfx r6,r0,#0x8,#0x8
  ubfx lr,r4,#0x8,#0x8
  uxth.w r12,r12
  uxtb r0,r0
  udiv r12,r12,lr
  uxtb.w r4,r12
  rsb.w r12,r4,#0xff
  mul r5,r12,r5
  mul r6,r12,r6
  mla r5,r4,r7,r5
  ldr r7,[sp,#0x1c]
  mul r0,r12,r0
  ubfx r7,r7,#0x8,#0x8
  mla r6,r4,r7,r6
  ldr r7,[sp,#0x1c]
  uxtb.w r12,r7
  mla r12,r4,r12,r0
  add.w r0,r5,r5, lsl #0x8
  ldr r4,[0x2c62a098]
  add.w r5,r5,r0, lsl #0x7
  add.w r0,r6,r6, lsl #0x8
  strb.w lr,[r4,#0x0]
  ubfx r5,r5,#0x17,#0x8
  movs r4,#0xff
  add.w r6,r6,r0, lsl #0x7
  add.w r0,r12,r12, lsl #0x8
  ubfx r6,r6,#0x17,#0x8
  add.w r12,r12,r0, lsl #0x7
  ldr r0,[0x2c62a09c]
  lsr.w r12,r12,#0x17
  strb r6,[r0,#0x1]
  strb r5,[r0,#0x2]
  strb.w r12,[r0,#0x0]
  strb r4,[r0,#0x3]
  ldr r0,[r0,#0x0]
  strb.w lr,[r2,#0x3]
  b 0x2c629f20
  rsb.w r5,lr,#0xff
  uxtb.w r12,r0
  ubfx r4,r0,#0x8,#0x8
  ubfx r0,r0,#0x10,#0x8
  mul r12,r5,r12
  mul r0,r5,r0
  mul r4,r5,r4
  ldr r5,[sp,#0x1c]
  uxtb r5,r5
  mla r12,r5,lr,r12
  ldr r5,[sp,#0x1c]
  ubfx r5,r5,#0x8,#0x8
  mla r4,r5,lr,r4
  ldr r5,[sp,#0x1c]
  ubfx r5,r5,#0x10,#0x8
  mla lr,r5,lr,r0
  add.w r0,r12,r12, lsl #0x8
  add.w r12,r12,r0, lsl #0x7
  add.w r0,r4,r4, lsl #0x8
  lsr.w r12,r12,#0x17
  add.w r4,r4,r0, lsl #0x7
  add.w r0,lr,lr, lsl #0x8
  ubfx r4,r4,#0x17,#0x8
  add.w lr,lr,r0, lsl #0x7
  movs r0,#0x0
  bfi r0,r12,#0x0,#0x8
  ubfx lr,lr,#0x17,#0x8
  bfi r0,r4,#0x8,#0x8
  movs r4,#0xff
  bfi r0,lr,#0x10,#0x8
  strb r4,[r2,#0x3]
  b 0x2c629f06
  ldrb r5,[r6,#0x0]
  ldr r7,[0x2c62a090]
  cmp r5,r12
  beq 0x2c62a06e
  ldr r5,[0x2c62a094]
  b 0x2c629f44
  ldr r5,[r7,#0x0]
  ldr r4,[sp,#0x1c]
  cmp r4,r5
  ldr r5,[0x2c62a094]
  bne.w 0x2c629f44
  ldr r4,[r5,#0x0]
  cmp r0,r4
  bne.w 0x2c629f44
  ldr r4,[0x2c62a098]
  ldr r0,[0x2c62a09c]
  ldrb.w lr,[r4,#0x0]
  b 0x2c629fea
