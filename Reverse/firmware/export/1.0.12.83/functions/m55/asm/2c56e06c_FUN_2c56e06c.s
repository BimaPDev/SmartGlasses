; FUN_2c56e06c @ 0x2c56e06c size=52
  push {r4,r5,r6,r7,r8,r9,lr}
  ldr r3,[0x2c56e2a8]
  sub sp,#0x74
  ldr r5,[0x2c56e2ac]
  mov r9,r1
  ldr r1,[0x2c56e2b0]
  mov r4,r2
  mov r6,r0
  str r5,[sp,#0x0]
  movs r0,#0x4
  rsb r4,r4,r4, lsl #0x3
  add r7,sp,#0x1c
  add.w r8,sp,#0x34
  strd r3,r2,[sp,#0x4]
  movs r2,#0x3a
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x6c]
  mov.w r1,#0x0
  ldr r1,[0x2c56e2b4]
  bl 0x2c62c82c
