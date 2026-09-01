; FUN_100fb6d8 @ 0x100fb6d8 size=182
  push {r4,r5,r6,r7}
  eor.w r5,r2,r2, asr #0x1f
  eor.w r7,r3,r3, asr #0x1f
  sub.w r5,r5,r2, asr #0x1f
  sub.w r7,r7,r3, asr #0x1f
  eor.w r6,r1,r1, asr #0x1f
  sub.w r6,r6,r1, asr #0x1f
  mov r4,r2
  orrs r5,r7
  eor.w r2,r0,r0, asr #0x1f
  orrs r5,r6
  sub.w r2,r2,r0, asr #0x1f
  orrs r5,r2
  clz r5,r5
  subs r6,r5,#0x4
  cmp r6,#0x0
  ble 0x100fb77c
  cmp r6,#0x2
  it ge
  mov.ge r6,#0x2
  lsls r0,r6
  lsls r1,r6
  lsl.w r2,r4,r6
  lsl.w r7,r3,r6
  adds r3,r1,r2
  adds r4,r0,r1
  adds r5,r2,r7
  add.w r12,r4,r3
  cmp r1,#0x0
  add r3,r5
  add r3,r12
  ble 0x100fb774
  cmp r4,r5
  ble 0x100fb75a
  asrs r1,r4,#0x1
  cmp r0,r1
  asr.w r7,r3, asr #0x3
  asr.w r2,r12, asr #0x2
  beq 0x100fb76e
  cmp r2,r7
  bne 0x100fb71e
  cmp r1,r2
  bgt 0x100fb71e
  mov r0,r2
  cmp r6,#0x0
  itet le
  rsb.le r6,r6
  asr.gt r0,r6
  lsl.le r0,r6
  pop {r4,r5,r6,r7}
  bx lr
  add r2,r1
  add r4,r2
  add r2,r5
  add r4,r2
  asrs r1,r2,#0x2
  asrs r0,r4,#0x3
  cmp r0,r1
  asr.w r2,r5, asr #0x1
  bne 0x100fb742
  cmp r0,r2
  blt 0x100fb742
  b 0x100fb74c
  cmp r2,#0x0
  bgt 0x100fb730
  movs r0,#0x0
  b 0x100fb74c
  rsb.w r5,r5,#0x4
  asrs r0,r5
  asrs r1,r5
  asr.w r2,r4,r5
  asr.w r7,r3,r5
  b 0x100fb71e
