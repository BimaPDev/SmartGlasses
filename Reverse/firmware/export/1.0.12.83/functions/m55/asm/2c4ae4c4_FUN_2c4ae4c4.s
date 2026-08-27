; FUN_2c4ae4c4 @ 0x2c4ae4c4 size=16
  cmp r0,#0x2c
  bhi 0x2c4ae4d0
  ldr r3,[0x2c4ae4d4]
  ldr.w r0,[r3,r0,lsl #0x2]
  bx lr
  movs r0,#0x0
  bx lr
