; FUN_1405194c @ 0x1405194c size=16
  ldr r3,[0x1405195c]
  ldrb.w r0,[r3,#0x122]
  cmp r0,#0xff
  it eq
  ldrb.eq.w r0,[r3,#0x120]
  bx lr
