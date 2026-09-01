; FUN_101383b0 @ 0x101383b0 size=12
  push {r4,lr}
  mov r4,r0
  blx r3
  movs r3,#0x3
  strb r3,[r4,#0x7]
  pop {r4,pc}
