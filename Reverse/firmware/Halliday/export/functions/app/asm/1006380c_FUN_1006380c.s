; FUN_1006380c @ 0x1006380c size=452
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  movs r7,#0x0
  ldr r3,[r0,#0x0]
  sub sp,#0x74
  str r3,[sp,#0xc]
  ldr r3,[r0,#0x4]
  ldr.w r10,[0x100639d4]
  str r3,[sp,#0x10]
  ldr r3,[r0,#0x8]
  ldr r4,[sp,#0xc]
  str r3,[sp,#0x14]
  ldr r3,[r0,#0xc]
  str r1,[sp,#0x8]
  str r3,[sp,#0x18]
  ldr r3,[r0,#0x10]
  str r3,[sp,#0x1c]
  ldr r3,[r0,#0x14]
  ldrd lr,r2,[sp,#0x18]
  str r3,[sp,#0x20]
  ldr r3,[r0,#0x18]
  str r3,[sp,#0x24]
  ldr r3,[r0,#0x1c]
  ldrd r12,r11,[sp,#0x20]
  mov r8,r3
  str r3,[sp,#0x28]
  ldr r3,[sp,#0x14]
  str r3,[sp,#0x4]
  ldr r3,[sp,#0x10]
  str r3,[sp,#0x0]
  ldr r3,[sp,#0x8]
  ldr r6,[sp,#0x4]
  ldr r5,[r3,r7]
  add r3,sp,#0x30
  rev r5,r5
  str r5,[r3,r7]
  ldr.w r3,[r10],#0x4
  adds r7,#0x4
  add.w r9,r5,r3
  ror r5,r2, ror #0xb
  eor.w r5,r5,r2, ror #0x6
  eor.w r5,r5,r2, ror #0x19
  add r5,r9
  bic.w r3,r11,r2
  and.w r9,r2,r12
  eor.w r3,r3,r9
  add r3,r5
  add r3,r8
  ldrd r1,r5,[sp,#0x0]
  ror r8,r4, ror #0xd
  eors r5,r1
  eor.w r8,r8,r4, ror #0x2
  ands r5,r4
  and.w r9,r1,r6
  eor.w r5,r5,r9
  eor.w r8,r8,r4, ror #0x16
  add r8,r5
  cmp r7,#0x40
  add.w r5,r3,lr
  add r3,r8
  mov lr,r6
  mov r8,r11
  bne.w 0x100639b2
  mov.w r10,#0x10
  ldr r1,[0x100639d0]
  str r1,[sp,#0x2c]
  mov r1,r10
  add.w r10,r10,#0x1
  add r6,sp,#0x70
  and r7,r10,#0xf
  add.w r7,r6,r7, lsl #0x2
  ldr.w r6,[r7,#-0x40]
  and r9,r1,#0xf
  ror r8,r6, ror #0x12
  add.w r7,r1,#0xe
  adds r1,#0x9
  str r6,[sp,#0x8]
  eor.w r8,r8,r6, ror #0x7
  and r1,r1,#0xf
  add r6,sp,#0x70
  add.w r9,r6,r9, lsl #0x2
  add.w r1,r6,r1, lsl #0x2
  and r7,r7,#0xf
  ldr.w r1,[r1,#-0x40]
  add.w r7,r6,r7, lsl #0x2
  ldr.w r6,[r9,#-0x40]
  ldr.w r7,[r7,#-0x40]
  add r1,r6
  ldr r6,[sp,#0x8]
  ror lr,r7, ror #0x13
  eor.w r8,r8,r6, lsr #0x3
  eor.w lr,lr,r7, ror #0x11
  eor.w lr,lr,r7, lsr #0xa
  add r1,r8
  add r1,lr
  ldr r6,[sp,#0x2c]
  str.w r1,[r9,#-0x40]
  ror r9,r5, ror #0xb
  and.w r8,r5,r2
  eor.w r9,r9,r5, ror #0x6
  bic.w r7,r12,r5
  ldr.w lr,[r6],#0x4
  eor.w r7,r7,r8
  eor.w r9,r9,r5, ror #0x19
  add r7,r9
  add r7,lr
  str r6,[sp,#0x2c]
  ldr r6,[sp,#0x0]
  add r1,r7
  add r1,r11
  and.w lr,r4,r6
  eor.w r11,r4,r6
  ldr r6,[sp,#0x4]
  ror r7,r3, ror #0xd
  add r6,r1
  eor.w r7,r7,r3, ror #0x2
  and.w r11,r11,r3
  eor.w r11,r11,lr
  mov r8,r6
  eor.w r7,r7,r3, ror #0x16
  ldr r6,[sp,#0x0]
  add r7,r11
  cmp.w r10,#0x40
  mov r11,r12
  add r1,r7
  str r6,[sp,#0x4]
  bne 0x100639c2
  ldr r6,[sp,#0xc]
  add r6,r1
  ldr r1,[sp,#0x10]
  str r6,[r0,#0x0]
  add r1,r3
  ldr r3,[sp,#0x14]
  str r1,[r0,#0x4]
  add r3,r4
  ldr r1,[sp,#0x0]
  str r3,[r0,#0x8]
  ldr r3,[sp,#0x18]
  add r3,r1
  str r3,[r0,#0xc]
  ldr r3,[sp,#0x1c]
  add r3,r8
  str r3,[r0,#0x10]
  ldr r3,[sp,#0x20]
  add r3,r5
  str r3,[r0,#0x14]
  ldr r3,[sp,#0x24]
  add r3,r2
  str r3,[r0,#0x18]
  ldr r3,[sp,#0x28]
  add r3,r12
  str r3,[r0,#0x1c]
  add sp,#0x74
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr r1,[sp,#0x0]
  mov r11,r12
  strd r4,r1,[sp,#0x0]
  mov r12,r2
  mov r4,r3
  mov r2,r5
  b 0x1006384e
  mov r12,r2
  str r4,[sp,#0x0]
  mov r2,r5
  mov r4,r3
  mov r5,r8
  mov r3,r1
  b 0x100638b8
