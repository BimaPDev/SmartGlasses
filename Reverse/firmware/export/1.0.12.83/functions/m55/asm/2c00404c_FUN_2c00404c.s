; FUN_2c00404c @ 0x2c00404c size=26
  ldr r2,[0x2c004068]
  movs r3,#0x2
  ldr.w r2,[r2,r0,lsl #0x2]
  lsl.w r1,r3,r1
  ldr.w r3,[r2,#0xb0]
  bic.w r1,r3,r1
  str.w r1,[r2,#0xb0]
  bx lr
