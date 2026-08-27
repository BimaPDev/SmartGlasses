; FUN_2c540f68 @ 0x2c540f68 size=32
  push {r4,r5,lr}
  sub sp,#0xc
  str r1,[sp,#0x4]
  bl 0x2c48e3b8
  ldr r1,[sp,#0x4]
  mov r5,r0
  bl 0x2c540f00
  mov r4,r0
  mov r0,r5
  bl 0x2c48dea0
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
