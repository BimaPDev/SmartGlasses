; FUN_2c48edd4 @ 0x2c48edd4 size=26
  push {r3,lr}
  movs r3,#0x0
  movs r0,#0x54
  mov r2,r3
  mov r1,r3
  bl 0x2c48d15c
  sub.w r0,r0,#0x1
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
