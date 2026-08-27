; FUN_2c5a5f28 @ 0x2c5a5f28 size=42
  push {r4,r5,r6,lr}
  sub sp,#0x28
  ldr r5,[0x2c5a61d8]
  mov r4,r2
  ldr r3,[0x2c5a61dc]
  str r5,[sp,#0x0]
  mov r6,r1
  mov r5,r0
  movs r0,#0x4
  strd r1,r2,[sp,#0x4]
  ldr r2,[0x2c5a61e0]
  ldr r1,[0x2c5a61e4]
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x24]
  mov.w r2,#0x0
  movw r2,#0x2d1
  bl 0x2c62c82c
