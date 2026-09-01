; FUN_100c9900 @ 0x100c9900 size=26
  push {r3,lr}
  ldr r0,[0x100c991c]
  bl 0x100c41c4
  cbnz r0,0x100c9916
  ldr r0,[0x100c9920]
  bl 0x100c41c4
  and r0,r0,#0x1
  pop {r3,pc}
  movs r0,#0x1
  b 0x100c9910
