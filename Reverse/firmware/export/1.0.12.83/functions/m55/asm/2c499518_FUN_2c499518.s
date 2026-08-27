; FUN_2c499518 @ 0x2c499518 size=30
  push {r3,lr}
  bl 0x2c4baafc
  cmp r0,#0x3
  bne 0x2c499526
  movs r0,#0x1
  pop {r3,pc}
  bl 0x2c4baafc
  sub.w r0,r0,#0x4
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
