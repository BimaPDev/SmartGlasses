; FUN_2c57d8cc @ 0x2c57d8cc size=36
  push {r4,r5,r6,r7,r8,lr}
  ldr r3,[0x2c57da00]
  sub sp,#0x10
  ldr r6,[0x2c57da04]
  mov r4,r1
  mov r5,r2
  mov r8,r0
  ldr r1,[0x2c57da08]
  movs r0,#0x4
  str r6,[sp,#0x0]
  mov.w r7,#0xff00ff00
  strd r3,r2,[sp,#0x4]
  movs r2,#0x17
  bl 0x2c62c82c
