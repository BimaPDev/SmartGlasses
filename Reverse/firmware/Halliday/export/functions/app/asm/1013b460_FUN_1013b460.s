; FUN_1013b460 @ 0x1013b460 size=84
  push {r4,r5,r6,r7,lr}
  movs r4,#0x0
  subs r5,r1,#0x1
  cmp r5,#0xf
  mov r12,r3
  str r4,[r0,#0x40]
  bhi 0x1013b4a4
  cbz r2,0x1013b4a4
  cbz r3,0x1013b4a4
  ldr.w r7,[r12,r4,lsl #0x2]
  cmp.w r7,#0x400
  bcs 0x1013b49e
  ldr r5,[r0,#0x40]
  lsls r6,r5,#0x2
  cbz r5,0x1013b48e
  add.w lr,r0,r6
  ldr.w r3,[lr,#0x40]
  cmp r7,r3
  bls 0x1013b4a8
  add r6,r0
  str r7,[r6,#0x44]
  ldr.w r6,[r2,r4,lsl #0x2]
  str.w r6,[r0,r5,lsl #0x2]
  adds r5,#0x1
  str r5,[r0,#0x40]
  adds r4,#0x1
  cmp r1,r4
  bne 0x1013b472
  movs r0,#0x0
  pop {r4,r5,r6,r7,pc}
  itt eq
  ldr.eq.w r5,[r2,r4,lsl #0x2]
  str.w.eq r5,[lr,#-0x4]
  b 0x1013b49e
