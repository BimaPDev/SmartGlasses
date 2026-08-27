; FUN_14039b30 @ 0x14039b30 size=32
  ldr r3,[0x14039b50]
  push {r4}
  ldr r4,[0x14039b54]
  add.w r1,r3,#0x3c
  ldr.w r2,[r3],#0x4
  cmp r2,r4
  it eq
  str.w.eq r0,[r3,#-0x4]
  cmp r3,r1
  bne 0x14039b3a
  pop.w r4
  bx lr
