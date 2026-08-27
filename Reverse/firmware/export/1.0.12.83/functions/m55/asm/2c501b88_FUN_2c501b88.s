; FUN_2c501b88 @ 0x2c501b88 size=90
  push {r4,r5,lr}
  ldr r4,[r1,#0x0]
  sub sp,#0xc
  ldr r0,[r0,#0xc]
  adds r4,#0x1
  umull r5,r3,r2,r4
  cmp.w r4,#0xe10
  str r4,[r1,#0x0]
  lsr.w r3,r3,#0x5
  umull r1,r2,r2,r3
  lsr.w r2,r2,#0x5
  rsb r2,r2,r2, lsl #0x4
  sub.w r2,r3,r2, lsl #0x2
  rsb r3,r3,r3, lsl #0x4
  sub.w r1,r4,r3, lsl #0x2
  bcc 0x2c501bd2
  ldr r5,[0x2c501bec]
  mov r3,r2
  ldr r0,[r0,#0xc]
  str r1,[sp,#0x0]
  umull r1,r2,r5,r4
  ldr r1,[0x2c501bf0]
  lsrs r2,r2,#0xb
  bl 0x2c638814
  add sp,#0xc
  pop {r4,r5,pc}
  mov r3,r1
  ldr r0,[r0,#0xc]
  ldr r1,[0x2c501bf4]
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x2c638814
