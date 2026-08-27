; FUN_2c003b78 @ 0x2c003b78 size=78
  push {r4,r5,lr}
  ldr r4,[0x2c003bc8]
  ldr r3,[0x2c003bcc]
  ldr.w r4,[r4,r0,lsl #0x2]
  ldr r0,[0x2c003bd0]
  and.w r3,r3,r2, lsl #0xc
  ldr r5,[r4,#0x4]
  ands r0,r5
  subs r5,r2,#0x0
  orr.w r3,r3,r0
  it ne
  mov.ne r5,#0x1
  str r3,[r4,#0x4]
  ldr r3,[r4,#0xc]
  tst r3,#0x1f00
  ubfx lr,r3,#0x8,#0x5
  mov r3,r2
  beq 0x2c003bc0
  cbz r5,0x2c003bc0
  mov r0,r1
  add lr,r1
  ldrb.w r12,[r0],#0x1
  subs r3,#0x1
  cmp r0,lr
  strb.w r12,[r4,#0x8]
  beq 0x2c003bc0
  cmp r3,#0x0
  bne 0x2c003bac
  pop {r4,r5,pc}
  cmp r3,#0x0
  bne 0x2c003b98
  pop {r4,r5,pc}
