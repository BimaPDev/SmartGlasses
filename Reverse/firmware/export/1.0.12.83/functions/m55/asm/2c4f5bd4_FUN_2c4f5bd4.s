; FUN_2c4f5bd4 @ 0x2c4f5bd4 size=40
  push {r3,lr}
  movs r3,#0x0
  ldr r2,[0x2c4f5bfc]
  ldr r1,[0x2c4f5c00]
  mov r0,r3
  bl 0x2c4b73b0
  cbnz r0,0x2c4f5bec
  bl 0x2c4b73dc
  cbnz r0,0x2c4f5bf4
  pop {r3,pc}
  mov r1,r0
  ldr r0,[0x2c4f5c04]
  bl 0x2c673ca8
  mov r1,r0
  ldr r0,[0x2c4f5c08]
  bl 0x2c673ca8
