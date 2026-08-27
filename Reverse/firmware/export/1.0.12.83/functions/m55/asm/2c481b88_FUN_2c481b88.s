; FUN_2c481b88 @ 0x2c481b88 size=34
  push {r4,lr}
  ldr r0,[0x2c481bcc]
  sub sp,#0x10
  ldr r4,[0x2c481bd0]
  movs r1,#0x18
  ldr r3,[0x2c481bd4]
  ldr r2,[0x2c481bd8]
  strd r0,r4,[sp,#0x0]
  ldr r4,[0x2c481bdc]
  movs r0,#0x4
  ldr r4,[r4,#0x0]
  str r4,[sp,#0xc]
  mov.w r4,#0x0
  bl 0x2c673d88
