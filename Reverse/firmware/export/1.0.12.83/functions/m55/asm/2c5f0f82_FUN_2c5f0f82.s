; FUN_2c5f0f82 @ 0x2c5f0f82 size=38
  push {r4,r5,lr}
  mov r4,r0
  sub sp,#0xc
  mov r5,r1
  bl 0x2c637344
  movs r1,#0x1
  str r0,[r4,#0x28]
  bl 0x2c606a28
  ldr r1,[0x2c5f0fdc]
  ldr r3,[0x2c5f0fe0]
  movs r2,#0x46
  movs r0,#0x4
  strd r1,r5,[sp,#0x0]
  ldr r1,[0x2c5f0fe4]
  bl 0x2c62c82c
