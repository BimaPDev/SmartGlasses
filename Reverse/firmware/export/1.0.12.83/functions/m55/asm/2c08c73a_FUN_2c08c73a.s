; FUN_2c08c73a @ 0x2c08c73a size=28
  push {lr}
  lsls r6,r3,#0x1a
  lsls r7,r6,#0x14
  ldmia r4,{r0,r1,r3,r4,r6}
  push {r1,r2,r3,r4,r7,lr}
  subs r4,r1,r4
  b 0x2c08c77c
  ldr r6,[sp,#0x380]
  lsls r2,r6,#0x6
  adds r2,r3,r4
  add r6,sp,#0x380
  lsls r2,r4,#0xa
  adds r5,r3,r4
  udf #0xe0
