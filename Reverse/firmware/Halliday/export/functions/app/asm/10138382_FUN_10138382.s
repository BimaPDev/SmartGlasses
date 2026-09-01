; FUN_10138382 @ 0x10138382 size=16
  ldrb r3,[r0,#0x4]
  ldr r2,[r0,#0x0]
  ldrb r2,[r2,r3]
  cmp r2,#0x2c
  itt eq
  add.eq r3,#0x1
  strb.eq r3,[r0,#0x4]
  bx lr
