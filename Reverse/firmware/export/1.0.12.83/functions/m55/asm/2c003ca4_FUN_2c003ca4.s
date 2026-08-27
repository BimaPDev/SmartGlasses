; FUN_2c003ca4 @ 0x2c003ca4 size=42
  ldr r3,[0x2c003cd0]
  ldr.w r0,[r3,r0,lsl #0x2]
  push {r5}
  ldr r3,[r0,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c003cac
  ldr r3,[0x2c003cd4]
  ldr r5,[r0,#0x4]
  and.w r3,r3,r2, lsl #0xc
  ldr r2,[0x2c003cd8]
  ands r2,r5
  orrs r3,r2
  orr r3,r3,#0x1
  str r3,[r0,#0x4]
  str r1,[r0,#0x0]
  pop.w r5
  bx lr
