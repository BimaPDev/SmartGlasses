; FUN_2c519c20 @ 0x2c519c20 size=34
  push {r4,r5,lr}
  ldr r5,[0x2c519c6c]
  sub sp,#0x1c
  mov r4,r1
  ldr r1,[0x2c519c70]
  str r5,[sp,#0x0]
  movs r2,#0xff
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x14]
  mov.w r1,#0x0
  ldr r3,[0x2c519c74]
  mov r5,r0
  ldr r1,[0x2c519c78]
  movs r0,#0x4
  bl 0x2c62c82c
