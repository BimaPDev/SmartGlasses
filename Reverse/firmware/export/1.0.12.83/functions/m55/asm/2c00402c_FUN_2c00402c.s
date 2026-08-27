; FUN_2c00402c @ 0x2c00402c size=26
  ldr r2,[0x2c004048]
  movs r3,#0x2
  ldr.w r2,[r2,r0,lsl #0x2]
  lsls r3,r1
  ldr.w r1,[r2,#0xb0]
  orrs r3,r1
  orr r3,r3,#0x1
  str.w r3,[r2,#0xb0]
  bx lr
