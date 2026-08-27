; FUN_2c5f6d88 @ 0x2c5f6d88 size=38
  push {r4,lr}
  mul r0,r1,r0
  sub sp,#0x8
  bl 0x2c62c45c
  mov r4,r0
  cbz r0,0x2c5f6d9e
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
  ldr r0,[0x2c5f6dc8]
  movs r2,#0xf
  ldr r3,[0x2c5f6dcc]
  str r0,[sp,#0x0]
  movs r0,#0x3
  ldr r1,[0x2c5f6dd0]
  bl 0x2c62c82c
