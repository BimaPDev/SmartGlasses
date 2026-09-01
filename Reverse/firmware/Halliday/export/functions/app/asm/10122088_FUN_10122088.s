; FUN_10122088 @ 0x10122088 size=28
  movs r3,#0x0
  add.w r1,r0,r1, lsl #0x2
  cmp r0,r1
  bne 0x1012209c
  eor r0,r3,#0xaa00
  eor r0,r0,#0x55
  bx lr
  ldr.w r2,[r0],#0x4
  add r3,r2
  b 0x1012208e
