; FUN_2c50885c @ 0x2c50885c size=28
  push {r4,r5,lr}
  ldr r3,[0x2c508904]
  sub sp,#0x14
  mov r4,r1
  ldr r2,[0x2c508908]
  mov r5,r0
  ldr r1,[0x2c50890c]
  movs r0,#0x4
  str r4,[sp,#0x8]
  strd r2,r3,[sp,#0x0]
  movs r2,#0xf7
  bl 0x2c62c82c
