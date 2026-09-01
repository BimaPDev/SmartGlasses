; FUN_1011f642 @ 0x1011f642 size=22
  mov r3,r0
  ldaex r0,[r3]
  orr.w r2,r0,r1
  stlex r12,r2,[r3]
  cmp.w r12,#0x0
  bne 0x1011f644
  bx lr
