; FUN_2c46e420 @ 0x2c46e420 size=28
  push {r4,lr}
  ldr r1,[0x2c46e440]
  sub sp,#0x10
  ldr r4,[0x2c46e444]
  ldr r3,[0x2c46e448]
  ldr r2,[0x2c46e44c]
  str r4,[sp,#0x0]
  strd r1,r0,[sp,#0x4]
  mov.w r1,#0x394
  movs r0,#0x4
  bl 0x2c673d88
