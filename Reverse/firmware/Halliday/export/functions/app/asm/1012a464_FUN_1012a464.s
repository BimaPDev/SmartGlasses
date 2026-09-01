; FUN_1012a464 @ 0x1012a464 size=222
  push {r4,r5,r6,r7,r8,lr}
  ldr r4,[sp,#0x20]
  mov r6,r0
  ldrd r5,r7,[sp,#0x18]
  ldrb.w r12,[sp,#0x24]
  cbz r1,0x1012a47c
  movs r2,#0x0
  str r2,[r4,#0x0]
  b 0x1012a4b6
  subs r0,r2,#0x4
  uxtb r0,r0
  cmp r0,#0x2
  bhi 0x1012a48c
  cmp r5,#0x1
  mov r3,r1
  it eq
  mov.eq r2,#0x1
  mov r0,r7
  movs r1,#0x0
  add.w r8,r7,r5, lsl #0x2
  cmp r8,r0
  bne 0x1012a4aa
  movs r0,#0x0
  cmp r2,#0x6
  bhi 0x1012a4b6
  tbb [pc,r2]
  ldr.w lr,[r0],#0x4
  add lr,r3
  add r1,lr
  b 0x1012a494
  str r0,[r4,#0x0]
  movs r0,#0x0
  add.w lr,r5,#0xffffffff
  cmp lr,r0
  bhi 0x1012a51a
  add.w r3,r5,#0x40000000
  subs r3,#0x1
  ldr.w r0,[r4,r3,lsl #0x2]
  ldr.w r3,[r7,r3,lsl #0x2]
  add r0,r3
  ldr r3,[r4,#0x0]
  subs r0,r0,r3
  cmp.w r12,#0x0
  bne 0x1012a546
  pop.w {r4,r5,r6,r7,r8,pc}
  adds r2,r3,r6
  subs r2,r2,r1
  add.w r2,r2,r2, lsr #0x1f
  asrs r2,r2,#0x1
  b 0x1012a478
  adds r2,r3,r6
  subs r2,r2,r1
  b 0x1012a478
  add r3,r6
  subs r3,r3,r1
  subs r2,r5,#0x1
  sdiv r3,r3,r2
  str r0,[r4,#0x0]
  b 0x1012a4b6
  add r3,r6
  subs r3,r3,r1
  sdiv r3,r3,r5
  add.w r2,r3,r3, lsr #0x1f
  b 0x1012a4e6
  add r3,r6
  subs r3,r3,r1
  adds r2,r5,#0x1
  sdiv r3,r3,r2
  str r3,[r4,#0x0]
  b 0x1012a4b6
  ldr.w r2,[r4,r0,lsl #0x2]
  ldr.w r1,[r7,r0,lsl #0x2]
  adds r0,#0x1
  add r2,r1
  add r2,r3
  str.w r2,[r4,r0,lsl #0x2]
  b 0x1012a4bc
  ldr.w r2,[r4,r3,lsl #0x2]
  ldr.w r1,[r7,r3,lsl #0x2]
  add r2,r1
  subs r2,r6,r2
  str.w r2,[r4,r3,lsl #0x2]
  adds r3,#0x1
  cmp r3,r5
  bne 0x1012a52e
  b 0x1012a4da
  movs r3,#0x0
  b 0x1012a540
