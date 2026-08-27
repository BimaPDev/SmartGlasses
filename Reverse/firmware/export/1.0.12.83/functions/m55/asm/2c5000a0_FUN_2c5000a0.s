; FUN_2c5000a0 @ 0x2c5000a0 size=26
  push {r4,r5,lr}
  ldr r3,[0x2c50010c]
  sub sp,#0xc
  ldr r4,[0x2c500110]
  mov.w r2,#0x1ca
  str r3,[sp,#0x4]
  movs r0,#0x4
  ldr r1,[0x2c500114]
  ldr r5,[0x2c500118]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
