; FUN_1012da64 @ 0x1012da64 size=22
  movs r2,#0x3c
  push {r4,lr}
  ldrb r3,[r0,#0x2]
  ldrb r4,[r0,#0x1]
  ldrb r0,[r0,#0x0]
  mla r3,r2,r3,r4
  mla r3,r2,r3,r0
  str r3,[r1,#0x0]
  pop {r4,pc}
