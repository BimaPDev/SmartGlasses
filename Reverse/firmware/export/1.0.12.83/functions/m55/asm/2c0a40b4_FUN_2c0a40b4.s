; FUN_2c0a40b4 @ 0x2c0a40b4 size=36
  push {r2,r4,r6,lr}
  asrs r2,r6,#0x10
  lsrs r6,r6,#0x12
  asrs r2,r2,#0x18
  lsls r3,r2,#0x14
  ands r4,sp,#0x22002200
  adds r1,#0x0
  vsubl.u16 q14,d10,d18
  cmp r0,#0xf4
  add r5,sp,#0x8
  cmp r6,#0x3
  asrs r4,r4,#0xc
  adds r4,r0,#0x1
  str r0,[r4,#0x5c]
  b.w 0x2ca70654
