; FUN_2c6143bc @ 0x2c6143bc size=86
  push {r4,r5,r6,r7,r8,lr}
  cmp r3,#0xb4
  sub sp,#0x8
  mov r4,r3
  mov r5,r0
  mov r7,r1
  mov r6,r2
  ldrb.w r8,[sp,#0x20]
  bgt 0x2c614408
  uxth r0,r3
  adds r0,#0x5a
  sxth r0,r0
  bl 0x2c62e208
  mov r3,r0
  mov r0,r4
  mov r4,r3
  bl 0x2c62e208
  mov r1,r7
  mov r2,r6
  add.w r3,r7,r4, asr #0x5
  str.w r8,[sp,#0x4]
  add.w r4,r6,r0, asr #0x5
  mov r0,r5
  sxth r3,r3
  sxth r4,r4
  str r4,[sp,#0x0]
  bl 0x2c614004
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
  sub.w r4,r3,#0xb4
  uxth r0,r4
  sxth r4,r4
  b 0x2c6143d4
