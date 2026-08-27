; FUN_2c57a4b4 @ 0x2c57a4b4 size=28
  push {r4,r5,r6,lr}
  ldr r3,[0x2c57a618]
  sub sp,#0x10
  mov r4,r1
  ldr r2,[0x2c57a61c]
  ldr r1,[0x2c57a620]
  mov r5,r0
  str r4,[sp,#0x8]
  movs r0,#0x4
  strd r2,r3,[sp,#0x0]
  movs r2,#0x99
  bl 0x2c62c82c
