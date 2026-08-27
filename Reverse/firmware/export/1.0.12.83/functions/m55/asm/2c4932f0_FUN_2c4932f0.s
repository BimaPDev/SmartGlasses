; FUN_2c4932f0 @ 0x2c4932f0 size=28
  ldr r3,[0x2c49330c]
  sub.w r1,r3,#0x3c
  ldrb.w r2,[r3,#0x30]
  subs r3,#0xc
  cmp r2,#0x6
  beq 0x2c493308
  cmp r3,r1
  bne 0x2c4932f6
  movs r0,#0x0
  bx lr
  movs r0,#0x1
  bx lr
