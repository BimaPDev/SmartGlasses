; FUN_10119e76 @ 0x10119e76 size=20
  ldr r3,[r0,#0x8]
  adds r1,#0x7
  cmp.w r3,#0x8000
  ite cs
  mov.cs r0,#0x8
  mov.cc r0,#0x4
  add r0,r1
  lsrs r0,r0,#0x3
  bx lr
