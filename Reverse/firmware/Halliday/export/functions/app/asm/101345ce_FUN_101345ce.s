; FUN_101345ce @ 0x101345ce size=20
  push {r4,lr}
  mov r4,r2
  movs r1,#0x2
  adds r0,#0x8
  bl 0x100c1fe4
  ldrh r3,[r4,#0xa]
  strh r3,[r0,#0x0]
  movs r0,#0x0
  pop {r4,pc}
