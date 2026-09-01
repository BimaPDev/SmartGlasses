; FUN_100b93e4 @ 0x100b93e4 size=36
  ldr r2,[0x100b9408]
  push {r4,r5}
  ldrd r4,r5,[r2,#0x4]
  adds r3,r4,r0
  cmp r3,r5
  bhi 0x100b9400
  ldr r5,[r2,#0x0]
  movs r0,#0x1
  add r4,r5
  str r4,[r1,#0x0]
  str r3,[r2,#0x4]
  pop {r4,r5}
  bx lr
  movs r0,#0x0
  pop {r4,r5}
  str r0,[r1,#0x0]
  bx lr
