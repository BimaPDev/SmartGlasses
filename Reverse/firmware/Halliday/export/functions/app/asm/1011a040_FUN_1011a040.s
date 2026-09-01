; FUN_1011a040 @ 0x1011a040 size=26
  ldr r0,[r0,#0x8]
  adds r1,#0x1
  cmp.w r0,#0x8000
  ite cs
  mov.cs r0,#0x2
  mov.cc r0,#0x1
  subs r0,r1,r0
  clz r0,r0
  rsb.w r0,r0,#0x1f
  bx lr
