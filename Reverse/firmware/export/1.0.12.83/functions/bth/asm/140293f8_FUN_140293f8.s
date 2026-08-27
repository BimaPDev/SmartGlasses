; FUN_140293f8 @ 0x140293f8 size=20
  ldr r3,[0x1402940c]
  ldr r2,[r3,#0x30]
  orr r2,r2,#0x1
  str r2,[r3,#0x30]
  ldr r2,[r3,#0x0]
  orr r2,r2,#0x23
  str r2,[r3,#0x0]
  bx lr
