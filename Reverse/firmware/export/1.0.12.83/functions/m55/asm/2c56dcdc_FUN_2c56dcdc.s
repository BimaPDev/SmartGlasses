; FUN_2c56dcdc @ 0x2c56dcdc size=34
  push {r4,r5,lr}
  sub sp,#0x14
  mov r4,r0
  mov r0,r1
  str r1,[sp,#0xc]
  bl 0x2c66c4ec
  mov r5,r0
  ldr r2,[r4,#0x4]
  ldr r3,[sp,#0xc]
  movs r1,#0x0
  mov r0,r4
  str r5,[sp,#0x0]
  bl 0x2c56db48
  add sp,#0x14
  pop {r4,r5,pc}
