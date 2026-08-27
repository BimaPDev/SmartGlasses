; FUN_1405c2b0 @ 0x1405c2b0 size=24
  cmp r0,#0x1
  bhi 0x1405c2c2
  ldr r3,[0x1405c2c8]
  ldr.w r3,[r3,r0,lsl #0x2]
  cbz r3,0x1405c2c2
  ldrh.w r0,[r3,#0x40]
  bx lr
  movw r0,#0xffff
  bx lr
