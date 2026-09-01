; FUN_1011ddea @ 0x1011ddea size=18
  mov r3,r0
  ldaex r0,[r3]
  adds r2,r0,#0x1
  stlex r1,r2,[r3]
  cmp r1,#0x0
  bne 0x1011ddec
  bx lr
