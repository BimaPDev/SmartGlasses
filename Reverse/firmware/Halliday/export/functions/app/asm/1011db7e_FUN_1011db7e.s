; FUN_1011db7e @ 0x1011db7e size=70
  push {r4,r5,r6,r7,lr}
  sub sp,#0x24
  ldr r4,[sp,#0x48]
  mov r6,r2
  sub.w r2,r1,#0x118
  adds r1,r4,#0x1
  itee ne
  bic.ne.w r4,r4,r4, asr #0x1f
  mov.eq.w r4,#0xffffffff
  mov.eq.w r5,#0xffffffff
  add.w r7,r0,#0x118
  it ne
  asr.ne r5,r4,#0x1f
  ldr r1,[sp,#0x44]
  strd r4,r5,[sp,#0x18]
  str r1,[sp,#0x10]
  ldr r1,[sp,#0x40]
  str r1,[sp,#0xc]
  ldr r1,[sp,#0x3c]
  str r1,[sp,#0x8]
  ldr r1,[sp,#0x38]
  strd r3,r1,[sp,#0x0]
  mov r3,r6
  mov r1,r7
  bl 0x1011380c
  add sp,#0x24
  pop {r4,r5,r6,r7,pc}
