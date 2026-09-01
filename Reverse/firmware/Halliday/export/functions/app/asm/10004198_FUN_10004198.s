; FUN_10004198 @ 0x10004198 size=160
  cbnz r3,0x100041ba
  cbnz r2,0x100041ba
  cmp r1,#0x0
  ittt lt
  mov.lt r0,#0x0
  mov.lt.w r1,#0x80000000
  b.lt 0x100041b6
  it eq
  cmp.eq r0,#0x0
  itt ne
  mvn.ne r1,#0x80000000
  mov.ne.w r0,#0xffffffff
  b.w 0x10004550
  sub.w r12,sp,#0x8
  strd r12,lr,[sp,#-0x10]!
  cmp r1,#0x0
  blt 0x100041da
  cmp r3,#0x0
  blt 0x10004200
  bl 0x10004268
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  bx lr
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  cmp r3,#0x0
  blt 0x1000421c
  bl 0x10004268
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  rsbs r2,r2
  sbc.w r3,r3,r3, lsl #0x1
  bx lr
  rsbs r2,r2
  sbc.w r3,r3,r3, lsl #0x1
  bl 0x10004268
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  bx lr
  rsbs r2,r2
  sbc.w r3,r3,r3, lsl #0x1
  bl 0x10004268
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  rsbs r2,r2
  sbc.w r3,r3,r3, lsl #0x1
  bx lr
