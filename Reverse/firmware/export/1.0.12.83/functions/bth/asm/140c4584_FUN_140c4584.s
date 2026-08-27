; FUN_140c4584 @ 0x140c4584 size=24
  cmp r2,#0x1
  push {r4,r5}
  bne 0x140c4592
  ldr r3,[r1,#0x0]
  str r3,[r0,#0x0]
  pop {r4,r5}
  bx lr
  cmp r2,#0x0
  beq 0x140c458e
  pop {r4,r5}
  b.w 0x140df87e
