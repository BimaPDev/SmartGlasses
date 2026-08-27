; FUN_14038944 @ 0x14038944 size=232
  cmp r2,#0xf
  bhi 0x14038962
  nop
  cbz r2,0x14038960
  subs r3,r0,#0x1
  add.w r12,r1,r2
  ldrb.w r2,[r1],#0x1
  cmp r1,r12
  strb.w r2,[r3,#0x1]!
  bne 0x14038952
  bx lr
  bx lr
  nop
  eor.w r3,r1,r0
  lsls r3,r3,#0x1e
  bne 0x14038948
  push {r4,r5,r6,lr}
  lsls r5,r0,#0x1e
  mov r3,r0
  bne 0x1403897a
  b 0x1403898c
  cmp r2,#0x0
  beq 0x14038a2a
  ldrb.w r12,[r1],#0x1
  subs r2,#0x1
  strb.w r12,[r3],#0x1
  lsls r4,r3,#0x1e
  bne 0x14038976
  cmp r2,#0xf
  bls 0x140389e0
  sub.w lr,r2,#0x10
  bic r5,lr,#0xf
  add.w r4,r1,#0x20
  add r4,r5
  add.w r12,r1,#0x10
  lsr.w r5,lr,#0x4
  add.w lr,r3,#0x10
  ldr.w r6,[r12,#-0x10]
  add.w r12,r12,#0x10
  str.w r6,[lr,#-0x10]
  ldr.w r6,[r12,#-0x1c]
  add.w lr,lr,#0x10
  str.w r6,[lr,#-0x1c]
  ldr.w r6,[r12,#-0x18]
  str.w r6,[lr,#-0x18]
  ldr.w r6,[r12,#-0x14]
  cmp r12,r4
  str.w r6,[lr,#-0x14]
  bne 0x140389a6
  adds r4,r5,#0x1
  and r2,r2,#0xf
  add.w r3,r3,r4, lsl #0x4
  add.w r1,r1,r4, lsl #0x4
  cmp r2,#0x3
  bls 0x14038a12
  mov r5,r1
  sub.w r12,r2,#0x4
  bic lr,r12,#0x3
  subs r4,r3,#0x4
  lsr.w r12,r12,#0x2
  add lr,r3
  ldr.w r6,[r5],#0x4
  str.w r6,[r4,#0x4]!
  cmp r4,lr
  bne 0x140389f6
  add.w r4,r12,#0x1
  and r2,r2,#0x3
  add.w r3,r3,r4, lsl #0x2
  add.w r1,r1,r4, lsl #0x2
  nop
  nop
  cbz r2,0x14038a2a
  subs r3,#0x1
  add.w r12,r1,r2
  ldrb.w r2,[r1],#0x1
  cmp r1,r12
  strb.w r2,[r3,#0x1]!
  bne 0x14038a1e
  pop {r4,r5,r6,pc}
