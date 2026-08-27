; FUN_2c4be68e @ 0x2c4be68e size=34
  push {r4,r5,lr}
  ldr r4,[0x2c4be6ec]
  sub sp,#0x1c
  ldr r0,[r1,#0x8]
  str r4,[sp,#0x4]
  str r0,[sp,#0x10]
  ldrd r0,r5,[r1,#0x0]
  ldr r1,[0x2c4be6f0]
  str r5,[sp,#0xc]
  str r0,[sp,#0x8]
  movs r0,#0x4
  str r1,[sp,#0x0]
  movw r1,#0x33f
  bl 0x2c673d88
