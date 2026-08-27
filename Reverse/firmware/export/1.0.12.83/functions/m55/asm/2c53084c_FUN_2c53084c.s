; FUN_2c53084c @ 0x2c53084c size=34
  push {r3,lr}
  ldr r3,[r0,#0x8]
  ldr r0,[r1,#0x8]
  cbz r3,0x2c530866
  cbz r0,0x2c530864
  adds r1,r0,#0x5
  adds r0,r3,#0x5
  bl 0x2c66b624
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
