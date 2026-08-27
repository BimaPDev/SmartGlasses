; FUN_2c6437ae @ 0x2c6437ae size=20
  push {r0,lr}
  ldr.w r12,[r2,r1,lsl #0x2]
  ldmia r0,{r0,r1,r2,r3}
  blx r12
  pop.w {r12,lr}
  str.w r0,[r12,#0x0]
  bx lr
