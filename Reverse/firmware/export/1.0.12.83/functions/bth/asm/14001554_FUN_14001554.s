; FUN_14001554 @ 0x14001554 size=20
  ldr r3,[0x14001568]
  ldr r0,[r3,#0xc]
  ands r0,r0,#0x1
  bne 0x14001556
  ldr r2,[r3,#0x4]
  orr r2,r2,#0x2000000
  str r2,[r3,#0x4]
  bx lr
