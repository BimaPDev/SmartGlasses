; FUN_1012820e @ 0x1012820e size=128
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  mov r9,r0
  rsb.w r0,r0,#0x5a
  sxth r0,r0
  sub.w r8,r1,r2, lsr #0x1
  mov r5,r2
  mov r6,r3
  lsrs r7,r2,#0x1
  bl 0x1013d980
  mul r4,r8,r0
  mov r0,r9
  bl 0x1013d980
  mvns r5,r5
  mul r0,r8,r0
  asrs r4,r4,#0x7
  cmp r4,#0x0
  asr.w r0,r0, asr #0x7
  and r5,r5,#0x1
  ble 0x1012826e
  subs r4,#0x7f
  subs r3,r5,r7
  add.w r3,r3,r4, asr #0x8
  str r3,[r6,#0x0]
  add.w r4,r7,r4, asr #0x8
  cmp r0,#0x0
  str r4,[r6,#0x8]
  ble 0x1012827e
  subs r0,#0x7f
  subs r5,r5,r7
  add.w r5,r5,r0, asr #0x8
  str r5,[r6,#0x4]
  add.w r0,r7,r0, asr #0x8
  str r0,[r6,#0xc]
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  adds r4,#0x7f
  rsb r3,r7,r4, asr #0x8
  str r3,[r6,#0x0]
  subs r3,r7,r5
  add.w r4,r3,r4, asr #0x8
  b 0x10128254
  adds r0,#0x7f
  rsb r3,r7,r0, asr #0x8
  subs r2,r7,r5
  str r3,[r6,#0x4]
  add.w r0,r2,r0, asr #0x8
  b 0x10128268
