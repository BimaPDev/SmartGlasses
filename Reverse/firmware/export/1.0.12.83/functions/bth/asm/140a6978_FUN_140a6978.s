; FUN_140a6978 @ 0x140a6978 size=36
  push {r4,lr}
  ldr r0,[0x140a699c]
  ldr r4,[0x140a69a0]
  sub sp,#0x8
  strd r0,r4,[sp,#0x0]
  movw r1,#0x3eb
  ldr r3,[0x140a69a4]
  ldr r2,[0x140a69a8]
  movs r0,#0x4
  bl 0x1402a6e8
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x140a68c0
