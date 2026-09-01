; FUN_1011ab12 @ 0x1011ab12 size=22
  mov r3,r0
  ldaex r0,[r3]
  and.w r2,r0,r1
  stlex r12,r2,[r3]
  cmp.w r12,#0x0
  bne 0x1011ab14
  bx lr
