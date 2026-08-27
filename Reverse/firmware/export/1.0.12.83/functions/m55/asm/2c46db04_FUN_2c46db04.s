; FUN_2c46db04 @ 0x2c46db04 size=20
  push {r3,lr}
  ldr r3,[0x2c46db18]
  ldr r3,[r3,#0x0]
  cbz r3,0x2c46db14
  uxtb r1,r1
  bl 0x2c46d94c
  pop {r3,pc}
  movs r0,#0x2
  pop {r3,pc}
