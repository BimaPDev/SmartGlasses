; FUN_1011c5b8 @ 0x1011c5b8 size=18
  lsrs r3,r0,#0x7
  lsls r2,r3,#0x1
  add r3,r2
  add.w r3,r3,r3, lsl #0x3
  eor.w r0,r3,r0, lsl #0x1
  uxtb r0,r0
  bx lr
