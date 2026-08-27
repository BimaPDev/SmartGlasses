; FUN_2c48f2d4 @ 0x2c48f2d4 size=40
  push {r4,r5,r6,lr}
  ldr r1,[0x2c48f364]
  sub sp,#0x20
  ldr r5,[0x2c48f368]
  mov r4,r0
  str r0,[sp,#0x8]
  movs r0,#0x4
  ldr r3,[0x2c48f36c]
  ldr r2,[0x2c48f370]
  strd r1,r5,[sp,#0x0]
  ldr r1,[0x2c48f374]
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x1c]
  mov.w r1,#0x0
  mov.w r1,#0x10c
  bl 0x2c673d88
