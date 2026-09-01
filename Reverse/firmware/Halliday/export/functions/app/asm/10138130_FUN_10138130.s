; FUN_10138130 @ 0x10138130 size=22
  movs r3,#0x1
  lsl.w r1,r3,r1
  ldaex r3,[r0]
  orrs r3,r1
  stlex r2,r3,[r0]
  cmp r2,#0x0
  bne 0x10138136
  bx lr
