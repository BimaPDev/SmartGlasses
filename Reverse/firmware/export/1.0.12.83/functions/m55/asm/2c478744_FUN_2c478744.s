; FUN_2c478744 @ 0x2c478744 size=18
  push {r3,lr}
  movs r0,#0x0
  bl 0x2c483574
  cbz r0,0x2c478754
  ldr r3,[0x2c478758]
  movs r2,#0x2
  str r2,[r3,#0x0]
  pop {r3,pc}
