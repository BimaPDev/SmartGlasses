; FUN_100edc20 @ 0x100edc20 size=16
  push {r3,lr}
  ldr r2,[0x100edc30]
  ldr r1,[0x100edc34]
  ldr r0,[0x100edc38]
  bl 0x10054230
  movs r0,#0x0
  pop {r3,pc}
