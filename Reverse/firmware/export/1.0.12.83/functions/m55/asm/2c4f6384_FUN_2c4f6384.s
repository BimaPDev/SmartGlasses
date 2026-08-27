; FUN_2c4f6384 @ 0x2c4f6384 size=40
  push {r3,lr}
  movs r3,#0x0
  ldr r2,[0x2c4f63ac]
  ldr r1,[0x2c4f63b0]
  mov r0,r3
  bl 0x2c4ba980
  cbnz r0,0x2c4f639c
  bl 0x2c4ba9c8
  cbnz r0,0x2c4f63a4
  pop {r3,pc}
  mov r1,r0
  ldr r0,[0x2c4f63b4]
  bl 0x2c673ca8
  mov r1,r0
  ldr r0,[0x2c4f63b8]
  bl 0x2c673ca8
