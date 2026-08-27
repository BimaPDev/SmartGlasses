; FUN_2c48f380 @ 0x2c48f380 size=40
  push {r4,r5,r6,lr}
  ldr r1,[0x2c48f414]
  sub sp,#0x20
  ldr r5,[0x2c48f418]
  mov r4,r0
  str r0,[sp,#0x8]
  movs r0,#0x4
  ldr r3,[0x2c48f41c]
  ldr r2,[0x2c48f420]
  strd r1,r5,[sp,#0x0]
  ldr r1,[0x2c48f424]
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x1c]
  mov.w r1,#0x0
  movw r1,#0x127
  bl 0x2c673d88
