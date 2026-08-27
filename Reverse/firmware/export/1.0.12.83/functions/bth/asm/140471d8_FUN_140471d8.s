; FUN_140471d8 @ 0x140471d8 size=38
  push {r4,r5,lr}
  sub sp,#0x14
  bl 0x14049358
  mov r4,r0
  ldr r5,[0x14047200]
  ldr r2,[0x14047204]
  movs r1,#0xcb
  strd r2,r5,[sp,#0x0]
  ldr r3,[0x14047208]
  ldr r2,[0x1404720c]
  str r4,[sp,#0x8]
  movs r0,#0x4
  bl 0x1402a6e8
  mov r0,r4
  add sp,#0x14
  pop {r4,r5,pc}
