; FUN_2c4f860c @ 0x2c4f860c size=36
  push {r4,r5,lr}
  ldr r5,[0x2c4f8650]
  sub sp,#0x14
  ldr r4,[0x2c4f8654]
  movs r0,#0x4
  ldrsb.w r1,[r5,#0x0]
  ldr r2,[0x2c4f8658]
  str r1,[sp,#0x8]
  ldr r1,[r4,#0x0]
  ldr r3,[0x2c4f865c]
  str r2,[sp,#0x0]
  str r1,[sp,#0x4]
  movw r1,#0x7c3
  ldr r2,[0x2c4f8660]
  bl 0x2c673d88
