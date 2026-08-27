; FUN_2c5169a8 @ 0x2c5169a8 size=28
  push {r4,lr}
  ldr r4,[r0,#0x4]
  movs r1,#0x1
  mov r0,r4
  bl 0x2c606b94
  cbnz r0,0x2c5169b8
  pop {r4,pc}
  mov r0,r4
  movs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c606abc
