; FUN_2c48e3f0 @ 0x2c48e3f0 size=22
  cbz r0,0x2c48e404
  ldr r3,[r0,#0x8]
  cbz r3,0x2c48e402
  movs r0,#0x0
  ldr r3,[r3,#0x0]
  adds r0,#0x1
  cmp r3,#0x0
  bne 0x2c48e3f8
  bx lr
  mov r0,r3
  bx lr
