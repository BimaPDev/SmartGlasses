; FUN_14034fac @ 0x14034fac size=28
  push {r4,lr}
  ldr r4,[0x14034fc8]
  ldr r3,[r4,#0x0]
  cbz r3,0x14034fb6
  pop {r4,pc}
  bl 0x1402e55c
  ldr r3,[r4,#0x0]
  cmp r3,#0x0
  bne 0x14034fb4
  pop.w {r4,lr}
  b.w 0x1402e5f8
