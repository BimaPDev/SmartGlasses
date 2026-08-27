; FUN_2c499578 @ 0x2c499578 size=30
  push {lr}
  mov r1,r0
  sub sp,#0xc
  movs r0,#0x0
  str r1,[sp,#0x4]
  bl 0x2c497e30
  ldr r1,[sp,#0x4]
  movs r0,#0x1
  bl 0x2c497e30
  uxtb r0,r0
  add sp,#0xc
  pop.w pc
