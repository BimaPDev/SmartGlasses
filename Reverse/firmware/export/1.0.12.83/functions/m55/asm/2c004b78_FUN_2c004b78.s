; FUN_2c004b78 @ 0x2c004b78 size=38
  push {r4,lr}
  mov r4,r0
  sub sp,#0x8
  str r1,[sp,#0x4]
  bl 0x2c003d6c
  ldr r1,[sp,#0x4]
  mov r0,r4
  bl 0x2c00402c
  mov r0,r4
  bl 0x2c003d6c
  mov r0,r4
  bl 0x2c003d94
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
