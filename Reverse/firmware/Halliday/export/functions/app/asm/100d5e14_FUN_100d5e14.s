; FUN_100d5e14 @ 0x100d5e14 size=14
  ldr r3,[0x100d5e24]
  ldr r0,[r3,#0x0]
  cbz r0,0x100d5e20
  ldrb r0,[r0,#0x8]
  and r0,r0,#0x7
  bx lr
