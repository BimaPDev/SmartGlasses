; FUN_2c5bab38 @ 0x2c5bab38 size=28
  push {r4,r5,lr}
  ldr r3,[0x2c5bab78]
  sub sp,#0x14
  mov r4,r1
  ldr r2,[0x2c5bab7c]
  ldr r1,[0x2c5bab80]
  mov r5,r0
  str r4,[sp,#0x8]
  movs r0,#0x4
  strd r2,r3,[sp,#0x0]
  movs r2,#0xc0
  bl 0x2c62c82c
