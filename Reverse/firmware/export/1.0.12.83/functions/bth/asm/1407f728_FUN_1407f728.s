; FUN_1407f728 @ 0x1407f728 size=14
  cmp r0,#0x7
  itte ls
  ldr.ls r3,[0x1407f738]
  ldr.ls.w r0,[r3,r0,lsl #0x2]
  ldr.hi r0,[0x1407f73c]
  bx lr
