; FUN_2c65e8e8 @ 0x2c65e8e8 size=18
  ldrd r2,r1,[r0,#0x8]
  cmp r2,r1
  bcc 0x2c65e8f6
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x24]
  bx r3
  ldr r0,[r2,#0x0]
  bx lr
