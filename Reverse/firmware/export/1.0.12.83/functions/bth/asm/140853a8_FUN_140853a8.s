; FUN_140853a8 @ 0x140853a8 size=14
  cmp r0,#0x6
  itte ls
  ldr.ls r3,[0x140853b8]
  ldr.ls.w r0,[r3,r0,lsl #0x2]
  ldr.hi r0,[0x140853bc]
  bx lr
