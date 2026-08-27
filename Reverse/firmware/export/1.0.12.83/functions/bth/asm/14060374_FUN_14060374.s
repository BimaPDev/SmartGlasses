; FUN_14060374 @ 0x14060374 size=14
  ldr r3,[0x14060384]
  ldrb.w r0,[r3,#0xb5]
  mvns r0,r0
  and r0,r0,#0x1
  bx lr
