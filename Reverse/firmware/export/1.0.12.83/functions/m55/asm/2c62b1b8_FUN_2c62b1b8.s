; FUN_2c62b1b8 @ 0x2c62b1b8 size=16
  lsrs r0,r0,#0x4
  tst r0,#0x18
  ite eq
  and.eq r0,r0,#0x1f
  mov.ne r0,#0x7
  bx lr
