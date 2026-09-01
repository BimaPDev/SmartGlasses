; FUN_10120ab0 @ 0x10120ab0 size=30
  movs r3,#0x0
  add.w r1,r0,r1, lsl #0x1
  cmp r0,r1
  bne 0x10120ac4
  eor r0,r3,#0xaa00
  eor r0,r0,#0x55
  bx lr
  ldrh.w r2,[r0],#0x2
  add r3,r2
  uxth r3,r3
  b 0x10120ab6
