; FUN_2c4829f4 @ 0x2c4829f4 size=40
  push {r4,r5,lr}
  sub sp,#0x14
  ldr r5,[0x2c482a6c]
  bl 0x2c642fb0
  mov r4,r0
  bl 0x2c48a85c
  ldr r2,[0x2c482a70]
  ldr r3,[0x2c482a74]
  movs r1,#0xa4
  str r2,[sp,#0x4]
  str r5,[sp,#0x0]
  movs r5,#0x64
  ldr r2,[0x2c482a78]
  strd r0,r4,[sp,#0x8]
  movs r0,#0x4
  bl 0x2c673d88
