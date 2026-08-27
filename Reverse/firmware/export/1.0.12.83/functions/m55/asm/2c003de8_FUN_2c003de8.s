; FUN_2c003de8 @ 0x2c003de8 size=30
  ldr r3,[0x2c003e08]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c003dee
  ldr r3,[r2,#0x14]
  lsls r1,r1,#0x10
  bic r3,r3,#0xff0000
  and r1,r1,#0xff0000
  orrs r1,r3
  str r1,[r2,#0x14]
  bx lr
