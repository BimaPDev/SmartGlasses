; FUN_101312a0 @ 0x101312a0 size=22
  ldrb r3,[r0,#0x8]
  and r3,r3,#0x28
  cmp r3,#0x28
  bne 0x101312b4
  movs r2,#0x0
  movs r0,#0xec
  mov r1,r2
  b.w 0x100bb198
  bx lr
