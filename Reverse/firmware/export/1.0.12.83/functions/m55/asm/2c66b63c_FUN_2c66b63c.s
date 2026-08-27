; FUN_2c66b63c @ 0x2c66b63c size=34
  mov r3,r0
  push {r4,r5,r6,lr}
  mov r6,r3
  ldrb.w r4,[r3],#0x1
  cbz r4,0x2c66b65a
  subs r2,r1,#0x1
  b 0x2c66b650
  cmp r5,r4
  beq 0x2c66b65a
  ldrb.w r5,[r2,#0x1]!
  cmp r5,#0x0
  bne 0x2c66b64c
  b 0x2c66b640
  subs r0,r6,r0
  pop {r4,r5,r6,pc}
