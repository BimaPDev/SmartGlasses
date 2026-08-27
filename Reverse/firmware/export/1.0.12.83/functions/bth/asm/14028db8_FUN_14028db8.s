; FUN_14028db8 @ 0x14028db8 size=18
  mov r3,r0
  cmp r0,#0x3
  ittte ls
  ldr.ls r2,[0x14028dcc]
  mov.ls r0,#0x0
  str.ls.w r1,[r2,r3,lsl #0x2]
  mov.hi r0,#0x1
  bx lr
