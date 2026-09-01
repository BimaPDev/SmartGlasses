; FUN_1012b0b6 @ 0x1012b0b6 size=72
  rsb.w r12,r0,#0x400
  push {r4,r5,r6,r7,lr}
  mul r7,r12,r12
  mul r4,r2,r0
  mul r6,r0,r0
  lsrs r7,r7,#0xa
  muls r4,r7
  lsrs r6,r6,#0xa
  add.w r2,r4,r4, lsl #0x1
  mul r4,r6,r0
  mul r3,r3,r12
  lsrs r5,r4,#0xa
  mul r7,r7,r12
  ldr r4,[sp,#0x14]
  muls r6,r3
  muls r4,r5
  lsrs r0,r7,#0xa
  muls r0,r1
  lsrs r4,r4,#0xa
  add.w r4,r4,r2, lsr #0x14
  add.w r6,r6,r6, lsl #0x1
  add.w r4,r4,r6, lsr #0x14
  add.w r0,r4,r0, lsr #0xa
  pop {r4,r5,r6,r7,pc}
