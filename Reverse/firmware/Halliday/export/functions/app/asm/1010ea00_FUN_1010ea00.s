; FUN_1010ea00 @ 0x1010ea00 size=34
  push {r3,lr}
  movw r1,#0xa5a
  ldr r2,[0x1010ea24]
  ldr r0,[0x1010ea28]
  bl 0x1013b1e8
  cbnz r0,0x1010ea20
  pop.w {r3,lr}
  movw r1,#0xa5b
  ldr r2,[0x1010ea2c]
  ldr r0,[0x1010ea28]
  b.w 0x1013b1e8
  pop {r3,pc}
