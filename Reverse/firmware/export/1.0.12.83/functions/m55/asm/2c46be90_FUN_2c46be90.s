; FUN_2c46be90 @ 0x2c46be90 size=34
  push {r4,r5,lr}
  mov r5,r1
  ldr r1,[r0,#0x24]
  sub sp,#0xc
  mov r0,r1
  str r1,[sp,#0x4]
  bl 0x2c66c4ec
  mov r4,r0
  ldr r1,[sp,#0x4]
  mov r0,r5
  mov r2,r4
  bl 0x2c46a48c
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
