; FUN_101053ec @ 0x101053ec size=76
  add.w r2,r0,r2, lsl #0x2
  ldr.w r3,[r2,#0x10c]
  push {r4}
  ldrd r2,r4,[r0,#0x1e4]
  cmp r1,#0x0
  add r3,r4
  sub.w r3,r3,r2
  ldr.w r4,[r0,#0x1e0]
  blt 0x10105420
  adds r0,r3,r1
  sdiv r0,r0,r4
  mla r0,r4,r0,r2
  pop.w r4
  bics.w r0,r0,r0, asr #32
  it cs
  mov.cs r0,r2
  bx lr
  subs r0,r3,r1
  sdiv r0,r0,r4
  mla r0,r4,r0,r2
  rsbs r0,r0
  cmp r0,#0x0
  it gt
  rsb.gt r0,r2
  pop.w r4
  bx lr
