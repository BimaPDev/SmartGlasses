; FUN_10138662 @ 0x10138662 size=22
  ldr r1,[r0,#0x0]
  ldrb r3,[r0,#0x4]
  ldrb r2,[r1,r3]
  cbnz r2,0x1013866c
  bx lr
  adds r3,#0x1
  uxtb r3,r3
  cmp r2,#0x2c
  strb r3,[r0,#0x4]
  bne 0x10138664
  bx lr
