; FUN_2c5e98c0 @ 0x2c5e98c0 size=36
  push {r4,r5,r6,lr}
  mov r4,r0
  ldr r3,[0x2c5e9904]
  sub sp,#0x10
  ldr r5,[0x2c5e9908]
  ldr r6,[r4,#0x0]
  movs r0,#0x0
  ldr r3,[r3,#0x44]
  blx r3
  movs r2,#0x87
  ldr r3,[0x2c5e990c]
  ldr r1,[0x2c5e9910]
  str r5,[sp,#0x0]
  strd r6,r0,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c62c82c
