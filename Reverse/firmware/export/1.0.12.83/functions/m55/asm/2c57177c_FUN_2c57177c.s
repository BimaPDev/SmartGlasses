; FUN_2c57177c @ 0x2c57177c size=28
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  ldr r0,[r0,#0x4]
  bl 0x2c55fea0
  mov r1,r5
  ldr r0,[r4,#0x8]
  pop.w {r3,r4,r5,lr}
  b.w 0x2c571df8
  str r1,[r0,#0xc]
  bx lr
