; FUN_1012fe28 @ 0x1012fe28 size=16
  cmp r1,#0x3
  itte le
  strb.le.w r1,[r0,#0xc9]
  mov.le r0,#0x0
  mvn.gt r0,#0x15
  bx lr
