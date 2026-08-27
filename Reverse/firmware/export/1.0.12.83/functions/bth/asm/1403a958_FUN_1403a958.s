; FUN_1403a958 @ 0x1403a958 size=22
  ldr r3,[0x1403a970]
  add.w r0,r0,r0, lsl #0x1
  add.w r0,r3,r0, lsl #0x3
  ldr r3,[r0,#0x4]
  cbz r3,0x1403a96a
  ldrb r0,[r0,#0x1]
  bx lr
  movs r0,#0x1b
  bx lr
