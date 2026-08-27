; FUN_2c62eea0 @ 0x2c62eea0 size=30
  cmp r0,#0x12
  bhi 0x2c62eeb8
  subs r1,#0x1
  uxtb r1,r1
  cmp r1,#0x3
  bhi 0x2c62eeb8
  ldr r3,[0x2c62eec0]
  add.w r1,r1,r0, lsl #0x2
  ldr.w r0,[r3,r1,lsl #0x2]
  bx lr
  mov.w r0,#0xff000000
  bx lr
