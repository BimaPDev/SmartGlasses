; FUN_101327a0 @ 0x101327a0 size=26
  push {r0,r1,r4,lr}
  mov r4,r1
  mov r1,r2
  str r2,[sp,#0x4]
  bl 0x100c1fe4
  mov r1,r4
  ldr r2,[sp,#0x4]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x1011ea40
