; FUN_140c456c @ 0x140c456c size=24
  cmp r2,#0x1
  push {r4,r5}
  bne 0x140c457a
  ldr r3,[r1,#0x0]
  str r3,[r0,#0x0]
  pop {r4,r5}
  bx lr
  cmp r2,#0x0
  beq 0x140c4576
  pop {r4,r5}
  b.w 0x140df878
