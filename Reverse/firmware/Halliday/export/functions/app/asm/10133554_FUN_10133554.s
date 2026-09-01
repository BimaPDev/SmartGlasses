; FUN_10133554 @ 0x10133554 size=24
  movs r3,#0x1
  lsl.w r1,r3,r1
  mvns r1,r1
  ldaex r3,[r0]
  ands r3,r1
  stlex r2,r3,[r0]
  cmp r2,#0x0
  bne 0x1013355c
  bx lr
