; FUN_1011a902 @ 0x1011a902 size=36
  push {r3,lr}
  bl 0x1005608c
  ldr r3,[r0,#0x4c]
  ldr r2,[r3,#0x18]
  lsls r2,r2,#0x5
  bmi 0x1011a924
  ldr r2,[r3,#0x18]
  mov.w r0,#0x12c
  orr r2,r2,#0x4000000
  str r2,[r3,#0x18]
  pop.w {r3,lr}
  b.w 0x1011a866
  pop {r3,pc}
