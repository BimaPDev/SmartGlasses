; FUN_2c6513e8 @ 0x2c6513e8 size=24
  cmp r2,#0x1
  push {r4,r5}
  bne 0x2c6513f6
  ldr r3,[r1,#0x0]
  str r3,[r0,#0x0]
  pop {r4,r5}
  bx lr
  cmp r2,#0x0
  beq 0x2c6513f2
  pop {r4,r5}
  b.w 0x2c66ed1c
