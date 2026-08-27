; FUN_2c58c058 @ 0x2c58c058 size=44
  push {r4,lr}
  sub sp,#0x8
  str r1,[sp,#0x4]
  bl 0x2c48e3b8
  ldr r1,[sp,#0x4]
  mov r4,r0
  bl 0x2c58bea0
  cmp r0,#0x0
  mov r0,r4
  blt 0x2c58c07a
  bl 0x2c48dea0
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
  bl 0x2c48dea0
  mov.w r0,#0xffffffff
  b 0x2c58c076
