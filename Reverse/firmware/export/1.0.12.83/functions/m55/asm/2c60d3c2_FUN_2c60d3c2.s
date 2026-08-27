; FUN_2c60d3c2 @ 0x2c60d3c2 size=132
  push {r4,r5,r6,lr}
  uxtb r4,r1
  ubfx r5,r0,#0x10,#0x8
  ubfx r1,r1,#0x10,#0x8
  uxtb.w lr,r0
  asr.w r6,r3, asr #0x8
  smulbb r5,r5,r1
  smulbb lr,lr,r4
  asr.w r5,r5, asr #0x8
  asr.w lr,lr, asr #0x8
  beq 0x2c60d43c
  rsb.w r0,r2,#0xff
  mul r4,r0,r4
  mul r1,r0,r1
  mla lr,r2,lr,r4
  mul r3,r0,r12
  mla r0,r2,r5,r1
  mla r3,r2,r6,r3
  add.w r2,lr,lr, lsl #0x8
  add.w r1,r0,r0, lsl #0x8
  add.w lr,lr,r2, lsl #0x7
  add.w r0,r0,r1, lsl #0x7
  add.w r2,r3,r3, lsl #0x8
  lsrs r1,r0,#0x17
  movs r0,#0x0
  lsr.w lr,lr,#0x17
  add.w r3,r3,r2, lsl #0x7
  bfi r0,lr,#0x0,#0x8
  lsrs r3,r3,#0x17
  bfi r0,r3,#0x8,#0x8
  bfi r0,r1,#0x10,#0x8
  orr r0,r0,#0xff000000
  pop {r4,r5,r6,pc}
  bfi r0,lr,#0x0,#0x8
  bfi r0,r6,#0x8,#0x8
  bfi r0,r5,#0x10,#0x8
  pop {r4,r5,r6,pc}
