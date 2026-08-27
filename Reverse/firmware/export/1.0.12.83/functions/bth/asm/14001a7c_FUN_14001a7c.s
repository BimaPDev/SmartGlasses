; FUN_14001a7c @ 0x14001a7c size=20
  cbnz r1,0x14001a8e
  ldr r2,[0x14001a90]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x14001a80
  ldr r3,[r2,#0x34]
  bic r3,r3,#0x100
  str r3,[r2,#0x34]
  bx lr
