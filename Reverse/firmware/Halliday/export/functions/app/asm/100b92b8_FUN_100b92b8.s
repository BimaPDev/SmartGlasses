; FUN_100b92b8 @ 0x100b92b8 size=22
  ldr r3,[0x100b92d0]
  ldr r2,[r3,#0xc]
  ldr r1,[r3,#0x4]
  add r0,r2
  cmp r0,r1
  ittte ls
  str.ls r0,[r3,#0x10]
  str.ls r2,[r3,#0x8]
  mov.ls r0,#0x1
  mov.hi r0,#0x0
  bx lr
