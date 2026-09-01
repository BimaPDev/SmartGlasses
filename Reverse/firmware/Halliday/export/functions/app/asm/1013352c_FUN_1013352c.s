; FUN_1013352c @ 0x1013352c size=40
  movs r3,#0x1
  lsl.w r1,r3,r1
  mvns r2,r1
  push {lr}
  ldaex r3,[r0]
  and.w r12,r3,r2
  stlex lr,r12,[r0]
  cmp.w lr,#0x0
  bne 0x10133536
  tst r3,r1
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x0
  pop.w pc
