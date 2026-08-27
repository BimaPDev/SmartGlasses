; FUN_140a59ac @ 0x140a59ac size=38
  push {r4,r5,lr}
  ldr r0,[0x140a59d4]
  sub sp,#0x14
  bl 0x1403ce70
  mov r4,r0
  ldr r5,[0x140a59d8]
  ldr r2,[0x140a59dc]
  movs r1,#0x9b
  strd r2,r5,[sp,#0x0]
  ldr r3,[0x140a59e0]
  ldr r2,[0x140a59e4]
  str r4,[sp,#0x8]
  movs r0,#0x4
  bl 0x1402a6e8
  add sp,#0x14
  pop {r4,r5,pc}
