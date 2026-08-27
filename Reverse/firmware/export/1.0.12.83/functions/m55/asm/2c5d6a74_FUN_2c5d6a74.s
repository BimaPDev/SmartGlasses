; FUN_2c5d6a74 @ 0x2c5d6a74 size=32
  push {r4,r5,lr}
  mov r5,r1
  sub sp,#0x14
  mov r4,r3
  str r2,[sp,#0xc]
  str r0,[sp,#0x8]
  bl 0x2c5d78f0
  ldr r3,[sp,#0xc]
  mov r2,r5
  ldr r1,[sp,#0x8]
  str r4,[sp,#0x0]
  bl 0x2c5d7eec
  add sp,#0x14
  pop {r4,r5,pc}
