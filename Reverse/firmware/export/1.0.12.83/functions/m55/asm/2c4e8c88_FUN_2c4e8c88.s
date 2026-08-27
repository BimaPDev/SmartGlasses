; FUN_2c4e8c88 @ 0x2c4e8c88 size=38
  push {lr}
  sub sp,#0xc
  bl 0x2c4e9354
  ldr.w r3,[r0,#0x94]
  blx r3
  str r0,[sp,#0x4]
  bl 0x2c4e9354
  mov r3,r0
  ldr r1,[sp,#0x4]
  ldr r3,[r3,#0x58]
  ldr r0,[0x2c4e8cb0]
  blx r3
  ldr r0,[0x2c4e8cb4]
  add sp,#0xc
  pop.w pc
