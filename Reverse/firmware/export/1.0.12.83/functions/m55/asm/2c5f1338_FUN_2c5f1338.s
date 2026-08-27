; FUN_2c5f1338 @ 0x2c5f1338 size=32
  push {r4,lr}
  ldr r0,[0x2c5f1358]
  mov r4,r1
  bl 0x2c602110
  cmp r0,#0x1
  beq 0x2c5f1348
  pop {r4,pc}
  mov r0,r4
  bl 0x2c602408
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c602400
