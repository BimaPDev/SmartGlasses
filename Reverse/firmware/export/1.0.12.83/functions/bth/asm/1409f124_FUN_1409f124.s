; FUN_1409f124 @ 0x1409f124 size=28
  ldr r3,[0x1409f140]
  ldr r0,[r3,#0x0]
  cbz r0,0x1409f13a
  ldr r3,[0x1409f144]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x1
  ite eq
  add.eq r0,#0x10
  add.ne.w r0,r0,#0x13c
  bx lr
  ldr r3,[0x1409f148]
  ldr r0,[r3,#0x0]
  bx lr
