; FUN_1012bd08 @ 0x1012bd08 size=12
  ldr r3,[r0,#0x58]
  adds r3,#0x1
  ite ne
  ldr.ne r0,[r0,#0x54]
  ldr.eq r0,[r0,#0x2c]
  bx lr
