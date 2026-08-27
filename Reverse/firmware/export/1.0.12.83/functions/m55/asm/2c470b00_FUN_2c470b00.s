; FUN_2c470b00 @ 0x2c470b00 size=28
  push {r4,lr}
  ldr r1,[0x2c470b34]
  sub sp,#0x10
  ldr r4,[0x2c470b38]
  ldr r3,[0x2c470b3c]
  ldr r2,[0x2c470b40]
  str r4,[sp,#0x0]
  strd r1,r0,[sp,#0x4]
  movw r1,#0x55b
  movs r0,#0x4
  bl 0x2c673d88
