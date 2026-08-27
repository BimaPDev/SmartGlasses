; FUN_2c48ee0c @ 0x2c48ee0c size=12
  cmp r0,#0x2
  bhi 0x2c48ee18
  ldr r3,[0x2c48ee3c]
  ldr.w r0,[r3,r0,lsl #0x2]
  bx lr
