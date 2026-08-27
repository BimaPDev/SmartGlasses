; FUN_2c4a5b54 @ 0x2c4a5b54 size=42
  push {r4,r5,r6,lr}
  movw r1,#0x6db
  sub sp,#0x28
  ldr r0,[0x2c4a5c3c]
  ldr r2,[0x2c4a5c40]
  ldr r5,[0x2c4a5c44]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r3,[0x2c4a5c48]
  strd r5,r1,[sp,#0x4]
  ldr r6,[r2,#0x0]
  ldr r2,[0x2c4a5c4c]
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x24]
  mov.w r2,#0x0
  ldr r2,[0x2c4a5c50]
  bl 0x2c673d88
