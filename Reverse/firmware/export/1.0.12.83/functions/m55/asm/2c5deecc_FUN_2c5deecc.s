; FUN_2c5deecc @ 0x2c5deecc size=32
  push {r4,r5,lr}
  ldr r3,[0x2c5deef4]
  sub sp,#0x14
  mov r5,r1
  ldr r2,[0x2c5deef8]
  str r3,[sp,#0x8]
  mov r4,r0
  ldr r1,[r0,#0xc]
  movs r0,#0x4
  str r2,[sp,#0x0]
  movs r2,#0x3f
  str r1,[sp,#0x4]
  ldr r1,[0x2c5deefc]
  str r5,[sp,#0xc]
  bl 0x2c62c82c
