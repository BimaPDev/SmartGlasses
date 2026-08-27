; FUN_2c61d788 @ 0x2c61d788 size=218
  push {r3,r4,r5,r6,r7,lr}
  ldr r3,[0x2c61d864]
  uxtb r4,r1
  ubfx r7,r1,#0x8,#0x8
  ubfx r5,r1,#0x10,#0x8
  ldr r3,[r3,#0x24]
  mov r6,r2
  movs r1,#0x2
  movs r0,#0x12
  lsls r3,r3,#0x1f
  bpl 0x2c61d802
  bl 0x2c62eea0
  rsb.w r12,r6,#0xff
  uxtb r3,r0
  ubfx r2,r0,#0x10,#0x8
  mul r4,r12,r4
  mul r7,r12,r7
  mla r4,r3,r6,r4
  ubfx r3,r0,#0x8,#0x8
  mul r12,r12,r5
  movs r0,#0x0
  mla r7,r3,r6,r7
  add.w r3,r4,r4, lsl #0x8
  mla r2,r2,r6,r12
  add.w r4,r4,r3, lsl #0x7
  add.w r3,r7,r7, lsl #0x8
  add.w r1,r2,r2, lsl #0x8
  lsrs r4,r4,#0x17
  add.w r7,r7,r3, lsl #0x7
  add.w r2,r2,r1, lsl #0x7
  bfi r0,r4,#0x0,#0x8
  ubfx r7,r7,#0x17,#0x8
  ubfx r2,r2,#0x17,#0x8
  bfi r0,r7,#0x8,#0x8
  bfi r0,r2,#0x10,#0x8
  orr r0,r0,#0xff000000
  pop {r3,r4,r5,r6,r7,pc}
  bl 0x2c62ee7c
  rsb.w r2,r6,#0xff
  mul r1,r2,r5
  mul r3,r2,r7
  mul r4,r2,r4
  uxtb r2,r0
  mla r4,r2,r6,r4
  ubfx r2,r0,#0x8,#0x8
  mla r3,r2,r6,r3
  ubfx r2,r0,#0x10,#0x8
  movs r0,#0x0
  mla r2,r2,r6,r1
  add.w r1,r2,r2, lsl #0x8
  add.w r2,r2,r1, lsl #0x7
  add.w r1,r4,r4, lsl #0x8
  ubfx r2,r2,#0x17,#0x8
  add.w r4,r4,r1, lsl #0x7
  add.w r1,r3,r3, lsl #0x8
  lsrs r4,r4,#0x17
  add.w r3,r3,r1, lsl #0x7
  bfi r0,r4,#0x0,#0x8
  ubfx r3,r3,#0x17,#0x8
  bfi r0,r3,#0x8,#0x8
  bfi r0,r2,#0x10,#0x8
  orr r0,r0,#0xff000000
  pop {r3,r4,r5,r6,r7,pc}
