; FUN_14050350 @ 0x14050350 size=20
  push {r3,lr}
  bl 0x140e5998
  ldr r3,[0x14050364]
  ldr r3,[r3,#0x0]
  subs r0,r3,r0
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
