; FUN_1406d7f8 @ 0x1406d7f8 size=34
  mov r1,r0
  ldr r0,[0x1406d800]
  b.w 0x14073b18
  ldr r3,[r0,#0x0]
  cmp r3,r1
  beq 0x14073b26
  cbz r3,0x14073b2a
  ldr r3,[r3,#0x0]
  cmp r1,r3
  bne 0x14073b1e
  movs r0,#0x1
  bx lr
  clz r0,r1
  lsrs r0,r0,#0x5
  bx lr
