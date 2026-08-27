; FUN_2c5af0d4 @ 0x2c5af0d4 size=32
  push {r4,r5,lr}
  ldr r2,[0x2c5af120]
  sub sp,#0x14
  ldr r1,[0x2c5af124]
  str r2,[sp,#0x0]
  movs r2,#0x36
  ldr r4,[r0,#0x4]
  ldr r5,[r0,#0x1c]
  movs r0,#0x4
  ldr r3,[0x2c5af128]
  strd r4,r5,[sp,#0x4]
  subs r5,r4,r5
  ldr r4,[0x2c5af12c]
  bl 0x2c62c82c
