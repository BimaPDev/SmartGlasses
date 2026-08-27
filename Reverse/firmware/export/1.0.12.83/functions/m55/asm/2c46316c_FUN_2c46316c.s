; FUN_2c46316c @ 0x2c46316c size=24
  push {r0,r5,r6,r7,lr}
  str r4,[sp,#0x1ac]
  cmp r1,#0x6
  movs r3,#0xf8
  ldmdb r5,{r0,r3,r4,r5,r8}
  asrs r6,r2,#0x13
  asrs r2,r3,#0x4
  strh r4,[r0,#0x2]
  ldr r1,[sp,#0x17c]
  mrc p1,0x7,APSR_nzcv,cr10,cr4,0x3
