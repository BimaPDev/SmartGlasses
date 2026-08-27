; FUN_2c5247b0 @ 0x2c5247b0 size=42
  push {r4,r5,lr}
  ldr r5,[0x2c524844]
  sub sp,#0x2c
  ldr r4,[0x2c524848]
  mov.w r2,#0x260
  ldrb r1,[r5,#0x0]
  movs r0,#0x4
  ldr r3,[0x2c52484c]
  str r1,[sp,#0x8]
  ldr r1,[0x2c524850]
  strd r3,r4,[sp,#0x0]
  mov r3,r4
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x24]
  mov.w r1,#0x0
  ldr r1,[0x2c524854]
  bl 0x2c62c82c
