; FUN_2c540c32 @ 0x2c540c32 size=40
  push {r4,lr}
  mov r4,r1
  bl 0x2c48e3b8
  mov r1,r4
  mov r4,r0
  bl 0x2c540624
  cmp r0,#0x0
  mov r0,r4
  blt 0x2c540c56
  bl 0x2c48dea0
  movs r0,#0x0
  pop {r4,pc}
  bl 0x2c48dea0
  mov.w r0,#0xffffffff
  pop {r4,pc}
