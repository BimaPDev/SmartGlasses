; FUN_2c0a00ea @ 0x2c0a00ea size=18
  push {r1,r2,r3,r4,r6,lr}
  blx 0x2be0230c
  lsls r5,r5,#0x16
  ldmia r2,{r0,r2,r5,r6}
  bkpt 0xf5
  adds r2,#0x9a
  movs r6,#0xc
  udf #0xe0
