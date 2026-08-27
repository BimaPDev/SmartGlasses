; FUN_2c62ee64 @ 0x2c62ee64 size=18
  cmp r0,#0x12
  bhi 0x2c62ee70
  ldr r3,[0x2c62ee78]
  ldr.w r0,[r3,r0,lsl #0x2]
  bx lr
  mov.w r0,#0xff000000
  bx lr
