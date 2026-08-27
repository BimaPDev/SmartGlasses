; FUN_140b9c98 @ 0x140b9c98 size=14
  ldrh r3,[r0,#0x36]
  ldrh.w r0,[r0,#0x44]
  lsls r3,r3,#0x1
  subs r3,#0x1
  ands r0,r3
  bx lr
