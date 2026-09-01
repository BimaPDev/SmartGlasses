; FUN_10119ff8 @ 0x10119ff8 size=22
  ldr r3,[r0,#0x8]
  add.w r1,r0,r1, lsl #0x3
  cmp.w r3,#0x8000
  ite cs
  ldr.cs.w r0,[r1,r2,lsl #0x2]
  ldrh.cc.w r0,[r1,r2,lsl #0x1]
  bx lr
