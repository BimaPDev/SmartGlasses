; FUN_2c523d4c @ 0x2c523d4c size=40
  push {r4,r5,r6,r7,r8,r9,lr}
  mov r8,r2
  sub sp,#0x14
  mov r7,r3
  ldr r2,[0x2c523de8]
  ldr r3,[0x2c523dec]
  mov r6,r0
  mov r5,r1
  str r2,[sp,#0x0]
  str r3,[sp,#0x4]
  movs r2,#0x96
  ldrb.w r9,[sp,#0x30]
  strd r0,r1,[sp,#0x8]
  ldr r1,[0x2c523df0]
  movs r0,#0x4
  bl 0x2c62c82c
