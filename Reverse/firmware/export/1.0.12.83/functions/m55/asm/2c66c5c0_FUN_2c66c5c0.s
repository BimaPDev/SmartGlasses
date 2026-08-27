; FUN_2c66c5c0 @ 0x2c66c5c0 size=32
  mov r3,r0
  push {r4,r5,r6,lr}
  mov r6,r3
  ldrb.w r4,[r3],#0x1
  cbz r4,0x2c66c5dc
  subs r2,r1,#0x1
  b 0x2c66c5d4
  cmp r5,r4
  beq 0x2c66c5c4
  ldrb.w r5,[r2,#0x1]!
  cmp r5,#0x0
  bne 0x2c66c5d0
  subs r0,r6,r0
  pop {r4,r5,r6,pc}
