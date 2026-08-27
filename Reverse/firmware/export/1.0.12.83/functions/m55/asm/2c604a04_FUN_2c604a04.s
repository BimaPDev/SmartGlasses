; FUN_2c604a04 @ 0x2c604a04 size=16
  ldr r3,[r0,#0x8]
  cbz r3,0x2c604a10
  ldrb r0,[r3,#0x19]
  and r0,r0,#0xf
  bx lr
  movs r0,#0xf
  bx lr
