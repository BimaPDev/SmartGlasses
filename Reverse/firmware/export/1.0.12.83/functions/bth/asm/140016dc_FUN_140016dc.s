; FUN_140016dc @ 0x140016dc size=56
  push {r4,r5}
  ldr r4,[0x14001714]
  ldr r0,[r4,#0xc]
  lsls r0,r0,#0x1f
  bmi 0x140016e0
  ldr r5,[0x14001718]
  ldr r0,[r4,#0x4]
  and.w r5,r5,r2, lsl #0xc
  ldr r2,[0x1400171c]
  bic r12,r0,#0x1fe0000
  bic r12,r12,#0x1f000
  and.w r2,r2,r3, lsl #0xd
  orr.w r5,r5,r12
  orr.w r3,r2,r1
  orr r5,r5,#0x1
  orr r3,r3,#0x100
  str r5,[r4,#0x4]
  str r3,[r4,#0x0]
  pop {r4,r5}
  bx lr
