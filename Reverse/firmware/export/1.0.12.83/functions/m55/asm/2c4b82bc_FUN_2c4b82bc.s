; FUN_2c4b82bc @ 0x2c4b82bc size=18
  ldr r3,[0x2c4b82d0]
  ldrb r3,[r3,#0x0]
  cbz r3,0x2c4b82cc
  ldr r2,[0x2c4b82d4]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x1
  str r3,[r2,#0x0]
  bx lr
