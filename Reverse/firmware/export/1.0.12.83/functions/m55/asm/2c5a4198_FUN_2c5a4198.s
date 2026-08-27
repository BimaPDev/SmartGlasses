; FUN_2c5a4198 @ 0x2c5a4198 size=32
  push {r4,r5,lr}
  ldr r2,[0x2c5a41cc]
  sub sp,#0x14
  mov r4,r1
  ldr r5,[0x2c5a41d0]
  ldr r3,[0x2c5a41d4]
  mov.w r1,#0x1ee
  str r4,[sp,#0x8]
  strd r2,r5,[sp,#0x0]
  mov r5,r0
  ldr r2,[0x2c5a41d8]
  movs r0,#0x4
  bl 0x2c673d88
