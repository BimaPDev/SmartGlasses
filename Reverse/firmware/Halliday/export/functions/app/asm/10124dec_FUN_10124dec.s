; FUN_10124dec @ 0x10124dec size=20
  ldr r0,[r0,#0x0]
  cbz r0,0x10124dfe
  ldrb r3,[r0,#0x1c]
  ands r3,r3,#0x3
  beq 0x10124dec
  subs r3,#0x1
  rsbs r0,r3
  adcs r0,r3
  bx lr
