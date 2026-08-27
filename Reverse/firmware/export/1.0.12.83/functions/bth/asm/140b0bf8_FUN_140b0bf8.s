; FUN_140b0bf8 @ 0x140b0bf8 size=30
  push {r4,lr}
  ldr r2,[0x140b0c18]
  ldr r4,[0x140b0c1c]
  sub sp,#0x8
  str r2,[sp,#0x4]
  movs r1,#0x2c
  ldr r3,[0x140b0c20]
  ldr r2,[0x140b0c24]
  str r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x1402a6e8
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
