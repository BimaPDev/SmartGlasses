; FUN_10121996 @ 0x10121996 size=22
  ldr r3,[r0,#0xc]
  ldrb.w r2,[r3,#0x79]
  cmp r2,r1
  ittte eq
  add.eq.w r2,r3,#0x78
  mov.eq r0,#0x1
  str.eq r2,[r3,#0x74]
  mov.ne r0,#0x0
  bx lr
