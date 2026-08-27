; FUN_1406d034 @ 0x1406d034 size=28
  ldr r3,[0x1406d050]
  adds r0,#0x22
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x1406d04e
  ldr r0,[r0,#0x28]
  cbnz r0,0x1406d048
  b 0x1406d04e
  ldr r0,[r0,#0x0]
  cbz r0,0x1406d04e
  ldrh r3,[r0,#0x14]
  cmp r3,r1
  bne 0x1406d044
  bx lr
