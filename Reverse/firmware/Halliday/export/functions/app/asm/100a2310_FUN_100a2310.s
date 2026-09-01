; FUN_100a2310 @ 0x100a2310 size=16
  ldr r3,[0x100a2320]
  ldr r3,[r3,#0x0]
  cbz r3,0x100a231e
  ldrb r2,[r3,#0x10]
  orr r2,r2,#0x2
  strb r2,[r3,#0x10]
  bx lr
