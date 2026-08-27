; FUN_2c48cbe8 @ 0x2c48cbe8 size=34
  push {r4,r5,lr}
  ldr r5,[0x2c48cc28]
  sub sp,#0x14
  ldr r3,[0x2c48cc2c]
  mov r4,r0
  ldrb r1,[r5,#0x0]
  ldr r2,[0x2c48cc30]
  str r3,[sp,#0x4]
  str r2,[sp,#0x0]
  ldr r3,[0x2c48cc34]
  ldr r2,[0x2c48cc38]
  strd r0,r1,[sp,#0x8]
  movs r1,#0x91
  movs r0,#0x4
  bl 0x2c673d88
