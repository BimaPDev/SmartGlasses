; FUN_14032390 @ 0x14032390 size=32
  push {r3,lr}
  bl 0x140388f0
  ldr r3,[r0,#0x0]
  cbz r3,0x1403239e
  movs r0,#0x0
  blx r3
  movs r0,#0x1
  bl 0x140353d0
  pop.w {r3,lr}
  movs r0,#0x0
  b.w 0x140353cc
  bx lr
