; FUN_2c5bea74 @ 0x2c5bea74 size=42
  push {r4,lr}
  bl 0x2c536358
  cmp r0,#0x7
  beq 0x2c5bea86
  bl 0x2c536358
  cmp r0,#0x4
  bne 0x2c5beaa0
  bl 0x2c4f8730
  cbnz r0,0x2c5beaa0
  ldr r4,[0x2c5bead4]
  movw r0,#0x6006
  bl 0x2c5e33f0
  bl 0x2c5e4068
  movs r0,#0x0
  pop {r4,pc}
