; FUN_101200b0 @ 0x101200b0 size=14
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x8]
  adds r3,#0x4
  ldr r2,[r3,#0x0]
  lsls r2,r2,#0x1f
  bmi 0x101200b6
  bx lr
