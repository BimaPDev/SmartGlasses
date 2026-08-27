; FUN_2c0bd7ac @ 0x2c0bd7ac size=32
  push {r0,r2,r3,r7,lr}
  subs r5,#0xff
  str r6,[sp,#0x128]
  pop {r0,r1,r4}
  cbnz r3,0x2c0bd7d0
  pop {r0,r2,r5}
  stmia r2,{r2,r3,r4,r5,r6,r7}
  subs r5,#0xab
  b 0x2c0bde04
  sbcs r2,r3
  pop {r2,r3,r4,r5,pc}
  adds r0,#0xad
  subs r6,#0x2d
  b 0x2c0be2f8
  subs r6,r4,#0x3
  pop {r1,r4,pc}
