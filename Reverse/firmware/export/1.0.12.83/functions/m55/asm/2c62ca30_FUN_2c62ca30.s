; FUN_2c62ca30 @ 0x2c62ca30 size=26
  cbz r0,0x2c62ca48
  ldr r3,[r0,#0x4]
  cbz r3,0x2c62ca46
  ldr r2,[r0,#0x0]
  movs r0,#0x0
  adds r2,#0x4
  ldr r3,[r3,r2]
  adds r0,#0x1
  cmp r3,#0x0
  bne 0x2c62ca3c
  bx lr
  mov r0,r3
  bx lr
