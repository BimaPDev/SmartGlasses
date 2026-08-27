; FUN_2c641174 @ 0x2c641174 size=48
  push {r4,lr}
  bl 0x2c640e8c
  ldr r4,[0x2c6411a4]
  bl 0x2c63de34
  bl 0x2c63f77c
  movs r2,#0x0
  movw r1,#0xbb8
  ldr r0,[0x2c6411a8]
  bl 0x2c62bdd8
  mov.w r1,#0xffffffff
  str r0,[r4,#0x0]
  bl 0x2c62be70
  ldr r0,[r4,#0x0]
  pop.w {r4,lr}
  b.w 0x2c62be40
