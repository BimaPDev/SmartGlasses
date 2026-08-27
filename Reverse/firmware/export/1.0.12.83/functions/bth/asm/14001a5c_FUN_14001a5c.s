; FUN_14001a5c @ 0x14001a5c size=26
  ldr r2,[0x14001a78]
  ldr r0,[r2,#0x34]
  ands r0,r0,#0x100
  bne 0x14001a74
  ldr r3,[r2,#0x34]
  orr r3,r3,#0x100
  str r3,[r2,#0x34]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x14001a6e
  bx lr
