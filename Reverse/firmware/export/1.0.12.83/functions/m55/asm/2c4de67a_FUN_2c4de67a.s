; FUN_2c4de67a @ 0x2c4de67a size=24
  push {r0,r1,r2,lr}
  ldr r3,[r0,#0x0]
  str r1,[sp,#0x4]
  ldr r3,[r3,#0x14]
  blx r3
  ldr r3,[r0,#0x0]
  ldr r1,[sp,#0x4]
  ldr r3,[r3,#0xc]
  add sp,#0xc
  pop.w lr
  bx r3
