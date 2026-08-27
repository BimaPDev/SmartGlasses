; FUN_2c537a08 @ 0x2c537a08 size=36
  push {r4,r5,lr}
  add.w r5,r0,#0xcc
  sub sp,#0xc
  mov r4,r0
  mov r0,r5
  bl 0x2c530d28
  ldr r2,[0x2c537a78]
  ldr r3,[0x2c537a7c]
  ldr r1,[0x2c537a80]
  strd r2,r0,[sp,#0x0]
  movw r2,#0x352
  movs r0,#0x4
  bl 0x2c62c82c
