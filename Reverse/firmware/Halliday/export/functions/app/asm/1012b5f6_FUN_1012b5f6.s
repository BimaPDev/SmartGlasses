; FUN_1012b5f6 @ 0x1012b5f6 size=102
  ldrb.w r2,[r0,#0x3c]
  push {r4,r5,lr}
  ands r2,r2,#0x6
  ldrh r3,[r0,#0x2c]
  bne 0x1012b60e
  ldrh r0,[r0,#0x30]
  add r3,r0
  uxth r3,r3
  mov r0,r3
  pop {r4,r5,pc}
  cmp r2,#0x4
  bne 0x1012b616
  ldrh r0,[r0,#0x2e]
  b 0x1012b606
  cmp r2,#0x2
  bne 0x1012b60a
  ldrh r1,[r0,#0x34]
  ldrh r2,[r0,#0x32]
  ldrsh.w r4,[r0,#0x34]
  cmp r1,r2
  it cc
  add.cc.w r4,r4,#0x168
  ldrsh.w r1,[r0,#0x30]
  ldrh r5,[r0,#0x30]
  ldrh r0,[r0,#0x2e]
  it cc
  sxth.cc r4,r4
  add r2,r4
  cmp r5,r0
  it cc
  add.cc.w r1,r1,#0x168
  add.w r2,r2,r2, lsr #0x1f
  it cc
  sxth.cc r1,r1
  cmp.w r0,r2, asr #0x1
  asr.w r4,r2, asr #0x1
  blt 0x1012b606
  cmp r1,r4
  ite gt
  add.gt r3,r3,r5
  add.le r3,r3,r4
  b 0x1012b608
