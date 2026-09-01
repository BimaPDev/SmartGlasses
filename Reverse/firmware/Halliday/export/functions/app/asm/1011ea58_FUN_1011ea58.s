; FUN_1011ea58 @ 0x1011ea58 size=24
  ldrh r3,[r0,#0xa]
  ldrh r2,[r0,#0x0]
  ldrh r0,[r0,#0x4]
  cmp r2,r0
  itet ls
  add.ls r3,r3,r2
  add.hi.w r3,r2,#0xffffffff
  add.ls.w r3,r3,#0xffffffff
  subs r0,r3,r0
  bx lr
