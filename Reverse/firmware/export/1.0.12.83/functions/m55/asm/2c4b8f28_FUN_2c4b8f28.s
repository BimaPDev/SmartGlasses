; FUN_2c4b8f28 @ 0x2c4b8f28 size=34
  push {r4,r5,r6,lr}
  ldr r4,[0x2c4b90f0]
  sub sp,#0x18
  ldr r2,[0x2c4b90f4]
  mov r5,r1
  str r4,[sp,#0x0]
  movw r1,#0x1376
  ldr r4,[0x2c4b90f8]
  ldr r3,[0x2c4b90fc]
  str r5,[sp,#0xc]
  strd r2,r0,[sp,#0x4]
  ldr r2,[0x2c4b9100]
  movs r0,#0x4
  bl 0x2c673d88
