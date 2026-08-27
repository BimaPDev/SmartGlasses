; FUN_2c4fcf0c @ 0x2c4fcf0c size=36
  push {r4,lr}
  ldr r0,[0x2c4fcf54]
  sub sp,#0x30
  ldr r4,[0x2c4fcf58]
  mov.w r1,#0x1a8
  ldr r3,[0x2c4fcf5c]
  ldr r2,[0x2c4fcf60]
  strd r0,r4,[sp,#0x0]
  ldr r4,[0x2c4fcf64]
  movs r0,#0x4
  ldr r4,[r4,#0x0]
  str r4,[sp,#0x2c]
  mov.w r4,#0x0
  bl 0x2c673d88
