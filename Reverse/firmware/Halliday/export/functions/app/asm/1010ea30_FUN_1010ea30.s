; FUN_1010ea30 @ 0x1010ea30 size=38
  push {r3,lr}
  mov.w r2,#0xffffffff
  movw r1,#0xa5a
  ldr r0,[0x1010ea58]
  bl 0x1013b1e8
  cbnz r0,0x1010ea54
  pop.w {r3,lr}
  mov.w r2,#0xffffffff
  movw r1,#0xa5b
  ldr r0,[0x1010ea58]
  b.w 0x1013b1e8
  pop {r3,pc}
