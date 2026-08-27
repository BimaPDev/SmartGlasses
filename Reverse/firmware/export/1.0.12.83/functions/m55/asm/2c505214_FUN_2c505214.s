; FUN_2c505214 @ 0x2c505214 size=30
  push {r4,r5,lr}
  ldr r3,[0x2c505248]
  sub sp,#0x14
  mov r4,r1
  ldr r2,[0x2c50524c]
  ldr r1,[0x2c505250]
  mov r5,r0
  str r4,[sp,#0x8]
  movs r0,#0x4
  strd r2,r3,[sp,#0x0]
  movw r2,#0x155
  bl 0x2c62c82c
