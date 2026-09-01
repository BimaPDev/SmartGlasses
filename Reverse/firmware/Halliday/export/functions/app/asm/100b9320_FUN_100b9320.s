; FUN_100b9320 @ 0x100b9320 size=20
  ldr r3,[0x100b9334]
  push {r4}
  ldr r2,[r3,#0xc]
  ldr r1,[r3,#0x0]
  adds r4,r2,#0x1
  str r4,[r3,#0xc]
  strb r0,[r1,r2]
  pop.w r4
  bx lr
