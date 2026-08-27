; FUN_2c49d134 @ 0x2c49d134 size=24
  ldr r3,[0x2c49d14c]
  ldr r2,[r3,#0x48]
  cmp r2,#0x1
  bne 0x2c49d148
  ldr r2,[0x2c49d150]
  ldr r0,[r2,#0x0]
  cmp r0,#0x0
  bge 0x2c49d14a
  ldr r0,[r3,#0x20]
  bx lr
  movs r0,#0x14
  bx lr
