; FUN_2c5f9d70 @ 0x2c5f9d70 size=24
  cbz r0,0x2c5f9d84
  ldrh r3,[r0,#0x34]
  cmp r3,#0x17
  bls 0x2c5f9d7c
  ldr r0,[0x2c5f9d88]
  bx lr
  ldr r2,[0x2c5f9d8c]
  ldr.w r0,[r2,r3,lsl #0x2]
  bx lr
  ldr r0,[0x2c5f9d90]
  bx lr
