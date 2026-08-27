; FUN_2c50b53c @ 0x2c50b53c size=32
  push {r4,r5,lr}
  mov r4,r1
  sub sp,#0x14
  ldr r3,[0x2c50b5bc]
  mov r5,r0
  ldr r2,[0x2c50b5c0]
  movs r0,#0x4
  str r4,[sp,#0x8]
  subs r4,#0x4
  ldr r1,[0x2c50b5c4]
  strd r2,r3,[sp,#0x0]
  movw r2,#0x15b
  bl 0x2c62c82c
