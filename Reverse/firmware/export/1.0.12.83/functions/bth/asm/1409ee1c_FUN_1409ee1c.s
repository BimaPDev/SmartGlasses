; FUN_1409ee1c @ 0x1409ee1c size=26
  ldr r3,[0x1409ee38]
  ldr r0,[r3,#0x0]
  cbz r0,0x1409ee2e
  ldr r3,[0x1409ee3c]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x1
  beq 0x1409ee30
  add.w r0,r0,#0x248
  bx lr
  add.w r0,r0,#0x11c
  bx lr
