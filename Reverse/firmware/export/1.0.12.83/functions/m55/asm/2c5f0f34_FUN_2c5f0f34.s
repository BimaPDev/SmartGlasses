; FUN_2c5f0f34 @ 0x2c5f0f34 size=32
  push {r4,lr}
  ldr r0,[0x2c5f0f54]
  mov r4,r1
  bl 0x2c602110
  cmp r0,#0x1
  beq 0x2c5f0f44
  pop {r4,pc}
  mov r0,r4
  bl 0x2c602408
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c602400
