; FUN_140419cc @ 0x140419cc size=38
  push {r4,lr}
  ldr r2,[0x140419f4]
  ldr r4,[0x140419f8]
  sub sp,#0x8
  str r2,[sp,#0x4]
  movw r1,#0x14f
  ldr r3,[0x140419fc]
  ldr r2,[0x14041a00]
  str r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x1402a6e8
  ldr r0,[0x14041a04]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x14041acc
