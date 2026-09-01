; FUN_10133e7c @ 0x10133e7c size=20
  mov r3,r0
  ldaex r0,[r3]
  adds r2,r0,r1
  stlex r12,r2,[r3]
  cmp.w r12,#0x0
  bne 0x10133e7e
  bx lr
