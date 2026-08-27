; FUN_2c13f626 @ 0x2c13f626 size=36
  push {r4,lr}
  mov r1,r0
  mov r4,r0
  movs r0,#0x13
  bl 0x2c140be8
  cbnz r0,0x2c13f640
  ldr r3,[0x2c13f64c]
  ldr r0,[r3,#0x14]
  bl 0x2c13ee6c
  movs r0,#0x0
  pop {r4,pc}
  mov r0,r4
  bl 0x2c13ee68
  movs r0,#0x0
  pop {r4,pc}
