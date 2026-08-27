; FUN_2c4f82c8 @ 0x2c4f82c8 size=40
  push {r2,r4,lr}
  subs r4,#0x13
  ldr r5,[r6,#0x54]
  subs r5,#0x68
  ldr r4,[r6,#0x54]
  subs r5,#0x68
  push {r4,r5,r6,lr}
  ldr r0,[0x2c4f83dc]
  sub sp,#0x8
  ldr r4,[0x2c4f83e0]
  movw r1,#0x7f2
  ldr r5,[0x2c4f83e4]
  ldr r3,[0x2c4f83e8]
  ldr r2,[0x2c4f83ec]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
