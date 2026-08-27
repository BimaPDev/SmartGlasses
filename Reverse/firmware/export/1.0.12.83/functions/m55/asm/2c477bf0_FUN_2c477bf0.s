; FUN_2c477bf0 @ 0x2c477bf0 size=30
  push {r4,r5,lr}
  ldr r5,[0x2c477d7c]
  sub sp,#0x14
  mov r4,r0
  ldr r3,[r5,#0x0]
  subs r3,#0x1
  cmp r3,#0x31
  bhi 0x2c477c48
  tbb [pc,r3]
  mov.w r3,#0xffffffff
  str r3,[r5,#0x0]
  add sp,#0x14
  pop {r4,r5,pc}
