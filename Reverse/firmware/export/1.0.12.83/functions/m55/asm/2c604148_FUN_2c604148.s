; FUN_2c604148 @ 0x2c604148 size=34
  push {r3,r4,r5,lr}
  mov r4,r1
  mov r5,r0
  movs r2,#0x5b
  bl 0x2c6033b4
  mov r1,r4
  uxtb r4,r0
  movs r2,#0x16
  mov r0,r5
  bl 0x2c6033b4
  cmp r4,#0x1
  mov r0,r4
  it cc
  mov.cc r0,#0x1
  pop {r3,r4,r5,pc}
