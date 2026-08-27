; FUN_2c6271f8 @ 0x2c6271f8 size=46
  ldr r3,[r2,#0x0]
  cbz r1,0x2c62720e
  subs r3,#0x1
  cmp r3,#0x0
  str r3,[r2,#0x0]
  blt 0x2c627222
  ldr r2,[r0,#0x8]
  ldr r2,[r2,#0x0]
  ldr.w r0,[r2,r3,lsl #0x2]
  bx lr
  adds r3,#0x1
  str r3,[r2,#0x0]
  ldr r2,[r0,#0x8]
  ldr r1,[r2,#0x4]
  cmp r3,r1
  bge 0x2c627222
  ldr r2,[r2,#0x0]
  ldr.w r0,[r2,r3,lsl #0x2]
  bx lr
  movs r0,#0x0
  bx lr
