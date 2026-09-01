; FUN_1012a43c @ 0x1012a43c size=40
  ldr r3,[r2,#0x0]
  cbz r1,0x1012a456
  subs r3,#0x1
  cmp r3,#0x0
  str r3,[r2,#0x0]
  bge 0x1012a44c
  movs r0,#0x0
  bx lr
  ldr r2,[r0,#0x0]
  ldr r2,[r2,#0x0]
  ldr.w r0,[r2,r3,lsl #0x2]
  bx lr
  adds r3,#0x1
  str r3,[r2,#0x0]
  ldr r2,[r0,#0x0]
  ldr r1,[r2,#0x4]
  cmp r3,r1
  blt 0x1012a44e
  b 0x1012a448
