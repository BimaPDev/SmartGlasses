; FUN_100f8ff0 @ 0x100f8ff0 size=18
  push {r4}
  movs r4,#0x0
  str r1,[r0,#0x4]
  str r2,[r0,#0x8]
  strb r3,[r0,#0xc]
  str r4,[r0,#0x10]
  pop.w r4
  bx lr
