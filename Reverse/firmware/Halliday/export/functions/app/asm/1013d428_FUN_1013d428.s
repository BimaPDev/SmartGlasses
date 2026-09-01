; FUN_1013d428 @ 0x1013d428 size=38
  cmp r2,r3
  push {r3,lr}
  bls 0x1013d432
  bl 0x10068cd8
  cmp r1,r0
  bhi 0x1013d440
  adds r3,r1,r2
  cmp r0,r3
  bcc 0x1013d42e
  cmp r1,r0
  bne 0x1013d446
  adds r3,r0,r2
  cmp r1,r3
  bcc 0x1013d42e
  pop.w {r3,lr}
  b.w 0x1011e9f8
