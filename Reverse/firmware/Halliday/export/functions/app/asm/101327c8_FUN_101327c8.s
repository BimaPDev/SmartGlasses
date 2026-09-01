; FUN_101327c8 @ 0x101327c8 size=18
  push {r4,lr}
  mov r4,r1
  movs r1,#0x2
  bl 0x100c1fe4
  strb r4,[r0,#0x0]
  lsrs r4,r4,#0x8
  strb r4,[r0,#0x1]
  pop {r4,pc}
