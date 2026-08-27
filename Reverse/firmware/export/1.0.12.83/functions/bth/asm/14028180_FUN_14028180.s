; FUN_14028180 @ 0x14028180 size=14
  cmp r0,#0x27
  itte ls
  ldr.ls r3,[0x14028190]
  ldr.ls.w r0,[r3,r0,lsl #0x2]
  mov.hi r0,#0x0
  bx lr
