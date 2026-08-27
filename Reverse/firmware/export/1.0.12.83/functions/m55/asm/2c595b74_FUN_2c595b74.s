; FUN_2c595b74 @ 0x2c595b74 size=38
  push {r4,r5,r6,r7,r8,lr}
  ldr r3,[0x2c595cb0]
  sub sp,#0x10
  ldr r7,[0x2c595cb4]
  mov r4,r0
  mov r6,r1
  movs r0,#0x4
  mov r5,r2
  strd r1,r2,[sp,#0x8]
  strd r3,r7,[sp,#0x0]
  mov.w r2,#0x1da
  mov r3,r7
  ldr r1,[0x2c595cb8]
  bl 0x2c62c82c
