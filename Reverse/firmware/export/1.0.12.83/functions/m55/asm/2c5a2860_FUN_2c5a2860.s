; FUN_2c5a2860 @ 0x2c5a2860 size=32
  push {r4,lr}
  ldr r1,[0x2c5a2888]
  sub sp,#0x10
  mov r4,r0
  ldr r3,[0x2c5a288c]
  str r1,[sp,#0x0]
  movs r0,#0x4
  ldrb r1,[r4,#0xe]
  mov.w r2,#0x1e2
  str r1,[sp,#0x8]
  ldrb r1,[r4,#0xd]
  str r1,[sp,#0x4]
  ldr r1,[0x2c5a2890]
  bl 0x2c62c82c
