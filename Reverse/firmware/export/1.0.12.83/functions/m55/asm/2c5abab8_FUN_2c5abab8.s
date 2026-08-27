; FUN_2c5abab8 @ 0x2c5abab8 size=38
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  bl 0x2c602ea8
  ldr r1,[0x2c5abad8]
  ldr r0,[r4,#0x4]
  bl 0x2c60251c
  bl 0x2c5abf68
  pop.w {r4,lr}
  b.w 0x2c5ac4dc
  movs r3,#0x0
  str.w r3,[r0,#0x188]
  bx lr
