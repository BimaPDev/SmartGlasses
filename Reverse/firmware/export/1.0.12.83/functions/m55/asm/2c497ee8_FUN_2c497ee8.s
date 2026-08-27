; FUN_2c497ee8 @ 0x2c497ee8 size=74
  push {lr}
  sub sp,#0xc
  ldr.w r12,[0x2c497f34]
  movs r3,#0x3
  movs r1,#0x9f
  mov r2,sp
  ldr.w r12,[r12,#0x0]
  str.w r12,[sp,#0x4]
  mov.w r12,#0x0
  bl 0x2c497684
  ldrb.w r0,[sp,#0x1]
  ldrb.w r2,[sp,#0x0]
  lsls r0,r0,#0x8
  ldrb.w r3,[sp,#0x2]
  orr.w r0,r0,r2, lsl #0x10
  orrs r0,r3
  ldr r3,[0x2c497f34]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c497f2e
  add sp,#0xc
  pop.w pc
  bl 0x2c674828
