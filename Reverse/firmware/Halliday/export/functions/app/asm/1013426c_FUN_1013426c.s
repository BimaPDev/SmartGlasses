; FUN_1013426c @ 0x1013426c size=32
  ldr r0,[r0,#0x54]
  cbz r0,0x1013428a
  subs r0,#0x8
  cbnz r0,0x10134276
  bx lr
  ldrh.w r3,[r0,#0x50]
  cmp r3,r1
  beq 0x1013428a
  adds.w r3,r0,#0x8
  beq 0x10134288
  ldr r0,[r0,#0x8]
  b 0x1013426e
  mov r0,r3
  bx lr
