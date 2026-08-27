; FUN_2c64ffc8 @ 0x2c64ffc8 size=40
  push {r0,r1,r4,lr}
  mov r4,r1
  add r0,sp,#0x4
  mov r1,r2
  mov r2,r3
  mov r3,sp
  bl 0x2c651320
  ldr r2,[sp,#0x10]
  add r1,sp,#0x4
  mov r0,r4
  bl 0x2c6594e4
  mov r4,r0
  add r0,sp,#0x4
  bl 0x2c650e60
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
