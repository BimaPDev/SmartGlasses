; FUN_2c00d570 @ 0x2c00d570 size=140
  ldr r3,[0x2c00d5f4]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0xc]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c00d5e4
  add sp,#0x14
  pop.w pc
  beq 0x2c00d594
  subs r3,r1,#0x1
  cmp r3,#0xb
  bhi 0x2c00d5ee
  add.w r3,r1,#0x10
  ldrb.w r2,[r12,#0x3]
  add r3,sp
  ldrsb.w r3,[r3,#-0x11]
  cmp r2,r3
  bgt 0x2c00d58e
  cmp r2,#0x0
  bne 0x2c00d534
  ldr r0,[0x2c00d600]
  bl 0x2c00c25c
  ldrh.w r3,[r12,#0x0]
  lsls r2,r3,#0x1e
  beq 0x2c00d5be
  lsls r0,r3,#0x2
  add r0,r3
  add.w r3,r3,r0, lsl #0x3
  sub.w r3,r3,r3, lsl #0xa
  ubfx r2,r3,#0x4,#0xc
  orr.w r3,r2,r3, lsl #0xc
  uxth r3,r3
  cmp r3,#0xa3
  bhi 0x2c00d578
  movs r3,#0x1d
  strb.w r3,[sp,#0x1]
  b 0x2c00d578
  add.w r2,r3,r3, lsl #0x2
  lsls r0,r3,#0x2
  add.w r2,r3,r2, lsl #0x3
  sub.w r2,r2,r2, lsl #0xa
  ubfx lr,r2,#0x2,#0xe
  orr.w r2,lr,r2, lsl #0xe
  uxth r2,r2
  cmp.w r2,#0x290
  bcs 0x2c00d5b6
  b 0x2c00d59e
  bl 0x2c0084a8
  ldrb.w r2,[r12,#0x3]
  b 0x2c00d58e
