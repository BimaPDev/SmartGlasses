; FUN_140d1852 @ 0x140d1852 size=18
  ldrd r2,r1,[r0,#0x8]
  cmp r2,r1
  bcc 0x140d1860
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x24]
  bx r3
  ldrb r0,[r2,#0x0]
  bx lr
