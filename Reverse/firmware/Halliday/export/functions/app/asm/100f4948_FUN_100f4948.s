; FUN_100f4948 @ 0x100f4948 size=18
  ldr r3,[0x100f495c]
  ldr r2,[r3,#0x4]
  strh r0,[r3,#0x0]
  strh r1,[r3,#0x2]
  cbz r2,0x100f4958
  ldr r2,[r2,#0x0]
  ldr r0,[r3,#0x8]
  bx r2
  bx lr
