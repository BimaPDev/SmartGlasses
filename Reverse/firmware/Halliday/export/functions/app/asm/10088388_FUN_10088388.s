; FUN_10088388 @ 0x10088388 size=252
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  sub sp,#0x1c
  mov r4,r0
  strd r1,r2,[sp,#0x8]
  str r3,[sp,#0x10]
  bl 0x10125ff0
  mov r6,r0
  cbnz r0,0x100883a6
  movs r0,#0x0
  add sp,#0x1c
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  movs r2,#0x10
  movs r1,#0x0
  mov r0,r4
  bl 0x1012691c
  movs r2,#0x11
  mov r7,r0
  movs r1,#0x0
  mov r0,r4
  bl 0x1012691c
  mov r8,r0
  mov r0,r4
  bl 0x10126fd2
  mov.w r9,#0x0
  mvn r5,#0xe0000000
  add.w r10,r8,r7
  rsb.w r3,r10,#0x1
  ldr.w r11,[0x10088484]
  str r0,[sp,#0x4]
  str r3,[sp,#0x14]
  ldr r3,[sp,#0x4]
  cmp r9,r3
  bne 0x100883ee
  mvn r3,#0xe0000000
  cmp r5,r3
  beq 0x1008839e
  rsbs r0,r5
  b 0x100883a0
  ldr r3,[r4,#0x8]
  mov r1,r11
  ldr r3,[r3,#0x0]
  ldr.w r10,[r3,r9,lsl #0x2]
  mov r0,r10
  bl 0x10124cc6
  cbnz r0,0x10088448
  mov.w r1,#0x1000
  mov r0,r10
  bl 0x10124cb8
  cbz r0,0x10088448
  cmp r6,#0x2
  beq 0x1008844e
  cmp r6,#0x3
  beq 0x1008845a
  cmp r6,#0x1
  bne 0x10088448
  ldr r1,[r4,#0x18]
  ldr.w r3,[r10,#0x18]
  add r1,r7
  ldr r2,[sp,#0x10]
  add r3,r2
  ldr r2,[sp,#0x8]
  cmp r3,r2
  blt 0x10088448
  ldr r2,[sp,#0xc]
  cmp r3,r2
  bgt 0x10088448
  subs r3,r3,r1
  eor.w r0,r3,r3, asr #0x1f
  eor.w r1,r5,r5, asr #0x1f
  sub.w r0,r0,r3, asr #0x1f
  sub.w r1,r1,r5, asr #0x1f
  cmp r0,r1
  it lt
  mov.lt r5,r3
  add.w r9,r9,#0x1
  b 0x100883dc
  ldr r1,[r4,#0x20]
  ldr.w r3,[r10,#0x20]
  sub.w r1,r1,r8
  b 0x10088420
  ldr.w r1,[r10,#0x20]
  ldr.w r0,[r10,#0x18]
  adds r1,#0x1
  subs r1,r1,r0
  add.w r1,r1,r1, lsr #0x1f
  add.w r3,r0,r1, asr #0x1
  ldr r2,[sp,#0x14]
  ldr r0,[r4,#0x20]
  ldr r1,[r4,#0x18]
  add r0,r2
  subs r0,r0,r1
  add.w r0,r0,r0, lsr #0x1f
  add r1,r7
  add.w r1,r1,r0, asr #0x1
  b 0x10088420
