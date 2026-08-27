; FUN_2c62a690 @ 0x2c62a690 size=34
  ldrh r3,[r0,#0x4]
  uxth r1,r1
  ldrh.w r12,[r0,#0x0]
  uxth r2,r2
  add r12,r1
  add r1,r3
  ldrh r3,[r0,#0x2]
  strh r1,[r0,#0x4]
  ldrh r1,[r0,#0x6]
  add r3,r2
  strh.w r12,[r0,#0x0]
  add r2,r1
  strh r3,[r0,#0x2]
  strh r2,[r0,#0x6]
  bx lr
