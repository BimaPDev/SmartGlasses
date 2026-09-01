; FUN_1007a40c @ 0x1007a40c size=32
  ldr r2,[0x1007a42c]
  cbz r0,0x1007a416
  ldrb.w r3,[r2,#0x31]
  cbnz r3,0x1007a42a
  movs r3,#0x0
  ldr r0,[0x1007a42c]
  adds r3,#0x1
  cmp r3,#0x18
  strh r1,[r0],#0x2
  bne 0x1007a41a
  mov.w r3,#0x1800
  strh r3,[r2,#0x30]
  bx lr
