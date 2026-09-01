; FUN_100a793c @ 0x100a793c size=18
  ldr r3,[0x100a7950]
  ldr r3,[r3,#0x0]
  cbz r3,0x100a7948
  ldrb.w r0,[r3,#0x27]
  bx lr
  mvn r0,#0x2
  bx lr
