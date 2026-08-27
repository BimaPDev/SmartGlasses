; FUN_2c54edf8 @ 0x2c54edf8 size=44
  push {r4,lr}
  sub sp,#0x8
  str r1,[sp,#0x4]
  bl 0x2c48e3b8
  ldr r1,[sp,#0x4]
  mov r4,r0
  bl 0x2c54ec88
  cmp r0,#0x0
  mov r0,r4
  blt 0x2c54ee1a
  bl 0x2c48dea0
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
  bl 0x2c48dea0
  mov.w r0,#0xffffffff
  b 0x2c54ee16
