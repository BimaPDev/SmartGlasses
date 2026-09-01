; FUN_10139378 @ 0x10139378 size=18
  ldrb r3,[r0,#0x18]
  cbz r3,0x10139386
  ldrb r3,[r0,#0x1a]
  adds r3,#0x4
  ldr.w r0,[r0,r3,lsl #0x2]
  bx lr
  mov r0,r3
  bx lr
