; FUN_2c520c48 @ 0x2c520c48 size=32
  push {r4,r5,r6,lr}
  mov r4,r0
  sub sp,#0x8
  mov r0,r1
  bl 0x2c602618
  sub.w r3,r0,#0xce
  cmp r3,#0x15
  bhi 0x2c520c76
  tbb [pc,r3]
  movs r5,#0x0
  mov r0,r5
  add sp,#0x8
  pop {r4,r5,r6,pc}
