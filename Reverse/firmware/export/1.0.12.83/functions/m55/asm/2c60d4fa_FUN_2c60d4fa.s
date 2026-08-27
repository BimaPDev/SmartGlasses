; FUN_2c60d4fa @ 0x2c60d4fa size=136
  push {r4,r5,lr}
  ubfx lr,r1,#0x8,#0x8
  ubfx r5,r0,#0x10,#0x8
  uxtb r1,r1
  sub.w r4,lr,r12
  uxtb.w r12,r0
  sub.w r5,r3,r5
  sub.w r12,r1,r12
  bic.w r4,r4,r4, asr #0x1f
  bic.w r5,r5,r5, asr #0x1f
  bic.w r12,r12,r12, asr #0x1f
  beq 0x2c60d578
  rsb.w r0,r2,#0xff
  mul r1,r0,r1
  mul r3,r0,r3
  mla r1,r2,r12,r1
  mul r12,r0,lr
  movs r0,#0x0
  mla r12,r2,r4,r12
  mla r2,r2,r5,r3
  add.w r3,r2,r2, lsl #0x8
  add.w r2,r2,r3, lsl #0x7
  add.w r3,r1,r1, lsl #0x8
  lsrs r2,r2,#0x17
  add.w r1,r1,r3, lsl #0x7
  add.w r3,r12,r12, lsl #0x8
  lsrs r1,r1,#0x17
  add.w r12,r12,r3, lsl #0x7
  bfi r0,r1,#0x0,#0x8
  lsr.w r12,r12,#0x17
  bfi r0,r12,#0x8,#0x8
  bfi r0,r2,#0x10,#0x8
  orr r0,r0,#0xff000000
  pop {r4,r5,pc}
  bfi r0,r12,#0x0,#0x8
  bfi r0,r4,#0x8,#0x8
  bfi r0,r5,#0x10,#0x8
  pop {r4,r5,pc}
