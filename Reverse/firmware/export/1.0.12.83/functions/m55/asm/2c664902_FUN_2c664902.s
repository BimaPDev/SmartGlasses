; FUN_2c664902 @ 0x2c664902 size=32
  cbz r2,0x2c66484e
  b.w 0x2c66ed1c
  bx lr
  cmp r2,#0x1
  push {r4}
  bne 0x2c664912
  ldr r2,[r1,#0x0]
  pop.w r4
  str r2,[r0,#0x0]
  bx lr
  pop.w r4
  b.w 0x2c664848
