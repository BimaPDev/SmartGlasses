; FUN_10068fe0 @ 0x10068fe0 size=12
  ldr r3,[0x10068fec]
  ldr r2,[r3,#0xc]
  lsls r2,r2,#0x19
  bmi 0x10068fe2
  str r0,[r3,#0x8]
  bx lr
