; FUN_100c0454 @ 0x100c0454 size=20
  push {r3,lr}
  ldr r0,[0x100c0468]
  ldr r3,[0x100c046c]
  str r3,[r0,#0x4]
  movs r3,#0x9
  str r3,[r0,#0x8]
  bl 0x100beebc
  movs r0,#0x0
  pop {r3,pc}
