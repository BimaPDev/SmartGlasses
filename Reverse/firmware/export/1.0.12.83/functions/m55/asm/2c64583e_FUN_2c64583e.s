; FUN_2c64583e @ 0x2c64583e size=20
  push {lr}
  sub sp,#0xc
  ldr r0,[r3,#0x14]
  str r0,[sp,#0x4]
  bl 0x2c643a58
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w pc
