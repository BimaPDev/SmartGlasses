; FUN_2c5561c4 @ 0x2c5561c4 size=44
  push {r4,lr}
  sub sp,#0x8
  str r1,[sp,#0x4]
  bl 0x2c48e3b8
  ldr r1,[sp,#0x4]
  mov r4,r0
  bl 0x2c556120
  cmp r0,#0x0
  mov r0,r4
  blt 0x2c5561e6
  bl 0x2c48dea0
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
  bl 0x2c48dea0
  mov.w r0,#0xffffffff
  b 0x2c5561e2
