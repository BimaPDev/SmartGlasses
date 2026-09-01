; FUN_100d4814 @ 0x100d4814 size=168
  push {r4,r5,r6,r7,lr}
  mov r5,r0
  movs r0,#0x0
  ldr r3,[0x100d48bc]
  ldr r3,[r3,#0x0]
  ldr r2,[r3,#0x0]
  cbnz r2,0x100d4824
  pop {r4,r5,r6,r7,pc}
  ldrb.w r3,[r2,#0x38]
  lsls r4,r3,#0x1f
  bpl 0x100d48b8
  ldrb.w r4,[r2,#0x39]
  ubfx r3,r4,#0x0,#0x1
  ubfx r6,r4,#0x2,#0x1
  orrs r3,r6
  ubfx r4,r4,#0x3,#0x1
  orrs r3,r4
  ldrb.w r4,[r2,#0x3a]
  orrs r3,r4
  lsls r3,r3,#0x1f
  bpl 0x100d48b8
  mov r3,r2
  ldr.w r4,[r3,#0x4]!
  add.w r6,r5,r0, lsl #0x3
  str.w r4,[r5,r0,lsl #0x3]
  ldrh r3,[r3,#0x4]
  adds r0,#0x1
  strh r3,[r6,#0x4]
  ldrb.w r3,[r2,#0x38]
  ldrb.w r12,[r2,#0x39]
  lsrs r7,r3,#0x7
  ubfx r3,r3,#0x4,#0x3
  lsls r3,r3,#0x1
  ubfx lr,r12,#0x0,#0x1
  orr r3,r3,#0x1
  orr.w r3,r3,lr, lsl #0x4
  ubfx lr,r12,#0x2,#0x1
  orr.w r3,r3,lr, lsl #0x5
  ubfx lr,r12,#0x3,#0x1
  and r12,r12,#0x9
  subs.w r12,r12,#0x1
  it ne
  mov.ne.w r12,#0x1
  ldrb.w r4,[r2,#0x3a]
  orr.w r3,r3,lr, lsl #0x6
  and r4,r4,#0x1
  orr.w r4,r4,r7, lsl #0x1
  ldrb r7,[r6,#0x7]
  orr.w r3,r3,r12, lsl #0x7
  bic r7,r7,#0x3
  orrs r4,r7
  cmp r0,r1
  strb r3,[r6,#0x6]
  strb r4,[r6,#0x7]
  beq 0x100d4822
  ldr r2,[r2,#0x0]
  b 0x100d4820
