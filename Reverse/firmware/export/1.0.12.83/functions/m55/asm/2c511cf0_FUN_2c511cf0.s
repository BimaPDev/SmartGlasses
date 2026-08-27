; FUN_2c511cf0 @ 0x2c511cf0 size=40
  push {r4,lr}
  ldr r3,[0x2c511d3c]
  sub sp,#0x10
  ldr r2,[0x2c511d40]
  mov r4,r0
  ldr.w r12,[0x2c511d4c]
  movs r0,#0x4
  ldr r1,[0x2c511d44]
  strd r2,r3,[sp,#0x0]
  movs r2,#0xaf
  ldr.w r12,[r12,#0x0]
  str.w r12,[sp,#0xc]
  mov.w r12,#0x0
  bl 0x2c62c82c
