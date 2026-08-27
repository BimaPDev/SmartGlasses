; FUN_1408c4e0 @ 0x1408c4e0 size=32
  push {r4,r5,r6,lr}
  mov r4,r1
  mov r6,lr
  ldrh r3,[r4,#0x12]
  sub sp,#0x10
  str r3,[sp,#0x0]
  str.w lr,[sp,#0x8]
  ldrh r3,[r4,#0x14]
  mov r2,r0
  str r3,[sp,#0x4]
  ldr r1,[0x1408c594]
  movs r0,#0x45
  ldr r3,[r4,#0xc]
  bl 0x1402a64c
