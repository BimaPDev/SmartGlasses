; FUN_2c62e208 @ 0x2c62e208 size=108
  ldr r3,[0x2c62e274]
  mov.w r1,#0x168
  smull r2,r3,r3,r0
  asrs r2,r0,#0x1f
  add r3,r0
  rsb r3,r2,r3, asr #0x8
  mls r0,r1,r3,r0
  sxth r0,r0
  cmp r0,#0x0
  bge 0x2c62e228
  add r0,r1
  sxth r0,r0
  cmp r0,#0x59
  bgt 0x2c62e234
  ldr r3,[0x2c62e278]
  ldrsh.w r0,[r3,r0,lsl #0x1]
  bx lr
  uxth r0,r0
  sub.w r3,r0,#0x5a
  cmp r3,#0x59
  bhi 0x2c62e24c
  rsb.w r0,r0,#0xb4
  ldr r3,[0x2c62e278]
  uxth r0,r0
  ldrsh.w r0,[r3,r0,lsl #0x1]
  bx lr
  sub.w r3,r0,#0xb4
  uxth r3,r3
  cmp r3,#0x59
  bhi 0x2c62e262
  ldr r2,[0x2c62e278]
  ldrh.w r0,[r2,r3,lsl #0x1]
  rsbs r0,r0
  sxth r0,r0
  bx lr
  rsb.w r0,r0,#0x168
  ldr r3,[0x2c62e278]
  uxth r0,r0
  ldrh.w r0,[r3,r0,lsl #0x1]
  rsbs r0,r0
  sxth r0,r0
  bx lr
