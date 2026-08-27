; FUN_2c4fc034 @ 0x2c4fc034 size=1512
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r2,[0x2c4fc39c]
  sub sp,#0x3c
  ldr.w r11,[r1,#0x0]
  ldr r3,[r0,#0x0]
  add r2,r11
  ldr.w r8,[r0,#0x4]
  ldr r5,[r0,#0xc]
  add r2,r3
  ldr r6,[r0,#0x8]
  ldr.w r10,[r1,#0x1c]
  ldr.w lr,[0x2c4fc408]
  ldrd r3,r4,[r0,#0x8]
  eors r3,r4
  and.w r3,r3,r8
  eors r3,r4
  ldr r4,[0x2c4fc3a0]
  add r3,r2
  ldr r2,[r1,#0x4]
  add r4,r2
  add.w r3,r8,r3, ror #0x19
  str r2,[sp,#0x0]
  add r4,r5
  ldr r5,[r0,#0x8]
  eor.w r2,r8,r5
  ands r2,r3
  eors r2,r5
  ldr r5,[r1,#0x8]
  add r2,r4
  mov r4,r5
  ldr r5,[0x2c4fc3a4]
  add.w r2,r3,r2, ror #0x14
  str r4,[sp,#0x4]
  add r5,r4
  eor.w r4,r8,r3
  ands r4,r2
  add r5,r6
  ldr r6,[r1,#0xc]
  eor.w r4,r4,r8
  mov r7,r6
  ldr r6,[0x2c4fc3a8]
  add r4,r5
  eor.w r5,r3,r2
  add r6,r7
  str r7,[sp,#0x2c]
  add.w r4,r2,r4, ror #0xf
  add r6,r8
  ands r5,r4
  eors r5,r3
  add r5,r6
  ldr r6,[r1,#0x10]
  mov r7,r6
  ldr r6,[0x2c4fc3ac]
  add.w r5,r4,r5, ror #0xa
  add r6,r7
  str r7,[sp,#0x8]
  add r6,r3
  eor.w r3,r2,r4
  ands r3,r5
  eors r3,r2
  add r3,r6
  ldr r6,[r1,#0x14]
  mov r7,r6
  ldr r6,[0x2c4fc3b0]
  add.w r3,r5,r3, ror #0x19
  add r6,r7
  str r7,[sp,#0xc]
  add r6,r2
  eor.w r2,r4,r5
  ands r2,r3
  eors r2,r4
  add r2,r6
  ldr r6,[r1,#0x18]
  mov r7,r6
  ldr r6,[0x2c4fc3b4]
  add.w r2,r3,r2, ror #0x14
  add r6,r7
  str r7,[sp,#0x10]
  eor.w r12,r3,r2
  add r6,r4
  eor.w r4,r5,r3
  ands r4,r2
  eors r4,r5
  add r4,r6
  ldr r6,[0x2c4fc3b8]
  add.w r4,r2,r4, ror #0xf
  add r6,r10
  and.w r12,r12,r4
  add r5,r6
  ldr r6,[r1,#0x20]
  eor.w r12,r12,r3
  mov r7,r6
  ldr r6,[0x2c4fc3bc]
  add r5,r12
  add r6,r7
  str r7,[sp,#0x14]
  add.w r5,r4,r5, ror #0xa
  add r6,r3
  eor.w r3,r2,r4
  ands r3,r5
  eors r3,r2
  add r3,r6
  ldr r6,[r1,#0x24]
  mov r7,r6
  ldr r6,[0x2c4fc3c0]
  add.w r3,r5,r3, ror #0x19
  add r6,r7
  str r7,[sp,#0x18]
  ldr r7,[r1,#0x28]
  add r6,r2
  eor.w r2,r4,r5
  str r7,[sp,#0x1c]
  ands r2,r3
  eors r2,r4
  add r2,r6
  ldr r6,[0x2c4fc3c4]
  add r6,r7
  add.w r2,r3,r2, ror #0x14
  add r6,r4
  eor.w r4,r5,r3
  eor.w r12,r3,r2
  ands r4,r2
  eors r4,r5
  add r4,r6
  ldr r6,[r1,#0x2c]
  add.w r4,r2,r4, ror #0xf
  mov r7,r6
  ldr r6,[0x2c4fc3c8]
  and.w r12,r12,r4
  str r7,[sp,#0x20]
  add r6,r7
  eor.w r12,r12,r3
  add r5,r6
  add r12,r5
  ldr r5,[r1,#0x30]
  mov r6,r5
  ldr r5,[0x2c4fc3cc]
  add.w r12,r4,r12, ror #0xa
  add r5,r6
  str r6,[sp,#0x30]
  ldr r6,[0x2c4fc3d0]
  add r5,r3
  eor.w r3,r2,r4
  and.w r3,r3,r12
  eors r3,r2
  add r3,r5
  ldr r5,[r1,#0x34]
  ldr r7,[sp,#0x0]
  add r6,r5
  add.w r3,r12,r3, ror #0x19
  str r5,[sp,#0x24]
  add r6,r2
  eor.w r2,r4,r12
  ldr r5,[sp,#0x10]
  ands r2,r3
  eors r2,r4
  add r2,r6
  ldrd r9,r6,[r1,#0x38]
  ldr r1,[0x2c4fc3d4]
  add.w r2,r3,r2, ror #0x14
  str r6,[sp,#0x34]
  add r1,r9
  add r4,r1
  eor.w r1,r12,r3
  ands r1,r2
  eor.w r1,r1,r12
  add r4,r1
  ldr r1,[0x2c4fc3d8]
  add r1,r6
  add.w r4,r2,r4, ror #0xf
  add r12,r1
  eor.w r1,r3,r2
  ands r1,r4
  eors r1,r3
  add r1,r12
  ldr.w r12,[0x2c4fc40c]
  add.w r1,r4,r1, ror #0xa
  add r12,r7
  ldr r7,[sp,#0x1c]
  add r12,r3
  eor.w r3,r4,r1
  ands r3,r2
  eors r3,r4
  add r3,r12
  ldr.w r12,[0x2c4fc410]
  add.w r3,r1,r3, ror #0x1b
  add r12,r5
  ldr r5,[sp,#0x20]
  add r12,r2
  eor.w r2,r1,r3
  ands r2,r4
  eors r2,r1
  add r2,r12
  ldr.w r12,[0x2c4fc414]
  add.w r2,r3,r2, ror #0x17
  add r12,r5
  ldr r5,[sp,#0xc]
  add r4,r12
  eor.w r12,r3,r2
  and.w r12,r12,r1
  eor.w r12,r12,r3
  add r4,r12
  ldr.w r12,[0x2c4fc418]
  add.w r4,r2,r4, ror #0x12
  add r12,r11
  add r12,r1
  eor.w r1,r2,r4
  ands r1,r3
  eors r1,r2
  add r1,r12
  ldr.w r12,[0x2c4fc41c]
  add.w r1,r4,r1, ror #0xc
  add r12,r5
  ldr r5,[sp,#0x8]
  add r12,r3
  eor.w r3,r4,r1
  ands r3,r2
  eors r3,r4
  add r3,r12
  ldr.w r12,[0x2c4fc420]
  add.w r3,r1,r3, ror #0x1b
  add r12,r7
  ldr r7,[sp,#0x2c]
  add r12,r2
  eor.w r2,r1,r3
  ands r2,r4
  eors r2,r1
  add r2,r12
  ldr.w r12,[0x2c4fc424]
  add.w r2,r3,r2, ror #0x17
  add r12,r6
  ldr r6,[sp,#0x18]
  add r4,r12
  eor.w r12,r3,r2
  and.w r12,r12,r1
  eor.w r12,r12,r3
  add r12,r4
  ldr r4,[0x2c4fc3dc]
  add.w r12,r2,r12, ror #0x12
  add r4,r5
  ldr r5,[sp,#0x24]
  add r4,r1
  eor.w r1,r2,r12
  ands r1,r3
  eors r1,r2
  add r1,r4
  ldr r4,[0x2c4fc3e0]
  add.w r1,r12,r1, ror #0xc
  add r4,r6
  ldr r6,[sp,#0x14]
  add r4,r3
  eor.w r3,r12,r1
  ands r3,r2
  eor.w r3,r3,r12
  add r3,r4
  ldr r4,[0x2c4fc3e4]
  add.w r3,r1,r3, ror #0x1b
  add r4,r9
  add r4,r2
  eor.w r2,r1,r3
  and.w r2,r2,r12
  eors r2,r1
  add r2,r4
  ldr r4,[0x2c4fc3e8]
  add.w r2,r3,r2, ror #0x17
  add r4,r7
  ldr r7,[sp,#0x30]
  add r12,r4
  eor.w r4,r3,r2
  ands r4,r1
  eors r4,r3
  add r12,r4
  ldr r4,[0x2c4fc3ec]
  add.w r12,r2,r12, ror #0x12
  add r4,r6
  add r1,r4
  eor.w r4,r2,r12
  ands r4,r3
  eors r4,r2
  add r1,r4
  ldr r4,[0x2c4fc3f0]
  add.w r1,r12,r1, ror #0xc
  add r4,r5
  ldr r5,[sp,#0x4]
  add r3,r4
  eor.w r4,r12,r1
  str r5,[sp,#0x28]
  ands r4,r2
  eor.w r4,r4,r12
  add r3,r4
  ldr r4,[0x2c4fc3f4]
  add.w r3,r1,r3, ror #0x1b
  add r4,r5
  ldr r5,[sp,#0x24]
  add r2,r4
  eor.w r4,r1,r3
  and.w r4,r4,r12
  eors r4,r1
  add r2,r4
  ldr r4,[0x2c4fc3f8]
  add.w r2,r3,r2, ror #0x17
  add r4,r10
  add r12,r4
  eor.w r4,r3,r2
  ands r4,r1
  eors r4,r3
  add r12,r4
  ldr r4,[0x2c4fc3fc]
  add.w r12,r2,r12, ror #0x12
  add r4,r7
  ldr r7,[sp,#0xc]
  add r4,r1
  eor.w r1,r2,r12
  add lr,r7
  ldr r7,[sp,#0x0]
  add lr,r3
  ands r3,r1
  eors r3,r2
  add r3,r4
  ldr r4,[sp,#0x20]
  add.w r3,r12,r3, ror #0xc
  eors r1,r3
  add lr,r1
  ldr r1,[0x2c4fc400]
  add r1,r6
  add.w lr,r3,lr, ror #0x1c
  ldr r6,[sp,#0x10]
  add r1,r2
  eor.w r2,r12,r3
  eor.w r2,r2,lr
  add r2,r1
  ldr r1,[0x2c4fc404]
  add.w r2,lr,r2, ror #0x15
  add r1,r4
  eor.w r4,r3,lr
  add r12,r1
  b 0x2c4fc428
  eor.w r1,lr,r2
  eors r4,r2
  add r12,r4
  ldr r4,[0x2c4fc6ac]
  add.w r12,r2,r12, ror #0x10
  add r4,r9
  eor.w r1,r1,r12
  add r3,r4
  eor.w r4,r2,r12
  add r3,r1
  ldr r1,[0x2c4fc6b0]
  add.w r3,r12,r3, ror #0x9
  add r1,r7
  ldr r7,[sp,#0x1c]
  eors r4,r3
  add lr,r1
  ldr r1,[0x2c4fc6b4]
  add lr,r4
  ldr r4,[sp,#0x8]
  add r1,r4
  add.w lr,r3,lr, ror #0x1c
  ldr r4,[0x2c4fc6b8]
  add r1,r2
  eor.w r2,r12,r3
  add r4,r10
  eor.w r2,r2,lr
  add r12,r4
  eor.w r4,r3,lr
  add r2,r1
  ldr r1,[0x2c4fc6bc]
  add.w r2,lr,r2, ror #0x15
  add r1,r7
  ldr r7,[sp,#0x2c]
  eors r4,r2
  add r1,r3
  eor.w r3,lr,r2
  add r4,r12
  ldr.w r12,[0x2c4fc6f8]
  add.w r4,r2,r4, ror #0x10
  eors r3,r4
  add r3,r1
  ldr r1,[0x2c4fc6c0]
  add r1,r5
  add.w r3,r4,r3, ror #0x9
  ldr r5,[sp,#0x34]
  add lr,r1
  eor.w r1,r2,r4
  eors r1,r3
  add lr,r1
  ldr r1,[0x2c4fc6c4]
  add r1,r11
  add.w lr,r3,lr, ror #0x1c
  add r2,r1
  eor.w r1,r4,r3
  eor.w r1,r1,lr
  add r1,r2
  ldr r2,[0x2c4fc6c8]
  add r2,r7
  add.w r1,lr,r1, ror #0x15
  add r2,r4
  eor.w r4,r3,lr
  eors r4,r1
  add r4,r2
  ldr r2,[0x2c4fc6cc]
  add r2,r6
  add.w r4,r1,r4, ror #0x10
  ldr r6,[sp,#0x18]
  add r2,r3
  eor.w r3,lr,r1
  eors r3,r4
  add r3,r2
  ldr r2,[0x2c4fc6d0]
  add r2,r6
  add.w r3,r4,r3, ror #0x9
  ldr r6,[sp,#0x30]
  add lr,r2
  eor.w r2,r1,r4
  add r12,r6
  eors r2,r3
  add r12,r1
  eor.w r1,r4,r3
  add r2,lr
  add.w r2,r3,r2, ror #0x1c
  eors r1,r2
  add r1,r12
  ldr.w r12,[0x2c4fc6fc]
  add r12,r5
  add.w r1,r2,r1, ror #0x15
  ldr r5,[sp,#0x28]
  add r12,r4
  eor.w r4,r3,r2
  eors r4,r1
  add r4,r12
  ldr.w r12,[0x2c4fc700]
  add r12,r5
  add.w r4,r1,r4, ror #0x10
  ldr r5,[sp,#0xc]
  add r3,r12
  eor.w r12,r2,r1
  eor.w r12,r12,r4
  add r3,r12
  ldr.w r12,[0x2c4fc704]
  add.w r3,r4,r3, ror #0x9
  add r12,r11
  add r12,r2
  orn.w r2,r3,r1
  eors r2,r4
  add r2,r12
  ldr.w r12,[0x2c4fc708]
  add.w r2,r3,r2, ror #0x1a
  add r12,r10
  orn.w lr,r2,r4
  add r1,r12
  ldr.w r12,[0x2c4fc70c]
  eor.w lr,lr,r3
  add r12,r9
  add r1,lr
  add r4,r12
  ldr.w r12,[0x2c4fc710]
  add.w r1,r2,r1, ror #0x16
  add r12,r5
  orn.w lr,r1,r3
  add r12,r3
  eor.w lr,lr,r2
  add r4,lr
  add.w r4,r1,r4, ror #0x11
  orn.w r3,r4,r2
  eors r3,r1
  add r3,r12
  ldr.w r12,[0x2c4fc714]
  add.w r3,r4,r3, ror #0xb
  add r12,r6
  orn.w lr,r3,r1
  add r12,r2
  eor.w lr,lr,r4
  add.w r2,lr,r12
  ldr.w r12,[0x2c4fc718]
  add.w r2,r3,r2, ror #0x1a
  add r12,r7
  ldr r7,[sp,#0x1c]
  orn.w lr,r2,r4
  add r12,r1
  ldr r5,[sp,#0x0]
  eor.w lr,lr,r3
  ldr r6,[sp,#0x14]
  add.w r1,lr,r12
  ldr.w r12,[0x2c4fc71c]
  add.w r1,r2,r1, ror #0x16
  add r12,r7
  orn.w r7,r1,r3
  add r12,r4
  eors r7,r2
  add.w r4,r7,r12
  ldr r7,[0x2c4fc6d4]
  add.w r4,r1,r4, ror #0x11
  add r7,r5
  ldr r5,[sp,#0x24]
  orn.w lr,r4,r2
  add r3,r7
  ldr r7,[0x2c4fc6d8]
  eor.w lr,lr,r1
  add r7,r6
  ldr r6,[sp,#0x34]
  add r3,lr
  add r2,r7
  ldr r7,[0x2c4fc6dc]
  add.w r3,r4,r3, ror #0xb
  add r7,r6
  orn.w lr,r3,r1
  add r1,r7
  ldr r7,[sp,#0x10]
  eor.w lr,lr,r4
  add r2,lr
  add.w r2,r3,r2, ror #0x1a
  orn.w r6,r2,r4
  eors r6,r3
  add r1,r6
  ldr r6,[0x2c4fc6e0]
  add.w r1,r2,r1, ror #0x16
  add r6,r7
  orn.w r7,r1,r3
  add r4,r6
  ldr r6,[0x2c4fc6e4]
  eors r7,r2
  add r6,r5
  ldr r5,[0x2c4fc6e8]
  add r4,r7
  ldr r7,[sp,#0x8]
  add r6,r3
  add.w r4,r1,r4, ror #0x11
  add r5,r7
  ldr r7,[r0,#0x0]
  orn.w r3,r4,r2
  add r5,r2
  eors r3,r1
  add r3,r6
  ldr r6,[sp,#0x4]
  add.w r3,r4,r3, ror #0xb
  orn.w r2,r3,r1
  eors r2,r4
  add r2,r5
  add.w r2,r3,r2, ror #0x1a
  adds r5,r7,r2
  ldr r7,[sp,#0x20]
  str r5,[r0,#0x0]
  ldr r5,[0x2c4fc6ec]
  add r5,r7
  ldr r7,[r0,#0xc]
  add r5,r1
  orn.w r1,r2,r4
  eors r1,r3
  add r1,r5
  add.w r1,r2,r1, ror #0x16
  adds r5,r7,r1
  str r5,[r0,#0xc]
  ldr r5,[0x2c4fc6f0]
  add r5,r6
  ldr r6,[sp,#0x18]
  add r5,r4
  orn.w r4,r1,r3
  eors r4,r2
  add r4,r5
  ldr r5,[r0,#0x8]
  add.w r4,r1,r4, ror #0x11
  orn.w r2,r4,r2
  eors r1,r2
  add.w r2,r8,r4
  add r4,r5
  str r4,[r0,#0x8]
  ldr r4,[0x2c4fc6f4]
  add r4,r6
  add r3,r4
  add r3,r1
  add.w r2,r2,r3, ror #0xb
  str r2,[r0,#0x4]
  add sp,#0x3c
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
