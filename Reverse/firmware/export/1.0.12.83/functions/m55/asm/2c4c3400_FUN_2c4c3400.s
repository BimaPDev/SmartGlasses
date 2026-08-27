; FUN_2c4c3400 @ 0x2c4c3400 size=36
  push {r3,r4,r5,lr}
  cbz r1,0x2c4c341e
  mul r5,r0,r1
  mov r0,r5
  bl 0x2c4c32b8
  mov r4,r0
  cbz r0,0x2c4c341a
  mov r2,r5
  movs r1,#0x0
  bl 0x2c674268
  mov r0,r4
  pop {r3,r4,r5,pc}
  mov r4,r1
  mov r0,r4
  pop {r3,r4,r5,pc}
