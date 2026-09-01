; FUN_101345b6 @ 0x101345b6 size=24
  push {r3,lr}
  movs r1,#0x2
  adds r0,#0x8
  bl 0x100c1fe4
  movs r3,#0x0
  mvn r2,#0x8
  strb r3,[r0,#0x1]
  strb r2,[r0,#0x0]
  mov r0,r3
  pop {r3,pc}
