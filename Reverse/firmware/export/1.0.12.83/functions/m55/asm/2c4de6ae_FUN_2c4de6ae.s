; FUN_2c4de6ae @ 0x2c4de6ae size=28
  push {r0,r1,r2,lr}
  ldr r3,[r0,#0x0]
  strd r2,r1,[sp,#0x0]
  ldr r3,[r3,#0x14]
  blx r3
  ldr r3,[r0,#0x0]
  ldrd r2,r1,[sp,#0x0]
  ldr r3,[r3,#0x18]
  add sp,#0xc
  pop.w lr
  bx r3
