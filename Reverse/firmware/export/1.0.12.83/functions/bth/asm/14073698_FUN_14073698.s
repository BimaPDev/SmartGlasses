; FUN_14073698 @ 0x14073698 size=16
  ldrh r3,[r0,#0x6]
  ldrh r1,[r0,#0x4]
  ldrh r2,[r0,#0x8]
  adds r0,r3,r1
  adds r0,#0x34
  add r0,r2
  uxth r0,r0
  bx lr
