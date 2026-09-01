; FUN_10135546 @ 0x10135546 size=40
  mov r3,r2
  movs r2,#0x0
  push {r0,r1,r4,lr}
  str r2,[sp,#0x0]
  mov r4,r0
  mov r2,r1
  ldr r0,[r0,#0x0]
  movs r1,#0x6
  bl 0x10134022
  movw r2,#0x7530
  movs r3,#0x0
  add.w r0,r4,#0x1c0
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x1013cbaa
