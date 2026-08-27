; FUN_2c48cee4 @ 0x2c48cee4 size=50
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r0,[0x2c48d034]
  sub sp,#0x2c
  ldr r1,[0x2c48d038]
  ldr r4,[0x2c48d03c]
  ldr r3,[0x2c48d040]
  ldr r2,[0x2c48d044]
  str.w lr,[sp,#0x14]
  ldr.w r10,[0x2c48d060]
  ldr.w r9,[0x2c48d064]
  strd r1,r0,[sp,#0x0]
  mov.w r1,#0x10e
  movs r0,#0x4
  ldr r4,[r4,#0x0]
  str r4,[sp,#0x24]
  mov.w r4,#0x0
  bl 0x2c673d88
