; FUN_2c4b7490 @ 0x2c4b7490 size=24
  cmp r0,#0x17
  bhi 0x2c4b74a6
  ldr r2,[0x2c4b74a8]
  movs r3,#0x1
  ldr.w r1,[r2,#0xfc]
  lsl.w r0,r3,r0
  orrs r0,r1
  str.w r0,[r2,#0xfc]
  bx lr
