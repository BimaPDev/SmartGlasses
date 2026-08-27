; FUN_2c4e36cc @ 0x2c4e36cc size=30
  push {r4,lr}
  movs r1,#0x20
  mov r4,r0
  adds r0,#0x10
  bl 0x2c4df4f8
  cmp r0,#0x0
  ite ne
  mov.ne r0,r4
  mov.eq r0,#0x0
  pop {r4,pc}
  cbz r0,0x2c4e36d2
  b.w 0x2c4df9bc
  bx lr
