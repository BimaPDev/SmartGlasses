; FUN_2c5eae48 @ 0x2c5eae48 size=26
  push {r3,lr}
  mov r0,r1
  movs r2,#0x2
  movs r1,#0x6
  bl 0x2c5e95c4
  ldr r2,[0x2c5eae64]
  mov r3,r0
  movs r0,#0x1
  ldr r1,[r2,#0x0]
  str r1,[r3,#0x0]
  str r3,[r2,#0x0]
  pop {r3,pc}
