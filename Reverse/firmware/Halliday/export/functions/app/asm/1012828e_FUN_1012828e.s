; FUN_1012828e @ 0x1012828e size=102
  push {r4,r5,r6,r7,lr}
  rsb.w r6,r2,#0xff
  ubfx r4,r1,#0x5,#0x6
  muls r4,r6
  ubfx r3,r0,#0x5,#0x6
  mla r3,r2,r3,r4
  movw r4,#0x8081
  muls r3,r4
  and r7,r1,#0x1f
  muls r7,r6
  ubfx r1,r1,#0xb,#0x5
  muls r6,r1
  add.w r3,r3,#0x400000
  add.w r3,r3,#0x4080
  ubfx r5,r3,#0x17,#0x6
  and r3,r0,#0x1f
  mla r3,r2,r3,r7
  ubfx r0,r0,#0xb,#0x5
  mla r0,r2,r0,r6
  muls r3,r4
  muls r0,r4
  add.w r3,r3,#0x400000
  add.w r3,r3,#0x4080
  add.w r0,r0,#0x400000
  ubfx r3,r3,#0x17,#0x5
  add.w r0,r0,#0x4080
  orr.w r3,r3,r5, lsl #0x5
  lsrs r0,r0,#0x17
  orr.w r0,r3,r0, lsl #0xb
  pop {r4,r5,r6,r7,pc}
