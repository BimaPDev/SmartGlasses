; FUN_2c5a981c @ 0x2c5a981c size=42
  push {r4,r5,r6,r7,lr}
  sub sp,#0x24
  ldr r7,[0x2c5a98cc]
  mov r6,r2
  mov r4,r0
  ldr r3,[0x2c5a98d0]
  mov r5,r1
  str r7,[sp,#0x0]
  movs r0,#0x4
  strd r1,r2,[sp,#0x4]
  ldr r2,[0x2c5a98d4]
  ldr r1,[0x2c5a98d8]
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x1c]
  mov.w r2,#0x0
  mov.w r2,#0x264
  bl 0x2c62c82c
