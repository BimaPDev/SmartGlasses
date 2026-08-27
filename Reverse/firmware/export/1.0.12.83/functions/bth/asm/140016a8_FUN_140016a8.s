; FUN_140016a8 @ 0x140016a8 size=44
  push {r5}
  ldr r0,[0x140016d4]
  ldr r3,[r0,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x140016ac
  ldr r5,[r0,#0x4]
  ldr r3,[0x140016d8]
  bic r12,r5,#0x1fe0000
  and.w r3,r3,r2, lsl #0xc
  bic r12,r12,#0x1f000
  orr.w r3,r3,r12
  orr r3,r3,#0x1
  str r3,[r0,#0x4]
  str r1,[r0,#0x0]
  pop.w r5
  bx lr
