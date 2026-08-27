; FUN_2c5ec01c @ 0x2c5ec01c size=18
  push {r4,lr}
  mov r4,r0
  bl 0x2c5ebdc4
  tst r4,r0
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x0
  pop {r4,pc}
