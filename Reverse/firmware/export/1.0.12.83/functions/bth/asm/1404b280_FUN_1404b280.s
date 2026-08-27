; FUN_1404b280 @ 0x1404b280 size=14
  ldr r3,[0x1404b290]
  ldrb.w r0,[r3,#0xde]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
