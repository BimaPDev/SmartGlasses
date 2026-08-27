; FUN_2c64f646 @ 0x2c64f646 size=28
  push {r0,r1,r2,lr}
  ldr r1,[r1,#0x0]
  str r2,[sp,#0x0]
  mov r2,r1
  ldr.w r3,[r1,#-0xc]
  ldr r1,[r0,#0x10]
  mov.w r0,#0x0
  bl 0x2c6551ae
  add sp,#0xc
  pop.w pc
