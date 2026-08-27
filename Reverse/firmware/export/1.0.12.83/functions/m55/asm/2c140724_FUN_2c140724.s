; FUN_2c140724 @ 0x2c140724 size=22
  push {lr}
  ldr r3,[0x2c14073c]
  sub sp,#0xc
  ldr r0,[r3,#0x14]
  str r0,[sp,#0x4]
  bl 0x2c13ee18
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w pc
