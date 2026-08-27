; FUN_2c5af138 @ 0x2c5af138 size=32
  push {r4,r5,lr}
  ldr r2,[0x2c5af180]
  sub sp,#0x14
  ldr r1,[0x2c5af184]
  str r2,[sp,#0x0]
  movs r2,#0x49
  ldr r4,[r0,#0x1c]
  ldrb r5,[r0,#0x9]
  movs r0,#0x4
  ldr r3,[0x2c5af188]
  strd r4,r5,[sp,#0x4]
  subs r5,r4,r5
  ldr r4,[0x2c5af18c]
  bl 0x2c62c82c
