; FUN_100bbe14 @ 0x100bbe14 size=14
  cmp r0,#0x3
  itte le
  ldr.le r3,[0x100bbe24]
  ldr.le.w r0,[r3,r0,lsl #0x2]
  mov.gt r0,#0x0
  bx lr
