; FUN_2c003ea8 @ 0x2c003ea8 size=12
  ldr r3,[0x2c003eb4]
  lsrs r1,r1,#0x18
  ldr.w r3,[r3,r0,lsl #0x2]
  str r1,[r3,#0x30]
  bx lr
