; FUN_2c500130 @ 0x2c500130 size=30
  push {r4,r5,r6,r7,lr}
  ldr r2,[0x2c500240]
  sub sp,#0x1c
  ldr r6,[0x2c500244]
  mov r4,r0
  mov r5,r1
  movs r0,#0x4
  mov r3,r6
  ldr r1,[0x2c500248]
  strd r2,r6,[sp,#0x0]
  movw r2,#0x203
  bl 0x2c62c82c
