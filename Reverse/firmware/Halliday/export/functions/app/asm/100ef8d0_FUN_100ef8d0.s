; FUN_100ef8d0 @ 0x100ef8d0 size=18
  ldr r3,[0x100ef8e4]
  ldaex r0,[r3]
  subs r2,r0,#0x1
  stlex r1,r2,[r3]
  cmp r1,#0x0
  bne 0x100ef8d2
  bx lr
