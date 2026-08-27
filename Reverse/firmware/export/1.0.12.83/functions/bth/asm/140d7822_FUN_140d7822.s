; FUN_140d7822 @ 0x140d7822 size=32
  cbz r2,0x140d776e
  b.w 0x140df878
  bx lr
  cmp r2,#0x1
  push {r4}
  bne 0x140d7832
  ldr r2,[r1,#0x0]
  pop.w r4
  str r2,[r0,#0x0]
  bx lr
  pop.w r4
  b.w 0x140d7768
