; FUN_2c62a47c @ 0x2c62a47c size=32
  cbz r0,0x2c62a492
  ldr r3,[r0,#0x0]
  ldrb r2,[r3,#0x10]
  lsls r2,r2,#0x1b
  bmi 0x2c62a48c
  ldrsh.w r0,[r3,#0x0]
  bx lr
  ldrsh.w r0,[r3,#0x2]
  bx lr
  ldr r3,[0x2c62a49c]
  ldr r0,[r3,#0x0]
  cmp r0,#0x0
  bne 0x2c62a47e
  bx lr
