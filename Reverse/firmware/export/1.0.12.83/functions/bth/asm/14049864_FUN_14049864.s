; FUN_14049864 @ 0x14049864 size=20
  push {r3,lr}
  movs r0,#0x2
  ldr r1,[0x14049878]
  bl 0x1405016c
  movs r2,#0xff
  ldr r3,[0x1404987c]
  str r2,[r3,#0x0]
  strb r2,[r3,#0x4]
  pop {r3,pc}
