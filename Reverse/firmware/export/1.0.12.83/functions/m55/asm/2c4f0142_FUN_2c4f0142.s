; FUN_2c4f0142 @ 0x2c4f0142 size=28
  push {r4,lr}
  ldr r4,[0x2c4f0164]
  sub sp,#0x10
  ldr r0,[0x2c4f0168]
  ldr r3,[0x2c4f016c]
  ldr r2,[0x2c4f0170]
  str r0,[sp,#0x0]
  movs r0,#0x4
  strd r4,r1,[sp,#0x4]
  mov.w r1,#0x14a
  bl 0x2c673d88
