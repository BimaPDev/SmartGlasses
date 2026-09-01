; FUN_1013b5f0 @ 0x1013b5f0 size=20
  movs r3,#0x0
  str r3,[r0,#0x40]
  ldr.w r3,[r0,#0xc4]
  cbz r3,0x1013b600
  adds r0,#0xb4
  b.w 0x1010c720
  mov r0,r3
  bx lr
