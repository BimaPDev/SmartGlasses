; FUN_2c003bd4 @ 0x2c003bd4 size=58
  push {r4,r5}
  ldr r4,[0x2c003c10]
  ldr r3,[0x2c003c14]
  ldr.w r4,[r4,r0,lsl #0x2]
  ldr r0,[0x2c003c18]
  and.w r3,r3,r2, lsl #0xc
  ldr r5,[r4,#0x4]
  ands r0,r5
  orrs r3,r0
  str r3,[r4,#0x4]
  ldr r0,[r4,#0xc]
  ubfx r0,r0,#0x8,#0x5
  cbz r2,0x2c003c08
  cbz r0,0x2c003c08
  add r0,r1
  ldrb.w r3,[r1],#0x1
  subs r2,#0x1
  cmp r1,r0
  strb r3,[r4,#0x8]
  beq 0x2c003c08
  cmp r2,#0x0
  bne 0x2c003bf8
  mov r0,r2
  pop {r4,r5}
  bx lr
