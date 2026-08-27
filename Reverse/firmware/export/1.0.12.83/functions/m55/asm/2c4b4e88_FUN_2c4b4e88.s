; FUN_2c4b4e88 @ 0x2c4b4e88 size=28
  cbz r0,0x2c4b4e9e
  ldr r0,[r0,#0x0]
  cbz r0,0x2c4b4e9e
  push {r3,lr}
  bl 0x2c6441b4
  clz r0,r0
  lsrs r0,r0,#0x5
  rsbs r0,r0
  pop {r3,pc}
  mvn r0,#0x15
  bx lr
