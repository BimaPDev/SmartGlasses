; FUN_10062fe4 @ 0x10062fe4 size=14
  cmp r0,#0xc
  itte ls
  ldr.ls r3,[0x10062ff4]
  ldr.ls.w r0,[r3,r0,lsl #0x2]
  ldr.hi r0,[0x10062ff8]
  bx lr
