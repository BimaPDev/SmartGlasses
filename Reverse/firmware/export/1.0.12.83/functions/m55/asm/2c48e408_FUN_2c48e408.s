; FUN_2c48e408 @ 0x2c48e408 size=28
  cmp r1,#0x0
  blt 0x2c48e420
  cbz r0,0x2c48e422
  ldr r0,[r0,#0x8]
  cbz r1,0x2c48e422
  cbz r0,0x2c48e422
  ldr r0,[r0,#0x0]
  subs r1,#0x1
  cbz r0,0x2c48e422
  cmp r1,#0x0
  bne 0x2c48e414
  bx lr
  movs r0,#0x0
  bx lr
