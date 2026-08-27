; FUN_2c4df9ea @ 0x2c4df9ea size=24
  push {r4,lr}
  mov.w r1,#0x1000
  mov r4,r0
  adds r0,#0x10
  bl 0x2c4df4f8
  cmp r0,#0x0
  ite ne
  mov.ne r0,r4
  mov.eq r0,#0x0
  pop {r4,pc}
