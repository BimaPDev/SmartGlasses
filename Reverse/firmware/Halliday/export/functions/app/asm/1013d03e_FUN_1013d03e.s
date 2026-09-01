; FUN_1013d03e @ 0x1013d03e size=38
  cmp r2,r3
  push {r3,lr}
  bls 0x1013d048
  bl 0x10068cd8
  cmp r1,r0
  bhi 0x1013d056
  adds r3,r1,r2
  cmp r0,r3
  bcc 0x1013d044
  cmp r1,r0
  bne 0x1013d05c
  adds r3,r0,r2
  cmp r1,r3
  bcc 0x1013d044
  pop.w {r3,lr}
  b.w 0x1011ea40
