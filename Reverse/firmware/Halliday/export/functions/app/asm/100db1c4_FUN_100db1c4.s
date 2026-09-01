; FUN_100db1c4 @ 0x100db1c4 size=28
  push {r0,r1,r4,lr}
  ldr r3,[0x100db1e0]
  str r0,[sp,#0x4]
  ldr r4,[r3,#0x0]
  bl 0x1011ea10
  mov r3,r4
  mov r2,r0
  movs r0,#0x19
  ldr r1,[sp,#0x4]
  add sp,#0x8
  pop.w {r4,lr}
  bx r3
