; FUN_2c46a5a4 @ 0x2c46a5a4 size=24
  cbz r0,0x2c46a5ba
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  bl 0x2c669588
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c669588
  bx lr
