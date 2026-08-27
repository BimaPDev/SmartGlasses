; FUN_2c5f6d38 @ 0x2c5f6d38 size=34
  push {r4,lr}
  sub sp,#0x8
  bl 0x2c62bebc
  mov r4,r0
  cbz r0,0x2c5f6d4a
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
  ldr r0,[0x2c5f6d74]
  movs r2,#0x18
  ldr r3,[0x2c5f6d78]
  str r0,[sp,#0x0]
  movs r0,#0x3
  ldr r1,[0x2c5f6d7c]
  bl 0x2c62c82c
