; FUN_2c483ae8 @ 0x2c483ae8 size=28
  push {r3,lr}
  movs r0,#0x1
  bl 0x2c471604
  ldr r1,[0x2c483b04]
  adds r0,#0x93
  bl 0x2c66b624
  cmp r0,#0x0
  ite eq
  mov.eq r0,#0x6
  mov.ne.w r0,#0xffffffff
  pop {r3,pc}
