; FUN_2c6423f8 @ 0x2c6423f8 size=30
  push {lr}
  sub sp,#0xc
  ldr r0,[r1,#0x8]
  bl 0x2c6684cc
  str r0,[sp,#0x4]
  bl 0x2c643050
  ldr r1,[sp,#0x4]
  ldr r0,[0x2c642418]
  add sp,#0xc
  pop.w lr
  b.w 0x2c648600
