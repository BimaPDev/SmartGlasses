; FUN_1409edf8 @ 0x1409edf8 size=26
  ldr r3,[0x1409ee14]
  ldr r0,[r3,#0x0]
  cbz r0,0x1409ee0a
  ldr r3,[0x1409ee18]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x1
  beq 0x1409ee0c
  add.w r0,r0,#0x238
  bx lr
  add.w r0,r0,#0x10c
  bx lr
