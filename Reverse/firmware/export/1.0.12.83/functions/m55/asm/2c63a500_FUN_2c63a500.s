; FUN_2c63a500 @ 0x2c63a500 size=34
  push {r4,lr}
  ldr r0,[0x2c63a544]
  sub sp,#0x18
  ldr r4,[0x2c63a548]
  movs r1,#0x26
  ldr r2,[0x2c63a54c]
  ldr r3,[0x2c63a550]
  strd r0,r4,[sp,#0x0]
  ldr r4,[0x2c63a554]
  movs r0,#0x4
  ldr r4,[r4,#0x0]
  str r4,[sp,#0x14]
  mov.w r4,#0x0
  bl 0x2c673d88
