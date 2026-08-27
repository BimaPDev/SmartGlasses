; FUN_2c0bda84 @ 0x2c0bda84 size=34
  push {r1,r3,r4,r7,lr}
  subs r5,#0x14
  vpadd.f16 d19,d4,d16
  lsls r1,r7,#0x15
  pop {r1,r5}
  b.w 0x2c44a502
  stmia r6!,{r0,r1,r2}
  add r5,sp,#0x2fc
  adds r5,r0,#0x1
  movs r3,#0x9c
  strh r1,[r2,#0x8]
  add r1,sp,#0x240
  ldr r3,[r4,#0x8]
  adds r1,#0x8d
  lsls r6,r7,#0x1c
