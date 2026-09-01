; FUN_10129d84 @ 0x10129d84 size=128
  push {r4,r5,r6,r7,lr}
  ldrd r5,r7,[r0,#0x18]
  ldr r6,[sp,#0x14]
  cbnz r7,0x10129d9e
  cmp.w r5,#0x100
  bne 0x10129d9e
  lsls r1,r1,#0x8
  str r1,[r3,#0x0]
  lsls r2,r2,#0x8
  str r2,[r6,#0x0]
  pop {r4,r5,r6,r7,pc}
  ldr r4,[r0,#0x28]
  subs r1,r1,r4
  ldr r4,[r0,#0x2c]
  subs r2,r2,r4
  ldr r4,[r0,#0x20]
  cbnz r7,0x10129dba
  mla r1,r5,r1,r4
  str r1,[r3,#0x0]
  ldr r1,[r0,#0x18]
  ldr r3,[r0,#0x24]
  mla r2,r1,r2,r3
  b 0x10129d9a
  ldr r7,[r0,#0x14]
  cmp.w r5,#0x100
  mul r12,r7,r1
  ldr r7,[r0,#0x10]
  mls r7,r7,r2,r12
  bne 0x10129de6
  add.w r4,r4,r7, asr #0x2
  str r4,[r3,#0x0]
  ldrd r3,r4,[r0,#0x10]
  muls r2,r4
  mla r3,r3,r1,r2
  ldr r1,[r0,#0x24]
  add.w r1,r1,r3, asr #0x2
  str r1,[r6,#0x0]
  b 0x10129d9c
  muls r5,r7
  add.w r4,r4,r5, asr #0xa
  str r4,[r3,#0x0]
  ldrd r4,r3,[r0,#0x10]
  muls r2,r3
  mla r1,r4,r1,r2
  ldr r2,[r0,#0x18]
  muls r2,r1
  ldr r1,[r0,#0x24]
  add.w r1,r1,r2, asr #0xa
  b 0x10129de2
