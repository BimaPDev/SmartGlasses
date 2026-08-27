; FUN_2c66c568 @ 0x2c66c568 size=38
  subs r1,#0x1
  mov r3,r0
  push {r4,lr}
  cbz r2,0x2c66c57e
  ldrb.w r4,[r1,#0x1]!
  subs r2,#0x1
  strb.w r4,[r3],#0x1
  cmp r4,#0x0
  bne 0x2c66c56e
  add r2,r3
  movs r1,#0x0
  cmp r3,r2
  bne 0x2c66c588
  pop {r4,pc}
  strb.w r1,[r3],#0x1
  b 0x2c66c582
