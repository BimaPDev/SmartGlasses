; FUN_1409f470 @ 0x1409f470 size=32
  ldr r3,[0x1409f490]
  ldr r3,[r3,#0x0]
  ldr.w r12,[r3,#0xa]
  ldr.w r1,[r3,#0xe]
  ldr.w r2,[r3,#0x12]
  ldr.w r3,[r3,#0x16]
  str.w r12,[r0,#0x0]
  str r1,[r0,#0x4]
  str r2,[r0,#0x8]
  str r3,[r0,#0xc]
  bx lr
