; FUN_2c650810 @ 0x2c650810 size=32
  push {r0,r1,r4,lr}
  mov r4,r2
  add r0,sp,#0x4
  mov r2,r3
  ldr r3,[sp,#0x10]
  bl 0x2c659516
  add r1,sp,#0x4
  mov r0,r4
  bl 0x2c650790
  add r0,sp,#0x4
  bl 0x2c650e60
  add sp,#0x8
  pop {r4,pc}
