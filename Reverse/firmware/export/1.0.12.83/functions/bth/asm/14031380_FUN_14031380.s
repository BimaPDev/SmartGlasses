; FUN_14031380 @ 0x14031380 size=30
  push {r4,lr}
  ldr r4,[0x140313a0]
  sub sp,#0x8
  movs r1,#0x3d
  ldr r3,[0x140313a4]
  ldr r2,[0x140313a8]
  str r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x1402a6e8
  movs r2,#0x1
  ldr r3,[0x140313ac]
  str r2,[r3,#0x0]
  add sp,#0x8
  pop {r4,pc}
