; FUN_10056678 @ 0x10056678 size=38
  sub.w r0,r0,#0x258
  cmp.w r0,#0x320
  bhi 0x1005669c
  movs r1,#0x32
  udiv r0,r0,r1
  ldr r2,[0x100566a0]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0xf00
  orr.w r0,r3,r0, lsl #0x8
  str r0,[r2,#0x0]
  movs r0,#0x21
  b.w 0x1011a866
  bx lr
