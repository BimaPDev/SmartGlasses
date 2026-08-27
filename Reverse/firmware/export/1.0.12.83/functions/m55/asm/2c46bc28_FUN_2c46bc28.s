; FUN_2c46bc28 @ 0x2c46bc28 size=46
  push {lr}
  sub sp,#0xc
  ldr r3,[0x2c46bc58]
  add.w r1,sp,#0x3
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x2c46bbec
  ldr r3,[0x2c46bc58]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c46bc52
  add sp,#0xc
  pop.w pc
  bl 0x2c674828
