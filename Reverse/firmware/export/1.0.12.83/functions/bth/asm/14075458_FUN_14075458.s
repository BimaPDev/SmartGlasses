; FUN_14075458 @ 0x14075458 size=16
  ldrh r2,[r0,#0x8]
  ldrh r3,[r0,#0xa]
  add r1,r2
  add r3,r2
  adds r3,#0x10
  strh r1,[r0,#0x8]
  add r0,r3
  bx lr
