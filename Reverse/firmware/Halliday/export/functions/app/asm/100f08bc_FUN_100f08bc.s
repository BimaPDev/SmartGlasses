; FUN_100f08bc @ 0x100f08bc size=20
  mvns r0,r0
  ldr r3,[0x100f08d0]
  ldaex r2,[r3]
  ands r2,r0
  stlex r1,r2,[r3]
  cmp r1,#0x0
  bne 0x100f08c0
  bx lr
