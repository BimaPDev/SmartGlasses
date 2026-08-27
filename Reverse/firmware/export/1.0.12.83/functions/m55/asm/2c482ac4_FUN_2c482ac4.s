; FUN_2c482ac4 @ 0x2c482ac4 size=32
  push {r4,r5,r6,lr}
  ldr r2,[0x2c482b84]
  sub sp,#0x10
  ldr r6,[0x2c482b88]
  mov r4,r0
  ldr r3,[0x2c482b8c]
  mov r5,r1
  str r2,[sp,#0x0]
  str r6,[sp,#0x4]
  ldr r2,[0x2c482b90]
  strd r0,r1,[sp,#0x8]
  movs r1,#0x3a
  movs r0,#0x4
  bl 0x2c673d88
