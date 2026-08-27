; FUN_2c5be420 @ 0x2c5be420 size=42
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r3,[0x2c5be708]
  mov r4,r1
  ldr r0,[0x2c5be70c]
  movs r2,#0x7f
  ldr r1,[0x2c5be710]
  vpush {d8}
  sub sp,#0x8c
  strd r0,r3,[sp,#0x0]
  ldr r0,[0x2c5be714]
  add r5,sp,#0x78
  ldr r0,[r0,#0x0]
  str r0,[sp,#0x84]
  mov.w r0,#0x0
  movs r0,#0x4
  bl 0x2c62c82c
