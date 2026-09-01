; FUN_1012d532 @ 0x1012d532 size=32
  movs r3,#0x0
  push {r4,lr}
  add.w r4,r0,r1, lsl #0x1
  cmp r0,r4
  bne 0x1012d544
  udiv r0,r3,r1
  pop {r4,pc}
  ldrsh.w r2,[r0],#0x2
  cmp r2,#0x0
  it lt
  rsb.lt r2,r2
  add r3,r2
  b 0x1012d53a
