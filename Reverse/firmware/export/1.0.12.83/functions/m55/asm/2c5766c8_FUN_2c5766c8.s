; FUN_2c5766c8 @ 0x2c5766c8 size=36
  str r1,[r0,#0xc]
  bx lr
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  bl 0x2c55fddc
  ldr r4,[r4,#0xc]
  mov r0,r4
  bl 0x2c573c78
  mov r1,r0
  mov r0,r4
  adds r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c573c9c
