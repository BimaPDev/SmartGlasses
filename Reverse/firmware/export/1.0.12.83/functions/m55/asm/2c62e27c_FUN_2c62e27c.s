; FUN_2c62e27c @ 0x2c62e27c size=82
  push {r4,lr}
  mul r4,r0,r0
  rsb.w r12,r0,#0x400
  mul r2,r0,r2
  lsrs r4,r4,#0xa
  mul r3,r3,r12
  mul r0,r4,r0
  mul r3,r4,r3
  ldr r4,[sp,#0x8]
  lsrs r0,r0,#0xa
  add.w lr,r3,r3, lsl #0x1
  mul r0,r4,r0
  mul r4,r12,r12
  lsrs r0,r0,#0xa
  lsrs r4,r4,#0xa
  mul r3,r4,r2
  mul r12,r4,r12
  add.w r3,r3,r3, lsl #0x1
  lsr.w r12,r12,#0xa
  add.w r3,r0,r3, lsr #0x14
  mul r1,r1,r12
  add.w r3,r3,lr, lsr #0x14
  add.w r0,r3,r1, lsr #0xa
  pop {r4,pc}
