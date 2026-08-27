; FUN_2c4b74ac @ 0x2c4b74ac size=26
  cmp r0,#0x17
  bhi 0x2c4b74c4
  ldr r1,[0x2c4b74c8]
  movs r2,#0x1
  ldr.w r3,[r1,#0xfc]
  lsl.w r0,r2,r0
  bic.w r0,r3,r0
  str.w r0,[r1,#0xfc]
  bx lr
