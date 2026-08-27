; FUN_2c485c78 @ 0x2c485c78 size=30
  push {r4,r5,lr}
  ldr r1,[0x2c485cec]
  sub sp,#0x14
  mov r4,r0
  ldr r5,[0x2c485cf0]
  ldr r3,[0x2c485cf4]
  movs r0,#0x4
  ldr r2,[0x2c485cf8]
  str r4,[sp,#0x8]
  strd r1,r5,[sp,#0x0]
  mov.w r1,#0x1c6
  bl 0x2c673d88
