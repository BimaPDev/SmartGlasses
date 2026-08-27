; FUN_2c003c1c @ 0x2c003c1c size=48
  ldr r3,[0x2c003c4c]
  push {r4}
  ldr.w r4,[r3,r0,lsl #0x2]
  ldr r3,[r4,#0xc]
  tst r3,#0x1f00
  ubfx r0,r3,#0x8,#0x5
  beq 0x2c003c44
  cbz r2,0x2c003c44
  add r0,r1
  ldrb.w r3,[r1],#0x1
  subs r2,#0x1
  cmp r1,r0
  strb r3,[r4,#0x8]
  beq 0x2c003c44
  cmp r2,#0x0
  bne 0x2c003c34
  mov r0,r2
  pop.w r4
  bx lr
