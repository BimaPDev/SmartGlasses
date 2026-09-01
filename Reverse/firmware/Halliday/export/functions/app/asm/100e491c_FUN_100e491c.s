; FUN_100e491c @ 0x100e491c size=32
  cbz r1,0x100e4936
  ldr r2,[0x100e493c]
  str r2,[r1,#0x4]
  mov.w r2,#0x2a0
  strh.w r2,[r1,#0x52]
  movs r2,#0x2
  strb.w r2,[r1,#0x49]
  movs r2,#0x17
  b.w 0x100cbb84
  mvn r0,#0x15
  bx lr
