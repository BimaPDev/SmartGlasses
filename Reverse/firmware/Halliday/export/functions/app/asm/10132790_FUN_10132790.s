; FUN_10132790 @ 0x10132790 size=16
  ldrh r3,[r0,#0x4]
  ldrh r2,[r0,#0x6]
  subs r2,r2,r3
  ldr r3,[r0,#0x0]
  ldr r0,[r0,#0x8]
  subs r0,r3,r0
  subs r0,r2,r0
  bx lr
