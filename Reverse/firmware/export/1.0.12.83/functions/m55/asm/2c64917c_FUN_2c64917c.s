; FUN_2c64917c @ 0x2c64917c size=30
  push {lr}
  sub sp,#0xc
  ldr r0,[r1,#0x4]
  bl 0x2c6684cc
  str r0,[sp,#0x4]
  bl 0x2c6444fc
  ldr r1,[sp,#0x4]
  ldr r0,[0x2c6491a0]
  add sp,#0xc
  pop.w lr
  b.w 0x2c648600
