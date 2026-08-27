; FUN_140d783a @ 0x140d783a size=30
  cmp r2,#0x1
  push {r4,r5}
  bne 0x140d7848
  ldr r3,[r1,#0x0]
  str r3,[r0,#0x0]
  pop {r4,r5}
  bx lr
  cmp r2,#0x0
  beq 0x140d7844
  pop {r4,r5}
  b.w 0x140df87e
  lsls r2,r2,#0x2
  b.w 0x140e5838
