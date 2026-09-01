; FUN_100b92f0 @ 0x100b92f0 size=18
  ldr r2,[0x100b9304]
  ldr r3,[r2,#0xc]
  str r3,[r0,#0x0]
  ldr r0,[r2,#0x10]
  cmp r3,r0
  ite cs
  mov.cs r0,#0x0
  mov.cc r0,#0x1
  bx lr
