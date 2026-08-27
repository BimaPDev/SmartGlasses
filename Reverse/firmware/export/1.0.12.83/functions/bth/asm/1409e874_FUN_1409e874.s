; FUN_1409e874 @ 0x1409e874 size=20
  cbz r0,0x1409e884
  push {r3,lr}
  bl 0x140b4d70
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
  movs r0,#0x1
  bx lr
