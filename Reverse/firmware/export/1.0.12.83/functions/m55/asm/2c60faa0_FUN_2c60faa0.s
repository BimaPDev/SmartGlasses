; FUN_2c60faa0 @ 0x2c60faa0 size=110
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  mov r7,r3
  ldr r5,[sp,#0x28]
  ldrsh.w r9,[sp,#0x24]
  ldrh.w r10,[r7,#0x4]
  ldrsh.w r0,[r7,#0x0]
  ldrsh.w r4,[r7,#0x2]
  add.w r10,r10,#0x1
  ldr r3,[sp,#0x20]
  sub.w r10,r10,r0
  mla r0,r2,r4,r0
  add.w r6,r1,r0, lsl #0x2
  ldrsh.w r1,[r5,#0x0]
  ldrh r5,[r5,#0x2]
  smlabb r5,r9,r5,r1
  add.w r5,r3,r5, lsl #0x2
  ldrsh.w r3,[r7,#0x6]
  cmp r3,r4
  blt 0x2c60fb0a
  sxth.w r10,r10
  lsl.w r8,r2,#0x2
  lsl.w r10,r10,#0x2
  lsl.w r9,r9,#0x2
  adds r4,#0x1
  mov r1,r5
  mov r0,r6
  mov r2,r10
  bl 0x2c62c0d8
  ldrsh.w r0,[r7,#0x6]
  sxth r4,r4
  add r6,r8
  add r5,r9
  cmp r0,r4
  bge 0x2c60faf0
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
