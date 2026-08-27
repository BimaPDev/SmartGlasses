; FUN_2c512000 @ 0x2c512000 size=24
  push {r4,r5,lr}
  ldr r3,[0x2c51203c]
  sub sp,#0xc
  ldr r5,[0x2c512040]
  mov r4,r0
  str r3,[sp,#0x4]
  movs r2,#0x81
  ldr r1,[0x2c512044]
  movs r0,#0x4
  str r5,[sp,#0x0]
  bl 0x2c62c82c
