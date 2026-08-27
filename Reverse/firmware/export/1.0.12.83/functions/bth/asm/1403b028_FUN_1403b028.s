; FUN_1403b028 @ 0x1403b028 size=30
  push {r4,lr}
  ldr r4,[0x1403b054]
  sub sp,#0x10
  strd r2,lr,[sp,#0x4]
  movs r1,#0x83
  ldr r3,[0x1403b058]
  ldr r2,[0x1403b05c]
  str r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x1402a6e8
  movs r0,#0x0
  add sp,#0x10
  pop {r4,pc}
