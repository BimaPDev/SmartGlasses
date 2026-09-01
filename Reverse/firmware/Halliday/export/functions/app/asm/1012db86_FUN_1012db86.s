; FUN_1012db86 @ 0x1012db86 size=18
  mov r3,r0
  movs r0,#0x0
  ldrb r2,[r3,r0]
  cbz r2,0x1012db92
  cmp r0,r1
  bne 0x1012db94
  bx lr
  adds r0,#0x1
  b 0x1012db8a
