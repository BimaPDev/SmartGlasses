; FUN_2c5e9594 @ 0x2c5e9594 size=32
  push {r4,lr}
  ldr r4,[0x2c5e95b8]
  sub sp,#0x10
  ldr r3,[0x2c5e95bc]
  movs r2,#0x7b
  str r4,[sp,#0x0]
  ldrb r4,[r0,#0x10]
  ldr r1,[0x2c5e95c0]
  str r4,[sp,#0xc]
  ldrd r0,r4,[r0,#0x0]
  strd r0,r4,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c62c82c
