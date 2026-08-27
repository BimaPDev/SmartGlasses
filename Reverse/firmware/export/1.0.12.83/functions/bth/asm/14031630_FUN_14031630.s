; FUN_14031630 @ 0x14031630 size=18
  ldr r3,[0x14031644]
  ldrb r2,[r3,#0x0]
  cbnz r2,0x14031638
  bx lr
  movs r1,#0x0
  mov r0,r1
  strb r1,[r3,#0x0]
  b.w 0x14026974
