; FUN_1402d8ac @ 0x1402d8ac size=18
  ldr r3,[0x1402d8c0]
  ldrb r3,[r3,#0x0]
  cbz r3,0x1402d8bc
  ldr r2,[0x1402d8c4]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x1
  str r3,[r2,#0x0]
  bx lr
