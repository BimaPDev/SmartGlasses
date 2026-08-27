; FUN_1409dbd0 @ 0x1409dbd0 size=14
  ldr r3,[0x1409dbe0]
  ldrb r2,[r3,#0x2]
  cmp r2,#0x2
  ite eq
  ldrb.eq r0,[r3,#0x3]
  mov.ne r0,#0xff
  bx lr
