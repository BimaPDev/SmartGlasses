; FUN_2c0139f4 @ 0x2c0139f4 size=28
  push {r3,lr}
  bl 0x2c0138e0
  ldr r2,[0x2c013a10]
  ldr r1,[r2,#0x50]
  ldr r3,[r2,#0x50]
  subs r3,r3,r1
  cmp.w r3,#0x1e0
  bcc 0x2c0139fe
  pop.w {r3,lr}
  b.w 0x2c01393c
