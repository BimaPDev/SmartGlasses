; FUN_14037c58 @ 0x14037c58 size=96
  mov.w r12,#0x0
  adds r0,#0x4
  bic r0,r0,#0x1
  bic r1,r1,#0x1
  subs r1,r1,r0
  lsrs r3,r1,#0x1f
  ubfx r2,r1,#0xc,#0xa
  orr.w r2,r2,r3, lsl #0xa
  mvn.w r2,r2, lsl #0x14
  cmp r1,r12
  ite ge
  mov.ge r0,#0x0
  mov.lt r0,#0x1
  mvn.w r2,r2, lsr #0x14
  eor r3,r1,#0x400000
  push {lr}
  ubfx r3,r3,#0x16,#0x1
  eor lr,r1,#0x800000
  ubfx lr,lr,#0x17,#0x1
  eors r3,r0
  lsls r3,r3,#0xb
  eor.w r0,r0,lr
  ubfx r1,r1,#0x1,#0xb
  orr.w r3,r3,r0, lsl #0xd
  orrs r3,r1
  orr r3,r3,#0x9000
  bfi r12,r2,#0x0,#0x10
  bfi r12,r3,#0x10,#0x10
  mov r0,r12
  pop.w pc
