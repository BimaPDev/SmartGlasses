; FUN_1010e9a0 @ 0x1010e9a0 size=30
  cbz r0,0x1010e9ae
  cmp r0,#0x1
  ite eq
  mov.eq.w r0,#0x400
  mov.ne.w r0,#0x800
  ldr r3,[0x1010e9c0]
  lsls r1,r1,#0xc
  str.w r0,[r3,#0x758]
  str.w r1,[r3,#0x75c]
  movs r0,#0x0
  bx lr
