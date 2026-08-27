; FUN_2c481b2c @ 0x2c481b2c size=34
  push {r4,lr}
  ldr r0,[0x2c481b74]
  sub sp,#0x10
  ldr r4,[0x2c481b78]
  movs r1,#0x10
  ldr r2,[0x2c481b7c]
  ldr r3,[0x2c481b80]
  strd r0,r4,[sp,#0x0]
  ldr r4,[0x2c481b84]
  movs r0,#0x4
  ldr r4,[r4,#0x0]
  str r4,[sp,#0xc]
  mov.w r4,#0x0
  bl 0x2c673d88
