; FUN_2c5e7238 @ 0x2c5e7238 size=28
  push {r4,lr}
  sub sp,#0x8
  mov r4,r1
  str r2,[sp,#0x4]
  bl 0x2c5e697c
  mov r3,r0
  ldr r1,[sp,#0x4]
  mov r0,r4
  ldr r3,[r3,#0x40]
  add sp,#0x8
  pop.w {r4,lr}
  bx r3
