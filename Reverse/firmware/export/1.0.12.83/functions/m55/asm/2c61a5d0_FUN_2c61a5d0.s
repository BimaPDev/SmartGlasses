; FUN_2c61a5d0 @ 0x2c61a5d0 size=26
  push {r4,lr}
  ldr r0,[0x2c61a5ec]
  mov r4,r1
  bl 0x2c602110
  cmp r0,#0x1
  beq 0x2c61a5e0
  pop {r4,pc}
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c619c5c
