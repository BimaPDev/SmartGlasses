; FUN_1404a510 @ 0x1404a510 size=28
  movs r2,#0x0
  ldr r3,[0x1404a52c]
  movs r1,#0x20
  ldrb.w r3,[r3,#0x45]
  ldr r0,[0x1404a530]
  cmp r3,r2
  ite ne
  mov.ne r3,#0x31
  mov.eq r3,#0x30
  strb r1,[r0,#0x1]
  strb r2,[r0,#0x2]
  strb r3,[r0,#0x0]
  bx lr
