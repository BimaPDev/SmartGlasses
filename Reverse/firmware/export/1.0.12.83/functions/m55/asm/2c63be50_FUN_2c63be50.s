; FUN_2c63be50 @ 0x2c63be50 size=32
  push {r4,r5,r6,r7,lr}
  ldr r5,[0x2c63bec0]
  sub sp,#0x14
  ldr r2,[0x2c63bec4]
  mov r4,r0
  ldrb r1,[r5,#0x0]
  ldr r3,[0x2c63bec8]
  str r2,[sp,#0x0]
  ldr r2,[0x2c63becc]
  strd r1,r0,[sp,#0x4]
  movw r1,#0x17b
  movs r0,#0x4
  bl 0x2c673d88
