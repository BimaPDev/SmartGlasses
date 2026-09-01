; FUN_10056814 @ 0x10056814 size=10
  ldr r2,[0x10056820]
  ldr r3,[r2,#0x0]
  lsls r3,r3,#0x1f
  bmi 0x10056816
  bx lr
