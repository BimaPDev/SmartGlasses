; FUN_2c64ed50 @ 0x2c64ed50 size=26
  push {r0,r1,r4,lr}
  mov r4,r2
  mov r1,r3
  movs r3,#0x0
  ldr r2,[sp,#0x10]
  mov r0,r4
  str r3,[sp,#0x0]
  ldr r3,[0x2c64ed6c]
  bl 0x2c64ed20
  subs r0,r0,r4
  add sp,#0x8
  pop {r4,pc}
