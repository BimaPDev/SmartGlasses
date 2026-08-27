; FUN_2c13b1a4 @ 0x2c13b1a4 size=50
  push {r4,r5,lr}
  ldr r4,[0x2c13b1d8]
  add.w r5,r4,#0x30
  mov lr,r4
  add.w r12,r12,#0x10
  ldm.w lr!,{r0,r1,r2,r3}
  cmp lr,r5
  add.w r4,r4,#0x10
  str.w r0,[r12,#-0x10]
  str.w r1,[r12,#-0xc]
  str.w r2,[r12,#-0x8]
  str.w r3,[r12,#-0x4]
  bne 0x2c13b1ac
  ldrb r3,[r4,#0x0]
  strb.w r3,[r12,#0x0]
  pop {r4,r5,pc}
