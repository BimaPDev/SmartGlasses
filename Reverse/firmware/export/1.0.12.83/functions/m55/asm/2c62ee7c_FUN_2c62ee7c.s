; FUN_2c62ee7c @ 0x2c62ee7c size=32
  cmp r0,#0x12
  bhi 0x2c62ee96
  subs r1,#0x1
  uxtb r1,r1
  cmp r1,#0x4
  bhi 0x2c62ee96
  add.w r0,r0,r0, lsl #0x2
  ldr r3,[0x2c62ee9c]
  add r1,r0
  ldr.w r0,[r3,r1,lsl #0x2]
  bx lr
  mov.w r0,#0xff000000
  bx lr
