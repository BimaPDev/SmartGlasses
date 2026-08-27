; FUN_2c493ec0 @ 0x2c493ec0 size=26
  push {r4,lr}
  mov.w r4,#0x7d0
  movs r1,#0x0
  mov r0,r1
  bl 0x2c490020
  movs r0,#0xc8
  bl 0x2c6444fc
  subs r4,#0x1
  bne 0x2c493ec6
  pop {r4,pc}
