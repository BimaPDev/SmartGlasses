; FUN_2c545cbc @ 0x2c545cbc size=36
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  bl 0x2c547b38
  movs r1,#0x0
  ldr r0,[r4,#0x4]
  bl 0x2c5481c8
  ldr r0,[r4,#0x4]
  movs r1,#0x0
  pop.w {r4,lr}
  b.w 0x2c5481d0
  strb.w r1,[r0,#0x5a]
  bx lr
