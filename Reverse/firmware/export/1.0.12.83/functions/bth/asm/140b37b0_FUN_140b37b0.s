; FUN_140b37b0 @ 0x140b37b0 size=40
  push {r4,lr}
  sub sp,#0x8
  bl 0x14027bd8
  mov r4,r0
  ldr r0,[0x140b37d8]
  movw r1,#0x36a
  ldr r3,[0x140b37dc]
  ldr r2,[0x140b37e0]
  str r0,[sp,#0x0]
  str r4,[sp,#0x4]
  movs r0,#0x4
  bl 0x1402a6e8
  bl 0x140253e0
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
