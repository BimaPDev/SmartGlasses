; FUN_2c4ed71c @ 0x2c4ed71c size=28
  push {r4,lr}
  mov r4,r0
  bl 0x2c4ee01c
  mov r3,r0
  mov r0,r4
  ldr r3,[r3,#0x0]
  blx r3
  ldr r1,[0x2c4ed738]
  ldr r3,[0x2c4ed73c]
  movs r2,#0x0
  str r4,[r1,#0x0]
  str r2,[r3,#0x0]
  pop {r4,pc}
