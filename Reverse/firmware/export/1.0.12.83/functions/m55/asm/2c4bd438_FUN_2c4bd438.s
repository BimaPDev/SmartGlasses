; FUN_2c4bd438 @ 0x2c4bd438 size=24
  push {r4,lr}
  movs r4,#0x0
  sub sp,#0x10
  str r4,[sp,#0xc]
  str r4,[sp,#0x0]
  movs r4,#0x1
  strd r4,r4,[sp,#0x4]
  bl 0x2c4bd020
  add sp,#0x10
  pop {r4,pc}
