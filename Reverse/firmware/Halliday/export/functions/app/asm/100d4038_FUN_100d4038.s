; FUN_100d4038 @ 0x100d4038 size=16
  ldr r3,[0x100d4048]
  ldr r3,[r3,#0x0]
  cbz r3,0x100d4044
  ldr r3,[r3,#0x4]
  cbz r3,0x100d4044
  bx r3
  movs r0,#0x0
  bx lr
