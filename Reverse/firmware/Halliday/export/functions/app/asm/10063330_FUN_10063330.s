; FUN_10063330 @ 0x10063330 size=30
  movs r3,#0x0
  ldr r2,[0x10063350]
  add.w r1,r2,r3, lsl #0x1
  ldrb r1,[r1,#0x1]
  cmp r1,r0
  bne 0x10063344
  ldrb.w r0,[r2,r3,lsl #0x1]
  bx lr
  adds r3,#0x1
  cmp r3,#0x27
  bne 0x10063334
  movs r0,#0x0
  bx lr
