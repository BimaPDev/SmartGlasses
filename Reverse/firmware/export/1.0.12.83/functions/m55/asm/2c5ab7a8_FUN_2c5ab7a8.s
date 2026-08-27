; FUN_2c5ab7a8 @ 0x2c5ab7a8 size=34
  push {r4,r5,lr}
  mov r5,r0
  sub sp,#0xc
  bl 0x2c602414
  mov r4,r0
  mov r0,r5
  bl 0x2c602618
  sub.w r3,r0,#0xce
  cmp r3,#0x15
  bhi 0x2c5ab812
  tbh [pc,r3]
  add sp,#0xc
  pop {r4,r5,pc}
