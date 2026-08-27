; FUN_14051938 @ 0x14051938 size=16
  ldr r3,[0x14051948]
  ldrb.w r0,[r3,#0x123]
  cmp r0,#0xff
  it eq
  ldrb.eq.w r0,[r3,#0x121]
  bx lr
