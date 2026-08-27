; FUN_2c478b98 @ 0x2c478b98 size=34
  push {r4,lr}
  ldr r4,[0x2c478bbc]
  bl 0x2c478b68
  str r0,[r4,#0x0]
  cbz r0,0x2c478bb8
  mov r3,r0
  ldr r0,[0x2c478bc0]
  ldr r3,[r3,#0x0]
  blx r3
  ldr r3,[r4,#0x0]
  ldr r0,[0x2c478bc4]
  ldr r3,[r3,#0x40]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
