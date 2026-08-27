; FUN_2c5d7244 @ 0x2c5d7244 size=52
  strb.w r1,[r0,#0x491]
  bx lr
  ldr r3,[0x2c5d7278]
  push {r4,lr}
  strb r0,[r3,#0x0]
  mov r4,r0
  bl 0x2c5c685c
  bl 0x2c5c6bd0
  cbnz r0,0x2c5d7258
  pop {r4,pc}
  movw r0,#0x1051
  bl 0x2c5e33f0
  bl 0x2c5e4068
  bl 0x2c5c685c
  mov r1,r4
  pop.w {r4,lr}
  b.w 0x2c5c6bc8
