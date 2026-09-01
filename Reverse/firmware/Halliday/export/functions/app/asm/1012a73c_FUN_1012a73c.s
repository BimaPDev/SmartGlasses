; FUN_1012a73c @ 0x1012a73c size=18
  ldr r2,[r0,#0x18]
  ldr r1,[r2,#0x20]
  ldrb r3,[r2,#0x10]
  ldr r0,[r2,#0x1c]
  add r3,r1
  subs r3,r3,r0
  rsbs r0,r3
  adcs r0,r3
  bx lr
