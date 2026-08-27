; FUN_2c672b18 @ 0x2c672b18 size=40
  lsrs r3,r0,#0x1
  and r3,r3,#0x55555555
  subs r0,r0,r3
  lsrs r3,r0,#0x2
  and r0,r0,#0x33333333
  and r3,r3,#0x33333333
  add r0,r3
  add.w r0,r0,r0, lsr #0x4
  and r0,r0,#0xf0f0f0f
  add.w r0,r0,r0, lsl #0x8
  add.w r0,r0,r0, lsl #0x10
  lsrs r0,r0,#0x18
  bx lr
