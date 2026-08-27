; FUN_2c505b30 @ 0x2c505b30 size=30
  push {r4,r5,lr}
  mov r4,r0
  sub sp,#0xc
  mov r0,r1
  bl 0x2c602618
  sub.w r3,r0,#0xce
  cmp r3,#0x15
  bhi 0x2c505b5e
  tbb [pc,r3]
  movs r0,#0x0
  add sp,#0xc
  pop {r4,r5,pc}
