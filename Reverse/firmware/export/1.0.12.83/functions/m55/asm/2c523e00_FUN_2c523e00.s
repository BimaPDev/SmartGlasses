; FUN_2c523e00 @ 0x2c523e00 size=32
  push {r4,r5,lr}
  ldr r3,[0x2c523e74]
  sub sp,#0x14
  mov r4,r0
  ldr r5,[0x2c523e78]
  str r3,[sp,#0x4]
  movs r2,#0x51
  ldr r0,[r0,#0x4]
  str r5,[sp,#0x0]
  str r0,[sp,#0xc]
  ldr r0,[r4,#0x0]
  ldr r1,[0x2c523e7c]
  str r0,[sp,#0x8]
  movs r0,#0x4
  bl 0x2c62c82c
