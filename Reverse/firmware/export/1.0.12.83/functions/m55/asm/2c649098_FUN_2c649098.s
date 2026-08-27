; FUN_2c649098 @ 0x2c649098 size=32
  push {r3,lr}
  ldr r0,[0x2c6490b0]
  bl 0x2c648600
  movs r0,#0xa
  bl 0x2c6444fc
  pop.w {r3,lr}
  b.w 0x2c674368
  push {r0}
  ldr r0,[0x2c674374]
  mov r12,r0
  pop {r0}
  bx r12
