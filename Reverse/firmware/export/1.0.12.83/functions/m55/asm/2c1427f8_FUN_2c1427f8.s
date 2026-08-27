; FUN_2c1427f8 @ 0x2c1427f8 size=40
  push {r3,r4,r5,lr}
  mov r3,r0
  mov r4,r1
  cbnz r1,0x2c14281c
  pop.w {r3,r4,r5,lr}
  b.w 0x2c1436d8
  adds r3,r0,#0x1
  mov r5,r0
  mov r1,r4
  mov r0,r3
  bl 0x2c1436d8
  cmp r0,#0x0
  bne 0x2c142808
  mov r0,r5
  pop {r3,r4,r5,pc}
  movs r5,#0x0
  b 0x2c14280c
