; FUN_140df568 @ 0x140df568 size=18
  mov r2,r0
  mov r3,r2
  adds r2,#0x4
  ldr r1,[r3,#0x0]
  cmp r1,#0x0
  bne 0x140df56a
  subs r0,r3,r0
  asrs r0,r0,#0x2
  bx lr
