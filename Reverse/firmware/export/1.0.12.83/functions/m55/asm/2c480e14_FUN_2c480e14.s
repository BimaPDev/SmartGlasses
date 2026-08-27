; FUN_2c480e14 @ 0x2c480e14 size=22
  push {r4,r5,lr}
  ldrb r4,[r3,#0x0]
  sub sp,#0x14
  ldr r3,[0x2c480ebc]
  str r1,[sp,#0x0]
  movs r1,#0xa6
  strd r0,r4,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c673d88
