; FUN_2c48ee50 @ 0x2c48ee50 size=12
  cmp r0,#0x2
  bhi 0x2c48ee5c
  ldr r3,[0x2c48ee80]
  ldr.w r0,[r3,r0,lsl #0x2]
  bx lr
