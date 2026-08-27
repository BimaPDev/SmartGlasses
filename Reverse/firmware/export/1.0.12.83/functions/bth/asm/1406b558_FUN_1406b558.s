; FUN_1406b558 @ 0x1406b558 size=34
  cbz r2,0x1406b572
  cmp r2,r3
  push {r4,lr}
  mov lr,r3
  bhi 0x1406b56e
  cmp r0,#0x1
  bhi 0x1406b576
  pop.w {r4,lr}
  b.w 0x1406b38c
  movs r0,#0x40
  pop {r4,pc}
  movs r0,#0x40
  bx lr
  movs r0,#0x43
  pop {r4,pc}
