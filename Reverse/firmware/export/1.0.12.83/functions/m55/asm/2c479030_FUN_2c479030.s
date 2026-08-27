; FUN_2c479030 @ 0x2c479030 size=32
  push {r4,r5,lr}
  ldr r4,[0x2c479094]
  sub sp,#0x14
  ldr r2,[0x2c479098]
  ldr r1,[r4,#0x0]
  ldr r5,[0x2c47909c]
  str r0,[sp,#0xc]
  movs r0,#0x4
  str r2,[sp,#0x0]
  ldr r3,[0x2c4790a0]
  ldr r2,[0x2c4790a4]
  strd r5,r1,[sp,#0x4]
  movs r1,#0xc9
  bl 0x2c673d88
