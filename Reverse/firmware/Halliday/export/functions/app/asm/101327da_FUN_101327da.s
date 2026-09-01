; FUN_101327da @ 0x101327da size=18
  push {r4,lr}
  mov r4,r1
  movs r1,#0x2
  bl 0x100c1fe4
  lsrs r3,r4,#0x8
  strb r3,[r0,#0x0]
  strb r4,[r0,#0x1]
  pop {r4,pc}
