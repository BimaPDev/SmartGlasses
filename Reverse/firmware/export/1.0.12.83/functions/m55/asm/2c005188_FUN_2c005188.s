; FUN_2c005188 @ 0x2c005188 size=40
  push {r4,lr}
  mov r4,r0
  bl 0x2c003d94
  movs r3,#0x1
  movs r2,#0x0
  mov r0,r4
  movs r1,#0x5
  bl 0x2c003cdc
  movs r1,#0x1
  mov r0,r4
  bl 0x2c003d40
  mov r0,r4
  bl 0x2c003c50
  and r0,r0,#0x1
  pop {r4,pc}
