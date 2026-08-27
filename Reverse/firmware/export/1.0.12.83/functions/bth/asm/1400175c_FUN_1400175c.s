; FUN_1400175c @ 0x1400175c size=10
  ldr r2,[0x14001768]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x1400175e
  bx lr
