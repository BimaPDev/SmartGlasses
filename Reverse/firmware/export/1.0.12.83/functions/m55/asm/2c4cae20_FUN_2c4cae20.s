; FUN_2c4cae20 @ 0x2c4cae20 size=22
  push {r3,lr}
  movs r1,#0x0
  bl 0x2c4cf238
  movw r3,#0x201
  cmp r0,#0x0
  ite ne
  mov.ne r0,r3
  mov.eq r0,#0x0
  pop {r3,pc}
