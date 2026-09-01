; FUN_10056648 @ 0x10056648 size=42
  movw r3,#0x2ee
  subw r0,r0,#0x226
  cmp r0,r3
  bhi 0x10056670
  movs r3,#0x32
  udiv r3,r0,r3
  ldr r2,[0x10056674]
  ldr r0,[r2,#0x0]
  bic r0,r0,#0xff
  orrs r0,r3
  orr.w r0,r0,r3, lsl #0x4
  str r0,[r2,#0x0]
  movs r0,#0x21
  b.w 0x1011a866
  bx lr
