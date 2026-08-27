; FUN_2c6218e4 @ 0x2c6218e4 size=140
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  mov r9,r0
  mov r7,r1
  mov r6,r2
  mov r5,r3
  ldrb.w r8,[sp,#0x20]
  movs r4,#0x0
  b 0x2c6218fc
  cmp r4,#0x8
  beq 0x2c621960
  asr.w r2,r7,r4
  asr.w r3,r6,r4
  asr.w lr,r5,r4
  asr.w r12,r8,r4
  and r2,r2,#0x1
  and r3,r3,#0x1
  and lr,lr,#0x1
  and r12,r12,#0x1
  add.w r3,r3,r2, lsl #0x1
  adds r4,#0x1
  add.w lr,lr,r3, lsl #0x1
  add.w r12,r12,lr, lsl #0x1
  add.w r10,r9,r12, lsl #0x2
  ldr.w r9,[r9,r12,lsl #0x2]
  cmp.w r9,#0x0
  bne 0x2c6218f8
  movs r1,#0x44
  movs r0,#0x40
  bl 0x2c62be98
  mov r1,r9
  str.w r0,[r10,#0x0]
  mov r9,r0
  cbz r0,0x2c62196c
  movs r2,#0x40
  bl 0x2c62c314
  mov.w r3,#0xffffffff
  cmp r4,#0x8
  str.w r3,[r9,#0x40]
  ldr.w r9,[r10,#0x0]
  bne 0x2c6218fc
  ldr r3,[sp,#0x24]
  movs r0,#0x0
  str.w r3,[r9,#0x40]
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  movs r0,#0x53
  b 0x2c621968
