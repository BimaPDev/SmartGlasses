; FUN_10124e00 @ 0x10124e00 size=20
  ldr r0,[r0,#0x0]
  cbz r0,0x10124e12
  ldrb r3,[r0,#0x1c]
  ands r3,r3,#0xc
  beq 0x10124e00
  subs r3,#0x4
  rsbs r0,r3
  adcs r0,r3
  bx lr
