; FUN_1406f8dc @ 0x1406f8dc size=22
  ldr r3,[0x1406f8f4]
  ldr r3,[r3,#0x10]
  cbnz r3,0x1406f8e8
  b 0x1406f8ee
  ldr r3,[r3,#0x0]
  cbz r3,0x1406f8ee
  ldrh r2,[r3,#0xa]
  cmp r2,r0
  bne 0x1406f8e4
  mov r0,r3
  bx lr
