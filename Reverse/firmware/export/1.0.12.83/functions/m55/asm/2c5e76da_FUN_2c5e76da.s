; FUN_2c5e76da @ 0x2c5e76da size=18
  push {r4,lr}
  mov r4,r1
  bl 0x2c5e44c0
  subs r0,r0,r4
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r4,pc}
