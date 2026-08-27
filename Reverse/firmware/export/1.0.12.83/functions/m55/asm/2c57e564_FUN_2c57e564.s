; FUN_2c57e564 @ 0x2c57e564 size=30
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  bl 0x2c57dc74
  movs r3,#0x0
  ldr r0,[r4,#0x4]
  str r3,[r4,#0x4]
  cbz r0,0x2c57e580
  ldr r3,[r0,#0x0]
  pop.w {r4,lr}
  ldr r3,[r3,#0x10]
  bx r3
  pop {r4,pc}
