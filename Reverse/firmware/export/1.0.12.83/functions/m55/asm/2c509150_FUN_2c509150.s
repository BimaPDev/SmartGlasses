; FUN_2c509150 @ 0x2c509150 size=32
  push {r4,r5,lr}
  mov r4,r0
  sub sp,#0xc
  mov r0,r1
  bl 0x2c602618
  sub.w r3,r0,#0xce
  cmp r3,#0x15
  bhi 0x2c50917e
  tbb [pc,r3]
  movs r5,#0x0
  mov r0,r5
  add sp,#0xc
  pop {r4,r5,pc}
