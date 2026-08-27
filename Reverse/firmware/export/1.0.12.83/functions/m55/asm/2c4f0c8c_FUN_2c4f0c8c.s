; FUN_2c4f0c8c @ 0x2c4f0c8c size=46
  push {r3,r4,r5,lr}
  ldr r4,[0x2c4f0cbc]
  mov lr,r1
  mov r1,r0
  mov r0,r2
  umull r2,r5,r4,r3
  umull r2,r4,r4,lr
  lsrs r5,r5,#0x6
  cmp.w r5,r4, lsr #0x6
  bne 0x2c4f0cb0
  lsrs r2,r3,#0x1
  bl 0x2c6744e8
  movs r0,#0x0
  pop {r3,r4,r5,pc}
  mov r2,lr
  ldr r1,[0x2c4f0cc0]
  ldr r0,[0x2c4f0cc4]
  bl 0x2c673ca8
