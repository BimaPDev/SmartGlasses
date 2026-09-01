; FUN_10104468 @ 0x10104468 size=180
  push {r3,r4,r5,r6,r7,lr}
  ldr r5,[r0,#0x50]
  mov r4,r0
  mov r0,r2
  lsls r2,r5,#0x1e
  ldr r6,[sp,#0x18]
  asr.w r3,r3, asr #0x9
  bpl 0x101044b2
  ubfx r5,r3,#0x0,#0x9
  lsls r3,r3,#0x17
  movw r2,#0x1ff
  bmi 0x10104500
  ldr.w r3,[r4,#0xa0]
  cmp r3,#0x0
  blt 0x101044ca
  add.w r7,r3,r3, lsl #0x1
  add.w r2,r4,#0x64
  adds r3,#0x1
  str.w r3,[r4,#0xa0]
  add.w r3,r2,r7, lsl #0x1
  strh.w r1,[r2,r7,lsl #0x1]
  strb r5,[r3,#0x4]
  ldr.w r1,[r4,#0xa0]
  strh r6,[r3,#0x2]
  cmp r1,#0xa
  beq 0x10104504
  pop {r3,r4,r5,r6,r7,pc}
  mvns r2,r3
  cmp r3,r2
  it lt
  mov.lt r3,r2
  cmp r3,#0xff
  it ge
  mov.ge r3,#0xff
  mov r5,r3
  ldr.w r3,[r4,#0xa0]
  cmp r3,#0x0
  bge 0x1010448e
  ldrd r4,r2,[r4,#0x54]
  mls r2,r2,r0,r1
  uxtb r5,r5
  adds r3,r4,r2
  cmp r6,#0x7
  bhi 0x1010452e
  adr r1,[0x101044e0]
  ldr.w pc,[r1,r6,lsl #0x2]
  subs r5,r2,r5
  b 0x10104486
  ldrd r5,r3,[r4,#0x5c]
  blx r5
  movs r3,#0x0
  str.w r3,[r4,#0xa0]
  pop {r3,r4,r5,r6,r7,pc}
  strb r5,[r4,r2]
  adds r3,#0x1
  strb.w r5,[r3],#0x1
  strb.w r5,[r3],#0x1
  strb.w r5,[r3],#0x1
  strb.w r5,[r3],#0x1
  strb.w r5,[r3],#0x1
  strb r5,[r3,#0x0]
  pop {r3,r4,r5,r6,r7,pc}
  mov r2,r6
  mov r1,r5
  mov r0,r3
  pop.w {r3,r4,r5,r6,r7,lr}
  b.w 0x1011ea48
