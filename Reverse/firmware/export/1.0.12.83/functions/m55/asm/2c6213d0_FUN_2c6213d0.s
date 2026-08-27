; FUN_2c6213d0 @ 0x2c6213d0 size=38
  str r1,[r0,#0xc]
  bx lr
  push {r4,lr}
  bl 0x2c6129bc
  mov r4,r0
  ldr r1,[0x2c6213f4]
  bl 0x2c6129d8
  mov r0,r4
  ldr r1,[0x2c6213f8]
  bl 0x2c6129dc
  mov r0,r4
  ldr r1,[0x2c6213fc]
  pop.w {r4,lr}
  b.w 0x2c6129e0
