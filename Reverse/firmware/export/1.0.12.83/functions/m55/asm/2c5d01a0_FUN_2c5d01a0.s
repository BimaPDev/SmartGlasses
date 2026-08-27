; FUN_2c5d01a0 @ 0x2c5d01a0 size=42
  push {r4,r5,lr}
  mov r4,r0
  sub sp,#0x14
  ldr r0,[r0,#0x8]
  bl 0x2c605068
  mov r5,r0
  ldr r0,[r4,#0x8]
  bl 0x2c605090
  ldr r2,[0x2c5d023c]
  ldr r3,[0x2c5d0240]
  ldr r1,[0x2c5d0244]
  str r2,[sp,#0x0]
  movw r2,#0x434
  strd r5,r0,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c62c82c
